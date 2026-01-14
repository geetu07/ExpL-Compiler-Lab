%{
#include <stdio.h>
#include "y.tab.h"
%}

%%
[a-zA-Z][a-zA-Z0-9]*   {yylval.str = strdup(yytext); return ID;}
.|[ \t\n]+               ;               
%%

int yywrap(){
    return 1;
}

