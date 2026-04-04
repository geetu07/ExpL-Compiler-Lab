/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PLUS = 258,                    /* PLUS  */
    MINUS = 259,                   /* MINUS  */
    MUL = 260,                     /* MUL  */
    DIV = 261,                     /* DIV  */
    READ = 262,                    /* READ  */
    WRITE = 263,                   /* WRITE  */
    ASSIGN = 264,                  /* ASSIGN  */
    SEMICOLON = 265,               /* SEMICOLON  */
    GT = 266,                      /* GT  */
    GE = 267,                      /* GE  */
    LE = 268,                      /* LE  */
    LT = 269,                      /* LT  */
    EQ = 270,                      /* EQ  */
    NE = 271,                      /* NE  */
    INTT = 272,                    /* INTT  */
    STRINGT = 273,                 /* STRINGT  */
    COMM = 274,                    /* COMM  */
    AMP = 275,                     /* AMP  */
    MOD = 276,                     /* MOD  */
    ALLOC = 277,                   /* ALLOC  */
    FREE = 278,                    /* FREE  */
    NULLk = 279,                   /* NULLk  */
    ENDK = 280,                    /* ENDK  */
    BEGINK = 281,                  /* BEGINK  */
    IFK = 282,                     /* IFK  */
    THENK = 283,                   /* THENK  */
    ELSEK = 284,                   /* ELSEK  */
    ENDIFK = 285,                  /* ENDIFK  */
    WHILEK = 286,                  /* WHILEK  */
    DOK = 287,                     /* DOK  */
    ENDWHILEK = 288,               /* ENDWHILEK  */
    RETURN_K = 289,                /* RETURN_K  */
    LBRACE = 290,                  /* LBRACE  */
    RBRACE = 291,                  /* RBRACE  */
    BREAKK = 292,                  /* BREAKK  */
    CONTINUEK = 293,               /* CONTINUEK  */
    REPEATK = 294,                 /* REPEATK  */
    UNTILK = 295,                  /* UNTILK  */
    DECL = 296,                    /* DECL  */
    ENDDECL = 297,                 /* ENDDECL  */
    OR = 298,                      /* OR  */
    AND = 299,                     /* AND  */
    MAINK = 300,                   /* MAINK  */
    TYPE_start = 301,              /* TYPE_start  */
    TYPE_end = 302,                /* TYPE_end  */
    DOT = 303,                     /* DOT  */
    ARROW = 304,                   /* ARROW  */
    NEWK = 305,                    /* NEWK  */
    DELETEK = 306,                 /* DELETEK  */
    SELFK = 307,                   /* SELFK  */
    CLASSK = 308,                  /* CLASSK  */
    ENDCLASSK = 309,               /* ENDCLASSK  */
    EXTENDSK = 310,                /* EXTENDSK  */
    ID = 311,                      /* ID  */
    NUM = 312,                     /* NUM  */
    STRING_LITERAL = 313           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PLUS 258
#define MINUS 259
#define MUL 260
#define DIV 261
#define READ 262
#define WRITE 263
#define ASSIGN 264
#define SEMICOLON 265
#define GT 266
#define GE 267
#define LE 268
#define LT 269
#define EQ 270
#define NE 271
#define INTT 272
#define STRINGT 273
#define COMM 274
#define AMP 275
#define MOD 276
#define ALLOC 277
#define FREE 278
#define NULLk 279
#define ENDK 280
#define BEGINK 281
#define IFK 282
#define THENK 283
#define ELSEK 284
#define ENDIFK 285
#define WHILEK 286
#define DOK 287
#define ENDWHILEK 288
#define RETURN_K 289
#define LBRACE 290
#define RBRACE 291
#define BREAKK 292
#define CONTINUEK 293
#define REPEATK 294
#define UNTILK 295
#define DECL 296
#define ENDDECL 297
#define OR 298
#define AND 299
#define MAINK 300
#define TYPE_start 301
#define TYPE_end 302
#define DOT 303
#define ARROW 304
#define NEWK 305
#define DELETEK 306
#define SELFK 307
#define CLASSK 308
#define ENDCLASSK 309
#define EXTENDSK 310
#define ID 311
#define NUM 312
#define STRING_LITERAL 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "ex1.y"

	struct tnode *node;
	FieldList *field;

#line 188 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
