#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include "code.h"
#include "ex1.h"

FILE *target;
bool registers[20];

void initializeRegisters(){
    for(int i=0;i<=19;i++){
        registers[i]=true;
    }
}

int getFreeRegister(){
    for(int i=0;i<19;i++) {
        if(registers[i]){
            registers[i]=false;
            return i;
        }
    }
    printf("No Free Registers\n");
    exit(1);
}

void releaseRegister(int regNo){
    registers[regNo]=true;
}


//assembly code generation part

void generateHeader(){
	fprintf(target,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(target,"MOV SP, %d\n",4097);
    fprintf(target,"BRKP\n");
}

void generateExit(){
	int x=getFreeRegister();
	fprintf(target,"MOV R%d, \"%s\"\n",x,"Exit");
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"CALL 0\n");
	releaseRegister(x);
}

int genAdd(int l,int r){
    fprintf(target,"ADD R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}
int genSub(int l,int r){
    fprintf(target,"SUB R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}
int genMul(int l,int r){
    fprintf(target,"MUL R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}
int genDiv(int l,int r){
    fprintf(target,"DIV R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}

void genWriteToMem(int reg,int mem){
    fprintf(target,"MOV [%d], R%d\n",mem,reg);
}

void genRead(int mem){
    int a=getFreeRegister();
    int b=getFreeRegister();
    int c=getFreeRegister();
    int d=getFreeRegister();
    int e=getFreeRegister();
    fprintf(target,"MOV R%d, \"%s\"\n",a,"Read");
    fprintf(target,"PUSH R%d\n",a);
    fprintf(target,"MOV R%d, -1\n",b);
    fprintf(target,"PUSH R%d\n",b);
    fprintf(target,"MOV R%d, %d\n",c,mem);
    fprintf(target,"PUSH R%d\n",c);
    fprintf(target,"PUSH R%d\n",d);
    fprintf(target,"PUSH R%d\n",e);
    fprintf(target,"CALL 0\n");
    fprintf(target,"SUB SP, 5\n");
    releaseRegister(a);
    releaseRegister(b);
    releaseRegister(c);
    releaseRegister(d);
    releaseRegister(e);
}


void genWrite(int mem){
    int a=getFreeRegister();
    int b=getFreeRegister();
    int c=getFreeRegister();
    int d=getFreeRegister();
    fprintf(target,"MOV R%d, \"%s\"\n",a,"Write");
    fprintf(target,"PUSH R%d\n",a);
    fprintf(target,"MOV R%d, -2\n",b);
    fprintf(target,"PUSH R%d\n",b);
    fprintf(target,"PUSH R%d\n",mem);
    fprintf(target,"PUSH R%d\n",c);
    fprintf(target,"PUSH R%d\n",d);
    fprintf(target,"CALL 0\n");
    fprintf(target,"SUB SP, 5\n");
    releaseRegister(a);
    releaseRegister(d);
    releaseRegister(c);
    releaseRegister(b);
}

int genConst(int val){
    int reg=getFreeRegister();
    fprintf(target,"MOV R%d,%d\n",reg,val);
    return reg;
}

int genAddr(tnode *root){
    int x=(int)root->varname[0]-'a';
    return 4096+x;
}

int genAssign(tnode*root){
    int x=genAddr(root->left);
    int y=generateCode(root->right);
    fprintf(target,"MOV [%d], R%d\n",x,y);
    return -1;
}

int genLoadvar(tnode*root){
    int x=genAddr(root);
    int y=getFreeRegister();
    fprintf(target,"MOV R%d, [%d]\n",y,x);
    return y;
}

int generateCode(tnode* root){
    if(root==NULL)return -1;
    switch(root->nodetype){
        case Nassign: return genAssign(root);

        case Nconnect:{ generateCode(root->left);
                        generateCode(root->right);
                        return -1;}
        case Nvar: return genLoadvar(root);
        case Nconst: return genConst(root->val);
        case Nread: {int x=genAddr(root->left);
                        genRead(x);
                        return -1;}
        case Nwrite: {int x=generateCode(root->left);
                    genWrite(x);
                    return -1;}
        case Nadd: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genAdd(l,r);}
        case Nsub: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genSub(l,r);}
        case Nmul: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genMul(l,r);}
        case Ndiv: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genDiv(l,r);}
    }
}

void generate(tnode*root){
    target=fopen("ans.xsm","w");
    initializeRegisters();
    generateHeader();
    generateCode(root);
    generateExit();
}

