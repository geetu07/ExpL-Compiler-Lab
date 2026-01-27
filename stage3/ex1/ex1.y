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
%type <node> expr program stmtlist stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt
%token PLUS MINUS MUL DIV READ WRITE ASSIGN SEMICOLON GT GE LE LT EQ NE
%token ENDK BEGINK IFK THENK ELSEK ENDIFK WHILEK DOK ENDWHILEK
%token <node> ID NUM
%left PLUS MINUS
%left MUL DIV
%nonassoc GE GT LE LT NE EQ

%%

program : BEGINK stmtlist ENDK SEMICOLON	{
				ePrint($2);
				printf("Done!\n");
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
		|IfStmt {$$=$1;}
		|WhileStmt	{$$=$1;}
		;

InputStmt:	READ '(' ID ')' SEMICOLON {$$=createRead($3);}
	;
OutputStmt:	WRITE '(' expr ')' SEMICOLON {$$=createWrite($3);}
	;
AsgStmt:	ID ASSIGN expr SEMICOLON {$$=createAssign($1,$3);}
	;

IfStmt: IFK '(' expr ')' THENK stmtlist ELSEK stmtlist ENDIFK	{$$=createIfElseNode($3, $6, $8);}
		| IFK '('expr ')' THENK stmtlist ENDIFK	{$$=createIfNode($3,$6);}

WhileStmt: WHILEK '(' expr ')' DOK stmtlist ENDK	{$$=createWhile($3,$6);}

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID 			{$$=$1;}
	 | expr GE expr	{$$=createCondition(Nge,$1,$3);}
	 | expr LE expr	{$$=createCondition(Nle,$1,$3);}
	 | expr GT expr	{$$=createCondition(Ngt,$1,$3);}
	 | expr LT expr	{$$=createCondition(Nlt,$1,$3);}
	 | expr NE expr	{$$=createCondition(Nne,$1,$3);}
	 | expr EQ expr	{$$=createCondition(Neq,$1,$3);}
	 
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