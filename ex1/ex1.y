%{
	#include <stdlib.h>
	#include <stdio.h>
	#include<stdbool.h>
	#include "ex1.h"
	#include "code.h"
	#include "evaluate.h"
	#include "symbol.h"
	int yylex(void);
	int yyerror(const char *s);
	extern FILE *yyin;
	extern char *yytext;

%}

%union{
	struct tnode *node;
	
}
%type <node> expr program stmtlist stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt doWhileStmt RepeatStmt declar DecList DecL Type VarList 
%token PLUS MINUS MUL DIV READ WRITE ASSIGN SEMICOLON GT GE LE LT EQ NE INTT STRINGT COMM
%token ENDK BEGINK IFK THENK ELSEK ENDIFK WHILEK DOK ENDWHILEK
%token BREAKK CONTINUEK REPEATK UNTILK DECL ENDDECL
%token <node> ID NUM STRING_LITERAL
%left PLUS MINUS
%left MUL DIV
%nonassoc GE GT LE LT NE EQ

%%

program : BEGINK declar stmtlist ENDK SEMICOLON	{
				$$=createConnect($2,$3);
				generate($3);
				printf("Done!\n");
				exit(0);
			}
			| BEGINK ENDK SEMICOLON	{printf("Done!");$$=NULL;}
		;

declar: DECL ENDDECL	{$$=NULL;}
		| DECL DecList ENDDECL	{
			addToST($2);
			printSymbolTable();
		}
		;

DecList: DecList DecL	{$$=createConnect($1,$2);}
		|DecL	{$$=$1;}
		;

DecL: Type VarList SEMICOLON	{$$=createDeclaration($1,$2);}
		;

Type : INTT 	{$$=createType(INT);}
	| STRINGT	{$$=createType(STRING);}
	;

VarList : VarList COMM ID 	{$$=createConnect($1,$3);}
		| VarList COMM ID '[' NUM ']' '[' NUM ']'	{$$=createArray($1,$3,createConnect($5,$8));}
		| VarList COMM ID '[' NUM ']'	{$$=createArray($1,$3,$5);}
		| ID '[' NUM ']' '['NUM ']'	{$$=createArray(NULL,$1,createConnect($3,$6));}
		| ID '[' NUM ']'	{$$=createArray(NULL,$1,$3);}
		| ID	{$$=$1;}
		;

stmtlist: stmtlist stmt { $$=createConnect($1,$2);}
			|stmt {$$=$1;}
			;

stmt:	InputStmt {$$=$1;}
		| OutputStmt {$$=$1;}
		| AsgStmt {$$=$1;}
		|IfStmt {$$=$1;}
		|WhileStmt	{$$=$1;}
		|BREAKK SEMICOLON	{$$=createBreak();}
		|CONTINUEK SEMICOLON	{$$=createContinue();}
		|doWhileStmt	{$$=$1;}
		|RepeatStmt	{$$=$1;}
		;

InputStmt:	READ '(' ID ')' SEMICOLON {$$=createRead($3);}
		| READ '(' ID '[' expr ']' ')' SEMICOLON	{$$=createReadArr($3,$5);}
		| READ '(' ID '[' expr ']' '[' expr']' ')' SEMICOLON	{$$=createReadArr($3,createConnect($5,$8));}
	;
OutputStmt:	WRITE '(' expr ')' SEMICOLON {$$=createWrite($3);}
	;
AsgStmt:ID ASSIGN expr SEMICOLON {$$=createAssign($1,$3);}
		| ID '[' expr ']' ASSIGN expr SEMICOLON {$$=createArrAssign($1,$3,$6);}
		| ID '[' expr ']' '['expr ']' ASSIGN expr SEMICOLON {$$=createArrAssign($1,createConnect($3,$6),$9);}
	;

IfStmt: IFK '(' expr ')' THENK stmtlist ELSEK stmtlist ENDIFK	{$$=createIfElseNode($3, $6, $8);}
		| IFK '('expr ')' THENK stmtlist ENDIFK	{$$=createIfNode($3,$6);}
		;

WhileStmt: WHILEK '(' expr ')' DOK stmtlist ENDWHILEK	{$$=createWhile($3,$6);}
		;

RepeatStmt:	REPEATK stmtlist UNTILK '(' expr ')' SEMICOLON {$$=createRepeat($2,$5);}
		;
doWhileStmt: DOK stmtlist WHILEK '(' expr ')' SEMICOLON	{$$=createDoWhile($2,$5);}

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID 			{$$=createVariableUsageNode($1->varname);}
	 |STRING_LITERAL	{$$=$1;}
	 | expr GE expr	{$$=createCondition(Nge,$1,$3);}
	 | expr LE expr	{$$=createCondition(Nle,$1,$3);}
	 | expr GT expr	{$$=createCondition(Ngt,$1,$3);}
	 | expr LT expr	{$$=createCondition(Nlt,$1,$3);}
	 | expr NE expr	{$$=createCondition(Nne,$1,$3);}
	 | expr EQ expr	{$$=createCondition(Neq,$1,$3);}
	 | ID '['expr ']'	{$$=createArrayAccess($1,$3);}
	 | ID '['expr ']' '[' expr ']'	{$$=createArrayAccess($1,createConnect($3,$6));}
	 ;

%%

int yyerror(char const *s)
{
	extern int linecount;
    printf("yyerror %s at line %d near token %s\n",s,linecount,yytext);
}

int main(void) {
	FILE *s=fopen("input.txt","r");
	
	yyin=s;
	yyparse();
	
	return 0;
}
