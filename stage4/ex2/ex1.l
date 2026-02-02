%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "ex1.h"
	#include "y.tab.h"
     int yyerror(const char *s);
	int number;
	int linecount=0;

%}

%%

[0-9]+	{number = atoi(yytext); yylval.node = createConst(number); return NUM;}
\"[^\n]*\" {
    yylval.node = createString(yytext);
    return STRING_LITERAL;
}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
"%"	{return MOD;}
"="	{return ASSIGN;}
";"	{return SEMICOLON;}
"&"	{return AMP;}

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

"int"	{return INTT;}
"str"	{return STRINGT;}
"decl"	{return DECL;}
"enddecl"	{return ENDDECL;}

"==" {return EQ;}
"!="	{return NE;}
">="	{return GE;}
"<="	{return LE;}
">"	{return GT;}
"<"	{return LT;}
","	{return COMM;}


[a-zA-Z][0-9a-zA-Z]*	{yylval.node=createNewVariable(yytext); return ID;}
[ \t\r\f\v]	{}
[()\[\]]	{return yytext[0];}
[\n]	{linecount++;}
.	{printf("unknown character %s\n",yytext);exit(1);}

%%

int yywrap(void) {
	return 1;
}