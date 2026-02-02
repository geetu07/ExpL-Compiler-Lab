#ifndef EX1_H
#define EX1_H

typedef struct tnode {
    int val;	// value of a number for NUM nodes.
	int type;	//type of variable
	char* varname;	//name of a variable for ID nodes  
	int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
    char *strval;
	struct tnode *left,*right;
    struct Gsymbol *Gentry;
} tnode;


enum nodeTypes {
    Nassign,Nconnect,Nvar,Nconst,Nread,Nwrite,Nadd,Nsub,Nmul,Ndiv,
	Ngt,Nge, Nlt, Nle, Neq, Nne, Nwhile, Nif, Nif_else,Ncontinue,Nbreak,
    NdoWhile,Nrepeat, Ntype, Ndecl, Nstr, NArr, NArrAssign, NArrAccess, NreadArr
};

enum type {
    INT,
    STRING,
    BOOL,
    NONE
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


#endif