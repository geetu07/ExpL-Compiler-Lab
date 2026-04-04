#ifndef EX1_H
#define EX1_H
#include<stdbool.h>



typedef struct tnode {
    int val;	// value of a number for NUM nodes.
	int type;	//type of variable
	char* varname;	//name of a variable for ID nodes  
	int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
    char *strval;
	struct tnode *left,*right;
    struct Gsymbol *Gentry;
    struct TypeTable *typeTableEntry;
    struct Classtable *classtableEntry;
} tnode;

typedef struct Param{
    char *name;
    int type;
    struct Param * next;
    struct TypeTable *typeTableEntry;
    struct Classtable *classtableEntry;
} Param;

#include "symbol.h"

enum nodeTypes {
    Nassign,Nconnect,Nvar,Nconst,Nread,Nwrite,Nadd,Nsub,Nmul,Ndiv,
	Ngt,Nge, Nlt, Nle, Neq, Nne, Nwhile, Nif, Nif_else,Ncontinue,Nbreak,
    NdoWhile,Nrepeat, Ntype, Ndecl, Nstr, NArr, NArrAssign, NArrAccess, NreadArr,
    Nderefer, NaddrTo,NassToDefer, Nmod, Nparam, NFuncDecl, NFuncDef, Nreturn
    ,NlocalDecl,NfuncCall, Nor, Nand, NtypeParam, NUserAssg, NuserDefAcc, NuserDefParam
    , NuserDefAssg, Nalloc, Nfree,Nnull, Nself, NclassField, NclassMethod, NclassFieldAssg,
    NnewObj, NdeleteObj, NClassFuncDef, NClassDecl
};


typedef enum {
    ACCDOT,
    ACCARR
} AccessType;

enum type {
    INT,
    STRING,
    BOOL,
    NONE,
    USER_TYPE,
    CLASS_TYPE
    
};


struct tnode* createTree(int val, int type, char* c, struct tnode *l, struct tnode *r);
//struct tnode *makeLeafNode(int val);
//struct tnode *makeOperatorNode(char c, struct tnode *left, struct tnode *right);
int evaluate(struct tnode *root);
void print(struct tnode *root);
void printPrefix(struct tnode *root);
void printPostfix(struct tnode *root);

void print(tnode* root);
tnode * createConnect(tnode *l,tnode*r);
tnode * createAssign(tnode *l,tnode*r);
tnode * createWrite(tnode *t);
tnode * createRead(tnode *t);
tnode *makeOperatorNode(char s,tnode *l,tnode*r);
struct tnode* createConst(int val);

tnode* createCondition(int type,tnode*left, tnode*right);
tnode* createWhile(tnode* cond,tnode*left);
tnode* createIfElseNode(tnode* cond,tnode*left,tnode*right);
tnode* createIfNode(tnode* cond,tnode*left);

tnode* createBreak();
tnode*createContinue();
tnode *createDoWhile(tnode* stmt, tnode*cond);
tnode* createRepeat(tnode*stmt,tnode*cond);

//stage4
tnode* createDeclaration(tnode* type,tnode* var);
tnode* createType(int type);
tnode *createString(char *s);
tnode *createNewVariable(char *varName);
tnode *createVariableUsageNode(char *varname);

tnode* createArrAssign(tnode*id,tnode*index,tnode*val);
tnode *createArrayAccess(tnode *idNode, tnode *indexExprNode);
tnode* createArray(tnode* varList,tnode*id,tnode*size);
tnode* createReadArr(tnode*id, tnode*expr);

tnode *createDerefer(tnode* x);
tnode *createAddr(tnode* root);
tnode* createAssignToDeref(tnode*x, tnode*y);
tnode *createPointer(tnode*x);

tnode* createparam(tnode*type, tnode*id,bool c);
tnode * createFuncDef(tnode *r, tnode* fname, tnode*param, tnode* ldecl, tnode* func);
tnode* createFuncDecl(tnode* fname,tnode*p);
tnode *createFuncCall(tnode *funcname, tnode *arg);

tnode* createReturn(tnode *e);
bool checkargs(Param **param , tnode *argList);
tnode* createLocalDecl(tnode *type, tnode *id);
tnode* createMain(tnode*l,tnode* body);


struct tnode *createMemberAcc(struct tnode *field1Node, struct tnode *field2Node);
struct tnode *createMemAssg(struct tnode *fieldAccess, struct tnode *exprNode);
tnode* createUserType(tnode *id);
tnode* createUserAssg(tnode *access,tnode*expr);

tnode *createFree(struct tnode *id);
tnode *createAlloc(struct tnode *node) ;
tnode *createNull();


tnode *createSelf(void);
tnode *createClassFieldAccess(tnode *base, char *fname);
tnode *createClassMethodCall(tnode *base, char *mname, tnode *args);
tnode *createClassFieldAssign(tnode *lhs, tnode *rhs);
tnode *createNewObject(tnode *id, char *classname);
tnode *createDeleteObject(tnode *id);
tnode *createClassMethodDef(tnode *retType, char *mname, tnode *params,
                             tnode *ldecl, tnode *body);

#endif