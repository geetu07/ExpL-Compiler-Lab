#ifndef CLASSTABLE_H
#define CLASSTABLE_H

#include<stdio.h>
#include <stdbool.h>
#include "symbol.h"  // for TypeTable, Param

/* Forward declarations */
struct Classtable;
struct Memberfunclist;

/* -------------------------------------------------------
 * Fieldlist  –  member fields of a class
 * ------------------------------------------------------- */
typedef struct Fieldlist {
    char             *Name;       /* name of the field                        */
    int               Fieldindex; /* position index (0-based)                 */
    struct TypeTable  *Type;      /* pointer to type-table entry (INT/STRING) */
    struct Classtable *Ctype;     /* pointer to class-table entry if field is a class object, else NULL */
    struct Fieldlist  *Next;
} Fieldlist;

/* -------------------------------------------------------
 * Memberfunclist  –  methods of a class
 * ------------------------------------------------------- */
typedef struct Memberfunclist {
    char              *Name;       /* name of the method                      */
    struct TypeTable  *Type;       /* return type                             */
    struct Param      *paramlist;  /* formal parameter list                   */
    int                Funcposition; /* position index in the class (0-based) */
    int                Flabel;     /* unique label for code generation        */
    struct Memberfunclist *Next;
} Memberfunclist;

/* -------------------------------------------------------
 * Classtable  –  one entry per class
 * ------------------------------------------------------- */
typedef struct Classtable {
    char              *Name;        /* name of the class                      */
    Fieldlist         *Memberfield; /* linked list of member fields           */
    Memberfunclist    *Vfuncptr;    /* linked list of methods                 */
    struct Classtable *Parentptr;   /* parent class (NULL in stage 7)         */
    int                Class_index; /* position of class in virtual fn table  */
    int                Fieldcount;  /* number of member fields                */
    int                Methodcount; /* number of methods                      */
    struct Classtable *Next;
} Classtable;

/* Global head of the class table list */
extern Classtable *cthead;

/* Currently-being-parsed class (set in grammar actions) */
extern Classtable *currClass;

/* -------------------------------------------------------
 * Class-table API
 * ------------------------------------------------------- */

/**
 * CInstall  –  create a new class table entry.
 * @name            : name of the new class
 * @parent_class_name : name of parent class (NULL for stage 7, no inheritance)
 * Returns pointer to the newly created entry.
 */
Classtable *CInstall(char *name, char *parent_class_name);

/**
 * CLookup  –  find a class by name.
 * Returns pointer to entry, or NULL if not found.
 */
Classtable *CLookup(char *name);

/**
 * Class_Finstall  –  add a member field to a class.
 * @cptr     : the class being built
 * @typename : the type name of the field (e.g. "int", "str", or a class name)
 * @named   : the field name
 */
void Class_Finstall(Classtable *cptr, char *typename, char *name);

/**
 * Class_Minstall  –  add a method declaration to a class.
 * @cptr      : the class being built
 * @namecd      : method name
 * @type      : return type (TypeTable pointer)
 * @paramlist : formal parameter list (Param linked list, may be NULL)
 */
void Class_Minstall(Classtable *cptr, char *name, TypeTable *type, Param *paramlist);

/**
 * Class_Mlookup  –  find a method in a class by name.
 * Returns pointer to Memberfunclist entry, or NULL.
 */
Memberfunclist *Class_Mlookup(Classtable *cptr, char *name);

/**
 * Class_Flookup  –  find a member field in a class by name.
 * Returns pointer to Fieldlist entry, or NULL.
 */
Fieldlist *Class_Flookup(Classtable *cptr, char *name);

/**
 * printClassTable  –  debug print of all class entries.
 */
void printClassTable(void);

#endif /* CLASSTABLE_H */