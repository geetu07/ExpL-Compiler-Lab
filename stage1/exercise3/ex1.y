%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "ex1.h"
	int yylex(void);
	int yyerror(const char *s);

	#define regIndex int
	int count=0,total=20;
	int getReg();
	int freeReg();

	regIndex codeGen(struct tnode*node);
	void generateHeader();
	void generateExit();
	void store(int x,int reg);
	void write(int r);

	FILE *target;
%}

%union{
	struct tnode *no;
	
}
%type <no> expr program
%token <no> NUM
%token PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : expr END	{
				
				generateHeader();
				store(4096,codeGen($1));
				write(4096);
				generateExit();
				printf("Done!");
				exit(0);
			}
		;

expr : PLUS expr expr		{$$ = makeOperatorNode('+',$2,$3);}
	 | MINUS expr expr  	{$$ = makeOperatorNode('-',$2,$3);}
	 | MUL expr expr	{$$ = makeOperatorNode('*',$2,$3);}
	 | DIV expr expr	{$$ = makeOperatorNode('/',$2,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 ;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
}

int getReg(){
	if(count<total){
		return count++;
	}
	printf("Out of reg");
	exit(1);
}

int freeReg(){
	if(count>0)
		return count--;
	return -1;
}

void generateHeader(){
	fprintf(target,"%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(target,"BRKP\n");
	fprintf(target,"MOV SP, %d\n",4097);
}

void generateExit(){
	int x=getReg();
	fprintf(target,"MOV R%d, \"%s\"\n",x,"Exit");
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"CALL 0\n");
	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);

	freeReg();
}

regIndex codeGen(struct tnode* node){
	if(!node)return -1;
	int left=codeGen(node->left);
	int right=codeGen(node->right);
	if(!node->op){
		int newreg=getReg();
		fprintf(target,"MOV R%d, %d\n",newreg,node->val);
		return newreg;
	}
	else if(left!=-1 && right!=-1){
		if(node->op[0]=='+'){
			fprintf(target,"ADD R%d, R%d\n",left,right);
		}
		else if(node->op[0]=='-'){
			fprintf(target,"SUB R%d, R%d\n",left,right);
		}
		else if(node->op[0]=='*'){
			fprintf(target,"MUL R%d, R%d\n",left,right);
		}
		else if(node->op[0]=='/'){
			fprintf(target,"DIV R%d, R%d\n",left,right);
		}
		freeReg();
		return left;
	}
	return -1;
}

void store(int x,int reg){
	fprintf(target,"MOV [%d], R%d\n",x,reg);
	return;
}

void write(int r){
	int x=getReg();
	fprintf(target,"MOV R%d, \"%s\"\n",x,"Write");
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"MOV R%d, %d\n",x,-2);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"MOV R%d, [%d]\n",x,r);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"PUSH R%d\n",x);
	fprintf(target,"CALL 0\n");

	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);
	fprintf(target,"POP R%d\n",x);

	freeReg();
}

int main(void) {
	target=fopen("ans.xsm","w");
	yyparse();
	
	return 0;
}