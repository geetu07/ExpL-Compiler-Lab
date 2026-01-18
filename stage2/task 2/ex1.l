%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "ex1.h"
	#include "y.tab.h"
     int yyerror(const char *s);
	int number;

%}

%%

[0-9]+	{number = atoi(yytext); yylval.node = createNum(number); return NUM;}
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
[a-z]	{yylval.node=createVar(yytext); return ID;}
[ \t\r\f\v]	{}
[()]	{return yytext[0];}
[\n]	{}
.	{printf("unknown character %s\n",yytext);exit(1);}

%%

int yywrap(void) {
	return 1;
}