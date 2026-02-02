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
        printf("%d %d\n",x->size,x->binding);
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
            Gsymbol *x=Install(root->varname,curr,1);
            root->Gentry=x;
            root->type = root->Gentry->type;
            printf("adding symbol table entry for %s, type: %d 0-INT 1-STR\n", root->varname,root->type);
        break;
        }
    }
}
