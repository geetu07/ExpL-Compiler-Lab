#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include "ex1.h"
#include<limits.h>

// struct tnode* makeLeafNode(int n)
// {
//     struct tnode *temp;
//     temp = (struct tnode*)malloc(sizeof(struct tnode));
//     temp->op = NULL;
//     temp->val = n;
//     temp->left = NULL;
//     temp->right = NULL;
//     return temp;
// }


// struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
//     struct tnode *temp;
//     temp = (struct tnode*)malloc(sizeof(struct tnode));
//     temp->op = malloc(sizeof(char));
//     *(temp->op) = c;
//     temp->left = l;
//     temp->right = r;
//     return temp;
// }

// int evaluate(struct tnode *t){
//     if(t->op == NULL)
//     {
//         return t->val;
//     }
//     else{
//         switch(*(t->op)){
//             case '+' : return evaluate(t->left) + evaluate(t->right);
//                        break;
//             case '-' : return evaluate(t->left) - evaluate(t->right);
//                        break;
//             case '*' : return evaluate(t->left) * evaluate(t->right);
//                        break;
//             case '/' : return evaluate(t->left) / evaluate(t->right);
//                        break;
//         }
//     }
// }

// void print(struct tnode*root){
//     if(root==NULL)
//         return;
//     if(root->op){
//         printf("%c ",*(root->op));
//     }
//     else{
//         printf("%d ",root->val);
//     }
//     print(root->left);
//     print(root->right);
// }

// void prefix(struct tnode*root){
//     if(!root)return;
//     if(!root->op){
//         printf("%d ",root->val);
//         return;
//     }
//     else
//         printf("%c ",*root->op);
//     prefix(root->left);
//     prefix(root->right);
// }

// void postfix(struct tnode*root){
//     if(!root)return;
//     postfix(root->left);
//     postfix(root->right);
//     if(!root->op){
//         printf("%d ",root->val);
//         return;
//     }
//     else
//         printf("%c ",*root->op);
// }

// void printPrefix(struct tnode*root){
//     printf("Prefix: ");
//     prefix(root);
//     printf("\n");
// }
// void printPostfix(struct tnode*root){
//     printf("Postfix: ");
//     postfix(root);
//     printf("\n");
// }




// int getReg(){
// 	if(count<total){
// 		return count++;
// 	}
// 	printf("Out of reg");
// 	exit(1);
// }

// int freeReg(){
// 	if(count>0)
// 		return count--;
// 	return -1;
// }

// void generateHeader(){
// 	fprintf(target,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
// 	fprintf(target,"BRKP\n");
// 	fprintf(target,"MOV SP, %d\n",4097);
// }

// void generateExit(){
// 	int x=getReg();
// 	fprintf(target,"MOV R%d, \"%s\"\n",x,"Exit");
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"CALL 0\n");
// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);

// 	freeReg();
// }

// regIndex codeGen(struct tnode* node){
// 	if(!node)return -1;
// 	int left=codeGen(node->left);
// 	int right=codeGen(node->right);
// 	if(!node->op){
// 		int newreg=getReg();
// 		fprintf(target,"MOV R%d, %d\n",newreg,node->val);
// 		return newreg;
// 	}
// 	else if(left!=-1 && right!=-1){
// 		if(node->op[0]=='+'){
// 			fprintf(target,"ADD R%d, R%d\n",left,right);
// 		}
// 		else if(node->op[0]=='-'){
// 			fprintf(target,"SUB R%d, R%d\n",left,right);
// 		}
// 		else if(node->op[0]=='*'){
// 			fprintf(target,"MUL R%d, R%d\n",left,right);
// 		}
// 		else if(node->op[0]=='/'){
// 			fprintf(target,"DIV R%d, R%d\n",left,right);
// 		}
// 		freeReg();
// 		return left;
// 	}
// 	return -1;
// }

// void store(int x,int reg){
// 	fprintf(target,"MOV [%d], R%d\n",x,reg);
// 	return;
// }

// void write(int r){
// 	int x=getReg();
// 	fprintf(target,"MOV R%d, \"%s\"\n",x,"Write");
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"MOV R%d, %d\n",x,-2);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"MOV R%d, [%d]\n",x,r);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"PUSH R%d\n",x);
// 	fprintf(target,"CALL 0\n");

// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);
// 	fprintf(target,"POP R%d\n",x);

// 	freeReg();
// }




//stage 2
struct tnode* createTree(int val, int type, char* c, struct tnode *l, struct tnode *r){
    if(val!=INT_MAX){
        return createNum(val);
    }
    else if(c)
        return createVar(c);
    else{
        struct tnode *temp=(tnode*)malloc(sizeof(tnode));
        temp->val=INT_MAX;
        temp->nodetype=type;
        temp->varname=NULL;
        temp->left=l;
        temp->right=r;
    }
}

struct tnode* createNum(int val){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=val;
    temp->nodetype=Nconst;
    temp->varname=NULL;
    temp->type=0;
    return temp;
}

struct tnode* createVar(char *name){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Nvar;
    temp->varname=(char*)malloc(strlen(name)+1);
    strcpy(temp->varname,name);
    temp->type=0;
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