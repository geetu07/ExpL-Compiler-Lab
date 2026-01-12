%{
#include <stdio.h>
#include<ctype.h>
#include<string.h>
char words[100][10];
int x=0;
%}

%%
[A][A-Za-z][A-Za-z]	     {
				for(int i=0;i<yyleng;i++){
					yytext[i]=toupper(yytext[i]);
				}
				strcpy(words[x],yytext);
				x++;
			}
[ \t\n]+	;
.	;
%%

int main() {
    yylex();
    for(int i=0;i<x;i++)
    	printf("%s ",words[i]);
    printf("\n");
    return 0;
}

int yywrap() {
    return 1;
}

