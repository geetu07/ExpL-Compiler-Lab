#ifndef LABEL_H
#define LABEL_H

typedef struct LabelEntry
{
    char labelName[10];
    int memAddr;
    struct LabelEntry *next;
}LabelEntry;

extern int count;
extern LabelEntry *head,*tail;

int createNewL();
LabelEntry *createNewLTEntry(char *name,int memAddr);
int getmemAddrL(char *name);
int addnewl(char *name,int memAddr);
void removel(char *name);

typedef struct LStack {
    int condLabel;
    int rest;
    struct LStack *next;
} LStack;

extern struct LStack *stackhead;

void pushStack(int condLabel, int rest);
struct LStack *popStack();
struct LStack *peekStack();

#endif
