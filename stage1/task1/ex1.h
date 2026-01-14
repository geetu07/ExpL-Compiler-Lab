typedef struct tnode {
    int val;
    char *op;
    int flag;
    int regNo;
    struct tnode *left;
    struct tnode *right;
} tnode;

struct tnode *makeLeafNode(int val);
struct tnode *makeOperatorNode(char c, struct tnode *left, struct tnode *right);
int evaluate(struct tnode *root);
void print(struct tnode *root);