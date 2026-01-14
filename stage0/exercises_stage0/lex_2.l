%{
#include <stdio.h>

int integers = 0;
int floats = 0;
%}
integer	[0-9]+
float [0-9]+\.[0-9]+

%%
{integer}            {integers++; }
{float}    {floats++;}
.	;
%%

int main() {
    yylex();
    printf("No of integers= %d and no of floats= %d\n",integers,floats);
    return 0;
}

int yywrap() {
    return 1;
}

