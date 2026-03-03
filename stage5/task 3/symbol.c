#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "symbol.h"
#include "label.h"
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
    temp->paramlist=NULL;
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
            y->func=createNewL();
            addParams(y,p);
        }
    }
}
int getSize(tnode *t){
    return 1;
}


int getSizeOfArray(struct tnode *arr,int *count){
    return getdimen(arr,count);
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
//param

void addParams(struct Gsymbol *x, tnode*paramlist){
    if(!paramlist)return;
    if(paramlist->nodetype==Nconnect){
        addParams(x,paramlist->left);
        addParams(x,paramlist->right);
    }
    else if(paramlist->nodetype==Nparam){
        tnode* t=paramlist->left;
        tnode*pa=paramlist->right;
        addParam(x, pa->varname,t->type);
    }
}

Param *addParam(Gsymbol *gentry, char *name, int type){
    Param *x=lookupParam(gentry,name);
    if(x){
        printf("duplication\n");
        exit(1);
    }
    Param *param=(Param *)malloc (sizeof(Param));
    param->name=(char *)malloc(strlen(name)+1);
    strcpy(param->name,name);
    param->type=type;
    param->next=NULL;
    Param *h=gentry->paramlist;
    if(!h){
        gentry->paramlist=param;
    }
    else{
        while(h->next){
            h=h->next;
        }
        h->next=param;
    }
    return param;
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

int lnumParam(Param *p){
    Param *x=p;
    int l=0;
    while(x){
        l++;
        x=x->next;
    }
    return l;
}

bool checkParams(tnode *x, Param **param){
    if(!x)return true;
    if(x->nodetype== Nconnect){
        return checkParams(x->left,param) && checkParams(x->right,param);
    }
    if(x->nodetype==Nparam){
        if(!*param){
            printf("Func arg mismatch\n");
            exit(1);
        }
        tnode *type=x->left;
        tnode* id=x->right;
        bool t=(type->type==(*param)->type);
       
        if(!t){
            printf("Func type mismatch\n");
            exit(1);
        }
        else if(strcmp(id->varname,(*param)->name)!=0){
            printf("Func varname mismatch\n");
            exit(1);
        }
        
        (*param)=(*param)->next;
        return true;
    }
    return true;
}

bool checkFunc(tnode *f){
    if(f->nodetype!=NFuncDef)
    return false;
    tnode *r=f->left->left;
    tnode *fname=f->left->right;
    tnode *plist=f->right->left;
    Gsymbol *x=Lookup(fname->varname);
    if(!x){
        printf("func not declared\n");
        exit(1);
    }
    if(r->type!=x->type){
        printf("return mismatch\n");
        exit(1);
    }
    Param *palist=x->paramlist;
    int c=checkParams(plist,&palist);
    if(palist){
        printf("function no of arguments mismatch\n");
        exit(1);
    }
    return c;
}

//local 
int localbind=0;
int paramcount=0;
int currl=0;
struct Lsymbol *localhead = NULL;
struct Gsymbol *currfunc = NULL;

Lsymbol *linstall(char *name,int type, bool c){
    Lsymbol *x=(Lsymbol *)malloc(sizeof(Lsymbol));
    x->name=(char *)malloc(strlen(name)+1);
    strcpy(x->name,name);
    x->type=type;
    if(c){
        x->binding=-(++paramcount+1+1);
    }
    else{
        x->binding=localbind;
        localbind+=1;
    }
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
    localbind=0;
    currl=NONE;
    paramcount=0;
    currfunc=NULL;
}

void printLsymbol(){
    printf("Local table:\n");
    Lsymbol *head=localhead;
    while(head){
        printf("%s %d %d 0-INT 1-STR\n",head->name,head->type,head->binding);
        head=head->next;
    }
}


void popLocal(tnode*x){
    if(x){
        switch(x->nodetype){
            case Nconnect:
            case NlocalDecl:{
                popLocal(x->left);
                popLocal(x->right);
                break;
            }
            case Ntype:{
                currl=x->type;
                break;
            }
            case Nvar:{
                Lsymbol *t=llookup(x->varname);
                if(t){
                    printf("Already declared!|n");
                    exit(1);
                }
                linstall(x->varname,currl,false);
                break;
            }
            
        }
    }
}