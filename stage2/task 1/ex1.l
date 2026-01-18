%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "ex1.h"
     int yyerror(const char *s);
	int number;

%}

%%

[0-9]+	{number = atoi(yytext); yylval.no = createNum(number); return NUM;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"="	{return ASSIGN;}
";"	{return SEMICOLON;}

"begin" {return BEGINK;}
"end"	{return ENDK;}
"read"	{return READ;}
"write"	{return WRITE;}
[a-z]	{yylval.no=createVar(yytext); return ID;}
[ \t\r\f\v]	{}
[()]	{return *yytext;}
[\n]	{}
.	{yyerror("unknown character\n");exit(1);}

%%

int yywrap(void) {
	return 1;
}