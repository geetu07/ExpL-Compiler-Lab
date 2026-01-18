%{
	#include <stdlib.h>
	#include <stdio.h>
	#include<stdbool.h>
	#include "ex1.h"
	#include "code.h"
	#include "evaluate.h"
	int yylex(void);
	int yyerror(const char *s);
	extern FILE *yyin;
%}

%union{
	struct tnode *node;
	
}
%type <node> expr program stmtlist stmt InputStmt OutputStmt AsgStmt
%token PLUS MINUS MUL DIV ENDK BEGINK READ WRITE ASSIGN SEMICOLON
%token <node> ID NUM
%left PLUS MINUS
%left MUL DIV

%%

program : BEGINK stmtlist ENDK SEMICOLON	{
				ePrint($2);
				printf("Done!");
				exit(0);
			}
			| BEGINK ENDK SEMICOLON	{printf("Done!");$$=NULL;}
		;

stmtlist: stmtlist stmt { $$=createConnect($1,$2);}
			|stmt {$$=$1;}
			;
stmt:	InputStmt {$$=$1;}
		| OutputStmt {$$=$1;}
		| AsgStmt {$$=$1;}
		;

InputStmt:	READ '(' ID ')' SEMICOLON {$$=createRead($3);}
	;
OutputStmt:	WRITE '(' expr ')' SEMICOLON {$$=createWrite($3);}
	;
AsgStmt:	ID ASSIGN expr SEMICOLON {$$=createAssign($1,$3);}
	;

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID 			{$$=$1;}
	 ;

%%

int yyerror(char const *s)
{
    printf("yyerror %s",s);
}

int main(void) {
	FILE *s=fopen("input.txt","r");
	
	yyin=s;
	yyparse();
	
	return 0;
}