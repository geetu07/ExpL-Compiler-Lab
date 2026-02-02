#ifndef SYMBOL_H
#define SYMBOL_H
#include "ex1.h"


typedef struct Gsymbol {
    char* name;       // name of the variable
    int type;         // type of the variable
    int size;         // size of the type of the variable
    int binding;      // stores the static memory address allocated to the variable
    struct Gsymbol *next;
    int *dimension;
    int numdimen;
}Gsymbol;

extern Gsymbol *stkhead;
extern int stop;


struct Gsymbol *Lookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
Gsymbol* Install(char *name, int type, int size);
void printSymbolTable();
void addToST(tnode*root);
int getSizeOfArray(struct tnode *arr, int *x);
int getSize(tnode*x);
int getdimen(tnode*root,int *count);
void addDimen(Gsymbol *x,tnode* root);

#endif