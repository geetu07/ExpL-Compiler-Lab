#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "class.h"
#include "symbol.h"
#include "label.h"   
Classtable *cthead    = NULL;
Classtable *currClass = NULL;

Classtable *CInstall(char *name, char *parent_class_name) {
    if (CLookup(name)) {
        printf("CInstall: class '%s' already declared\n", name);
        exit(1);
    }

    Classtable *entry = (Classtable *)malloc(sizeof(Classtable));
    entry->Name        = (char *)malloc(strlen(name) + 1);
    strcpy(entry->Name, name);
    entry->Memberfield  = NULL;
    entry->Vfuncptr     = NULL;
    entry->Parentptr    = NULL;
    entry->Class_index  = 0;    
    entry->Fieldcount   = 0;
    entry->Methodcount  = 0;
    entry->Next         = NULL;

    if (parent_class_name != NULL) {
        printf("CInstall: inheritance not supported in stage 7\n");
        exit(1);
    }

  
    if (!cthead) {
        cthead = entry;
    } else {
        Classtable *h = cthead;
        int idx = 1;
        while (h->Next) { h = h->Next; idx++; }
        h->Next = entry;
        entry->Class_index = idx;
    }

    return entry;
}


Classtable *CLookup(char *name) {
    Classtable *h = cthead;
    while (h) {
        if (strcmp(h->Name, name) == 0)
            return h;
        h = h->Next;
    }
    return NULL;
}


void Class_Finstall(Classtable *cptr, char *typename, char *name) {
    if (!cptr) {
        printf("Class_Finstall: NULL class pointer\n");
        exit(1);
    }
    if (cptr->Fieldcount >= 8) {
        printf("Class_Finstall: class '%s' exceeds max 8 fields\n", cptr->Name);
        exit(1);
    }
    if (Class_Flookup(cptr, name)) {
        printf("Class_Finstall: field '%s' already declared in class '%s'\n",
               name, cptr->Name);
        exit(1);
    }

    Fieldlist *fl = (Fieldlist *)malloc(sizeof(Fieldlist));
    fl->Name       = (char *)malloc(strlen(name) + 1);
    strcpy(fl->Name, name);
    fl->Fieldindex = cptr->Fieldcount;
    fl->Next       = NULL;

    
    TypeTable *tptr = typeLookup(typename);
    if (tptr) {
        fl->Type  = tptr;
        fl->Ctype = NULL;
    } else {
        Classtable *ctype = CLookup(typename);
        if (!ctype) {
            printf("Class_Finstall: unknown type '%s' for field '%s' in class '%s'\n",
                   typename, name, cptr->Name);
            exit(1);
        }
        
        fl->Type  = NULL;
        fl->Ctype = ctype;
    }


    if (!cptr->Memberfield) {
        cptr->Memberfield = fl;
    } else {
        Fieldlist *h = cptr->Memberfield;
        while (h->Next) h = h->Next;
        h->Next = fl;
    }
    cptr->Fieldcount++;
}


void Class_Minstall(Classtable *cptr, char *name, TypeTable *type, Param *paramlist) {
    if (!cptr) {
        printf("Class_Minstall: NULL class pointer\n");
        exit(1);
    }
    if (cptr->Methodcount >= 8) {
        printf("Class_Minstall: class '%s' exceeds max 8 methods\n", cptr->Name);
        exit(1);
    }

    if (Class_Mlookup(cptr, name)) {
        printf("Class_Minstall: method '%s' already declared in class '%s'\n",
               name, cptr->Name);
        exit(1);
    }

    Memberfunclist *mfl = (Memberfunclist *)malloc(sizeof(Memberfunclist));
    mfl->Name         = (char *)malloc(strlen(name) + 1);
    strcpy(mfl->Name, name);
    mfl->Type         = type;
    mfl->paramlist    = paramlist;
    mfl->Funcposition = cptr->Methodcount;
    mfl->Flabel       = createNewL();   /* generate a unique label now */
    mfl->Next         = NULL;


    if (!cptr->Vfuncptr) {
        cptr->Vfuncptr = mfl;
    } else {
        Memberfunclist *h = cptr->Vfuncptr;
        while (h->Next) h = h->Next;
        h->Next = mfl;
    }
    cptr->Methodcount++;
}


Memberfunclist *Class_Mlookup(Classtable *cptr, char *name) {
    if (!cptr) return NULL;
    Memberfunclist *h = cptr->Vfuncptr;
    while (h) {
        if (strcmp(h->Name, name) == 0)
            return h;
        h = h->Next;
    }
    return NULL;
}


Fieldlist *Class_Flookup(Classtable *cptr, char *name) {
    if (!cptr) return NULL;
    Fieldlist *h = cptr->Memberfield;
    while (h) {
        if (strcmp(h->Name, name) == 0)
            return h;
        h = h->Next;
    }
    return NULL;
}


void printClassTable(void) {
    Classtable *c = cthead;
    while (c) {
        printf("Class: %s  (fields=%d, methods=%d)\n",
               c->Name, c->Fieldcount, c->Methodcount);

        Fieldlist *f = c->Memberfield;
        while (f) {
            if (f->Type)
                printf("  field[%d]: %s : %s\n", f->Fieldindex, f->Name, f->Type->name);
            else
                printf("  field[%d]: %s : <class %s>\n", f->Fieldindex, f->Name,
                       f->Ctype ? f->Ctype->Name : "?");
            f = f->Next;
        }

        Memberfunclist *m = c->Vfuncptr;
        while (m) {
            printf("  method[%d]: %s  label=L%d\n",
                   m->Funcposition, m->Name, m->Flabel);
            m = m->Next;
        }

        c = c->Next;
    }
}