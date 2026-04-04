/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "ex1.y"

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

#line 89 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 263 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PLUS = 3,                       /* PLUS  */
  YYSYMBOL_MINUS = 4,                      /* MINUS  */
  YYSYMBOL_MUL = 5,                        /* MUL  */
  YYSYMBOL_DIV = 6,                        /* DIV  */
  YYSYMBOL_READ = 7,                       /* READ  */
  YYSYMBOL_WRITE = 8,                      /* WRITE  */
  YYSYMBOL_ASSIGN = 9,                     /* ASSIGN  */
  YYSYMBOL_SEMICOLON = 10,                 /* SEMICOLON  */
  YYSYMBOL_GT = 11,                        /* GT  */
  YYSYMBOL_GE = 12,                        /* GE  */
  YYSYMBOL_LE = 13,                        /* LE  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_EQ = 15,                        /* EQ  */
  YYSYMBOL_NE = 16,                        /* NE  */
  YYSYMBOL_INTT = 17,                      /* INTT  */
  YYSYMBOL_STRINGT = 18,                   /* STRINGT  */
  YYSYMBOL_COMM = 19,                      /* COMM  */
  YYSYMBOL_AMP = 20,                       /* AMP  */
  YYSYMBOL_MOD = 21,                       /* MOD  */
  YYSYMBOL_ALLOC = 22,                     /* ALLOC  */
  YYSYMBOL_FREE = 23,                      /* FREE  */
  YYSYMBOL_NULLk = 24,                     /* NULLk  */
  YYSYMBOL_ENDK = 25,                      /* ENDK  */
  YYSYMBOL_BEGINK = 26,                    /* BEGINK  */
  YYSYMBOL_IFK = 27,                       /* IFK  */
  YYSYMBOL_THENK = 28,                     /* THENK  */
  YYSYMBOL_ELSEK = 29,                     /* ELSEK  */
  YYSYMBOL_ENDIFK = 30,                    /* ENDIFK  */
  YYSYMBOL_WHILEK = 31,                    /* WHILEK  */
  YYSYMBOL_DOK = 32,                       /* DOK  */
  YYSYMBOL_ENDWHILEK = 33,                 /* ENDWHILEK  */
  YYSYMBOL_RETURN_K = 34,                  /* RETURN_K  */
  YYSYMBOL_LBRACE = 35,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 36,                    /* RBRACE  */
  YYSYMBOL_BREAKK = 37,                    /* BREAKK  */
  YYSYMBOL_CONTINUEK = 38,                 /* CONTINUEK  */
  YYSYMBOL_REPEATK = 39,                   /* REPEATK  */
  YYSYMBOL_UNTILK = 40,                    /* UNTILK  */
  YYSYMBOL_DECL = 41,                      /* DECL  */
  YYSYMBOL_ENDDECL = 42,                   /* ENDDECL  */
  YYSYMBOL_OR = 43,                        /* OR  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_MAINK = 45,                     /* MAINK  */
  YYSYMBOL_TYPE_start = 46,                /* TYPE_start  */
  YYSYMBOL_TYPE_end = 47,                  /* TYPE_end  */
  YYSYMBOL_DOT = 48,                       /* DOT  */
  YYSYMBOL_ARROW = 49,                     /* ARROW  */
  YYSYMBOL_NEWK = 50,                      /* NEWK  */
  YYSYMBOL_DELETEK = 51,                   /* DELETEK  */
  YYSYMBOL_SELFK = 52,                     /* SELFK  */
  YYSYMBOL_CLASSK = 53,                    /* CLASSK  */
  YYSYMBOL_ENDCLASSK = 54,                 /* ENDCLASSK  */
  YYSYMBOL_EXTENDSK = 55,                  /* EXTENDSK  */
  YYSYMBOL_ID = 56,                        /* ID  */
  YYSYMBOL_NUM = 57,                       /* NUM  */
  YYSYMBOL_STRING_LITERAL = 58,            /* STRING_LITERAL  */
  YYSYMBOL_59_ = 59,                       /* '('  */
  YYSYMBOL_60_ = 60,                       /* ')'  */
  YYSYMBOL_61_ = 61,                       /* '['  */
  YYSYMBOL_62_ = 62,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_program = 64,                   /* program  */
  YYSYMBOL_typedefBl = 65,                 /* typedefBl  */
  YYSYMBOL_typedefList = 66,               /* typedefList  */
  YYSYMBOL_typedef = 67,                   /* typedef  */
  YYSYMBOL_68_1 = 68,                      /* $@1  */
  YYSYMBOL_typefieldL = 69,                /* typefieldL  */
  YYSYMBOL_typefield = 70,                 /* typefield  */
  YYSYMBOL_ClassDefBlock = 71,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 72,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 73,                  /* ClassDef  */
  YYSYMBOL_74_2 = 74,                      /* $@2  */
  YYSYMBOL_ClassFieldDeclList = 75,        /* ClassFieldDeclList  */
  YYSYMBOL_ClassFieldDecl = 76,            /* ClassFieldDecl  */
  YYSYMBOL_ClassMethodDeclList = 77,       /* ClassMethodDeclList  */
  YYSYMBOL_ClassMethodDecl = 78,           /* ClassMethodDecl  */
  YYSYMBOL_classDeclParamList = 79,        /* classDeclParamList  */
  YYSYMBOL_classDeclParam = 80,            /* classDeclParam  */
  YYSYMBOL_ClassMethodDefList = 81,        /* ClassMethodDefList  */
  YYSYMBOL_ClassMethodDef = 82,            /* ClassMethodDef  */
  YYSYMBOL_83_3 = 83,                      /* $@3  */
  YYSYMBOL_84_4 = 84,                      /* $@4  */
  YYSYMBOL_85_5 = 85,                      /* $@5  */
  YYSYMBOL_GDeclBlock = 86,                /* GDeclBlock  */
  YYSYMBOL_GDecList = 87,                  /* GDecList  */
  YYSYMBOL_GDecL = 88,                     /* GDecL  */
  YYSYMBOL_Type = 89,                      /* Type  */
  YYSYMBOL_GVarList = 90,                  /* GVarList  */
  YYSYMBOL_funcdeclparamlist = 91,         /* funcdeclparamlist  */
  YYSYMBOL_funcdeclparam = 92,             /* funcdeclparam  */
  YYSYMBOL_FdefBlock = 93,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 94,                      /* Fdef  */
  YYSYMBOL_95_6 = 95,                      /* $@6  */
  YYSYMBOL_paramlist = 96,                 /* paramlist  */
  YYSYMBOL_param = 97,                     /* param  */
  YYSYMBOL_LdeclBlock = 98,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 99,                  /* LDecList  */
  YYSYMBOL_LDecl = 100,                    /* LDecl  */
  YYSYMBOL_IdList = 101,                   /* IdList  */
  YYSYMBOL_Body = 102,                     /* Body  */
  YYSYMBOL_ArgList = 103,                  /* ArgList  */
  YYSYMBOL_returnstmt = 104,               /* returnstmt  */
  YYSYMBOL_MainBlock = 105,                /* MainBlock  */
  YYSYMBOL_stmtlist = 106,                 /* stmtlist  */
  YYSYMBOL_stmt = 107,                     /* stmt  */
  YYSYMBOL_newStmt = 108,                  /* newStmt  */
  YYSYMBOL_deleteStmt = 109,               /* deleteStmt  */
  YYSYMBOL_dotAccess = 110,                /* dotAccess  */
  YYSYMBOL_allocStmt = 111,                /* allocStmt  */
  YYSYMBOL_freeStmt = 112,                 /* freeStmt  */
  YYSYMBOL_funcCall = 113,                 /* funcCall  */
  YYSYMBOL_InputStmt = 114,                /* InputStmt  */
  YYSYMBOL_OutputStmt = 115,               /* OutputStmt  */
  YYSYMBOL_AsgStmt = 116,                  /* AsgStmt  */
  YYSYMBOL_IfStmt = 117,                   /* IfStmt  */
  YYSYMBOL_WhileStmt = 118,                /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 119,               /* RepeatStmt  */
  YYSYMBOL_doWhileStmt = 120,              /* doWhileStmt  */
  YYSYMBOL_expr = 121,                     /* expr  */
  YYSYMBOL_boolexpr = 122                  /* boolexpr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   655

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  407

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,    60,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    62,    62,    64,    66,    68,    70,    72,    74,    76,
      84,    85,    89,    90,    94,    94,    99,   100,   104,   105,
     106,   114,   118,   119,   124,   123,   135,   136,   140,   142,
     144,   149,   150,   154,   159,   164,   174,   175,   176,   180,
     189,   198,   211,   212,   216,   215,   231,   230,   246,   245,
     272,   274,   279,   280,   284,   289,   290,   291,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   322,   323,
     324,   328,   336,   337,   341,   341,   347,   348,   349,   353,
     357,   358,   362,   363,   367,   371,   372,   376,   380,   381,
     385,   389,   398,   399,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   419,
     427,   432,   441,   446,   451,   456,   467,   477,   487,   498,
     500,   505,   510,   511,   515,   517,   519,   524,   529,   531,
     533,   535,   538,   550,   552,   557,   562,   567,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   588,
     590,   591,   592,   593,   597,   598,   599,   600,   601,   602,
     603,   604,   605
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "PLUS", "MINUS", "MUL",
  "DIV", "READ", "WRITE", "ASSIGN", "SEMICOLON", "GT", "GE", "LE", "LT",
  "EQ", "NE", "INTT", "STRINGT", "COMM", "AMP", "MOD", "ALLOC", "FREE",
  "NULLk", "ENDK", "BEGINK", "IFK", "THENK", "ELSEK", "ENDIFK", "WHILEK",
  "DOK", "ENDWHILEK", "RETURN_K", "LBRACE", "RBRACE", "BREAKK",
  "CONTINUEK", "REPEATK", "UNTILK", "DECL", "ENDDECL", "OR", "AND",
  "MAINK", "TYPE_start", "TYPE_end", "DOT", "ARROW", "NEWK", "DELETEK",
  "SELFK", "CLASSK", "ENDCLASSK", "EXTENDSK", "ID", "NUM",
  "STRING_LITERAL", "'('", "')'", "'['", "']'", "$accept", "program",
  "typedefBl", "typedefList", "typedef", "$@1", "typefieldL", "typefield",
  "ClassDefBlock", "ClassDefList", "ClassDef", "$@2", "ClassFieldDeclList",
  "ClassFieldDecl", "ClassMethodDeclList", "ClassMethodDecl",
  "classDeclParamList", "classDeclParam", "ClassMethodDefList",
  "ClassMethodDef", "$@3", "$@4", "$@5", "GDeclBlock", "GDecList", "GDecL",
  "Type", "GVarList", "funcdeclparamlist", "funcdeclparam", "FdefBlock",
  "Fdef", "$@6", "paramlist", "param", "LdeclBlock", "LDecList", "LDecl",
  "IdList", "Body", "ArgList", "returnstmt", "MainBlock", "stmtlist",
  "stmt", "newStmt", "deleteStmt", "dotAccess", "allocStmt", "freeStmt",
  "funcCall", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt",
  "RepeatStmt", "doWhileStmt", "expr", "boolexpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-216)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     269,   -30,   114,   132,   -31,    33,    -5,     9,   116,  -216,
      -3,  -216,  -216,  -216,  -216,   167,  -216,    15,  -216,  -216,
     211,  -216,  -216,   184,  -216,  -216,     9,   116,   116,   -30,
      16,   116,  -216,  -216,     4,  -216,  -216,    29,    82,   282,
      64,  -216,  -216,    84,  -216,  -216,   150,   116,  -216,   116,
    -216,   112,  -216,  -216,   113,  -216,   150,   126,  -216,    21,
     261,   172,   116,  -216,  -216,   150,   205,   197,    -8,  -216,
     208,   225,   244,   228,   232,   287,   203,  -216,  -216,  -216,
     293,     8,  -216,   173,   230,  -216,   150,  -216,   296,  -216,
     150,   304,   356,   363,   395,  -216,  -216,   289,  -216,   150,
    -216,  -216,   352,   194,  -216,   531,   367,  -216,   355,    22,
     354,  -216,  -216,  -216,   364,   369,   375,  -216,   248,  -216,
    -216,   379,  -216,   323,  -216,  -216,   383,   381,   384,   385,
     386,   388,   531,   324,   413,   439,   531,   396,   402,     1,
     444,   390,  -216,  -216,  -216,   299,  -216,  -216,   448,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,   398,  -216,   400,
      -4,    19,    20,   411,   414,   303,   419,  -216,   205,  -216,
     423,   471,   426,   324,   427,   334,   334,   566,   429,   430,
    -216,   128,  -216,  -216,   324,   442,  -216,   634,  -216,  -216,
     425,   431,   435,   278,   440,   217,   324,  -216,  -216,  -216,
     294,  -216,   441,  -216,  -216,   445,  -216,   382,  -216,   382,
    -216,   382,   446,   447,   455,   459,   460,   351,  -216,   462,
     230,  -216,   324,   138,    87,   458,   334,   620,   200,   220,
     463,  -216,  -216,   324,   154,   324,   324,   324,   324,   324,
     465,   469,   472,   473,   478,   468,   481,  -216,    23,   634,
      13,   482,   504,  -216,   484,   464,   494,   495,    34,  -216,
      38,    76,   497,   498,   500,  -216,  -216,   517,   539,   545,
     324,   551,   554,   189,   358,   324,   324,   324,   324,   324,
     324,   334,   334,   538,   535,   334,    18,  -216,   405,   405,
    -216,  -216,  -216,   334,   562,   237,   515,   520,  -216,   267,
     324,  -216,     5,   521,  -216,  -216,  -216,  -216,  -216,   382,
     575,   576,   578,   150,   150,   150,  -216,  -216,  -216,    40,
    -216,  -216,  -216,   634,   634,   634,   634,   634,   634,   546,
    -216,   531,   531,   391,   530,   393,  -216,  -216,   101,   582,
     534,  -216,   103,   634,   324,   324,   586,  -216,  -216,  -216,
    -216,   104,   105,   106,   271,   333,   461,    55,   324,   589,
    -216,  -216,   591,  -216,   574,   100,  -216,  -216,  -216,  -216,
     592,   324,   531,  -216,  -216,  -216,   124,  -216,  -216,  -216,
     597,   572,   573,   579,  -216,   134,   496,  -216,   324,   205,
     205,   205,   553,  -216,   606,   230,   230,   230,   605,  -216,
     583,   584,   585,  -216,  -216,  -216,  -216
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,    55,    56,    50,    57,     0,    53,     0,    11,    14,
       0,    13,    24,     0,    23,     1,     0,     0,     0,    55,
       0,     0,    73,     7,     0,    51,    52,     0,    64,     0,
       0,    10,    12,     0,    21,    22,     0,     0,     8,     0,
       5,     0,    72,     6,     0,    65,    70,     0,    54,     0,
       0,     0,     0,     3,     4,    78,     0,     0,     0,    69,
       0,     0,    58,     0,     0,     0,     0,    17,    27,     2,
       0,     0,    77,     0,     0,    71,     0,    67,    63,    61,
      70,     0,     0,     0,     0,    15,    16,     0,    79,     0,
      74,    81,     0,     0,    83,     0,     0,    68,     0,     0,
       0,    18,    19,    20,     0,     0,     0,    26,     0,    32,
      76,     0,    86,     0,    80,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    93,   107,   108,     0,   105,   106,     0,    94,
      95,    96,    97,    98,   102,   101,    91,     0,    66,    60,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    84,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,   145,   144,   146,     0,   153,   152,    90,    99,   100,
       0,     0,     0,     0,     0,     0,     0,   103,    87,    92,
       0,   109,     0,   104,    62,     0,    28,    38,    29,    38,
      30,    38,     0,     0,     0,     0,     0,     0,    43,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   150,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,   115,   122,     0,    89,
       0,     0,     0,   118,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    25,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   138,   139,
     140,   141,   142,     0,     0,     0,     0,     0,   128,     0,
       0,   123,     0,     0,   132,    59,    39,    40,    41,     0,
       0,     0,     0,    78,    78,    78,    75,   131,   124,     0,
     127,   121,   162,   156,   154,   155,   157,   159,   158,   160,
     161,     0,     0,     0,   148,     0,   111,   113,     0,     0,
       0,   116,     0,    88,     0,     0,     0,    36,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     114,   119,     0,   117,     0,     0,   120,    44,    46,    48,
       0,     0,     0,   134,   135,   137,     0,   136,   110,   129,
       0,     0,     0,     0,   125,     0,     0,   149,     0,     0,
       0,     0,     0,   133,     0,     0,     0,     0,     0,   130,
       0,     0,     0,   126,    45,    47,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,   608,  -216,  -216,   567,   623,  -216,
     607,  -216,  -216,  -216,  -216,   524,   168,   335,  -216,   428,
    -216,  -216,  -216,   171,  -216,   631,    -2,  -216,   557,   563,
      89,   357,  -216,   -80,   549,  -165,  -216,   547,  -216,  -215,
    -153,  -216,   347,  -124,  -139,  -216,  -216,  -104,  -216,  -216,
    -101,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -126,  -167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    20,    21,    40,    76,    77,     7,    23,
      24,    43,    97,   117,   118,   119,   258,   259,   217,   218,
     381,   382,   383,     8,    15,    16,    30,    39,    68,    69,
      31,    32,   121,    81,    82,    84,   103,   104,   123,   106,
     248,   140,     9,   141,   142,   143,   144,   185,   146,   147,
     186,   149,   150,   151,   152,   153,   154,   155,   227,   228
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,   145,   199,   220,   148,   267,   206,   187,   177,   229,
     193,    86,   190,    17,   344,    10,   235,   236,   237,   238,
      37,   235,   236,   237,   238,    22,    71,    99,   145,   208,
     210,   148,   145,    25,   239,   148,     2,   145,   199,   239,
     148,    86,   300,   235,   236,   237,   238,   224,     4,   194,
       2,   199,    87,   309,    67,   207,    34,   309,   234,   274,
     195,   239,   196,    80,    54,   375,   345,   245,   100,   249,
     250,    38,    51,   145,   252,   302,   148,    72,   209,   211,
     334,   102,   158,   301,    67,    55,   145,   332,    67,   148,
     235,   236,   237,   238,   310,   309,   268,    80,   311,    60,
     273,   102,   354,   235,   236,   237,   238,   286,   239,   288,
     289,   290,   291,   292,   329,   330,    47,    49,   333,    61,
     300,   239,   300,    99,    99,    99,   335,   235,   236,   237,
     238,    11,    12,    29,    12,    62,   312,   235,   236,   237,
     238,    56,   338,    57,   319,   239,   342,   271,    66,   323,
     324,   325,   326,   327,   328,   239,    13,   235,   236,   237,
     238,   360,   380,   363,   367,   368,   369,    11,    12,   249,
      14,    65,    14,   249,   343,   239,   194,    27,    28,    18,
     400,   401,   402,    70,    11,    12,   387,   195,    19,   233,
      11,    12,   235,   236,   237,   238,   392,    46,   269,   270,
     275,   276,   277,   278,   279,   280,    14,   355,   356,    35,
     239,    11,    12,    78,   287,   101,   199,   199,   364,   365,
      73,    74,   178,    14,   395,   396,   397,   145,   145,    14,
     148,   148,   376,   351,   352,   353,   124,   179,    44,    95,
      22,   180,   178,   281,   282,   385,    83,   199,   386,   287,
      14,   145,   145,    85,   148,   148,   105,   179,    41,    75,
     283,   180,   394,   281,   282,   163,   164,    19,   145,   138,
      88,   148,   178,   181,   182,   183,   184,   247,    73,    74,
     284,    89,   145,   178,    92,   148,     1,   179,    93,   138,
     165,   180,    58,   181,   182,   183,   184,   337,   179,   178,
     243,    59,   180,    90,   166,    91,   114,   115,   200,   201,
       2,    80,    80,    80,   179,     3,   251,    75,   180,   138,
     214,   215,     4,   181,   182,   183,   184,   341,   244,   178,
     138,   370,   371,   169,   181,   182,   183,   184,   126,   178,
     127,   128,   170,    94,   179,   116,   138,   202,   180,    98,
     181,   182,   183,   184,   179,    33,   129,   108,   180,   216,
     130,   110,   372,   373,   131,   132,   111,   133,   214,   215,
     134,   135,   136,   112,    48,    50,   138,   260,    53,   261,
     181,   182,   183,   184,   137,   138,   138,   265,    52,   139,
     181,   182,   183,   226,    63,   126,    64,   127,   128,   255,
     256,   281,   282,   156,    52,   113,    52,   216,   122,    79,
     237,   238,   157,   129,   168,   198,   159,   130,   322,    52,
     160,   131,   132,   188,   133,   161,   239,   134,   135,   136,
     126,   162,   127,   128,   281,   282,   281,   282,   257,   171,
     172,   137,   138,   173,   174,   175,   139,   176,   129,   189,
     192,   357,   130,   359,   197,   191,   131,   132,   203,   133,
     204,   205,   134,   135,   136,   240,   126,   212,   127,   128,
     213,   235,   236,   237,   238,   219,   137,   138,   298,   221,
     222,   139,   223,   225,   129,   231,   232,   241,   130,   239,
     202,   242,   131,   132,   374,   133,   246,   253,   134,   135,
     136,   126,   254,   127,   128,   207,   209,   235,   236,   237,
     238,   262,   137,   138,   304,   263,   264,   139,   272,   129,
     306,   211,   285,   130,   293,   239,   393,   131,   132,   294,
     133,   295,   296,   134,   135,   136,   126,   297,   127,   128,
     299,   303,   235,   236,   237,   238,   305,   137,   138,   317,
     307,   308,   139,   316,   129,   318,   313,   314,   130,   315,
     239,   320,   131,   132,   321,   133,   331,   332,   134,   135,
     136,   126,   336,   127,   128,   339,   340,   235,   236,   237,
     238,   346,   137,   138,   379,   348,   349,   139,   350,   129,
     282,   358,   361,   130,   362,   239,   366,   230,   132,   377,
     133,   378,   384,   134,   135,   136,   388,   389,   390,   235,
     236,   237,   238,   398,   391,   403,   399,   137,   138,   404,
     405,   406,   139,   235,   236,   237,   238,   239,    42,    26,
      45,   275,   276,   277,   278,   279,   280,   235,   236,   237,
     238,   239,   167,    96,   347,   266,    36,   109,   120,   107,
     125,     0,     0,     0,     0,   239
};

static const yytype_int16 yycheck[] =
{
       2,   105,   141,   168,   105,   220,    10,   133,   132,   176,
       9,    19,   136,    15,     9,    45,     3,     4,     5,     6,
       5,     3,     4,     5,     6,    56,     5,    19,   132,    10,
      10,   132,   136,     0,    21,   136,    41,   141,   177,    21,
     141,    19,    19,     3,     4,     5,     6,   173,    53,    48,
      41,   190,    60,    19,    56,    59,    59,    19,   184,   226,
      59,    21,    61,    65,    60,    10,    61,   193,    60,   195,
     196,    56,    56,   177,   200,    62,   177,    56,    59,    59,
      62,    83,    60,    60,    86,    56,   190,    32,    90,   190,
       3,     4,     5,     6,    60,    19,   222,    99,    60,    35,
     226,   103,    62,     3,     4,     5,     6,   233,    21,   235,
     236,   237,   238,   239,   281,   282,    27,    28,   285,    35,
      19,    21,    19,    19,    19,    19,   293,     3,     4,     5,
       6,    17,    18,    17,    18,    46,    60,     3,     4,     5,
       6,    59,   295,    61,   270,    21,   299,    60,    35,   275,
     276,   277,   278,   279,   280,    21,    42,     3,     4,     5,
       6,    60,    62,    60,    60,    60,    60,    17,    18,   295,
      56,    59,    56,   299,   300,    21,    48,     6,     7,    47,
     395,   396,   397,    57,    17,    18,    62,    59,    56,    61,
      17,    18,     3,     4,     5,     6,    62,    26,    60,    61,
      11,    12,    13,    14,    15,    16,    56,   331,   332,    42,
      21,    17,    18,    41,    60,    42,   355,   356,   344,   345,
      17,    18,     5,    56,   389,   390,   391,   331,   332,    56,
     331,   332,   358,   313,   314,   315,    42,    20,    54,    36,
      56,    24,     5,    43,    44,   371,    41,   386,   372,    60,
      56,   355,   356,    56,   355,   356,    26,    20,    47,    56,
      60,    24,   388,    43,    44,    17,    18,    56,   372,    52,
      62,   372,     5,    56,    57,    58,    59,    60,    17,    18,
      60,    56,   386,     5,    56,   386,    17,    20,    56,    52,
      42,    24,    10,    56,    57,    58,    59,    60,    20,     5,
      22,    19,    24,    59,    56,    61,    17,    18,     9,    10,
      41,   313,   314,   315,    20,    46,    22,    56,    24,    52,
      17,    18,    53,    56,    57,    58,    59,    60,    50,     5,
      52,    60,    61,    10,    56,    57,    58,    59,     5,     5,
       7,     8,    19,    56,    20,    56,    52,    48,    24,    56,
      56,    57,    58,    59,    20,     8,    23,    61,    24,    56,
      27,    57,    29,    30,    31,    32,    10,    34,    17,    18,
      37,    38,    39,    10,    27,    28,    52,   209,    31,   211,
      56,    57,    58,    59,    51,    52,    52,    36,    31,    56,
      56,    57,    58,    59,    47,     5,    49,     7,     8,    17,
      18,    43,    44,    36,    47,    10,    49,    56,    56,    62,
       5,     6,    57,    23,    35,    25,    62,    27,    60,    62,
      56,    31,    32,    10,    34,    56,    21,    37,    38,    39,
       5,    56,     7,     8,    43,    44,    43,    44,    56,    56,
      59,    51,    52,    59,    59,    59,    56,    59,    23,    10,
      48,    60,    27,    60,    10,    59,    31,    32,    10,    34,
      62,    61,    37,    38,    39,    40,     5,    56,     7,     8,
      56,     3,     4,     5,     6,    56,    51,    52,    10,    56,
       9,    56,    56,    56,    23,    56,    56,    56,    27,    21,
      48,    56,    31,    32,    33,    34,    56,    56,    37,    38,
      39,     5,    57,     7,     8,    59,    59,     3,     4,     5,
       6,    56,    51,    52,    10,    56,    56,    56,    60,    23,
      56,    59,    59,    27,    59,    21,    30,    31,    32,    60,
      34,    59,    59,    37,    38,    39,     5,    59,     7,     8,
      59,    59,     3,     4,     5,     6,    62,    51,    52,    10,
      56,    56,    56,    36,    23,    10,    59,    59,    27,    59,
      21,    10,    31,    32,    10,    34,    28,    32,    37,    38,
      39,     5,    10,     7,     8,    60,    56,     3,     4,     5,
       6,    60,    51,    52,    10,    10,    10,    56,    10,    23,
      44,    61,    10,    27,    60,    21,    10,    31,    32,    10,
      34,    10,    10,    37,    38,    39,     9,    35,    35,     3,
       4,     5,     6,    60,    35,    10,    10,    51,    52,    36,
      36,    36,    56,     3,     4,     5,     6,    21,    20,     6,
      23,    11,    12,    13,    14,    15,    16,     3,     4,     5,
       6,    21,   118,    76,   309,   217,    15,    90,    99,    86,
     103,    -1,    -1,    -1,    -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    41,    46,    53,    64,    65,    71,    86,   105,
      45,    17,    18,    42,    56,    87,    88,    89,    47,    56,
      66,    67,    56,    72,    73,     0,    71,    86,    86,    17,
      89,    93,    94,   105,    59,    42,    88,     5,    56,    90,
      68,    47,    67,    74,    54,    73,    86,    93,   105,    93,
     105,    56,    94,   105,    60,    56,    59,    61,    10,    19,
      35,    35,    93,   105,   105,    59,    35,    89,    91,    92,
      57,     5,    56,    17,    18,    56,    69,    70,    41,   105,
      89,    96,    97,    41,    98,    56,    19,    60,    62,    56,
      59,    61,    56,    56,    56,    36,    70,    75,    56,    19,
      60,    42,    89,    99,   100,    26,   102,    92,    61,    91,
      57,    10,    10,    10,    17,    18,    56,    76,    77,    78,
      97,    95,    56,   101,    42,   100,     5,     7,     8,    23,
      27,    31,    32,    34,    37,    38,    39,    51,    52,    56,
     104,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,    36,    57,    60,    62,
      56,    56,    56,    17,    18,    42,    56,    78,    35,    10,
      19,    56,    59,    59,    59,    59,    59,   106,     5,    20,
      24,    56,    57,    58,    59,   110,   113,   121,    10,    10,
     106,    59,    48,     9,    48,    59,    61,    10,    25,   107,
       9,    10,    48,    10,    62,    61,    10,    59,    10,    59,
      10,    59,    56,    56,    17,    18,    56,    81,    82,    56,
      98,    56,     9,    56,   121,    56,    59,   121,   122,   122,
      31,    56,    56,    61,   121,     3,     4,     5,     6,    21,
      40,    56,    56,    22,    50,   121,    56,    60,   103,   121,
     121,    22,   121,    56,    57,    17,    18,    56,    79,    80,
      79,    79,    56,    56,    56,    36,    82,   102,   121,    60,
      61,    60,    60,   121,   122,    11,    12,    13,    14,    15,
      16,    43,    44,    60,    60,    59,   121,    60,   121,   121,
     121,   121,   121,    59,    60,    59,    59,    59,    10,    59,
      19,    60,    62,    59,    10,    62,    56,    56,    56,    19,
      60,    60,    60,    59,    59,    59,    36,    10,    10,   121,
      10,    10,    60,   121,   121,   121,   121,   121,   121,   122,
     122,    28,    32,   122,    62,   122,    10,    60,   103,    60,
      56,    60,   103,   121,     9,    61,    60,    80,    10,    10,
      10,    96,    96,    96,    62,   106,   106,    60,    61,    60,
      60,    10,    60,    60,   121,   121,    10,    60,    60,    60,
      60,    61,    29,    30,    33,    10,   121,    10,    10,    10,
      62,    83,    84,    85,    10,   121,   106,    62,     9,    35,
      35,    35,    62,    30,   121,    98,    98,    98,    60,    10,
     102,   102,   102,    10,    36,    36,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    66,    66,    68,    67,    69,    69,    70,    70,
      70,    71,    72,    72,    74,    73,    75,    75,    76,    76,
      76,    77,    77,    78,    78,    78,    79,    79,    79,    80,
      80,    80,    81,    81,    83,    82,    84,    82,    85,    82,
      86,    86,    87,    87,    88,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    92,    93,    93,    95,    94,    96,    96,    96,    97,
      98,    98,    99,    99,   100,   101,   101,   102,   103,   103,
     104,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   109,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   112,   113,   113,   114,   114,   114,   115,   116,   116,
     116,   116,   116,   117,   117,   118,   119,   120,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     4,     3,     3,     2,     3,     1,
       3,     2,     2,     1,     0,     5,     2,     1,     3,     3,
       3,     3,     2,     1,     0,     9,     2,     0,     3,     3,
       3,     2,     1,     6,     6,     6,     3,     1,     0,     2,
       2,     2,     2,     1,     0,    10,     0,    10,     0,    10,
       2,     3,     2,     1,     3,     1,     1,     1,     3,     9,
       6,     4,     7,     4,     1,     2,     6,     4,     3,     1,
       0,     2,     2,     1,     0,    10,     3,     1,     0,     2,
       3,     2,     2,     1,     3,     3,     1,     3,     3,     1,
       2,     8,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     2,     2,     1,     1,     1,     1,     2,
       7,     5,     3,     5,     6,     3,     5,     6,     3,     6,
       6,     5,     3,     4,     5,     8,    11,     5,     4,     7,
      10,     5,     4,     9,     7,     7,     7,     7,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     4,     7,
       2,     2,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: typedefBl ClassDefBlock GDeclBlock FdefBlock MainBlock  */
#line 63 "ex1.y"
                { printf("Done!\n"); exit(0); }
#line 1682 "y.tab.c"
    break;

  case 3: /* program: typedefBl GDeclBlock FdefBlock MainBlock  */
#line 65 "ex1.y"
                { printf("Done!\n"); exit(0); }
#line 1688 "y.tab.c"
    break;

  case 4: /* program: ClassDefBlock GDeclBlock FdefBlock MainBlock  */
#line 67 "ex1.y"
                { printf("Done!\n"); exit(0); }
#line 1694 "y.tab.c"
    break;

  case 5: /* program: ClassDefBlock GDeclBlock MainBlock  */
#line 69 "ex1.y"
        { printf("Done!\n"); exit(0); }
#line 1700 "y.tab.c"
    break;

  case 6: /* program: GDeclBlock FdefBlock MainBlock  */
#line 71 "ex1.y"
                { printf("Done!\n"); exit(0); }
#line 1706 "y.tab.c"
    break;

  case 7: /* program: GDeclBlock MainBlock  */
#line 73 "ex1.y"
                { printf("Done!"); (yyval.node)=NULL; }
#line 1712 "y.tab.c"
    break;

  case 8: /* program: typedefBl GDeclBlock MainBlock  */
#line 75 "ex1.y"
                { printf("Done!\n"); exit(0); }
#line 1718 "y.tab.c"
    break;

  case 10: /* typedefBl: TYPE_start typedefList TYPE_end  */
#line 84 "ex1.y"
                                           { printType(); }
#line 1724 "y.tab.c"
    break;

  case 14: /* $@1: %empty  */
#line 94 "ex1.y"
             { createNewType((yyvsp[0].node)->varname); }
#line 1730 "y.tab.c"
    break;

  case 15: /* typedef: ID $@1 LBRACE typefieldL RBRACE  */
#line 95 "ex1.y"
                { setFieldsOfType((yyvsp[-4].node)->varname,(yyvsp[-1].field)); }
#line 1736 "y.tab.c"
    break;

  case 16: /* typefieldL: typefieldL typefield  */
#line 99 "ex1.y"
                                { (yyval.field)=mergerField((yyvsp[-1].field),(yyvsp[0].field)); }
#line 1742 "y.tab.c"
    break;

  case 17: /* typefieldL: typefield  */
#line 100 "ex1.y"
                                { (yyval.field)=(yyvsp[0].field); }
#line 1748 "y.tab.c"
    break;

  case 18: /* typefield: INTT ID SEMICOLON  */
#line 104 "ex1.y"
                                { (yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup("INT")); }
#line 1754 "y.tab.c"
    break;

  case 19: /* typefield: STRINGT ID SEMICOLON  */
#line 105 "ex1.y"
                                { (yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup("STRING")); }
#line 1760 "y.tab.c"
    break;

  case 20: /* typefield: ID ID SEMICOLON  */
#line 106 "ex1.y"
                                { (yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup((yyvsp[-2].node)->varname)); }
#line 1766 "y.tab.c"
    break;

  case 21: /* ClassDefBlock: CLASSK ClassDefList ENDCLASSK  */
#line 114 "ex1.y"
                                         { (yyval.node)=(yyvsp[-1].node); printClassTable(); }
#line 1772 "y.tab.c"
    break;

  case 22: /* ClassDefList: ClassDefList ClassDef  */
#line 118 "ex1.y"
                                 { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 1778 "y.tab.c"
    break;

  case 23: /* ClassDefList: ClassDef  */
#line 119 "ex1.y"
                                 { (yyval.node)=(yyvsp[0].node); }
#line 1784 "y.tab.c"
    break;

  case 24: /* $@2: %empty  */
#line 124 "ex1.y"
                { currClass = CInstall((yyvsp[0].node)->varname, NULL); }
#line 1790 "y.tab.c"
    break;

  case 25: /* ClassDef: ID $@2 LBRACE DECL ClassFieldDeclList ClassMethodDeclList ENDDECL ClassMethodDefList RBRACE  */
#line 131 "ex1.y"
                { (yyval.node)=NULL; currClass=NULL; }
#line 1796 "y.tab.c"
    break;

  case 26: /* ClassFieldDeclList: ClassFieldDeclList ClassFieldDecl  */
#line 135 "ex1.y"
                                             { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 1802 "y.tab.c"
    break;

  case 27: /* ClassFieldDeclList: %empty  */
#line 136 "ex1.y"
                                             { (yyval.node)=NULL; }
#line 1808 "y.tab.c"
    break;

  case 28: /* ClassFieldDecl: INTT ID SEMICOLON  */
#line 141 "ex1.y"
                { Class_Finstall(currClass,"INT",(yyvsp[-1].node)->varname);       (yyval.node)=NULL; }
#line 1814 "y.tab.c"
    break;

  case 29: /* ClassFieldDecl: STRINGT ID SEMICOLON  */
#line 143 "ex1.y"
                { Class_Finstall(currClass,"STRING",(yyvsp[-1].node)->varname);    (yyval.node)=NULL; }
#line 1820 "y.tab.c"
    break;

  case 30: /* ClassFieldDecl: ID ID SEMICOLON  */
#line 145 "ex1.y"
                { Class_Finstall(currClass,(yyvsp[-2].node)->varname,(yyvsp[-1].node)->varname); (yyval.node)=NULL; }
#line 1826 "y.tab.c"
    break;

  case 31: /* ClassMethodDeclList: ClassMethodDeclList ClassMethodDecl  */
#line 149 "ex1.y"
                                               { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 1832 "y.tab.c"
    break;

  case 32: /* ClassMethodDeclList: ClassMethodDecl  */
#line 150 "ex1.y"
                                               { (yyval.node)=(yyvsp[0].node); }
#line 1838 "y.tab.c"
    break;

  case 33: /* ClassMethodDecl: INTT ID '(' classDeclParamList ')' SEMICOLON  */
#line 155 "ex1.y"
                {
			Class_Minstall(currClass,(yyvsp[-4].node)->varname,typeLookup("INT"),classMParams);
			classMParams=NULL; (yyval.node)=NULL;
		}
#line 1847 "y.tab.c"
    break;

  case 34: /* ClassMethodDecl: STRINGT ID '(' classDeclParamList ')' SEMICOLON  */
#line 160 "ex1.y"
                {
			Class_Minstall(currClass,(yyvsp[-4].node)->varname,typeLookup("STRING"),classMParams);
			classMParams=NULL; (yyval.node)=NULL;
		}
#line 1856 "y.tab.c"
    break;

  case 35: /* ClassMethodDecl: ID ID '(' classDeclParamList ')' SEMICOLON  */
#line 165 "ex1.y"
                {
			TypeTable *rt=typeLookup((yyvsp[-5].node)->varname);
			if(!rt){printf("Unknown return type '%s'\n",(yyvsp[-5].node)->varname);exit(1);}
			Class_Minstall(currClass,(yyvsp[-4].node)->varname,rt,classMParams);
			classMParams=NULL; (yyval.node)=NULL;
		}
#line 1867 "y.tab.c"
    break;

  case 39: /* classDeclParam: INTT ID  */
#line 181 "ex1.y"
                {
			Param *p=(Param*)malloc(sizeof(Param));
			p->name=(char*)malloc(strlen((yyvsp[0].node)->varname)+1);
			strcpy(p->name,(yyvsp[0].node)->varname);
			p->type=INT; p->typeTableEntry=NULL; p->classtableEntry=NULL; p->next=NULL;
			if(!classMParams){ classMParams=p; }
			else{ Param *h=classMParams; while(h->next)h=h->next; h->next=p; }
		}
#line 1880 "y.tab.c"
    break;

  case 40: /* classDeclParam: STRINGT ID  */
#line 190 "ex1.y"
                {
			Param *p=(Param*)malloc(sizeof(Param));
			p->name=(char*)malloc(strlen((yyvsp[0].node)->varname)+1);
			strcpy(p->name,(yyvsp[0].node)->varname);
			p->type=STRING; p->typeTableEntry=NULL; p->classtableEntry=NULL; p->next=NULL;
			if(!classMParams){ classMParams=p; }
			else{ Param *h=classMParams; while(h->next)h=h->next; h->next=p; }
		}
#line 1893 "y.tab.c"
    break;

  case 41: /* classDeclParam: ID ID  */
#line 199 "ex1.y"
                {
			Param *p=(Param*)malloc(sizeof(Param));
			p->name=(char*)malloc(strlen((yyvsp[0].node)->varname)+1);
			strcpy(p->name,(yyvsp[0].node)->varname);
			p->type=USER_TYPE; p->typeTableEntry=typeLookup((yyvsp[-1].node)->varname);
			p->classtableEntry=NULL; p->next=NULL;
			if(!classMParams){ classMParams=p; }
			else{ Param *h=classMParams; while(h->next)h=h->next; h->next=p; }
		}
#line 1907 "y.tab.c"
    break;

  case 42: /* ClassMethodDefList: ClassMethodDefList ClassMethodDef  */
#line 211 "ex1.y"
                                             { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 1913 "y.tab.c"
    break;

  case 43: /* ClassMethodDefList: ClassMethodDef  */
#line 212 "ex1.y"
                                             { (yyval.node)=(yyvsp[0].node); }
#line 1919 "y.tab.c"
    break;

  case 44: /* $@3: %empty  */
#line 216 "ex1.y"
        {
            Memberfunclist *mfl = Class_Mlookup(currClass, (yyvsp[-3].node)->varname);
            if (!mfl) { printf("Method '%s' not declared\n", (yyvsp[-3].node)->varname); exit(1); }
            linstall("self", CLASS_TYPE, true, NULL);

            /* FIX: synthesize a temporary Gsymbol so createReturn can check type */
            currfunc = (Gsymbol *)malloc(sizeof(Gsymbol));
            currfunc->type = INT;
            currfunc->name = (yyvsp[-3].node)->varname;
            currfunc->paramlist = NULL;
        }
#line 1935 "y.tab.c"
    break;

  case 45: /* ClassMethodDef: INTT ID '(' paramlist ')' $@3 LBRACE LdeclBlock Body RBRACE  */
#line 228 "ex1.y"
        { (yyval.node) = createClassMethodDef(createType(INT), (yyvsp[-8].node)->varname, (yyvsp[-6].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1941 "y.tab.c"
    break;

  case 46: /* $@4: %empty  */
#line 231 "ex1.y"
        {
            Memberfunclist *mfl = Class_Mlookup(currClass, (yyvsp[-3].node)->varname);
            if (!mfl) { printf("Method '%s' not declared\n", (yyvsp[-3].node)->varname); exit(1); }
            linstall("self", CLASS_TYPE, true, NULL);

            /* FIX */
            currfunc = (Gsymbol *)malloc(sizeof(Gsymbol));
            currfunc->type = STRING;
            currfunc->name = (yyvsp[-3].node)->varname;
            currfunc->paramlist = NULL;
        }
#line 1957 "y.tab.c"
    break;

  case 47: /* ClassMethodDef: STRINGT ID '(' paramlist ')' $@4 LBRACE LdeclBlock Body RBRACE  */
#line 243 "ex1.y"
        { (yyval.node) = createClassMethodDef(createType(STRING), (yyvsp[-8].node)->varname, (yyvsp[-6].node), (yyvsp[-2].node), (yyvsp[-1].node)); }
#line 1963 "y.tab.c"
    break;

  case 48: /* $@5: %empty  */
#line 246 "ex1.y"
        {
            Memberfunclist *mfl = Class_Mlookup(currClass, (yyvsp[-3].node)->varname);
            if (!mfl) { printf("Method '%s' not declared\n", (yyvsp[-3].node)->varname); exit(1); }
            linstall("self", CLASS_TYPE, true, NULL);

            /* FIX */
            currfunc = (Gsymbol *)malloc(sizeof(Gsymbol));
            currfunc->type = (strcmp((yyvsp[-4].node)->varname,"INT")==0) ? INT :
                             (strcmp((yyvsp[-4].node)->varname,"STRING")==0) ? STRING : USER_TYPE;
            currfunc->name = (yyvsp[-3].node)->varname;
            currfunc->paramlist = NULL;
        }
#line 1980 "y.tab.c"
    break;

  case 49: /* ClassMethodDef: ID ID '(' paramlist ')' $@5 LBRACE LdeclBlock Body RBRACE  */
#line 259 "ex1.y"
        {
            TypeTable *rt = typeLookup((yyvsp[-9].node)->varname);
            if (!rt) { printf("Unknown return type '%s'\n", (yyvsp[-9].node)->varname); exit(1); }
            int rtype = (strcmp((yyvsp[-9].node)->varname,"INT")==0) ? INT :
                        (strcmp((yyvsp[-9].node)->varname,"STRING")==0) ? STRING : USER_TYPE;
            (yyval.node) = createClassMethodDef(createType(rtype), (yyvsp[-8].node)->varname, (yyvsp[-6].node), (yyvsp[-2].node), (yyvsp[-1].node));
        }
#line 1992 "y.tab.c"
    break;

  case 50: /* GDeclBlock: DECL ENDDECL  */
#line 273 "ex1.y"
                { (yyval.node)=NULL; }
#line 1998 "y.tab.c"
    break;

  case 51: /* GDeclBlock: DECL GDecList ENDDECL  */
#line 275 "ex1.y"
                { addToST((yyvsp[-1].node)); printSymbolTable(); (yyval.node)=(yyvsp[-1].node); }
#line 2004 "y.tab.c"
    break;

  case 52: /* GDecList: GDecList GDecL  */
#line 279 "ex1.y"
                          { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 2010 "y.tab.c"
    break;

  case 53: /* GDecList: GDecL  */
#line 280 "ex1.y"
                          { (yyval.node)=(yyvsp[0].node); }
#line 2016 "y.tab.c"
    break;

  case 54: /* GDecL: Type GVarList SEMICOLON  */
#line 285 "ex1.y"
                { (yyval.node)=createDeclaration((yyvsp[-2].node),(yyvsp[-1].node)); }
#line 2022 "y.tab.c"
    break;

  case 55: /* Type: INTT  */
#line 289 "ex1.y"
                  { (yyval.node)=createType(INT); }
#line 2028 "y.tab.c"
    break;

  case 56: /* Type: STRINGT  */
#line 290 "ex1.y"
                  { (yyval.node)=createType(STRING); }
#line 2034 "y.tab.c"
    break;

  case 57: /* Type: ID  */
#line 292 "ex1.y"
                {
			Classtable *cls=CLookup((yyvsp[0].node)->varname);
			if(cls){
				tnode *t=(tnode*)malloc(sizeof(tnode));
				t->nodetype=Ntype; t->type=CLASS_TYPE;
				t->left=t->right=NULL;
				t->typeTableEntry=NULL;
				t->classtableEntry=cls;
				t->varname=NULL;
				(yyval.node)=t;
			} else {
				(yyval.node)=createUserType((yyvsp[0].node));
			}
		}
#line 2053 "y.tab.c"
    break;

  case 58: /* GVarList: GVarList COMM ID  */
#line 309 "ex1.y"
                                                     { (yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2059 "y.tab.c"
    break;

  case 59: /* GVarList: GVarList COMM ID '[' NUM ']' '[' NUM ']'  */
#line 310 "ex1.y"
                                                     { (yyval.node)=createArray((yyvsp[-8].node),(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node))); }
#line 2065 "y.tab.c"
    break;

  case 60: /* GVarList: GVarList COMM ID '[' NUM ']'  */
#line 311 "ex1.y"
                                                     { (yyval.node)=createArray((yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2071 "y.tab.c"
    break;

  case 61: /* GVarList: GVarList COMM MUL ID  */
#line 312 "ex1.y"
                                                     { (yyval.node)=createConnect((yyvsp[-3].node),createPointer((yyvsp[0].node))); }
#line 2077 "y.tab.c"
    break;

  case 62: /* GVarList: ID '[' NUM ']' '[' NUM ']'  */
#line 313 "ex1.y"
                                                     { (yyval.node)=createArray(NULL,(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node))); }
#line 2083 "y.tab.c"
    break;

  case 63: /* GVarList: ID '[' NUM ']'  */
#line 314 "ex1.y"
                                                     { (yyval.node)=createArray(NULL,(yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2089 "y.tab.c"
    break;

  case 64: /* GVarList: ID  */
#line 315 "ex1.y"
                                                     { (yyval.node)=(yyvsp[0].node); }
#line 2095 "y.tab.c"
    break;

  case 65: /* GVarList: MUL ID  */
#line 316 "ex1.y"
                                                     { (yyval.node)=createPointer((yyvsp[0].node)); }
#line 2101 "y.tab.c"
    break;

  case 66: /* GVarList: GVarList COMM ID '(' funcdeclparamlist ')'  */
#line 317 "ex1.y"
                                                     { (yyval.node)=createConnect((yyvsp[-5].node),createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node))); }
#line 2107 "y.tab.c"
    break;

  case 67: /* GVarList: ID '(' funcdeclparamlist ')'  */
#line 318 "ex1.y"
                                                     { (yyval.node)=createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2113 "y.tab.c"
    break;

  case 68: /* funcdeclparamlist: funcdeclparamlist COMM funcdeclparam  */
#line 322 "ex1.y"
                                                { (yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2119 "y.tab.c"
    break;

  case 69: /* funcdeclparamlist: funcdeclparam  */
#line 323 "ex1.y"
                                                { (yyval.node)=(yyvsp[0].node); }
#line 2125 "y.tab.c"
    break;

  case 70: /* funcdeclparamlist: %empty  */
#line 324 "ex1.y"
                                                { (yyval.node)=NULL; }
#line 2131 "y.tab.c"
    break;

  case 71: /* funcdeclparam: Type ID  */
#line 328 "ex1.y"
                   { (yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),false); }
#line 2137 "y.tab.c"
    break;

  case 72: /* FdefBlock: FdefBlock Fdef  */
#line 336 "ex1.y"
                          { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 2143 "y.tab.c"
    break;

  case 73: /* FdefBlock: Fdef  */
#line 337 "ex1.y"
                          { (yyval.node)=(yyvsp[0].node); }
#line 2149 "y.tab.c"
    break;

  case 74: /* $@6: %empty  */
#line 341 "ex1.y"
                                    { currfunc=Lookup((yyvsp[-3].node)->varname); }
#line 2155 "y.tab.c"
    break;

  case 75: /* Fdef: Type ID '(' paramlist ')' $@6 LBRACE LdeclBlock Body RBRACE  */
#line 343 "ex1.y"
                { (yyval.node)=createFuncDef((yyvsp[-9].node),(yyvsp[-8].node),(yyvsp[-6].node),(yyvsp[-2].node),(yyvsp[-1].node)); }
#line 2161 "y.tab.c"
    break;

  case 76: /* paramlist: paramlist COMM param  */
#line 347 "ex1.y"
                                { (yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2167 "y.tab.c"
    break;

  case 77: /* paramlist: param  */
#line 348 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2173 "y.tab.c"
    break;

  case 78: /* paramlist: %empty  */
#line 349 "ex1.y"
                                { (yyval.node)=NULL; }
#line 2179 "y.tab.c"
    break;

  case 79: /* param: Type ID  */
#line 353 "ex1.y"
                   { (yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),true); }
#line 2185 "y.tab.c"
    break;

  case 80: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 357 "ex1.y"
                                 { (yyval.node)=(yyvsp[-1].node); }
#line 2191 "y.tab.c"
    break;

  case 81: /* LdeclBlock: DECL ENDDECL  */
#line 358 "ex1.y"
                                 { (yyval.node)=NULL; }
#line 2197 "y.tab.c"
    break;

  case 82: /* LDecList: LDecList LDecl  */
#line 362 "ex1.y"
                          { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 2203 "y.tab.c"
    break;

  case 83: /* LDecList: LDecl  */
#line 363 "ex1.y"
                          { (yyval.node)=(yyvsp[0].node); }
#line 2209 "y.tab.c"
    break;

  case 84: /* LDecl: Type IdList SEMICOLON  */
#line 367 "ex1.y"
                                 { (yyval.node)=createLocalDecl((yyvsp[-2].node),(yyvsp[-1].node)); }
#line 2215 "y.tab.c"
    break;

  case 85: /* IdList: IdList COMM ID  */
#line 371 "ex1.y"
                          { (yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2221 "y.tab.c"
    break;

  case 86: /* IdList: ID  */
#line 372 "ex1.y"
                          { (yyval.node)=(yyvsp[0].node); }
#line 2227 "y.tab.c"
    break;

  case 87: /* Body: BEGINK stmtlist ENDK  */
#line 376 "ex1.y"
                                { (yyval.node)=(yyvsp[-1].node); }
#line 2233 "y.tab.c"
    break;

  case 88: /* ArgList: ArgList COMM expr  */
#line 380 "ex1.y"
                             { (yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node)); }
#line 2239 "y.tab.c"
    break;

  case 89: /* ArgList: expr  */
#line 381 "ex1.y"
                             { (yyval.node)=(yyvsp[0].node); }
#line 2245 "y.tab.c"
    break;

  case 90: /* returnstmt: RETURN_K expr  */
#line 385 "ex1.y"
                         { (yyval.node)=createReturn((yyvsp[0].node)); }
#line 2251 "y.tab.c"
    break;

  case 91: /* MainBlock: INTT MAINK '(' ')' LBRACE LdeclBlock Body RBRACE  */
#line 390 "ex1.y"
                { (yyval.node)=createMain((yyvsp[-2].node),(yyvsp[-1].node)); }
#line 2257 "y.tab.c"
    break;

  case 92: /* stmtlist: stmtlist stmt  */
#line 398 "ex1.y"
                         { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node)); }
#line 2263 "y.tab.c"
    break;

  case 93: /* stmtlist: stmt  */
#line 399 "ex1.y"
                         { (yyval.node)=(yyvsp[0].node); }
#line 2269 "y.tab.c"
    break;

  case 94: /* stmt: InputStmt  */
#line 403 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2275 "y.tab.c"
    break;

  case 95: /* stmt: OutputStmt  */
#line 404 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2281 "y.tab.c"
    break;

  case 96: /* stmt: AsgStmt  */
#line 405 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2287 "y.tab.c"
    break;

  case 97: /* stmt: IfStmt  */
#line 406 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2293 "y.tab.c"
    break;

  case 98: /* stmt: WhileStmt  */
#line 407 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2299 "y.tab.c"
    break;

  case 99: /* stmt: BREAKK SEMICOLON  */
#line 408 "ex1.y"
                                { (yyval.node)=createBreak(); }
#line 2305 "y.tab.c"
    break;

  case 100: /* stmt: CONTINUEK SEMICOLON  */
#line 409 "ex1.y"
                                { (yyval.node)=createContinue(); }
#line 2311 "y.tab.c"
    break;

  case 101: /* stmt: doWhileStmt  */
#line 410 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2317 "y.tab.c"
    break;

  case 102: /* stmt: RepeatStmt  */
#line 411 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2323 "y.tab.c"
    break;

  case 103: /* stmt: returnstmt SEMICOLON  */
#line 412 "ex1.y"
                                { (yyval.node)=(yyvsp[-1].node); }
#line 2329 "y.tab.c"
    break;

  case 104: /* stmt: funcCall SEMICOLON  */
#line 413 "ex1.y"
                                { (yyval.node)=(yyvsp[-1].node); }
#line 2335 "y.tab.c"
    break;

  case 105: /* stmt: allocStmt  */
#line 414 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2341 "y.tab.c"
    break;

  case 106: /* stmt: freeStmt  */
#line 415 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2347 "y.tab.c"
    break;

  case 107: /* stmt: newStmt  */
#line 416 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2353 "y.tab.c"
    break;

  case 108: /* stmt: deleteStmt  */
#line 417 "ex1.y"
                                { (yyval.node)=(yyvsp[0].node); }
#line 2359 "y.tab.c"
    break;

  case 109: /* stmt: dotAccess SEMICOLON  */
#line 419 "ex1.y"
                                { (yyval.node)=(yyvsp[-1].node); }
#line 2365 "y.tab.c"
    break;

  case 110: /* newStmt: ID ASSIGN NEWK '(' ID ')' SEMICOLON  */
#line 428 "ex1.y"
                { (yyval.node)=createNewObject((yyvsp[-6].node),(yyvsp[-2].node)->varname); }
#line 2371 "y.tab.c"
    break;

  case 111: /* deleteStmt: DELETEK '(' ID ')' SEMICOLON  */
#line 433 "ex1.y"
                { (yyval.node)=createDeleteObject((yyvsp[-2].node)); }
#line 2377 "y.tab.c"
    break;

  case 112: /* dotAccess: SELFK DOT ID  */
#line 442 "ex1.y"
                {
			tnode *s=createSelf();
			(yyval.node)=createClassFieldAccess(s,(yyvsp[0].node)->varname);
		}
#line 2386 "y.tab.c"
    break;

  case 113: /* dotAccess: SELFK DOT ID '(' ')'  */
#line 447 "ex1.y"
                {
			tnode *s=createSelf();
			(yyval.node)=createClassMethodCall(s,(yyvsp[-2].node)->varname,NULL);
		}
#line 2395 "y.tab.c"
    break;

  case 114: /* dotAccess: SELFK DOT ID '(' ArgList ')'  */
#line 452 "ex1.y"
                {
			tnode *s=createSelf();
			(yyval.node)=createClassMethodCall(s,(yyvsp[-3].node)->varname,(yyvsp[-1].node));
		}
#line 2404 "y.tab.c"
    break;

  case 115: /* dotAccess: ID DOT ID  */
#line 457 "ex1.y"
                {
			Gsymbol *g=Lookup((yyvsp[-2].node)->varname);
			if(g && g->type==CLASS_TYPE){
				tnode *obj=createVariableUsageNode((yyvsp[-2].node)->varname);
				obj->type=CLASS_TYPE; obj->classtableEntry=g->classtableEntry;
				(yyval.node)=createClassFieldAccess(obj,(yyvsp[0].node)->varname);
			} else {
				(yyval.node)=createMemberAcc((yyvsp[-2].node),(yyvsp[0].node));
			}
		}
#line 2419 "y.tab.c"
    break;

  case 116: /* dotAccess: ID DOT ID '(' ')'  */
#line 468 "ex1.y"
                {
			Gsymbol *g=Lookup((yyvsp[-4].node)->varname);
			if(!g||g->type!=CLASS_TYPE){
				printf("'%s' is not a class object\n",(yyvsp[-4].node)->varname);exit(1);
			}
			tnode *obj=createVariableUsageNode((yyvsp[-4].node)->varname);
			obj->type=CLASS_TYPE; obj->classtableEntry=g->classtableEntry;
			(yyval.node)=createClassMethodCall(obj,(yyvsp[-2].node)->varname,NULL);
		}
#line 2433 "y.tab.c"
    break;

  case 117: /* dotAccess: ID DOT ID '(' ArgList ')'  */
#line 478 "ex1.y"
                {
			Gsymbol *g=Lookup((yyvsp[-5].node)->varname);
			if(!g||g->type!=CLASS_TYPE){
				printf("'%s' is not a class object\n",(yyvsp[-5].node)->varname);exit(1);
			}
			tnode *obj=createVariableUsageNode((yyvsp[-5].node)->varname);
			obj->type=CLASS_TYPE; obj->classtableEntry=g->classtableEntry;
			(yyval.node)=createClassMethodCall(obj,(yyvsp[-3].node)->varname,(yyvsp[-1].node));
		}
#line 2447 "y.tab.c"
    break;

  case 118: /* dotAccess: dotAccess DOT ID  */
#line 488 "ex1.y"
                {
			(yyval.node)=createMemberAcc((yyvsp[-2].node),(yyvsp[0].node));
		}
#line 2455 "y.tab.c"
    break;

  case 119: /* allocStmt: ID ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 499 "ex1.y"
                { (yyval.node)=createAlloc((yyvsp[-5].node)); }
#line 2461 "y.tab.c"
    break;

  case 120: /* allocStmt: dotAccess ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 501 "ex1.y"
                { (yyval.node)=createAlloc((yyvsp[-5].node)); }
#line 2467 "y.tab.c"
    break;

  case 121: /* freeStmt: FREE '(' ID ')' SEMICOLON  */
#line 506 "ex1.y"
                { (yyval.node)=createFree((yyvsp[-2].node)); }
#line 2473 "y.tab.c"
    break;

  case 122: /* funcCall: ID '(' ')'  */
#line 510 "ex1.y"
                              { (yyval.node)=createFuncCall((yyvsp[-2].node),NULL); }
#line 2479 "y.tab.c"
    break;

  case 123: /* funcCall: ID '(' ArgList ')'  */
#line 511 "ex1.y"
                              { (yyval.node)=createFuncCall((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2485 "y.tab.c"
    break;

  case 124: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 516 "ex1.y"
                { (yyval.node)=createRead((yyvsp[-2].node)); }
#line 2491 "y.tab.c"
    break;

  case 125: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 518 "ex1.y"
                { (yyval.node)=createReadArr((yyvsp[-5].node),(yyvsp[-3].node)); }
#line 2497 "y.tab.c"
    break;

  case 126: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 520 "ex1.y"
                { (yyval.node)=createReadArr((yyvsp[-8].node),createConnect((yyvsp[-6].node),(yyvsp[-3].node))); }
#line 2503 "y.tab.c"
    break;

  case 127: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 525 "ex1.y"
                { (yyval.node)=createWrite((yyvsp[-2].node)); }
#line 2509 "y.tab.c"
    break;

  case 128: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 530 "ex1.y"
                { (yyval.node)=createAssign((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2515 "y.tab.c"
    break;

  case 129: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 532 "ex1.y"
                { (yyval.node)=createArrAssign((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node)); }
#line 2521 "y.tab.c"
    break;

  case 130: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 534 "ex1.y"
                { (yyval.node)=createArrAssign((yyvsp[-9].node),createConnect((yyvsp[-7].node),(yyvsp[-4].node)),(yyvsp[-1].node)); }
#line 2527 "y.tab.c"
    break;

  case 131: /* AsgStmt: MUL ID ASSIGN expr SEMICOLON  */
#line 536 "ex1.y"
                { (yyval.node)=createAssignToDeref((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2533 "y.tab.c"
    break;

  case 132: /* AsgStmt: dotAccess ASSIGN expr SEMICOLON  */
#line 539 "ex1.y"
                {
			/* If lhs is a class field node use createClassFieldAssign,
			   otherwise it is a user-defined type member — use createMemAssg */
			if((yyvsp[-3].node)->nodetype==NclassField)
				(yyval.node)=createClassFieldAssign((yyvsp[-3].node),(yyvsp[-1].node));
			else
				(yyval.node)=createMemAssg((yyvsp[-3].node),(yyvsp[-1].node));
		}
#line 2546 "y.tab.c"
    break;

  case 133: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ELSEK stmtlist ENDIFK  */
#line 551 "ex1.y"
                { (yyval.node)=createIfElseNode((yyvsp[-6].node),(yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2552 "y.tab.c"
    break;

  case 134: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ENDIFK  */
#line 553 "ex1.y"
                { (yyval.node)=createIfNode((yyvsp[-4].node),(yyvsp[-1].node)); }
#line 2558 "y.tab.c"
    break;

  case 135: /* WhileStmt: WHILEK '(' boolexpr ')' DOK stmtlist ENDWHILEK  */
#line 558 "ex1.y"
                { (yyval.node)=createWhile((yyvsp[-4].node),(yyvsp[-1].node)); }
#line 2564 "y.tab.c"
    break;

  case 136: /* RepeatStmt: REPEATK stmtlist UNTILK '(' boolexpr ')' SEMICOLON  */
#line 563 "ex1.y"
                { (yyval.node)=createRepeat((yyvsp[-5].node),(yyvsp[-2].node)); }
#line 2570 "y.tab.c"
    break;

  case 137: /* doWhileStmt: DOK stmtlist WHILEK '(' boolexpr ')' SEMICOLON  */
#line 568 "ex1.y"
                { (yyval.node)=createDoWhile((yyvsp[-5].node),(yyvsp[-2].node)); }
#line 2576 "y.tab.c"
    break;

  case 138: /* expr: expr PLUS expr  */
#line 576 "ex1.y"
                           { (yyval.node)=makeOperatorNode('+',(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2582 "y.tab.c"
    break;

  case 139: /* expr: expr MINUS expr  */
#line 577 "ex1.y"
                           { (yyval.node)=makeOperatorNode('-',(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2588 "y.tab.c"
    break;

  case 140: /* expr: expr MUL expr  */
#line 578 "ex1.y"
                           { (yyval.node)=makeOperatorNode('*',(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2594 "y.tab.c"
    break;

  case 141: /* expr: expr DIV expr  */
#line 579 "ex1.y"
                           { (yyval.node)=makeOperatorNode('/',(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2600 "y.tab.c"
    break;

  case 142: /* expr: expr MOD expr  */
#line 580 "ex1.y"
                           { (yyval.node)=makeOperatorNode('%',(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2606 "y.tab.c"
    break;

  case 143: /* expr: '(' expr ')'  */
#line 581 "ex1.y"
                           { (yyval.node)=(yyvsp[-1].node); }
#line 2612 "y.tab.c"
    break;

  case 144: /* expr: NUM  */
#line 582 "ex1.y"
                           { (yyval.node)=(yyvsp[0].node); }
#line 2618 "y.tab.c"
    break;

  case 145: /* expr: ID  */
#line 583 "ex1.y"
                           { (yyval.node)=createVariableUsageNode((yyvsp[0].node)->varname); }
#line 2624 "y.tab.c"
    break;

  case 146: /* expr: STRING_LITERAL  */
#line 584 "ex1.y"
                           { (yyval.node)=(yyvsp[0].node); }
#line 2630 "y.tab.c"
    break;

  case 147: /* expr: NULLk  */
#line 585 "ex1.y"
                           { (yyval.node)=createNull(); }
#line 2636 "y.tab.c"
    break;

  case 148: /* expr: ID '[' expr ']'  */
#line 587 "ex1.y"
                { (yyval.node)=createArrayAccess((yyvsp[-3].node),(yyvsp[-1].node)); }
#line 2642 "y.tab.c"
    break;

  case 149: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 589 "ex1.y"
                { (yyval.node)=createArrayAccess((yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node))); }
#line 2648 "y.tab.c"
    break;

  case 150: /* expr: MUL ID  */
#line 590 "ex1.y"
                           { (yyval.node)=createDerefer((yyvsp[0].node)); }
#line 2654 "y.tab.c"
    break;

  case 151: /* expr: AMP ID  */
#line 591 "ex1.y"
                           { (yyval.node)=createAddr((yyvsp[0].node)); }
#line 2660 "y.tab.c"
    break;

  case 152: /* expr: funcCall  */
#line 592 "ex1.y"
                           { (yyval.node)=(yyvsp[0].node); }
#line 2666 "y.tab.c"
    break;

  case 153: /* expr: dotAccess  */
#line 593 "ex1.y"
                           { (yyval.node)=(yyvsp[0].node); }
#line 2672 "y.tab.c"
    break;

  case 154: /* boolexpr: expr GE expr  */
#line 597 "ex1.y"
                                { (yyval.node)=createCondition(Nge,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2678 "y.tab.c"
    break;

  case 155: /* boolexpr: expr LE expr  */
#line 598 "ex1.y"
                                { (yyval.node)=createCondition(Nle,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2684 "y.tab.c"
    break;

  case 156: /* boolexpr: expr GT expr  */
#line 599 "ex1.y"
                                { (yyval.node)=createCondition(Ngt,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2690 "y.tab.c"
    break;

  case 157: /* boolexpr: expr LT expr  */
#line 600 "ex1.y"
                                { (yyval.node)=createCondition(Nlt,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2696 "y.tab.c"
    break;

  case 158: /* boolexpr: expr NE expr  */
#line 601 "ex1.y"
                                { (yyval.node)=createCondition(Nne,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2702 "y.tab.c"
    break;

  case 159: /* boolexpr: expr EQ expr  */
#line 602 "ex1.y"
                                { (yyval.node)=createCondition(Neq,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2708 "y.tab.c"
    break;

  case 160: /* boolexpr: boolexpr OR boolexpr  */
#line 603 "ex1.y"
                                { (yyval.node)=createCondition(Nor,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2714 "y.tab.c"
    break;

  case 161: /* boolexpr: boolexpr AND boolexpr  */
#line 604 "ex1.y"
                                { (yyval.node)=createCondition(Nand,(yyvsp[-2].node),(yyvsp[0].node)); }
#line 2720 "y.tab.c"
    break;

  case 162: /* boolexpr: '(' boolexpr ')'  */
#line 605 "ex1.y"
                                { (yyval.node)=(yyvsp[-1].node); }
#line 2726 "y.tab.c"
    break;


#line 2730 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 608 "ex1.y"


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
