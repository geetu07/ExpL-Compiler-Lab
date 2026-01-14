#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include "ex1.h"

struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate(struct tnode *t){
    if(t->op == NULL)
    {
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
}

void print(struct tnode*root){
    if(root==NULL)
        return;
    if(root->op){
        printf("%c ",*(root->op));
    }
    else{
        printf("%d ",root->val);
    }
    print(root->left);
    print(root->right);
}

void prefix(struct tnode*root){
    if(!root)return;
    if(!root->op){
        printf("%d ",root->val);
        return;
    }
    else
        printf("%c ",*root->op);
    prefix(root->left);
    prefix(root->right);
}

void postfix(struct tnode*root){
    if(!root)return;
    postfix(root->left);
    postfix(root->right);
    if(!root->op){
        printf("%d ",root->val);
        return;
    }
    else
        printf("%c ",*root->op);
}

void printPrefix(struct tnode*root){
    printf("Prefix: ");
    prefix(root);
    printf("\n");
}
void printPostfix(struct tnode*root){
    printf("Postfix: ");
    postfix(root);
    printf("\n");
}

