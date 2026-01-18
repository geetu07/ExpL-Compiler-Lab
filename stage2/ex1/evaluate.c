#include<stdio.h>
#include "ex1.h"
int var[26];
int getVarIndex(struct tnode *root){
    return (int) ((root->varname[0])-'a');
}


void ePrint(struct tnode *root){
    for(int i=0;i<26;i++){
        var[i]=0;
    }
    evaluate(root);
}
int evaluate(struct tnode *root){
    if(root==NULL)return -1;
    switch(root->nodetype){
        case Nconnect:{
            evaluate(root->left);
            evaluate(root->right);
            return -1;
        }
        case Nadd:{
            int l=evaluate(root->left);
            int r=evaluate(root->right);
            return l+r;
        }
        case Nsub:{
            int l=evaluate(root->left);
            int r=evaluate(root->right);
            return l-r;
        }
        case Nmul:{
            int l=evaluate(root->left);
            int r=evaluate(root->right);
            return l*r;
        }
        case Ndiv:{
            int l=evaluate(root->left);
            int r=evaluate(root->right);
            return l/r;
        }
        case Nconst:return root->val;
        case Nvar:{
            int x=getVarIndex(root);
            return var[x];
        }
        case Nassign:{
            int x=evaluate(root->right);
            int y=getVarIndex(root->left);
            var[y]=x;
            return -1;
        }
        case Nread:{
            int x=getVarIndex(root->left);
            printf("Read ");
            scanf("%d",&var[x]);
            return -1;
        }
        case Nwrite:{
            int x=evaluate(root->left);
            printf("Write %d\n",x);
            return -1;
        }
    }
}
