#include "label.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int count=0;
LabelEntry *head=NULL,*tail=NULL;
int createNewL(){
    return count++;
}
LabelEntry *createNewLTEntry(char *name,int memAddr){
    LabelEntry *temp=(LabelEntry*)malloc(sizeof(LabelEntry));
    strcpy(temp->labelName,name);
    temp->memAddr=memAddr;
    temp->next=NULL;
    return temp;
}
int getmemAddrL(char *name){
    LabelEntry *temp=head;
    while(temp){
        if(strcmp(temp->labelName,name)==0)
            return temp->memAddr;
        temp=temp->next;
    }
    return -1;
}
int addnewl(char *name,int memAddr){
 int x=getmemAddrL(name);
 if(x!=-1) return -1;
 LabelEntry *temp=createNewLTEntry(name,memAddr);
 if(!head){
    head=temp;
    tail=temp;
    return 1;
 }
 tail->next=temp;
 tail=temp;
 return 1;
}
void removel(char *name){
    LabelEntry *prev=NULL,*curr=head;
    while(curr){
        if(strcmp(curr->labelName,name)==0){
            if(curr==tail)
                tail=prev;
            if(curr==head)
                head=head->next;
            if(prev)
                prev->next=curr->next;
        }
        curr=curr->next;
    }
}
