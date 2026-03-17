#ifndef CODE_H
#define CODE_H
#include<stdio.h>
#include "ex1.h"
#include "symbol.h"

extern FILE *target;

extern bool registers[20];

void initializeRegisters();
int getFreeRegister();
void releaseRegister(int regNo);

void generateHeader(void);
void generateExit(void);

int genAdd(int l, int r);
int genSub(int l, int r);
int genMul(int l, int r);
int genDiv(int l, int r);

void genWriteToMem(int reg, int mem);

void genRead(int mem);
void genWrite(int mem);

int genConst(int val);
int genAddr(tnode *root);
int genAssign(tnode *root);
int genLoadvar(tnode *root);

int generateCode(tnode *root);
void generate(tnode *root);

//stage3
void generateWhileCode(struct tnode *node);
void generateIfCode(struct tnode *node);
void generateIfElseCode(struct tnode *node);
int generateCondCode(struct tnode *node);

void generateBreakCode();
void generateContinueCode();
void generateRepeatCode(tnode *node);
void generateDoWhileCode(tnode*root);


int genArrAddr(tnode* x);
int genArrAccess(tnode*root);
void genAssToArr(tnode*root);
int genLoadStrLit(char*str);

void genReadAddinReg(int x);
void genAssignDerefer(tnode*root);
int genDerefer(tnode*x);
int genAddrToCode(tnode* root);
int genMod(int l,int r);

void genFuncCode(int x, tnode*y);
void genMain(tnode *x);
void genFuncCode(int l, tnode*root);
void genFuncReturn(tnode *r);
void genFuncBack();
int genFuncCall(tnode *root);
int genRegainStatus(int n);
void genArg(tnode* argl,int *i,int arg[]);

void generateHeap();
void generateAlloc(struct tnode *node);
int generateUserAcc( tnode *root);
void generateUserAssign( tnode *root) ;
void findUserTypeFieldAddr(int *fieldAddrReg, struct tnode *node, struct TypeTable **activeType);
void generateFree(struct tnode *root);

#endif