%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <stdbool.h>
	#include<string.h>
	#include "ex1.h"
	#include "code.h"
	#include "evaluate.h"
	#include "symbol.h"
	#include "class.h"
	int yylex(void);
	int yyerror(const char *s);
	extern FILE *yyin;
	extern char *yytext;

	static Param *classMParams = NULL;
%}

%union{
	struct tnode *node;
	FieldList *field;
}

%type <node> expr program stmtlist stmt InputStmt OutputStmt AsgStmt
%type <node> IfStmt WhileStmt doWhileStmt RepeatStmt Type
%type <node> param paramlist MainBlock Body returnstmt allocStmt freeStmt
%type <node> GDeclBlock GDecL GDecList GVarList
%type <node> Fdef FdefBlock LdeclBlock LDecl LDecList IdList
%type <node> ArgList funcdeclparam funcdeclparamlist boolexpr funcCall
%type <node> dotAccess
%type <field> typefield typefieldL

%type <node> ClassDefBlock ClassDefList ClassDef
%type <node> ClassFieldDeclList ClassFieldDecl
%type <node> ClassMethodDeclList ClassMethodDecl
%type <node> ClassMethodDefList ClassMethodDef
%type <node> newStmt deleteStmt

%token PLUS MINUS MUL DIV READ WRITE ASSIGN SEMICOLON GT GE LE LT EQ NE
%token INTT STRINGT COMM AMP MOD ALLOC FREE NULLk
%token ENDK BEGINK IFK THENK ELSEK ENDIFK WHILEK DOK ENDWHILEK
%token RETURN_K LBRACE RBRACE
%token BREAKK CONTINUEK REPEATK UNTILK DECL ENDDECL OR AND MAINK
%token TYPE_start TYPE_end DOT ARROW
%token NEWK DELETEK SELFK CLASSK ENDCLASSK EXTENDSK

%token <node> ID NUM STRING_LITERAL

%left OR
%left AND
%nonassoc GE GT LE LT NE EQ
%left PLUS MINUS
%left MUL DIV MOD

%%


program
	: typedefBl ClassDefBlock GDeclBlock FdefBlock MainBlock
		{ printf("Done!\n"); exit(0); }
	| typedefBl GDeclBlock FdefBlock MainBlock
		{ printf("Done!\n"); exit(0); }
	| ClassDefBlock GDeclBlock FdefBlock MainBlock
		{ printf("Done!\n"); exit(0); }
	| ClassDefBlock GDeclBlock MainBlock          /* <-- ADD THIS */
        { printf("Done!\n"); exit(0); }
	| GDeclBlock FdefBlock MainBlock
		{ printf("Done!\n"); exit(0); }
	| GDeclBlock MainBlock
		{ printf("Done!"); $$=NULL; }
	| typedefBl GDeclBlock MainBlock
		{ printf("Done!\n"); exit(0); }
	| MainBlock
	;


typedefBl
	: TYPE_start typedefList TYPE_end  { printType(); }
	| TYPE_start TYPE_end
	;

typedefList
	: typedefList typedef
	| typedef
	;

typedef
	: ID { createNewType($1->varname); } LBRACE typefieldL RBRACE
		{ setFieldsOfType($1->varname,$4); }
	;

typefieldL
	: typefieldL typefield  { $$=mergerField($1,$2); }
	| typefield             { $$=$1; }
	;

typefield
	: INTT    ID SEMICOLON  { $$=createTypeFieldE($2->varname,typeLookup("INT")); }
	| STRINGT ID SEMICOLON  { $$=createTypeFieldE($2->varname,typeLookup("STRING")); }
	| ID      ID SEMICOLON  { $$=createTypeFieldE($2->varname,typeLookup($1->varname)); }
	;


ClassDefBlock
	: CLASSK ClassDefList ENDCLASSK  { $$=$2; printClassTable(); }
	;

ClassDefList
	: ClassDefList ClassDef  { $$=createConnect($1,$2); }
	| ClassDef               { $$=$1; }
	;

ClassDef
	: ID
		{ currClass = CInstall($1->varname, NULL); }
	  LBRACE DECL
		ClassFieldDeclList
		ClassMethodDeclList
	  ENDDECL
		ClassMethodDefList
	  RBRACE
		{ $$=NULL; currClass=NULL; }
	;

ClassFieldDeclList
	: ClassFieldDeclList ClassFieldDecl  { $$=createConnect($1,$2); }
	| /* empty */                        { $$=NULL; }
	;

ClassFieldDecl
	: INTT    ID SEMICOLON
		{ Class_Finstall(currClass,"INT",$2->varname);       $$=NULL; }
	| STRINGT ID SEMICOLON
		{ Class_Finstall(currClass,"STRING",$2->varname);    $$=NULL; }
	| ID      ID SEMICOLON
		{ Class_Finstall(currClass,$1->varname,$2->varname); $$=NULL; }
	;

ClassMethodDeclList
	: ClassMethodDeclList ClassMethodDecl  { $$=createConnect($1,$2); }
	| ClassMethodDecl                      { $$=$1; }
	;

ClassMethodDecl
	: INTT    ID '(' classDeclParamList ')' SEMICOLON
		{
			Class_Minstall(currClass,$2->varname,typeLookup("INT"),classMParams);
			classMParams=NULL; $$=NULL;
		}
	| STRINGT ID '(' classDeclParamList ')' SEMICOLON
		{
			Class_Minstall(currClass,$2->varname,typeLookup("STRING"),classMParams);
			classMParams=NULL; $$=NULL;
		}
	| ID      ID '(' classDeclParamList ')' SEMICOLON
		{
			TypeTable *rt=typeLookup($1->varname);
			if(!rt){printf("Unknown return type '%s'\n",$1->varname);exit(1);}
			Class_Minstall(currClass,$2->varname,rt,classMParams);
			classMParams=NULL; $$=NULL;
		}
	;

classDeclParamList
	: classDeclParamList COMM classDeclParam
	| classDeclParam
	| /* empty */
	;

classDeclParam
	: INTT ID
		{
			Param *p=(Param*)malloc(sizeof(Param));
			p->name=(char*)malloc(strlen($2->varname)+1);
			strcpy(p->name,$2->varname);
			p->type=INT; p->typeTableEntry=NULL; p->classtableEntry=NULL; p->next=NULL;
			if(!classMParams){ classMParams=p; }
			else{ Param *h=classMParams; while(h->next)h=h->next; h->next=p; }
		}
	| STRINGT ID
		{
			Param *p=(Param*)malloc(sizeof(Param));
			p->name=(char*)malloc(strlen($2->varname)+1);
			strcpy(p->name,$2->varname);
			p->type=STRING; p->typeTableEntry=NULL; p->classtableEntry=NULL; p->next=NULL;
			if(!classMParams){ classMParams=p; }
			else{ Param *h=classMParams; while(h->next)h=h->next; h->next=p; }
		}
	| ID ID
		{
			Param *p=(Param*)malloc(sizeof(Param));
			p->name=(char*)malloc(strlen($2->varname)+1);
			strcpy(p->name,$2->varname);
			p->type=USER_TYPE; p->typeTableEntry=typeLookup($1->varname);
			p->classtableEntry=NULL; p->next=NULL;
			if(!classMParams){ classMParams=p; }
			else{ Param *h=classMParams; while(h->next)h=h->next; h->next=p; }
		}
	;

ClassMethodDefList
	: ClassMethodDefList ClassMethodDef  { $$=createConnect($1,$2); }
	| ClassMethodDef                     { $$=$1; }
	;
ClassMethodDef
    : INTT ID '(' paramlist ')'
        {
            Memberfunclist *mfl = Class_Mlookup(currClass, $2->varname);
            if (!mfl) { printf("Method '%s' not declared\n", $2->varname); exit(1); }
            linstall("self", CLASS_TYPE, true, NULL);

            /* FIX: synthesize a temporary Gsymbol so createReturn can check type */
            currfunc = (Gsymbol *)malloc(sizeof(Gsymbol));
            currfunc->type = INT;
            currfunc->name = $2->varname;
            currfunc->paramlist = NULL;
        }
      LBRACE LdeclBlock Body RBRACE
        { $$ = createClassMethodDef(createType(INT), $2->varname, $4, $8, $9); }

    | STRINGT ID '(' paramlist ')'
        {
            Memberfunclist *mfl = Class_Mlookup(currClass, $2->varname);
            if (!mfl) { printf("Method '%s' not declared\n", $2->varname); exit(1); }
            linstall("self", CLASS_TYPE, true, NULL);

            /* FIX */
            currfunc = (Gsymbol *)malloc(sizeof(Gsymbol));
            currfunc->type = STRING;
            currfunc->name = $2->varname;
            currfunc->paramlist = NULL;
        }
      LBRACE LdeclBlock Body RBRACE
        { $$ = createClassMethodDef(createType(STRING), $2->varname, $4, $8, $9); }

    | ID ID '(' paramlist ')'
        {
            Memberfunclist *mfl = Class_Mlookup(currClass, $2->varname);
            if (!mfl) { printf("Method '%s' not declared\n", $2->varname); exit(1); }
            linstall("self", CLASS_TYPE, true, NULL);

            /* FIX */
            currfunc = (Gsymbol *)malloc(sizeof(Gsymbol));
            currfunc->type = (strcmp($1->varname,"INT")==0) ? INT :
                             (strcmp($1->varname,"STRING")==0) ? STRING : USER_TYPE;
            currfunc->name = $2->varname;
            currfunc->paramlist = NULL;
        }
      LBRACE LdeclBlock Body RBRACE
        {
            TypeTable *rt = typeLookup($1->varname);
            if (!rt) { printf("Unknown return type '%s'\n", $1->varname); exit(1); }
            int rtype = (strcmp($1->varname,"INT")==0) ? INT :
                        (strcmp($1->varname,"STRING")==0) ? STRING : USER_TYPE;
            $$ = createClassMethodDef(createType(rtype), $2->varname, $4, $8, $9);
        }
    ;


GDeclBlock
	: DECL ENDDECL
		{ $$=NULL; }
	| DECL GDecList ENDDECL
		{ addToST($2); printSymbolTable(); $$=$2; }
	;

GDecList
	: GDecList GDecL  { $$=createConnect($1,$2); }
	| GDecL           { $$=$1; }
	;

GDecL
	: Type GVarList SEMICOLON
		{ $$=createDeclaration($1,$2); }
	;

Type
	: INTT    { $$=createType(INT); }
	| STRINGT { $$=createType(STRING); }
	| ID
		{
			Classtable *cls=CLookup($1->varname);
			if(cls){
				tnode *t=(tnode*)malloc(sizeof(tnode));
				t->nodetype=Ntype; t->type=CLASS_TYPE;
				t->left=t->right=NULL;
				t->typeTableEntry=NULL;
				t->classtableEntry=cls;
				t->varname=NULL;
				$$=t;
			} else {
				$$=createUserType($1);
			}
		}
	;

GVarList
	: GVarList COMM ID                           { $$=createConnect($1,$3); }
	| GVarList COMM ID '[' NUM ']' '[' NUM ']'   { $$=createArray($1,$3,createConnect($5,$8)); }
	| GVarList COMM ID '[' NUM ']'               { $$=createArray($1,$3,$5); }
	| GVarList COMM MUL ID                       { $$=createConnect($1,createPointer($4)); }
	| ID '[' NUM ']' '[' NUM ']'                 { $$=createArray(NULL,$1,createConnect($3,$6)); }
	| ID '[' NUM ']'                             { $$=createArray(NULL,$1,$3); }
	| ID                                         { $$=$1; }
	| MUL ID                                     { $$=createPointer($2); }
	| GVarList COMM ID '(' funcdeclparamlist ')' { $$=createConnect($1,createFuncDecl($3,$5)); }
	| ID '(' funcdeclparamlist ')'               { $$=createFuncDecl($1,$3); }
	;

funcdeclparamlist
	: funcdeclparamlist COMM funcdeclparam  { $$=createConnect($1,$3); }
	| funcdeclparam                         { $$=$1; }
	| /* empty */                           { $$=NULL; }
	;

funcdeclparam
	: Type ID  { $$=createparam($1,$2,false); }
	;



FdefBlock
	: FdefBlock Fdef  { $$=createConnect($1,$2); }
	| Fdef            { $$=$1; }
	;

Fdef
	: Type ID '(' paramlist ')' { currfunc=Lookup($2->varname); }
	  LBRACE LdeclBlock Body RBRACE
		{ $$=createFuncDef($1,$2,$4,$8,$9); }
	;

paramlist
	: paramlist COMM param  { $$=createConnect($1,$3); }
	| param                 { $$=$1; }
	| /* empty */           { $$=NULL; }
	;

param
	: Type ID  { $$=createparam($1,$2,true); }
	;

LdeclBlock
	: DECL LDecList ENDDECL  { $$=$2; }
	| DECL ENDDECL           { $$=NULL; }
	;

LDecList
	: LDecList LDecl  { $$=createConnect($1,$2); }
	| LDecl           { $$=$1; }
	;

LDecl
	: Type IdList SEMICOLON  { $$=createLocalDecl($1,$2); }
	;

IdList
	: IdList COMM ID  { $$=createConnect($1,$3); }
	| ID              { $$=$1; }
	;

Body
	: BEGINK stmtlist ENDK  { $$=$2; }
	;

ArgList
	: ArgList COMM expr  { $$=createConnect($1,$3); }
	| expr               { $$=$1; }
	;

returnstmt
	: RETURN_K expr  { $$=createReturn($2); }
	;

MainBlock
	: INTT MAINK '(' ')' LBRACE LdeclBlock Body RBRACE
		{ $$=createMain($6,$7); }
	;



stmtlist
	: stmtlist stmt  { $$=createConnect($1,$2); }
	| stmt           { $$=$1; }
	;

stmt
	: InputStmt             { $$=$1; }
	| OutputStmt            { $$=$1; }
	| AsgStmt               { $$=$1; }
	| IfStmt                { $$=$1; }
	| WhileStmt             { $$=$1; }
	| BREAKK SEMICOLON      { $$=createBreak(); }
	| CONTINUEK SEMICOLON   { $$=createContinue(); }
	| doWhileStmt           { $$=$1; }
	| RepeatStmt            { $$=$1; }
	| returnstmt SEMICOLON  { $$=$1; }
	| funcCall SEMICOLON    { $$=$1; }
	| allocStmt             { $$=$1; }
	| freeStmt              { $$=$1; }
	| newStmt               { $$=$1; }
	| deleteStmt            { $$=$1; }
	/* method call as statement: self.foo() or obj.foo() */
	| dotAccess SEMICOLON   { $$=$1; }
	;

/* NOTE: dot assignments go through AsgStmt : dotAccess ASSIGN expr SEMICOLON
   There are NO separate SELFK DOT ID ASSIGN or ID DOT ID ASSIGN rules in stmt.
   That was the source of the two remaining shift/reduce conflicts. */

newStmt
	: ID ASSIGN NEWK '(' ID ')' SEMICOLON
		{ $$=createNewObject($1,$5->varname); }
	;

deleteStmt
	: DELETEK '(' ID ')' SEMICOLON
		{ $$=createDeleteObject($3); }
	;


dotAccess
	: SELFK DOT ID
		{
			tnode *s=createSelf();
			$$=createClassFieldAccess(s,$3->varname);
		}
	| SELFK DOT ID '(' ')'
		{
			tnode *s=createSelf();
			$$=createClassMethodCall(s,$3->varname,NULL);
		}
	| SELFK DOT ID '(' ArgList ')'
		{
			tnode *s=createSelf();
			$$=createClassMethodCall(s,$3->varname,$5);
		}
	| ID DOT ID
		{
			Gsymbol *g=Lookup($1->varname);
			if(g && g->type==CLASS_TYPE){
				tnode *obj=createVariableUsageNode($1->varname);
				obj->type=CLASS_TYPE; obj->classtableEntry=g->classtableEntry;
				$$=createClassFieldAccess(obj,$3->varname);
			} else {
				$$=createMemberAcc($1,$3);
			}
		}
	| ID DOT ID '(' ')'
		{
			Gsymbol *g=Lookup($1->varname);
			if(!g||g->type!=CLASS_TYPE){
				printf("'%s' is not a class object\n",$1->varname);exit(1);
			}
			tnode *obj=createVariableUsageNode($1->varname);
			obj->type=CLASS_TYPE; obj->classtableEntry=g->classtableEntry;
			$$=createClassMethodCall(obj,$3->varname,NULL);
		}
	| ID DOT ID '(' ArgList ')'
		{
			Gsymbol *g=Lookup($1->varname);
			if(!g||g->type!=CLASS_TYPE){
				printf("'%s' is not a class object\n",$1->varname);exit(1);
			}
			tnode *obj=createVariableUsageNode($1->varname);
			obj->type=CLASS_TYPE; obj->classtableEntry=g->classtableEntry;
			$$=createClassMethodCall(obj,$3->varname,$5);
		}
	| dotAccess DOT ID
		{
			$$=createMemberAcc($1,$3);
		}
	;



allocStmt
	: ID ASSIGN ALLOC '(' ')' SEMICOLON
		{ $$=createAlloc($1); }
	| dotAccess ASSIGN ALLOC '(' ')' SEMICOLON
		{ $$=createAlloc($1); }
	;

freeStmt
	: FREE '(' ID ')' SEMICOLON
		{ $$=createFree($3); }
	;

funcCall
	: ID '(' ')'          { $$=createFuncCall($1,NULL); }
	| ID '(' ArgList ')'  { $$=createFuncCall($1,$3); }
	;

InputStmt
	: READ '(' ID ')' SEMICOLON
		{ $$=createRead($3); }
	| READ '(' ID '[' expr ']' ')' SEMICOLON
		{ $$=createReadArr($3,$5); }
	| READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON
		{ $$=createReadArr($3,createConnect($5,$8)); }
	;

OutputStmt
	: WRITE '(' expr ')' SEMICOLON
		{ $$=createWrite($3); }
	;

AsgStmt
	: ID ASSIGN expr SEMICOLON
		{ $$=createAssign($1,$3); }
	| ID '[' expr ']' ASSIGN expr SEMICOLON
		{ $$=createArrAssign($1,$3,$6); }
	| ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON
		{ $$=createArrAssign($1,createConnect($3,$6),$9); }
	| MUL ID ASSIGN expr SEMICOLON
		{ $$=createAssignToDeref($2,$4); }
	/* ALL dot-assignments go here — covers self.field=expr and obj.field=expr */
	| dotAccess ASSIGN expr SEMICOLON
		{
			/* If lhs is a class field node use createClassFieldAssign,
			   otherwise it is a user-defined type member — use createMemAssg */
			if($1->nodetype==NclassField)
				$$=createClassFieldAssign($1,$3);
			else
				$$=createMemAssg($1,$3);
		}
	;

IfStmt
	: IFK '(' boolexpr ')' THENK stmtlist ELSEK stmtlist ENDIFK
		{ $$=createIfElseNode($3,$6,$8); }
	| IFK '(' boolexpr ')' THENK stmtlist ENDIFK
		{ $$=createIfNode($3,$6); }
	;

WhileStmt
	: WHILEK '(' boolexpr ')' DOK stmtlist ENDWHILEK
		{ $$=createWhile($3,$6); }
	;

RepeatStmt
	: REPEATK stmtlist UNTILK '(' boolexpr ')' SEMICOLON
		{ $$=createRepeat($2,$5); }
	;

doWhileStmt
	: DOK stmtlist WHILEK '(' boolexpr ')' SEMICOLON
		{ $$=createDoWhile($2,$5); }
	;



expr
	: expr PLUS  expr  { $$=makeOperatorNode('+',$1,$3); }
	| expr MINUS expr  { $$=makeOperatorNode('-',$1,$3); }
	| expr MUL   expr  { $$=makeOperatorNode('*',$1,$3); }
	| expr DIV   expr  { $$=makeOperatorNode('/',$1,$3); }
	| expr MOD   expr  { $$=makeOperatorNode('%',$1,$3); }
	| '(' expr ')'     { $$=$2; }
	| NUM              { $$=$1; }
	| ID               { $$=createVariableUsageNode($1->varname); }
	| STRING_LITERAL   { $$=$1; }
	| NULLk            { $$=createNull(); }
	| ID '[' expr ']'
		{ $$=createArrayAccess($1,$3); }
	| ID '[' expr ']' '[' expr ']'
		{ $$=createArrayAccess($1,createConnect($3,$6)); }
	| MUL ID           { $$=createDerefer($2); }
	| AMP ID           { $$=createAddr($2); }
	| funcCall         { $$=$1; }
	| dotAccess        { $$=$1; }
	;

boolexpr
	: expr GE expr          { $$=createCondition(Nge,$1,$3); }
	| expr LE expr          { $$=createCondition(Nle,$1,$3); }
	| expr GT expr          { $$=createCondition(Ngt,$1,$3); }
	| expr LT expr          { $$=createCondition(Nlt,$1,$3); }
	| expr NE expr          { $$=createCondition(Nne,$1,$3); }
	| expr EQ expr          { $$=createCondition(Neq,$1,$3); }
	| boolexpr OR  boolexpr { $$=createCondition(Nor,$1,$3); }
	| boolexpr AND boolexpr { $$=createCondition(Nand,$1,$3); }
	| '(' boolexpr ')'      { $$=$2; }
	;

%%

int yyerror(char const *s) {
	extern int linecount;
	printf("yyerror %s at line %d near token %s\n",s,linecount,yytext);
	return 0;
}

int main(void) {
	FILE *s=fopen("input.txt","r");
	target=fopen("ans.xsm","w");
	yyin=s;
	initializeTypeT();
	generateHeader();
	fprintf(target,"MOV R0, \"Heapset\"\n");
	fprintf(target,"PUSH R0\n");
	fprintf(target,"PUSH R0\n");
	fprintf(target,"PUSH R0\n");
	fprintf(target,"PUSH R0\n");
	fprintf(target,"PUSH R0\n");
	fprintf(target,"CALL 0\n");
	fprintf(target,"SUB SP, 5\n");
	fprintf(target,"CALL Main\n");
	yyparse();
	return 0;
}