#ifndef SYMBOL_H
#define SYMBOL_H

#include<stdbool.h>

struct tnode;
typedef struct tnode tnode;

struct Param;
typedef struct Param Param;

typedef struct Gsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct Gsymbol *next;
    int *dimension;
    int numdimen;
    int ptr;
    struct Param *paramlist;
    int func;
}Gsymbol;



extern Gsymbol *stkhead;
extern Gsymbol *currfunc;
extern int stop;

//local 
typedef struct Lsymbol{
    char *name;
    int type;
    int binding;
    struct Lsymbol *next;
}Lsymbol;
extern int localbind;

extern struct Lsymbol *localhead;
Lsymbol *linstall(char *name,int type, bool c);
Lsymbol *llookup(char *name);
void freelocal();
void printLsymbol();
void popLocal(tnode*x);

Param * lookupParam(Gsymbol *x,char *name);
bool checkFunc(tnode *f);
bool checkParams(tnode *x, Param **param);
int lnumParam(Param *p);


struct Gsymbol *Lookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
Gsymbol* Install(char *name, int type, int size,bool ptr);
void printSymbolTable();
void addToST(tnode*root);
int getSizeOfArray(struct tnode *arr, int *x);
int getSize(tnode*x);
int getdimen(tnode*root,int *count);
void addDimen(Gsymbol *x,tnode* root);


void addParams(struct Gsymbol *entry, tnode*paramlist);
Param *addParam(Gsymbol *gentry, char *name, int type);

#endif