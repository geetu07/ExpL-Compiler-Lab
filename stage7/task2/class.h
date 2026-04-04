#ifndef CLASSTABLE_H
#define CLASSTABLE_H

#include<stdio.h>
#include <stdbool.h>
#include "symbol.h"  

struct Classtable;
struct Memberfunclist;

typedef struct Fieldlist {
    char             *Name;                              
    int               Fieldindex; 
    struct TypeTable  *Type;      
    struct Classtable *Ctype;    
    struct Fieldlist  *Next;
} Fieldlist;

typedef struct Memberfunclist {
    char              *Name;       /* name of the method                      */
    struct TypeTable  *Type;       /* return type                             */
    struct Param      *paramlist;  /* formal parameter list                   */
    int                Funcposition; /* position index in the class (0-based) */
    int                Flabel;     /* unique label for code generation        */
    struct Memberfunclist *Next;
} Memberfunclist;

typedef struct Classtable {
    char              *Name;        
    Fieldlist         *Memberfield; 
    Memberfunclist    *Vfuncptr;   
    struct Classtable *Parentptr;   
    int                Class_index; 
    int                Fieldcount;  
    int                Methodcount; 
    struct Classtable *Next;
} Classtable;

extern Classtable *cthead;

extern Classtable *currClass;
extern int currMethodLabel;


Classtable *CInstall(char *name, char *parent_class_name);

Classtable *CLookup(char *name);

void Class_Finstall(Classtable *cptr, char *typename, char *name);

void Class_Minstall(Classtable *cptr, char *name, TypeTable *type, Param *paramlist);

Memberfunclist *Class_Mlookup(Classtable *cptr, char *name);

Fieldlist *Class_Flookup(Classtable *cptr, char *name);

void printClassTable(void);

#endif 