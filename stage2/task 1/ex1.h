typedef struct tnode {
    int val;	// value of a number for NUM nodes.
	int type;	//type of variable
	char* varname;	//name of a variable for ID nodes  
	int nodetype;  // information about non-leaf nodes - read/write/connector/+/* etc.  
	struct tnode *left,*right;
} tnode;


enum nodeTypes {
    Nassign,Nconnect,Nvar,Nconst,Nread,Nwrite,Nadd,Nsub,Nmul,Ndiv
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
struct tnode* createVar(char *name);
struct tnode* createNum(int val);
