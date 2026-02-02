%{
    #include <stdio.h>
    #include <string.h>
    #include "label.h"

    int addr = 2056;
    int pass=1;

    FILE *translatedFile;
%}

%option noinput
%option nounput

number [0-9]+
reg R{number}
label_value L{number}

label_header {label_value}:\n

jz_instruction (JZ[ ]{reg},[ ]{label_value}\n)
jnz_instruction (JNZ[ ]{reg},[ ]{label_value}\n)
jmp_instruction (JMP[ ]{label_value}\n)
call_instruction (CALL[ ]{label_value}\n)

header (0\n{number}\n0\n0\n0\n0\n0\n0\n)

%%

{header} { if(pass == 2) 
        fprintf(translatedFile,"%s",yytext); 
    }

{label_header} {
    if (pass == 1){
        char labelName[yyleng];
        sscanf(yytext, "%s:",labelName);
        labelName[strlen(labelName)-1]='\0';
        addnewl(labelName, addr);
    }
}

JZ[ ]{reg},[ ]{label_value}\n {
    if (pass==1){
        addr+=2;
    } else if(pass==2){
        char reg[5],labelName[yyleng + 5];
        sscanf(yytext,"JZ %s %s",reg,labelName);
        int memAddr = getmemAddrL(labelName);
        fprintf(translatedFile, "JZ %s %d\n", reg, memAddr);
    }
}

JNZ[ ]{reg},[ ]{label_value}\n {
    if (pass==1){
        addr+=2;
    } else if(pass==2){
        char reg[5],labelName[yyleng];
        sscanf(yytext,"JNZ %s %s",reg,labelName);

        int memAddr=getmemAddrL(labelName);
        fprintf(translatedFile,"JNZ %s %d\n",reg,memAddr);
    }
}

JMP[ ]{label_value}\n {
    if (pass==1){
        addr+=2;
    } else if(pass==2){
        char labelName[yyleng];
        sscanf(yytext,"JMP %s", labelName);
        int memAddr=getmemAddrL(labelName);
        fprintf(translatedFile,"JMP %d\n",memAddr);
    }
}

CALL[ ]{label_value}\n {
    if (pass==1) {
        addr+=2;
    } else if(pass==2) {
        char labelName[yyleng];
        sscanf(yytext,"CALL %s",labelName);
        int memAddr=getmemAddrL(labelName);
        fprintf(translatedFile,"CALL %d\n",memAddr);
    }
}

.*\n {
    if(pass==2){
        fprintf(translatedFile,"%s",yytext);
    }
    else addr+=2;
}

%%

int yywrap() {
    if (pass == 1) {
        rewind(yyin);
        pass++;
        return 0;
    } else {
        return 1;
    }
}

int main() {
    yyin = fopen("ans.xsm", "r");
    translatedFile = fopen("intermediate.xsm", "w");
    yylex();

    return 0;
}