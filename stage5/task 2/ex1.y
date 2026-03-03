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
%type <node> expr program stmtlist stmt InputStmt OutputStmt AsgStmt IfStmt WhileStmt doWhileStmt RepeatStmt Type
%token PLUS MINUS MUL DIV READ WRITE ASSIGN SEMICOLON GT GE LE LT EQ NE INTT STRINGT COMM AMP MOD
%token ENDK BEGINK IFK THENK ELSEK ENDIFK WHILEK DOK ENDWHILEK RETURN_K LBRACE RBRACE
%token BREAKK CONTINUEK REPEATK UNTILK DECL ENDDECL OR AND MAINK
%token <node> ID NUM STRING_LITERAL
%type<node> param paramlist MainBlock Body returnstmt
%type <node> GDeclBlock GDecL GDecList GVarList Fdef FdefBlock LdeclBlock LDecl LDecList IdList 
%type <node> ArgList funcdeclparam funcdeclparamlist boolexpr funcCall
%left OR
%left AND
%nonassoc GE GT LE LT NE EQ
%left PLUS MINUS
%left MUL DIV MOD


%%

program : GDeclBlock FdefBlock MainBlock	{
				//$$=createConnect($2,$3);
				//generate($3);
				printf("Done!\n");
				exit(0);
			}
			| GDeclBlock MainBlock	{printf("Done!");$$=NULL;}
			| MainBlock
		;

GDeclBlock: DECL ENDDECL	{$$=NULL;}
		| DECL GDecList ENDDECL	{
			addToST($2);
			printSymbolTable();
			$$=$2;
		}
		;

GDecList: GDecList GDecL	{$$=createConnect($1,$2);}
		|GDecL	{$$=$1;}
		;

GDecL: Type GVarList SEMICOLON	{$$=createDeclaration($1,$2);}
		;

Type : INTT 	{$$=createType(INT);}
	| STRINGT	{$$=createType(STRING);}
	;

GVarList : GVarList COMM ID 	{$$=createConnect($1,$3);}
		| GVarList COMM ID '[' NUM ']' '[' NUM ']'	{$$=createArray($1,$3,createConnect($5,$8));}
		| GVarList COMM ID '[' NUM ']'	{$$=createArray($1,$3,$5);}
		| GVarList COMM MUL ID	{$$=createConnect($1,createPointer($4));}
		| ID '[' NUM ']' '['NUM ']'	{$$=createArray(NULL,$1,createConnect($3,$6));}
		| ID '[' NUM ']'	{$$=createArray(NULL,$1,$3);}
		| ID	{$$=$1;}
		|MUL ID	{$$=createPointer($2);}
		| GVarList COMM ID '(' funcdeclparamlist ')'	{$$=createConnect($1,createFuncDecl($3,$5));}
		| ID '(' funcdeclparamlist ')'	{$$=createFuncDecl($1,$3);}
		;

funcdeclparamlist: funcdeclparamlist COMM funcdeclparam 	{$$=createConnect($1,$3);}
				| funcdeclparam	{$$=$1;}
				|	{$$=NULL;}
				;

funcdeclparam:Type ID	{$$=createparam($1,$2,false);}
			;

FdefBlock: FdefBlock Fdef	{$$=createConnect($1,$2);}
		| Fdef	{$$=$1;}
		;

Fdef: Type ID '(' paramlist ')' {currfunc=Lookup($2->varname);} LBRACE LdeclBlock Body RBRACE		{$$=createFuncDef($1,$2,$4,$8,$9);}
	;

paramlist: paramlist COMM param		{ $$ = createConnect($1, $3); }
			|param	{$$=$1;}
			|	{$$=NULL;}
			;
param: Type ID	{$$=createparam($1,$2,true);}
		;

LdeclBlock: DECL LDecList ENDDECL	{$$=$2;}
			| DECL ENDDECL	{$$=NULL;}
			;

LDecList: LDecList LDecl	{$$=createConnect($1,$2);}
		| LDecl	{$$=$1;}
	
LDecl:	Type IdList SEMICOLON	{$$=createLocalDecl($1,$2);}
		;

IdList: IdList COMM ID	{$$=createConnect($1,$3);}
		| ID	{$$=$1;}
		;

Body: BEGINK stmtlist ENDK	{$$=$2;}
	;

ArgList: ArgList COMM expr	{$$=createConnect($1,$3);}
		| expr 	{$$=$1;}
		;

returnstmt: RETURN_K expr	{$$=createReturn($2);}

MainBlock: INTT MAINK '(' ')' LBRACE LdeclBlock Body RBRACE {$$=createMain($6,$7);}
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
		|returnstmt SEMICOLON	{$$=$1;}
		| funcCall SEMICOLON	{$$=$1;}
		;

funcCall: ID '(' ')'	{$$=createFuncCall($1,NULL);}
		|ID '(' ArgList ')'	{$$=createFuncCall($1,$3);}

InputStmt:	READ '(' ID ')' SEMICOLON {$$=createRead($3);}
		| READ '(' ID '[' expr ']' ')' SEMICOLON	{$$=createReadArr($3,$5);}
		| READ '(' ID '[' expr ']' '[' expr']' ')' SEMICOLON	{$$=createReadArr($3,createConnect($5,$8));}
	;
OutputStmt:	WRITE '(' expr ')' SEMICOLON {$$=createWrite($3);}
	;
AsgStmt:ID ASSIGN expr SEMICOLON {$$=createAssign($1,$3);}
		| ID '[' expr ']' ASSIGN expr SEMICOLON {$$=createArrAssign($1,$3,$6);}
		| ID '[' expr ']' '['expr ']' ASSIGN expr SEMICOLON {$$=createArrAssign($1,createConnect($3,$6),$9);}
		| MUL ID ASSIGN expr SEMICOLON	{$$=createAssignToDeref($2,$4);}
	;

IfStmt: IFK '(' boolexpr ')' THENK stmtlist ELSEK stmtlist ENDIFK	{$$=createIfElseNode($3, $6, $8);}
		| IFK '('boolexpr ')' THENK stmtlist ENDIFK	{$$=createIfNode($3,$6);}
		;

WhileStmt: WHILEK '(' boolexpr ')' DOK stmtlist ENDWHILEK	{$$=createWhile($3,$6);}
		;

RepeatStmt:	REPEATK stmtlist UNTILK '(' boolexpr ')' SEMICOLON {$$=createRepeat($2,$5);}
		;
doWhileStmt: DOK stmtlist WHILEK '(' boolexpr ')' SEMICOLON	{$$=createDoWhile($2,$5);}
		;

expr : expr PLUS expr		{$$ = makeOperatorNode('+',$1,$3);}
	 | expr MINUS expr  	{$$ = makeOperatorNode('-',$1,$3);}
	 | expr MUL expr	{$$ = makeOperatorNode('*',$1,$3);}
	 | expr DIV expr	{$$ = makeOperatorNode('/',$1,$3);}
	 | expr MOD expr	{$$ = makeOperatorNode('%',$1,$3);}
	 | '(' expr ')'		{$$ = $2;}
	 | NUM			{$$ = $1;}
	 | ID 			{$$=createVariableUsageNode($1->varname);}
	 |STRING_LITERAL	{$$=$1;}
	 | ID '['expr ']'	{$$=createArrayAccess($1,$3);}
	 | ID '['expr ']' '[' expr ']'	{$$=createArrayAccess($1,createConnect($3,$6));}
	 | MUL ID	{$$=createDerefer($2);}
	 | AMP ID	{$$=createAddr($2);}
	 | funcCall	{$$=$1;}
	 ;

boolexpr: expr GE expr	{$$=createCondition(Nge,$1,$3);}
	 | expr LE expr	{$$=createCondition(Nle,$1,$3);}
	 | expr GT expr	{$$=createCondition(Ngt,$1,$3);}
	 | expr LT expr	{$$=createCondition(Nlt,$1,$3);}
	 | expr NE expr	{$$=createCondition(Nne,$1,$3);}
	 | expr EQ expr	{$$=createCondition(Neq,$1,$3);}
	 | boolexpr OR boolexpr	{$$=createCondition(Nor,$1,$3);}
	 | boolexpr AND boolexpr	{$$=createCondition(Nand,$1,$3);}
	 | '(' boolexpr ')'	{$$=$2;}
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
