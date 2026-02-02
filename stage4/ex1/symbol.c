#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "symbol.h"
#include "ex1.h"

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
Gsymbol* Install(char *name, int type, int size){

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
        printf("%d %d %d\n",x->size,x->binding,x->numdimen);
        for(int i=0;i<x->numdimen;i++)
            printf("%d, ",x->dimension[i]);
        x=x->next;
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
            Gsymbol *x=Install(root->varname,curr,getSize(root));
            root->Gentry=x;
            root->type = root->Gentry->type;
            printf("adding symbol table entry for %s, type: %d 0-INT 1-STR\n", root->varname,root->type);
        break;
        }
        case NArr:{
            int dim=0;
            Gsymbol* entry=Install(root->left->varname,curr,getSizeOfArray(root->right,&dim));
            entry->dimension=(int *)malloc(dim*sizeof(int));
            addDimen(entry,root->right);
            root->Gentry=entry;
            root->type=entry->type;
            break;
        }
    }
}
int getSize(tnode *t){
    if(curr == INT) return 4;
    if(curr == STRING) return 6;
    return 0;
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