#ifndef CODE_H
#define CODE_H
#include<stdio.h>
#include "ex1.h"


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
void generateCondCode(struct tnode *node, int label);

void generateBreakCode();
void generateContinueCode();

#endif