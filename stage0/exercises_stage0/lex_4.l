%{
#include <stdio.h>
extern FILE *yyin;
%}

%%
"//".*            {printf("%s\n",yytext); }
"/*"([^*]|\*+[^*/])*\*+"/"    {printf("%s\n",yytext);}
.|\n	;
%%

int main(int argc,char *argv[]){
    if(argc>1)
        yyin=fopen(argv[1],"r");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}

