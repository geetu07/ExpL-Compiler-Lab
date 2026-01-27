%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "ex1.h"
	#include "y.tab.h"
     int yyerror(const char *s);
	int number;

%}

%%

[0-9]+	{number = atoi(yytext); yylval.node = createConst(number,INT); return NUM;}
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

"if"	{return IFK;}
"else"	{return ELSEK;}
"then"	{return THENK;}
"endif"	{return ENDIFK;}
"while"	{return WHILEK;}
"do"	{return DOK;}
"endwhile"	{return ENDWHILEK;}

"break"	{return BREAKK;}
"continue"	{return CONTINUEK;}
"repeat"	{return REPEATK;}
"until"		{return UNTILK;}

"==" {return EQ;}
"!="	{return NE;}
">="	{return GE;}
"<="	{return LE;}
">"	{return GT;}
"<"	{return LT;}

[a-z]	{yylval.node=createVar(yytext,INT); return ID;}
[ \t\r\f\v]	{}
[()]	{return yytext[0];}
[\n]	{}
.	{printf("unknown character %s\n",yytext);exit(1);}

%%

int yywrap(void) {
	return 1;
}