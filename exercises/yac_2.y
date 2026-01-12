%{
#include<stdio.h>
int yylex(void);
int yyerror(const char *s);
%}

%union{
	char *str;
	}

%token <str> ID
%%
start: idss	
	;
idss: ID	{printf("%s ",$1);}
	| idss ID	{printf("%s ",$2);}
	;

%%
int main(){
yyparse();
return 0;
}

int yyerror(const char *s){
	printf("ERROR");
	return 0;
	}
