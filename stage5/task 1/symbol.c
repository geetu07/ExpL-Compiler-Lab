#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "symbol.h"
#include "ex1.h"
#include<stdbool.h>

Gsymbol *stkhead=NULL;
int stop=4096;
int curr=0;
struct Gsymbol *Lookup(char * name){
    if(stkhead==NULL)return stkhead;
    Gsymbol *x=stkhead;
    while(x!=NULL){
        if(strcmp(x->name,name)==0)
            return x;
        x=x->next;
    }
    return NULL;
}
Gsymbol* Install(char *name, int type, int size,bool ptr){

    Gsymbol *x=stkhead;
    while(x!=NULL){
        if(strcmp(x->name,name)==0){
            printf("REDECLARATION!");
            exit(1);
        }
        x=x->next;
    }

    Gsymbol *temp=(Gsymbol*)malloc(sizeof(Gsymbol));
    temp->binding=stop;
    stop+=size;
    temp->name=(char*)malloc(strlen(name)+1);
    strcpy(temp->name,name);
    temp->type=type;
    temp->size=size;
    temp->next=stkhead;
    temp->dimension=NULL;
    temp->numdimen=0;
    temp->ptr=ptr;
    temp->func=-1;
    stkhead=temp;
    return temp;
}

void printSymbolTable(){
    Gsymbol *x=stkhead;
    while(x!=NULL){
        printf("%s ",x->name);
        if(x->type==INT){
            printf("INT ");
        }
        else if(x->type==STRING){
            printf("STRING ");
        }
        printf("%d %d %d ",x->size,x->binding,x->numdimen);
        if(x->func!=-1){
            printf(" is a function ");
        }
        for(int i=0;i<x->numdimen;i++)
            printf("%d, ",x->dimension[i]);
        Param *t=x->paramlist;
        while(t){
            char l[4];
            if(t->type==0) strcpy(l,"INT");
            else strcpy(l,"STR");
            printf(" %s %s, ",l,t->name);
            t=t->next;
        }
        x=x->next;
        printf("\n");
    }
}

void addToST(tnode*root){
    if(root==NULL)return;
    switch(root->nodetype){
        case Nconnect:
        case Ndecl:{addToST(root->left);
                addToST(root->right);
               break; 
            }
        case Ntype: {curr=root->type;
                break;}
        case Nvar:{
            Gsymbol *x=Install(root->varname,curr,getSize(root),false);
            root->Gentry=x;
            root->type = root->Gentry->type;
        break;
        }
        case NArr:{
            int dim=0;
            Gsymbol* entry=Install(root->left->varname,curr,getSizeOfArray(root->right,&dim),true);
            entry->dimension=(int *)malloc(dim*sizeof(int));
            addDimen(entry,root->right);
            root->Gentry=entry;
            root->type=entry->type;
            break;
        }
        case Nderefer:{
            Gsymbol*x=Install(root->left->varname,curr,getSize(root),true);
            root->Gentry=x;
            root->type=root->Gentry->type;
            break;
        }
        case NFuncDecl:{
            tnode* id=root->left;
            tnode*p=root->right;
            Gsymbol *x=Lookup(id->varname);
            if(x!=NULL){
                printf("Function redeclaration!\n");
                exit(1);
            }
            Gsymbol *y=Install(id->varname,curr,1,false);
            y->func=0;
            addParams(y,p);
        }
    }
}
int getSize(tnode *t){
    return 1;
}


int getSizeOfArray(struct tnode *arr,int *count){
    int x;
    if(curr==INT){
        x=4;
    }else if(curr==STRING){
        x=6;
    }
    else x=0;
    return getdimen(arr,count)*x;
}

int getdimen(tnode*root,int *count){
    if(!root)return 1;
    if(root->nodetype==Nconst){
        (*count)++;
        return root->val;
    }
    return getdimen(root->left,count)*getdimen(root->right,count);
}

void addDimen(Gsymbol *x,tnode* root){
    if(!root)return;
    if(root->nodetype==Nconst){
        x->dimension[x->numdimen++]=root->val;
        return;
    }
    addDimen(x,root->left);
    addDimen(x,root->right);
}


void addParams(struct Gsymbol *x, tnode*paramlist){
    if(!paramlist)return;
    if(paramlist->nodetype==Nconnect){
        addParams(x,paramlist->left);
        addParams(x,paramlist->right);
    }
    else if(paramlist->nodetype==Nparam){
        tnode* t=paramlist->left;
        tnode*pa=paramlist->right;
        char *name=pa->varname;
        int type=t->type;
        Param *p=(Param *)malloc(sizeof(Param));
        p->name=(char *)malloc(strlen(name)+1);
        strcpy(p->name,name);
        p->type=type;
        p->next=NULL;
        Param *head=x->paramlist;
        p->next=head;
        x->paramlist=p;
    }
}


Param * lookupParam(Gsymbol *t,char *name){
    Param *x=t->paramlist;
    while(x){
        if(strcmp(name,x->name)==0)
            return x;
        x=x->next;
    }
    return NULL;
}


//local
struct Lsymbol *localhead = NULL;

Lsymbol *linstall(char *name,int type){
    Lsymbol *x=(Lsymbol *)malloc(sizeof(Lsymbol));
    x->name=(char *)malloc(strlen(name)+1);
    strcpy(x->name,name);
    x->type=type;
    if(stop> 5119 ){
        printf("Memory over\n");
        exit(1);
    }
    x->binding=stop;
    stop+=1;
    x->next=NULL;
    if(!localhead){
        localhead=x;
        return x;
    }
    Lsymbol *y=localhead;
    while(y->next){
        y=y->next;
    }
    y->next=x;
    return x;
}
Lsymbol *llookup(char *name){
    Lsymbol *x=localhead;
    while(x){
        if(strcmp(name,x->name)==0)
            return x;
        x=x->next;
    }
    return NULL;
}

void freelocal(){
    Lsymbol*x=localhead;
    while (x)
    {
        Lsymbol *t=x;
        x=x->next;
        free(t);
    }
    localhead=NULL;
}