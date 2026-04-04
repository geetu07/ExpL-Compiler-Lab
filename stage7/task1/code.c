#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include "code.h"
#include"label.h"
#include "ex1.h"
#include "symbol.h"
#include "class.h"

FILE *target;
bool registers[20];

void initializeRegisters(){
    for(int i=0;i<=19;i++){
        registers[i]=true;
    }
}

int getFreeRegister(){
    for(int i=0;i<=19;i++) {
        if(registers[i]){
            registers[i]=false;
            return i;
        }
    }
    printf("No Free Registers\n");
    exit(1);
}

void releaseRegister(int regNo){
    if(regNo>=0 && regNo<20)
    registers[regNo]=true;
    else{
        printf("Invalid register freed");
        exit(1);
    }
}


//assembly code generation part

void generateHeader(){
	fprintf(target,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(target,"MOV SP, %d\n",stop);
    fprintf(target, "MOV BP, SP\n");
    fprintf(target,"BRKP\n");
}

void generateExit(){
	int x=getFreeRegister();
	fprintf(target,"MOV R%d, \"%s\"\n",x,"Exit");
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"CALL 0\n");
	releaseRegister(x);
}

int genAdd(int l,int r){
    fprintf(target,"ADD R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}
int genSub(int l,int r){
    fprintf(target,"SUB R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}
int genMul(int l,int r){
    fprintf(target,"MUL R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}
int genDiv(int l,int r){
    fprintf(target,"DIV R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}
int genMod(int l,int r){
    fprintf(target,"MOD R%d, R%d\n",l,r);
    releaseRegister(r);
    return l;
}

void genWriteToMem(int reg,int mem){
    fprintf(target,"MOV [%d], R%d\n",mem,reg);
    releaseRegister(reg);
}

void genRead(int memreg){
    int a=getFreeRegister();
    int b=getFreeRegister();
    int d=getFreeRegister();
    int e=getFreeRegister();
    fprintf(target,"MOV R%d, \"%s\"\n",a,"Read");
    fprintf(target,"PUSH R%d\n",a);
    fprintf(target,"MOV R%d, -1\n",b);
    fprintf(target,"PUSH R%d\n",b);
    fprintf(target,"PUSH R%d\n",memreg);
    fprintf(target,"PUSH R%d\n",d);
    fprintf(target,"PUSH R%d\n",e);
    fprintf(target,"CALL 0\n");
    fprintf(target,"SUB SP, 5\n");
    releaseRegister(a);
    releaseRegister(b);
    releaseRegister(memreg);
    releaseRegister(d);
    releaseRegister(e);
}

void genReadAddinReg(int x){
    int a=getFreeRegister();
    int b=getFreeRegister();
    int c=getFreeRegister();
    int d=getFreeRegister();
    fprintf(target,"MOV R%d, \"%s\"\n",a,"Read");
    fprintf(target,"PUSH R%d\n",a);
    fprintf(target,"MOV R%d, -1\n",b);
    fprintf(target,"PUSH R%d\n",b);
    fprintf(target,"PUSH R%d\n",x);
    fprintf(target,"PUSH R%d\n",c);
    fprintf(target,"PUSH R%d\n",d);
    fprintf(target,"CALL 0\n");
    fprintf(target,"SUB SP, 5\n");
    releaseRegister(a);
    releaseRegister(d);
    releaseRegister(x);
    releaseRegister(c);
    releaseRegister(b);
}


void genWrite(int reg){
    int a=getFreeRegister();
    int b=getFreeRegister();
    int c=getFreeRegister();
    int d=getFreeRegister();
    fprintf(target,"MOV R%d, \"%s\"\n",a,"Write");
    fprintf(target,"PUSH R%d\n",a);
    fprintf(target,"MOV R%d, -2\n",b);
    fprintf(target,"PUSH R%d\n",b);
    fprintf(target,"PUSH R%d\n",reg);
    fprintf(target,"PUSH R%d\n",c);
    fprintf(target,"PUSH R%d\n",d);
    fprintf(target,"CALL 0\n");
    fprintf(target,"SUB SP, 5\n");
    releaseRegister(a);
    releaseRegister(d);
    releaseRegister(c);
    releaseRegister(b);
    releaseRegister(reg);
}

int genConst(int val){
    int reg=getFreeRegister();
    fprintf(target,"MOV R%d,%d\n",reg,val);
    return reg;
}
int genLoadStrLit(char*str){
    int x=getFreeRegister();
    fprintf(target,"MOV R%d, %s\n",x,str);
    return x;
}



int genAssign(tnode*root){
    int x=genAddr(root->left);
    int y=generateCode(root->right);
    fprintf(target,"MOV [R%d], R%d\n",x,y);
    releaseRegister(x);
    releaseRegister(y);
    return -1;
}

int genLoadvar(tnode*root){
    int x=genAddr(root);
    int y=getFreeRegister();
    fprintf(target,"MOV R%d, [R%d]\n",y,x);
    releaseRegister(x);
    return y;
}

int generateCode(tnode* root){
    if(root==NULL)return -1;
    switch(root->nodetype){
        case Nassign: return genAssign(root);

        case Nconnect:{ generateCode(root->left);
                        generateCode(root->right);
                        return -1;}
        case Nvar: return genLoadvar(root);
        case Nconst: return genConst(root->val);
        case Nstr: return genLoadStrLit(root->strval);
        case Nread: {int x=genAddr(root->left);
                        genRead(x);
                        return -1;}
        case NreadArr:{
                    int x=genArrAddr(root->left);
                    genReadAddinReg(x);
                    return -1;
        }
        case Nwrite: {int x=generateCode(root->left);
                    genWrite(x);
                    return -1;}
        case Nadd: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genAdd(l,r);}
        case Nsub: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genSub(l,r);}
        case Nmul: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genMul(l,r);}
        case Ndiv: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genDiv(l,r);}
        case Nmod: {int l=generateCode(root->left);
                    int r=generateCode(root->right);
                    return genMod(l,r);}
        case Nwhile:{
                    generateWhileCode(root);
                    return -1;
        }
        case Nif_else:{
                    generateIfElseCode(root);
                    return -1;
        }
        case Nif:{
                    generateIfCode(root);
                    return -1;
        }
        case Nbreak:{
                    generateBreakCode();
                    return -1;
        }
        case Ncontinue:{
                    generateContinueCode();
                    return -1;
        }
        case Nrepeat:{
                generateRepeatCode(root);
                return -1;
        }
        case NdoWhile:{
                generateDoWhileCode(root);
                return -1;
        }
        case NArrAccess:{
            return genArrAccess(root);
        }
        case NArrAssign:{
            genAssToArr(root);
            return -1;
        }
        case Nderefer:{
            return genDerefer(root);
        }
        case NaddrTo:{
            return genAddrToCode(root);
        }
        case NassToDefer:{
            genAssignDerefer(root);
            return -1;
        }
        case NfuncCall:{
            return genFuncCall(root);
        }
        case Nreturn:{
            genFuncReturn(root);
            return -1;
        }
        case Nalloc:
            generateAlloc(root);
            break;

        case Nfree:
            generateFree(root);
            break;

        case NuserDefAcc:{
            return generateUserAcc(root);
        }
        case NUserAssg:{
            generateUserAssign(root);
            return -1;}
        case Nnull:{
            int r = getFreeRegister();
            fprintf(target, "MOV R%d, 0\n", r);
            return r;
        }
        case Nself:
            return genSelf();

        case NclassField:
            return genClassFieldAccess(root);

        case NclassFieldAssg:
            genClassFieldAssign(root);
            return -1;

        case NnewObj:
            genNewObject(root);
            return -1;

        case NdeleteObj:
            genDeleteObject(root);
            return -1;

        case NclassMethod:
            return genClassMethodCall(root);

        case NClassFuncDef:
            /* method definitions are handled by createClassMethodDef,
            which calls genFuncCode directly — nothing to do here */
            return -1;
        default: return -1;
    }
}

void generate(tnode*root){
    initializeRegisters();
    generateHeader();
    generateCode(root);
    generateExit();
}

//stage3
int generateCondCode(tnode* node){
    int l=generateCode(node->left);
    int r=generateCode(node->right);
    switch(node->nodetype){
        case Nge:{
            fprintf(target,"GE R%d, R%d\n",l,r);
            break;
        }
        case Nle:{
            fprintf(target,"LE R%d, R%d\n",l,r);
            break;
        }
        case Ngt:{
            fprintf(target,"GT R%d, R%d\n",l,r);
            break;
        }
        case Nlt:{
            fprintf(target,"LT R%d, R%d\n",l,r);
            break;
        }
        case Nne:{
            fprintf(target,"NE R%d, R%d\n",l,r);
            break;
        }
        case Neq:{
            fprintf(target,"EQ R%d, R%d\n",l,r);
            break;
        }
    }
    //fprintf(target,"JZ R%d, L%d\n",l,label);
    if(r!=-1)
    releaseRegister(r);
    return l;
}



void generateWhileCode(tnode*node){
    int cond=createNewL(),rest=createNewL();

    pushStack(cond,rest);

    fprintf(target,"L%d:\n",cond);
    int x=generateCondCode(node->left);
    fprintf(target,"JZ R%d, L%d\n",x,rest);
    releaseRegister(x);
    generateCode(node->right);
    fprintf(target,"JMP L%d\n",cond);
    fprintf(target,"L%d:\n",rest);
    popStack();
}

void generateIfElseCode(tnode*node){
    int elsek=createNewL(),rest=createNewL();
    tnode*cond=node->left,*conn=node->right,*ifn=conn->left,*elsen=conn->right;
    int x=generateCondCode(cond);
    fprintf(target,"JZ R%d, L%d\n",x,elsek);
    releaseRegister(x);
    generateCode(ifn);
    fprintf(target,"JMP L%d\n",rest);
    fprintf(target,"L%d:\n",elsek);
    generateCode(elsen);
    fprintf(target,"L%d:\n",rest);
}
void generateIfCode(tnode*node){
    int rest=createNewL();
    tnode*cond=node->left;
    tnode *ifn=node->right;
    int x=generateCondCode(cond);
    fprintf(target,"JZ R%d, L%d\n",x,rest);
    releaseRegister(x);
    generateCode(node->right);
    fprintf(target,"L%d:\n",rest);
}

void generateBreakCode(){
    LStack *temp=peekStack();
    int rest=temp->rest;
    fprintf(target,"JMP L%d\n",rest);
}
void generateContinueCode(){
    LStack *temp=peekStack();
    int loop=temp->condLabel;
    fprintf(target,"JMP L%d\n",loop);
}

void generateRepeatCode(tnode *node){
    int loop=createNewL(),rest=createNewL();
    pushStack(loop,rest);
    fprintf(target,"L%d:\n",loop);
    generateCode(node->left);
    int x=generateCondCode(node->right);
    fprintf(target,"JZ R%d, L%d\n",x,loop);
    releaseRegister(x);
    fprintf(target,"L%d:\n",rest);
    popStack();
}

void generateDoWhileCode(tnode*root){
    int loop=createNewL(),rest=createNewL();
    pushStack(loop,rest);
    fprintf(target,"L%d:\n",loop);
    generateCode(root->right);
    int x=generateCondCode(root->left);
    fprintf(target,"JNZ R%d, L%d\n",x,loop);
    releaseRegister(x);
    fprintf(target,"L%d:\n",rest);
    popStack();
}

int genArrAddr(tnode* x){
    tnode*id=x->left;
    tnode*index=x->right;
    if(id==NULL || id->Gentry==NULL){
        printf("INVALID\n");
        exit(1);
    }
    Gsymbol* entry=id->Gentry;
    int size=1;

    int baseAddr=entry->binding;
    int addrReg;
    if(entry->numdimen==1){
        int indreg=generateCode(index);
        int t=getFreeRegister();
        fprintf(target, "MOV R%d, %d\n", t, size);
        fprintf(target,"MUL R%d, R%d\n",indreg,t);
        releaseRegister(t);
        fprintf(target,"ADD R%d, %d\n",indreg,baseAddr);
        addrReg=indreg;
    }
    else if(entry->numdimen==2){
        tnode* row=index->left;
        tnode *col=index->right;
        int cols=entry->dimension[1];
        int rowReg=generateCode(row);
        fprintf(target, "MUL R%d, %d\n",rowReg,cols);
        int colReg=generateCode(col);
        fprintf(target,"ADD R%d, R%d\n",rowReg,colReg);
        releaseRegister(colReg);
        fprintf(target,"MUL R%d, %d\n",rowReg,size);
        fprintf(target,"ADD R%d, %d\n",rowReg,baseAddr);
        addrReg=rowReg;
    }
    return addrReg;
}

int genArrAccess(tnode*root){
    int index=genArrAddr(root);
    int x=getFreeRegister();
    fprintf(target,"MOV R%d, [R%d]\n",x,index);
    releaseRegister(index);
    return x;
}

void genAssToArr(tnode*root){
    int index=genArrAddr(root->left);
    int val=generateCode(root->right);
    fprintf(target,"MOV [R%d], R%d\n",index,val);
    releaseRegister(index);
    releaseRegister(val);
}

int genAddrToCode(tnode* root){
    int mem=genAddr(root->left);
    return mem;
}

int genDerefer(tnode*x){
    int free=getFreeRegister();
    int id=generateCode(x->left);
    fprintf(target,"MOV R%d, [R%d]\n",free,id);
    releaseRegister(id);
    return free;
}

void genAssignDerefer(tnode*root){
    int x=generateCode(root->left);
    int y=generateCode(root->right);
    fprintf(target,"MOV [R%d],R%d\n",x,y);
}


//stage 5

void genMain(tnode *root){
    initializeRegisters();
    fprintf(target,"Main: \n");
    fprintf(target, "PUSH BP\n");
    fprintf(target,"MOV BP, SP\n");
    fprintf(target,"ADD SP, %d\n",localbind);
    generateCode(root);
    generateExit();
}
//check
void genFuncBack(){
    fprintf(target,"SUB SP, %d\n",localbind);
    fprintf(target,"POP BP\n");
    fprintf(target,"RET\n");
}

void genFuncCode(int l, tnode*root){
    initializeRegisters();
    fprintf(target, "F%d:\n",l);
    fprintf(target,"PUSH BP\n");
    fprintf(target,"MOV BP,SP\n");
    fprintf(target,"ADD SP, %d\n",localbind);
    generateCode(root);
}

void genFuncReturn(tnode *r){
    int rreg=generateCode(r->left);
    int f=getFreeRegister();
    fprintf(target, "MOV R%d, BP\n",f);
    fprintf(target, "SUB R%d, 2\n",f);
    fprintf(target, "MOV [R%d], R%d\n",f,rreg);
    releaseRegister(rreg);
    releaseRegister(f);
    genFuncBack();
}

int genFuncCall(tnode *root){
    tnode *fname=root->left;
    tnode*argl=root->right;
    Gsymbol *x=Lookup(fname->varname);
    if(!x){
        printf("func used before declaration\n");
        exit(1);
    }
    int n=lnumParam(x->paramlist);
    int arg[n],index=0;
    genArg(argl, &index, arg);
    
    int r=getFreeRegister();
     for (int i = 0; i < 20; i++) {
        fprintf(target, "PUSH R%d\n", i);
    }
    for (int i = n-1;i>=0;i--) {
        fprintf(target,"PUSH R%d\n",arg[i]);
    }
    for(int i=0;i<n;i++)
        releaseRegister(arg[i]);
    fprintf(target, "PUSH R%d\n",r);
    fprintf(target,"CALL F%d\n",x->func);
    r=genRegainStatus(n);
    return r;
}

int genRegainStatus(int n){
    int f=getFreeRegister(),r=getFreeRegister();
    fprintf(target,"POP R%d\n",r);
    for(int i=0;i<n;i++)
        fprintf(target,"POP R%d\n",f);
    for(int i=19;i>=0;i--){
        if(i==r)
            fprintf(target, "POP R%d\n",f);
        else fprintf(target, "POP R%d\n",i);
    }
    releaseRegister(f);
    return r;
}

void genArg(tnode* argl,int *i,int arg[]){
    if(!argl)return;
    if(argl->nodetype==Nconnect){
        genArg(argl->left,i,arg);
        genArg(argl->right,i,arg);
    }
    else{
        arg[*i]=generateCode(argl);
        (*i)++;
    }
    return;
}

int genAddr(tnode *root){
    Lsymbol *l=llookup(root->varname);
    int r=getFreeRegister();
    if(!l){
        Gsymbol *g=root->Gentry;
        if(!g){
            printf("Var doesnt exist\n");
            exit(1);
        }
        fprintf(target, "MOV R%d,%d\n",r,g->binding);
        return r;
    }
    int b=l->binding;
    if(b<0){
        fprintf(target,"MOV R%d, BP\n",r);
        fprintf(target,"SUB R%d, %d\n",r,-b);
    }
    else{
        fprintf(target,"MOV R%d, BP\n",r);
        fprintf(target,"ADD R%d, %d\n",r,b+1);
    }
    return r;
}


//stage 6


void generateHeap() {
    int x = getFreeRegister();
    fprintf(target, "MOV R%d, \"%s\"\n", x, "Heapset");
    fprintf(target, "PUSH R%d\n", x);
    fprintf(target, "PUSH R%d\n", x);
    fprintf(target, "PUSH R%d\n", x);
    fprintf(target, "PUSH R%d\n", x);
    fprintf(target, "PUSH R%d\n", x);
    fprintf(target, "CALL 0\n");
    fprintf(target, "SUB SP, 5\n");
    releaseRegister(x);
}


void generateAlloc(struct tnode *node) {
    struct tnode *left = node->left;
    int nodeType = left->nodetype;

    struct TypeTable *t = node->typeTableEntry;
    int size = t->size;

    if (size <= 0 || size > 8) {
        printf("invalid size\n");
        exit(1);
    }
    int f = getFreeRegister();
    int r = getFreeRegister();

    fprintf(target, "MOV R%d, \"%s\"\n", f, "Alloc");
    fprintf(target, "PUSH R%d\n", f);
    fprintf(target, "MOV R%d, %d\n", f, size);
    fprintf(target, "PUSH R%d\n", f);
    fprintf(target, "PUSH R%d\n", f);
    fprintf(target, "PUSH R%d\n", f);
    fprintf(target, "PUSH R%d\n", f);
    fprintf(target, "CALL 0\n");

    fprintf(target, "POP R%d\n", r);
    fprintf(target, "POP R%d\n", f);
    fprintf(target, "POP R%d\n", f);
    fprintf(target, "POP R%d\n", f);
    fprintf(target, "POP R%d\n", f);

    if (nodeType == Nvar) {
        f = genAddr(left);
        fprintf(target, "MOV [R%d], R%d\n", f, r);
    } else if (nodeType == NuserDefAcc) {
        f = -1;
        struct TypeTable *type = NULL;
        findUserTypeFieldAddr(&f, left, &type);

        fprintf(target, "MOV [R%d], R%d\n", f, r);
    }

    releaseRegister(f);
    releaseRegister(r);
}


int generateUserAcc( tnode *root) {
    int x = -1;
    TypeTable *t = NULL;
    findUserTypeFieldAddr(&x, root, &t);
    fprintf(target, "MOV R%d, [R%d]\n", x, x);
    return x;
}

void generateUserAssign( tnode *root) {
     tnode *x = root->left;
    int left = -1;
     TypeTable *type = NULL;
    findUserTypeFieldAddr(&left, x, &type);

    int right = generateCode(root->right);
    fprintf(target, "MOV [R%d], R%d\n", left, right);

    releaseRegister(left);
    releaseRegister(right);
}


void findUserTypeFieldAddr(int *fieldAddrReg, struct tnode *node, struct TypeTable **activeType) {
    switch (node->nodetype) {
        case Nconnect:
        case NuserDefAcc:
            findUserTypeFieldAddr(fieldAddrReg, node->left, activeType);
            findUserTypeFieldAddr(fieldAddrReg, node->right, activeType);
            break;

        case Nvar:
            if (*fieldAddrReg == -1) {
                *activeType = node->typeTableEntry;
                char *name = node->varname;

                struct Gsymbol *globalEntry = Lookup(name);
                struct Lsymbol *localEntry = llookup(name);

                *fieldAddrReg = getFreeRegister();
                if (localEntry) {
                    int binding = localEntry->binding;
                    *fieldAddrReg = getFreeRegister();
                    fprintf(target, "MOV R%d, BP\n", *fieldAddrReg);
                    if(binding < 0){
                        fprintf(target, "SUB R%d, %d\n", *fieldAddrReg, -binding);
                    } else {
                        fprintf(target, "ADD R%d, %d\n", *fieldAddrReg, binding + 1);
                    }
                    fprintf(target, "MOV R%d, [R%d]\n", *fieldAddrReg, *fieldAddrReg);
                } else if (globalEntry) {
                    int binding = globalEntry->binding;
                    fprintf(target, "MOV R%d, %d\n", *fieldAddrReg, binding);
                    fprintf(target, "MOV R%d, [R%d]\n", *fieldAddrReg, *fieldAddrReg); 
                } else {
                    printf("error");
                }
            } else {
                struct FieldList *field = fieldlookup(*activeType, node->varname);
                *activeType = field->type;
                
                fprintf(target, "ADD R%d, %d\n", *fieldAddrReg, field->index);
            }
            break;

        default:
            printf("unhandled node in user type access helper: %d\n", node->nodetype);
            break;
    }
}


void generateFree(struct tnode *root) {
    struct tnode *idNode = root->left;

    struct Gsymbol *globalEntry = Lookup(idNode->varname);
    struct Lsymbol *localEntry = llookup(idNode->varname);

    int addrReg = getFreeRegister();
    int freeReg = getFreeRegister();

    if (localEntry) {
        fprintf(target, "MOV R%d, BP\n", addrReg);
        fprintf(target, "ADD R%d, %d\n", addrReg, localEntry->binding);
        fprintf(target, "MOV R%d, [R%d]\n", addrReg, addrReg);
    } else if (globalEntry) {
        fprintf(target, "MOV R%d, [%d]\n", addrReg, globalEntry->binding);
    } else {
        printf("variable used before declaration\n");
        exit(1);
    }

    fprintf(target, "MOV R%d, \"%s\"\n", freeReg, "Free");
    fprintf(target, "PUSH R%d\n", freeReg);
    fprintf(target, "PUSH R%d\n", addrReg);
    fprintf(target, "PUSH R%d\n", freeReg);
    fprintf(target, "PUSH R%d\n", freeReg);
    fprintf(target, "PUSH R%d\n", freeReg);
    fprintf(target, "CALL 0\n");

    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);

    releaseRegister(freeReg);
    releaseRegister(addrReg);
}


/* ================================================================
 * Class code generation
 * ================================================================ */

/* Load the self pointer (passed as first hidden parameter).
   In your calling convention, self is at BP-2 (first param slot). */
int genSelf() {
    int r = getFreeRegister();
    fprintf(target, "MOV R%d, BP\n", r);
    fprintf(target, "SUB R%d, 2\n", r);
    fprintf(target, "MOV R%d, [R%d]\n", r, r);
    return r;
}

/* Get the ADDRESS of a class field: base_ptr + field_index.
   Returns a register holding the heap address of the field. */
int genClassFieldAddr(tnode *root) {
    /* root->left  = Nself or class-object Nvar
       root->right = Nvar holding the field name */
    tnode *base  = root->left;
    tnode *fname = root->right;

    /* Get the class and field */
    Classtable *cls = root->classtableEntry;
    if (!cls) cls = base->classtableEntry;

    Fieldlist *fl = Class_Flookup(cls, fname->varname);
    if (!fl) {
        printf("genClassFieldAddr: field '%s' not found\n", fname->varname);
        exit(1);
    }

    int baseReg;
    if (base->nodetype == Nself) {
        baseReg = genSelf();
    } else {
        /* obj variable — load its heap pointer */
        baseReg = getFreeRegister();
        Gsymbol *g = Lookup(base->varname);
        if (g) {
            fprintf(target, "MOV R%d, [%d]\n", baseReg, g->binding);
        } else {
            Lsymbol *l = llookup(base->varname);
            fprintf(target, "MOV R%d, BP\n", baseReg);
            if (l->binding < 0)
                fprintf(target, "SUB R%d, %d\n", baseReg, -(l->binding));
            else
                fprintf(target, "ADD R%d, %d\n", baseReg, l->binding + 1);
            fprintf(target, "MOV R%d, [R%d]\n", baseReg, baseReg);
        }
    }

    /* offset into the heap block */
    if (fl->Fieldindex > 0)
        fprintf(target, "ADD R%d, %d\n", baseReg, fl->Fieldindex);

    return baseReg;   /* register holds the address of the field */
}

/* Load VALUE of a class field */
int genClassFieldAccess(tnode *root) {
    int addrReg = genClassFieldAddr(root);
    int valReg  = getFreeRegister();
    fprintf(target, "MOV R%d, [R%d]\n", valReg, addrReg);
    releaseRegister(addrReg);
    return valReg;
}

/* self.field = expr  (NclassFieldAssg)
   root->left  = NclassField node
   root->right = rhs expr */
void genClassFieldAssign(tnode *root) {
    int addrReg = genClassFieldAddr(root->left);
    int valReg  = generateCode(root->right);
    fprintf(target, "MOV [R%d], R%d\n", addrReg, valReg);
    releaseRegister(addrReg);
    releaseRegister(valReg);
}

/* new(ClassName) — allocate heap block of size = number of fields,
   store class index in word 0 (vtable pointer convention).
   root->left           = Nvar of the variable being assigned
   root->classtableEntry = the class */
void genNewObject(tnode *root) {
    Classtable *cls = root->classtableEntry;
    int size = cls->Fieldcount;
    if (size < 1) size = 1;   /* at least 1 word */

    int f = getFreeRegister();
    int r = getFreeRegister();

    /* call Alloc(size) */
    fprintf(target, "MOV R%d, \"Alloc\"\n", f);
    fprintf(target, "PUSH R%d\n", f);
    fprintf(target, "MOV R%d, %d\n", f, size);
    fprintf(target, "PUSH R%d\n", f);
    fprintf(target, "PUSH R%d\n", f);   /* dummy */
    fprintf(target, "PUSH R%d\n", f);   /* dummy */
    fprintf(target, "PUSH R%d\n", f);   /* return slot */
    fprintf(target, "CALL 0\n");

    /* pop result */
    fprintf(target, "POP R%d\n", r);    /* return value = heap address */
    fprintf(target, "POP R%d\n", f);
    fprintf(target, "POP R%d\n", f);
    fprintf(target, "POP R%d\n", f);
    fprintf(target, "POP R%d\n", f);

    /* store heap address into the variable */
    Gsymbol *g = root->Gentry;
    int addrReg = getFreeRegister();
    fprintf(target, "MOV R%d, %d\n", addrReg, g->binding);
    fprintf(target, "MOV [R%d], R%d\n", addrReg, r);

    releaseRegister(addrReg);
    releaseRegister(f);
    releaseRegister(r);
}

/* delete(obj) — call Free on the heap pointer stored in obj */
void genDeleteObject(tnode *root) {
    tnode *idNode = root->left;
    Gsymbol *g    = Lookup(idNode->varname);

    int ptrReg  = getFreeRegister();
    int freeReg = getFreeRegister();

    /* load the heap pointer */
    if (g) {
        fprintf(target, "MOV R%d, [%d]\n", ptrReg, g->binding);
    } else {
        Lsymbol *l = llookup(idNode->varname);
        fprintf(target, "MOV R%d, BP\n", ptrReg);
        if (l->binding < 0)
            fprintf(target, "SUB R%d, %d\n", ptrReg, -(l->binding));
        else
            fprintf(target, "ADD R%d, %d\n", ptrReg, l->binding + 1);
        fprintf(target, "MOV R%d, [R%d]\n", ptrReg, ptrReg);
    }

    /* call Free(ptr) */
    fprintf(target, "MOV R%d, \"Free\"\n", freeReg);
    fprintf(target, "PUSH R%d\n", freeReg);
    fprintf(target, "PUSH R%d\n", ptrReg);
    fprintf(target, "PUSH R%d\n", freeReg);   /* dummy */
    fprintf(target, "PUSH R%d\n", freeReg);   /* dummy */
    fprintf(target, "PUSH R%d\n", freeReg);   /* return slot */
    fprintf(target, "CALL 0\n");

    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);
    fprintf(target, "POP R%d\n", freeReg);

    releaseRegister(freeReg);
    releaseRegister(ptrReg);
}

/* obj.method(args)  (NclassMethod)
   root->left            = base (Nself or Nvar)
   root->right->left     = Nvar with method name
   root->right->right    = ArgList
   root->classtableEntry = class */
int genClassMethodCall(tnode *root) {
    tnode *base      = root->left;
    tnode *mnameNode = root->right->left;
    tnode *args      = root->right->right;

    Classtable      *cls = root->classtableEntry;
    Memberfunclist  *mfl = Class_Mlookup(cls, mnameNode->varname);
    if (!mfl) {
        printf("genClassMethodCall: method '%s' not found\n", mnameNode->varname);
        exit(1);
    }

    int n = lnumParam(mfl->paramlist);
    int arg[n > 0 ? n : 1];
    int index = 0;
    genArg(args, &index, arg);

    int retReg = getFreeRegister();

    /* save all registers */
    for (int i = 0; i < 20; i++)
        fprintf(target, "PUSH R%d\n", i);

    /* push self pointer */
    int selfReg = getFreeRegister();
    if (base->nodetype == Nself) {
        /* self inside a method: load from current frame */
        fprintf(target, "MOV R%d, BP\n", selfReg);
        fprintf(target, "SUB R%d, 2\n", selfReg);
        fprintf(target, "MOV R%d, [R%d]\n", selfReg, selfReg);
    } else {
        Gsymbol *g = Lookup(base->varname);
        if (g) {
            fprintf(target, "MOV R%d, [%d]\n", selfReg, g->binding);
        } else {
            Lsymbol *l = llookup(base->varname);
            fprintf(target, "MOV R%d, BP\n", selfReg);
            if (l->binding < 0)
                fprintf(target, "SUB R%d, %d\n", selfReg, -(l->binding));
            else
                fprintf(target, "ADD R%d, %d\n", selfReg, l->binding + 1);
            fprintf(target, "MOV R%d, [R%d]\n", selfReg, selfReg);
        }
    }
    fprintf(target, "PUSH R%d\n", selfReg);
    releaseRegister(selfReg);

    /* push user arguments (right to left) */
    for (int i = n - 1; i >= 0; i--)
        fprintf(target, "PUSH R%d\n", arg[i]);
    for (int i = 0; i < n; i++)
        releaseRegister(arg[i]);

    /* push return-value slot */
    fprintf(target, "PUSH R%d\n", retReg);

    /* call the method label */
    fprintf(target, "CALL F%d\n", mfl->Flabel);

    /* restore: pop return value, pop args+self, restore registers */
    retReg = genRegainStatus(n + 1);   /* +1 for self */
    return retReg;
}