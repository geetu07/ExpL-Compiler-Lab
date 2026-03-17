#include <stdlib.h>
#include<stdio.h>
#include <string.h>
#include "ex1.h"
#include "code.h"
#include<limits.h>
#include "symbol.h"

//stage 2
struct tnode* createTree(int val, int type, char* c, struct tnode *l, struct tnode *r){
    if(val!=INT_MAX){
        return createConst(val);
    }
    else if(c)
        return createNewVariable(c);
    else{
        struct tnode *temp=(tnode*)malloc(sizeof(tnode));
        temp->val=INT_MAX;
        temp->nodetype=type;
        temp->varname=NULL;
        temp->left=l;
        temp->right=r;
        temp->type=NONE;
        return temp;
    }
}

struct tnode* createConst(int val){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=val;
    temp->nodetype=Nconst;
    temp->varname=NULL;
    temp->type=INT;
    return temp;
}


tnode *makeOperatorNode(char s,tnode *l,tnode*r){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    if(l->type!=INT || r->type!=INT){
        printf("operand type not INT!\n");
        exit(1);
    }
    temp->left=l;
    temp->right=r;
    temp->val=INT_MAX;
    if(s=='+')
    temp->nodetype=Nadd;
    else if(s=='-')
    temp->nodetype=Nsub;
    else if(s=='*')
    temp->nodetype=Nmul;
    else if(s=='/')
    temp->nodetype=Ndiv;
    else if(s=='%')
    temp->nodetype=Nmod;
    
    temp->varname=NULL;
    temp->type=INT;
    return temp;
}

tnode * createRead(tnode *t){
    tnode *id=createVariableUsageNode(t->varname);

    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=id;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Nread;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode * createWrite(tnode *t){
    if(t->type!=INT && t->type!=STRING){
        printf("WRITE ERROR\n");
        exit(1);
    }
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=t;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Nwrite;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode * createAssign(tnode *l,tnode *r){
    tnode* x=createVariableUsageNode(l->varname);
    if(x->type!=r->type){
        printf("Assign type error\n");
        exit(1);
    }
    x->type=r->type;
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=x;
    temp->right=r;
    temp->val=INT_MAX;
    temp->nodetype=Nassign;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode * createConnect(tnode *l,tnode*r){
    struct tnode* temp=(tnode*)malloc(sizeof(tnode));
    temp->left=l;
    temp->right=r;
    temp->val=INT_MAX;
    temp->nodetype=Nconnect;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createCondition(int type,tnode*left, tnode*right){
    // if(left->type!=INT || right->type!=INT){
    //     printf("ERROR! of condition");
    //     exit(1);
    // }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    temp->left=left;
    temp->right=right;
    temp->val=INT_MAX;
    temp->nodetype=type;
    temp->varname=NULL;
    temp->type=BOOL;
    return temp;
}

tnode* createWhile(tnode* cond,tnode*left){
    if(cond->type!=BOOL){
        printf("ERROR! of while");
        exit(1);
    }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    temp->left=cond;
    temp->right=left;
    temp->val=INT_MAX;
    temp->nodetype=Nwhile;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createIfElseNode(tnode* cond,tnode*left,tnode*right){
    if(cond->type!=BOOL){
        printf("ERROR! of ifelse");
        exit(1);
    }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    struct tnode *conn=createConnect(left,right);
    temp->left=cond;
    temp->right=conn;
    temp->val=INT_MAX;
    temp->nodetype=Nif_else;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createIfNode(tnode* cond,tnode*left){
    if(cond->type!=BOOL){
        printf("ERROR! of if");
        exit(1);
    }
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    temp->left=cond;
    temp->right=left;
    temp->val=INT_MAX;
    temp->nodetype=Nif;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createBreak(){
    tnode*temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Nbreak;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode*createContinue(){
    tnode*temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Ncontinue;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode *createDoWhile(tnode* stmt, tnode*cond){
    if(cond->type!=BOOL){
        printf("condition for do ehilr is not BOOL!");
        exit(1);
    }
    tnode*temp=(tnode*)malloc(sizeof(tnode));
    temp->left=cond;
    temp->right=stmt;
    temp->val=INT_MAX;
    temp->nodetype=NdoWhile;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;

}
tnode* createRepeat(tnode*stmt,tnode*cond){
    if(cond->type!=BOOL){
        printf("condition for repeat until is not BOOL!");
        exit(1);
    }
    tnode*temp=(tnode*)malloc(sizeof(tnode));
    temp->left=stmt;
    temp->right=cond;
    temp->val=INT_MAX;
    temp->nodetype=Nrepeat;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createDeclaration(tnode* type,tnode* var){
    tnode*temp=createConnect(type,var);
    temp->val=INT_MAX;
    temp->nodetype=Ndecl;
    temp->varname=NULL;
    temp->type=NONE;
    return temp;
}

tnode* createType(int type){
    tnode*temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->val=INT_MAX;
    temp->nodetype=Ntype;
    temp->varname=NULL;
    temp->type=type;
    return temp;
}


void printn(tnode* root){
    switch (root->nodetype)
    {
    case Nadd:printf("+\n");
        break;
    case Nsub:printf("-\n");
        break;
    case Nmul:printf("*\n");
        break;
    case Ndiv:printf("/\n");
        break;
    case Nmod:printf("MOD \n");
        break;
    case Nassign:printf("Assign\n");
        break;
    case Nconnect:printf("Connect\n");
        break;
    case Nconst:printf("%d\n",root->val);
        break;
    case Nread:printf("READ\n");
        break;
    case NreadArr:printf("READ TO ARRAY\n");
        break;
    case Nwrite:printf("WRITE\n");
        break;
    case Nvar:printf("%s\n",root->varname);
        break;
    case Nif: printf("IF\n");
        break;
    case Nif_else: printf("IFELSE\n");
        break;
    case Nwhile: printf("WHILE\n");
        break;
    case Nrepeat:printf("REPEAT\n");
        break;
    case NdoWhile:printf("DO WHILE\n");
        break;
    case Nge:printf("GE\n");
        break;
    case Ngt:printf("GT\n");
        break;
    case Nle:printf("LE\n");
        break;
    case Nlt:printf("LT\n");
        break;
    case Nne:printf("NE\n");
        break;
    case Neq:printf("EQ\n");
        break;
    case Ndecl:printf("DECL\n");
        break;
    case Ntype:printf("TYPE\n");
        break;
    case NaddrTo:printf("&\n");
        break;
    case NassToDefer:printf("ASSIGN TO DEREFER\n");
        break;
    case Nderefer:printf("*\n");
        break;
    case NFuncDecl:printf("Func decl\n");
        break;
    case Nparam:printf("param\n");
        break;
    case NlocalDecl:printf("Local decl\n");
        break;
    default:
        break;
    }
}

void print(tnode* root){
    int x=0;
    if(root==NULL)return;
    printn(root);
    print(root->left);
    print(root->right);
}


tnode *createString(char *s){
    struct tnode *temp=(tnode*)malloc(sizeof(tnode));
    temp->left = NULL;
    temp->right = NULL;
    temp->nodetype = Nstr;
    temp->varname = NULL;
    temp->type=-1;
    temp->val=0;
    temp->strval = (char *)malloc(strlen(s)+1);
    strcpy(temp->strval,s);
    temp->type = STRING;
    return temp;
}

tnode *createNewVariable(char *varName){
    tnode*temp=(tnode*)malloc(sizeof(tnode));
    temp->left=NULL;
    temp->right=NULL;
    temp->type=-1;
    temp->nodetype = Nvar;
    temp->val = INT_MAX;
    temp->varname=(char *)malloc(strlen(varName)+1);
    strcpy(temp->varname,varName);
    return temp;
}

tnode *createVariableUsageNode(char *varname){
    tnode*temp=(tnode*)malloc(sizeof(tnode)); 
    temp->left=NULL;
    temp->right=NULL;
    temp->type=-1;
    temp->nodetype = Nvar;
    temp->val = INT_MAX;
    temp->varname=(char *)malloc(strlen(varname)+1);
    strcpy(temp->varname,varname);
    Lsymbol *l=llookup(varname);
    Gsymbol *entry=Lookup(varname);
    if(l){
        temp->type=l->type;
        temp->Gentry=NULL;
        temp->typeTableEntry=l->typeTableEntry;
    }
    else if(entry) {
        temp->type = entry->type;
        temp->Gentry=entry;
        temp->typeTableEntry=entry->typeTableEntry;
    } else {
        
        printf("DECLARE BEFORE USING VAR %s\n",varname);
        exit(1);
    }
    return temp;
}

tnode* createArray(tnode* varList,tnode*id,tnode*size){
    tnode*temp=(tnode*)malloc(sizeof(tnode));
    temp->left=id;
    temp->right=size;
    temp->type=NONE;
    temp->nodetype = NArr;
    temp->val = INT_MAX;
    temp->varname=NULL;
    tnode* x=createConnect(varList,temp);
    return x;
}

tnode* createArrAssign(tnode*id,tnode*index,tnode*val ){
    tnode *arr=createConnect(createVariableUsageNode(id->varname),index);
    tnode *assi=createConnect(arr,val);
    assi->nodetype=NArrAssign;
    assi->type=NONE;
    assi->val=INT_MAX;
    assi->varname=NULL;
    return assi;
}

tnode *createArrayAccess(tnode *idNode, tnode *indexExprNode) {
     tnode *id = createVariableUsageNode(idNode->varname);
     tnode *arr = createConnect(id, indexExprNode);
    arr->nodetype=NArrAccess;
    arr->val=INT_MAX;
    arr->type=id->type;
    arr->varname=NULL;
    return arr;
}

tnode* createReadArr(tnode*id, tnode*expr){
    tnode* x=createArrayAccess(id,expr);
    tnode*temp=(tnode*)malloc(sizeof(tnode)); 
    temp->left=x;
    temp->right=NULL;
    temp->type=-1;
    temp->nodetype = NreadArr;
    temp->val = INT_MAX;
    temp->varname=NULL;
    return temp;
}

tnode *createDerefer(tnode*id){
    tnode *x=createVariableUsageNode(id->varname);
    tnode*temp=(tnode*)malloc(sizeof(tnode)); 
    temp->left=x;
    temp->right=NULL;
    temp->type=x->Gentry->type;
    temp->nodetype = Nderefer;
    temp->val = INT_MAX;
    temp->varname=NULL;
    if(!x->Gentry->ptr){
        printf("Error!");
        exit(1);
    }
    return temp;
}
tnode *createAddr(tnode*id){
    tnode *x=createVariableUsageNode(id->varname);
    tnode*temp=(tnode*)malloc(sizeof(tnode)); 
    temp->left=x;
    temp->right=NULL;
    temp->type=x->Gentry->type;
    temp->nodetype = NaddrTo;
    temp->val = INT_MAX;
    temp->varname=NULL;
    if(x->Gentry->ptr){
        printf("Error!");
        exit(1);
    }
    return temp;
}
tnode *createAssignToDeref(tnode*id, tnode*r){
    tnode *x=createVariableUsageNode(id->varname);
    tnode*temp=(tnode*)malloc(sizeof(tnode)); 
    temp->left=x;
    temp->right=r;
    temp->type=NONE;
    temp->nodetype = NassToDefer;
    temp->val = INT_MAX;
    temp->varname=NULL;
    if(!x->Gentry->ptr){
        printf("Error!");
        exit(1);
    }
    return temp;
}
tnode*createPointer(tnode* id){
    tnode*temp=(tnode*)malloc(sizeof(tnode)); 
    temp->left=id;
    temp->right=NULL;
    temp->type=NONE;
    temp->nodetype = Nderefer;
    temp->val = INT_MAX;
    temp->varname=NULL;
    return temp;
}

tnode* createFuncDecl(tnode* fname,tnode*p){
    tnode*x=createConnect(fname,p);
    x->nodetype=NFuncDecl;
    return x;
}

tnode *createFuncCall(tnode *funcname, tnode *arg){
    tnode *x=createConnect(funcname,arg);
    Gsymbol *en=Lookup(funcname->varname);
    x->nodetype=NfuncCall;
    x->type=en->type;
    Param *p=en->paramlist;
    bool c=checkargs(&p,arg);
    if(c && p){
        printf("less arg\n");
        exit(1);
    }
    if(!c){
        printf("failes\n");
        exit(1);
    }
    return x;
}

tnode * createFuncDef(tnode *r, tnode* fname, tnode*param, tnode* ldecl, tnode* func){
    tnode* x=createConnect(ldecl,func);
    tnode*y=createConnect(param,x);
    tnode*z=createConnect(r,fname);
    tnode* w=createConnect(z,y);
    w->nodetype=NFuncDef;
    int c=checkFunc(w);
    if(!c){
        printf("Func def mismatch\n");
        exit(1);
    }
    printLsymbol();
    Gsymbol *f=Lookup(fname->varname);

    if(!f){
        printf("func not declared\n");
        exit(1);
    }
    genFuncCode(f->func, func);
    freelocal();
    return w;
}

tnode* createparam(tnode*type, tnode*id,bool c){

    tnode *node=createConnect(type,id);
    if(c && type->nodetype==USER_TYPE){
    linstall(id->varname,type->type,true, type->typeTableEntry);
    node->nodetype=NuserDefParam;
    }
    else if(c){
        linstall(id->varname,type->type,true,NULL);
        node->nodetype=Nparam;

    }
    else node->nodetype=Nparam;
    return node;
}

tnode* createMain(tnode*l,tnode* body){
    tnode *x=createConnect(l,body);
    x->nodetype=NFuncDef;
    printLsymbol();
    genMain(body);
    freelocal();
    return NULL;
}

bool checkargs(Param **param , tnode *argList){
    if(!argList && !*param)
    return true;
    if(!argList || !*param){
        printf("Not enough arg\n");
        exit(1);
    }
    if(argList->nodetype==Nconnect){
        return checkargs(param,argList->left) && checkargs(param, argList->right);
    }
    else{
        printf("args: %s %d %d",(*param)->name,(*param)->type, argList->type);
        if((*param)->type!=argList->type){
            printf("func arg mismatch\n");
            exit(1);
        }
        *param=(*param)->next;
        return true;
    }
}

tnode *createReturn(tnode* e){
    tnode*temp=(tnode*)malloc(sizeof(tnode)); 
    if(!currfunc){
        printf("return issue\n");
        exit(1);
    }
    if(currfunc->type!=e->type){
        printf("return type mismatch\n");
        exit(1);
    }
    temp->left=e;
    temp->right=NULL;
    temp->type=NONE;
    temp->nodetype = Nreturn;
    temp->val = INT_MAX;
    temp->varname=NULL;
    return temp;
}

tnode* createLocalDecl(tnode *type,tnode *id){
    tnode* x=createConnect(type,id);
    x->nodetype=NlocalDecl;
    popLocal(x);
    return x;
}

//user type


struct tnode *createMemberAcc(struct tnode *f1, struct tnode *f2, AccessType a){
    // if(f1->nodetype==Nvar){
    //     tnode* id=createVariableUsageNode(f1->varname);
    //     tnode *n=createConnect(id,f2);
    //     n->type=f2->type;
    //     if(id->type==USER_TYPE){
    //         n->nodetype=NuserDefAcc;
    //         return n;
    //     }
    //     else{
    //         tnode *x=createConnect(f1,f2);
    //         n->nodetype=NuserDefAcc;
    //         return n;
    //     }
    // }
    tnode *id;
    TypeTable *utype = NULL;

    // get the base variable
    if(f1->nodetype == Nvar) {
        id = createVariableUsageNode(f1->varname);
    } else {
        // chained access: f1 is already a member access node
        id = f1;
    }

    // find the type table entry of the base
    if(id->nodetype == NuserDefAcc) {
        // chained: use the type already set on the access node
        utype = id->typeTableEntry;
    } else {
        // simple variable: look up in local then global symbol table
        Lsymbol *l = llookup(id->varname);
        if(l) {
            utype = l->typeTableEntry;
        } else {
            Gsymbol *g = Lookup(id->varname);
            if(!g) {
                printf("Variable %s not declared\n", id->varname);
                exit(1);
            }
            utype = g->typeTableEntry;
        }
    }

    if(!utype) {
        printf("Variable is not a user-defined type\n");
        exit(1);
    }

    // look up the field name in the type's field list
    FieldList *fl = fieldlookup(utype, f2->varname);
    if(!fl) {
        printf("Field %s not found in type %s\n", f2->varname, utype->name);
        exit(1);
    }

    // build the access node
    tnode *n = createConnect(id, f2);
    n->nodetype = NuserDefAcc;
    n->type = fl->type == typeLookup("INT") ? INT :
              fl->type == typeLookup("STRING") ? STRING : USER_TYPE;
    n->typeTableEntry = fl->type;   // store field's type table entry
    return n;

}
struct tnode *createMemAssg(struct tnode *f, struct tnode *expr){
    if(f->type != expr->type){
        printf("Type mismatch in member assignment\n");
        exit(1);
    }
    tnode *node=createConnect(f,expr);
    node->nodetype=NUserAssg;
    return node;
}

tnode* createUserAssg(tnode *access,tnode*expr){
    tnode*n=createConnect(access,expr);
    n->nodetype=NuserDefAssg;
    return n;
}

tnode* createUserType(tnode *id){
    tnode *t = malloc(sizeof(tnode));
    t->nodetype = Ntype;
    t->type = USER_TYPE;
    t->typeTableEntry = typeLookup(id->varname);
    if(!t->typeTableEntry){
        printf("Unknown type: %s\n", id->varname);
        exit(1);
    }
    return t;
}