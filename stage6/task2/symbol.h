#ifndef SYMBOL_H
#define SYMBOL_H

#include<stdbool.h>
struct TypeTable;
struct FieldList;

typedef struct TypeTable{
    char *name;
    int size;
    struct FieldList *fields;
    struct TypeTable *next;
}TypeTable;

typedef struct FieldList{
    char *name;
    int index;
    struct FieldList *next;
    struct TypeTable *type;
}FieldList;



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
    struct TypeTable *typeTableEntry;
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
    struct TypeTable *typeTableEntry;
}Lsymbol;
extern int localbind;

extern struct Lsymbol *localhead;
Lsymbol *linstall(char *name,int type, bool c, TypeTable *t);
Lsymbol *llookup(char *name);
void freelocal();
void printLsymbol();
void popLocal(tnode*x);

Param * lookupParam(Gsymbol *x,char *name);
bool checkFunc(tnode *f);
bool checkParams(tnode *x, Param **param);
int lnumParam(Param *p);


struct Gsymbol *Lookup(char * name);            // Returns a pointer to the symbol table entry for the variable, returns NULL otherwise.
Gsymbol* Install(char *name, int type, int size,bool ptr,TypeTable *t, int l);
void printSymbolTable();
void addToST(tnode*root);
int getSizeOfArray(struct tnode *arr, int *x);
int getSize(tnode*x);
int getdimen(tnode*root,int *count);
void addDimen(Gsymbol *x,tnode* root);

Param *addParam(Gsymbol *gentry, char *name, int type,TypeTable *typeTableEntry);
void addParams(struct Gsymbol *entry, tnode*paramlist);


///TYPE ////

extern TypeTable *tthead;

TypeTable *typeLookup(char *name);
TypeTable *createNewType(char *name);
void typeTInstall(TypeTable *t);
void initializeTypeT();
void setFieldsOfType(char *name, FieldList *fields);
void printType();

FieldList *createTypeFieldE(char *name, TypeTable *t);
FieldList *mergerField(FieldList *f1, FieldList *f2);
FieldList *fieldlookup(TypeTable *t, char *name);





#endif