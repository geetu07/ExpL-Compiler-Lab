#ifndef SYMBOL_H
#define SYMBOL_H
#include "ex1.h"
#include<stdbool.h>


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

typedef struct Param{
    char *name;
    int type;
    struct Param * next;
}Param;

extern Gsymbol *stkhead;
extern int stop;

//local 
typedef struct Lsymbol{
    char *name;
    int type;
    int binding;
    struct Lsymbol *next;
}Lsymbol;

extern struct Lsymbol *localhead;
Lsymbol *linstall(char *name,int type);
Lsymbol *llookup(char *name);
void freelocal();


Param * lookupParam(Gsymbol *x,char *name);



struct Gsymbol *Lookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
Gsymbol* Install(char *name, int type, int size,bool ptr);
void printSymbolTable();
void addToST(tnode*root);
int getSizeOfArray(struct tnode *arr, int *x);
int getSize(tnode*x);
int getdimen(tnode*root,int *count);
void addDimen(Gsymbol *x,tnode* root);

void addParams(struct Gsymbol *entry, tnode*paramlist);

#endif