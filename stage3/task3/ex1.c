#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include "ex1.h"
#include<limits.h>


//stage 2
struct tnode* createTree(int val, int type, char* c, struct tnode *l, struct tnode *r){
    if(val!=INT_MAX){
        return createConst(val,INT);
    }
    else if(c)
        return createVar(c,INT);
    else{
        struct tnode *temp=(tnode*)malloc(sizeof(tnode));
        temp->val=INT_MAX;
        temp->nodetype=type;
        temp->varname=NULL;
        temp->left=l;
        temp->right=r;
        return temp;
    }
}

struct tnode* createConst(int val,int type){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=val;
    temp->nodetype=Nconst;
    temp->varname=NULL;
    temp->type=type;
    return temp;
}

struct tnode* createVar(char *name,int type){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Nvar;
    temp->varname=(char*)malloc(strlen(name)+1);
    strcpy(temp->varname,name);
    temp->type=type;
    return temp;
}

tnode *makeOperatorNode(char s,tnode *l,tnode*r){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=l;
    temp->right=r;
    temp->val=INT_MAX;
    if(s=='+')
    temp->nodetype=Nadd;
    else if(s=='-')
    temp->nodetype=Nsub;
    else if(s=='*')
    temp->nodetype=Nmul;
    else
    temp->nodetype=Ndiv;
    temp->varname=NULL;
    temp->type=-1;
    return temp;
}

tnode * createRead(tnode *t){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=t;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Nread;
    temp->varname=NULL;
    temp->type=-1;
    return temp;
}

tnode * createWrite(tnode *t){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=t;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Nwrite;
    temp->varname=NULL;
    temp->type=-1;
    return temp;
}

tnode * createAssign(tnode *l,tnode *r){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=l;
    temp->right=r;
    temp->val=INT_MAX;
    temp->nodetype=Nassign;
    temp->varname=NULL;
    temp->type=-1;
    return temp;
}

tnode * createConnect(tnode *l,tnode*r){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=l;
    temp->right=r;
    temp->val=INT_MAX;
    temp->nodetype=Nconnect;
    temp->varname=NULL;
    temp->type=-1;
    return temp;
}

tnode* createCondition(int type,tnode*left, tnode*right){
    if(left->type!=INT || right->type!=INT){
        printf("ERROR! of condition");
        exit(1);
    }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    temp->left=left;
    temp->right=right;
    temp->val=INT_MAX;
    temp->nodetype=type;
    temp->varname=NULL;
    temp->type=BOOL;
    return temp;
}

tnode* createWhile(tnode* cond,tnode*left){
    if(cond->type!=BOOL){
        printf("ERROR! of while");
        exit(1);
    }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    temp->left=cond;
    temp->right=left;
    temp->val=INT_MAX;
    temp->nodetype=Nwhile;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createIfElseNode(tnode* cond,tnode*left,tnode*right){
    if(cond->type!=BOOL){
        printf("ERROR! of ifelse");
        exit(1);
    }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    struct tnode *conn=createConnect(left,right);
    temp->left=cond;
    temp->right=conn;
    temp->val=INT_MAX;
    temp->nodetype=Nif_else;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createIfNode(tnode* cond,tnode*left){
    if(cond->type!=BOOL){
        printf("ERROR! of if");
        exit(1);
    }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    temp->left=cond;
    temp->right=left;
    temp->val=INT_MAX;
    temp->nodetype=Nif;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

void printn(tnode* root){
    switch (root->nodetype)
    {
    case Nadd:printf("+\n");
        break;
    case Nsub:printf("-\n");
        break;
    case Nmul:printf("*\n");
        break;
    case Ndiv:printf("/\n");
        break;
    case Nassign:printf("Assign\n");
        break;
    case Nconnect:printf("Connect\n");
        break;
    case Nconst:printf("%d\n",root->val);
        break;
    case Nread:printf("READ\n");
        break;
    case Nwrite:printf("WRITE\n");
        break;
    case Nvar:printf("%s\n",root->varname);
        break;
    case Nge:printf("GE\n");
        break;
    case Ngt:printf("GT\n");
        break;
    case Nle:printf("LE\n");
        break;
    case Nlt:printf("LT\n");
        break;
    case Nne:printf("NE\n");
        break;
    case Neq:printf("EQ\n");
        break;
    case Nif: printf("IF\n");
        break;
    case Nif_else: printf("IFELSE\n");
        break;
    case Nwhile: printf("WHILE\n");
        break;
    default:
        break;
    }
}

void print(tnode* root){
    int x=0;
    if(root==NULL)return;
    printn(root);
    print(root->left);
    print(root->right);
}