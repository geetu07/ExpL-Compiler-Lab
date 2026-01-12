%{
#include<stdio.h>
int ans=0;
int yylex(void);
int yyerror(char *s);

extern FILE *yyin;
%}

%token IF ELSE ID NUM

%%

start:stmt_list
	;
stmt_list: stmt| stmt_list stmt ;

stmt:IF '(' expr ')'	{ans++;
					printf("if in level %d\n",ans);}
	 stmt			{	ans--;
				}
	| IF '(' expr ')' 		{ans++;
						printf("if else in level %d\n",ans);}
		stmt ELSE stmt			{		ans--;
						}
	|';'
	;
expr: ID;

%%

int main(int argc,char *argv[]){
	yyin=fopen(argv[1],"r");
	yyparse();
	fclose(yyin);
	return 0;
}
int yyerror(char *s){
	printf("Invalid");
	return 0;
}
