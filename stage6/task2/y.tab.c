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
	#include<stdbool.h>
	#include "ex1.h"
	#include "code.h"
	#include "evaluate.h"
	#include "symbol.h"
	int yylex(void);
	int yyerror(const char *s);
	extern FILE *yyin;
	extern char *yytext;


#line 86 "y.tab.c"

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
    ENDK = 279,                    /* ENDK  */
    BEGINK = 280,                  /* BEGINK  */
    IFK = 281,                     /* IFK  */
    THENK = 282,                   /* THENK  */
    ELSEK = 283,                   /* ELSEK  */
    ENDIFK = 284,                  /* ENDIFK  */
    WHILEK = 285,                  /* WHILEK  */
    DOK = 286,                     /* DOK  */
    ENDWHILEK = 287,               /* ENDWHILEK  */
    RETURN_K = 288,                /* RETURN_K  */
    LBRACE = 289,                  /* LBRACE  */
    RBRACE = 290,                  /* RBRACE  */
    BREAKK = 291,                  /* BREAKK  */
    CONTINUEK = 292,               /* CONTINUEK  */
    REPEATK = 293,                 /* REPEATK  */
    UNTILK = 294,                  /* UNTILK  */
    DECL = 295,                    /* DECL  */
    ENDDECL = 296,                 /* ENDDECL  */
    OR = 297,                      /* OR  */
    AND = 298,                     /* AND  */
    MAINK = 299,                   /* MAINK  */
    TYPE_start = 300,              /* TYPE_start  */
    TYPE_end = 301,                /* TYPE_end  */
    DOT = 302,                     /* DOT  */
    ARROW = 303,                   /* ARROW  */
    ID = 304,                      /* ID  */
    NUM = 305,                     /* NUM  */
    STRING_LITERAL = 306           /* STRING_LITERAL  */
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
#define ENDK 279
#define BEGINK 280
#define IFK 281
#define THENK 282
#define ELSEK 283
#define ENDIFK 284
#define WHILEK 285
#define DOK 286
#define ENDWHILEK 287
#define RETURN_K 288
#define LBRACE 289
#define RBRACE 290
#define BREAKK 291
#define CONTINUEK 292
#define REPEATK 293
#define UNTILK 294
#define DECL 295
#define ENDDECL 296
#define OR 297
#define AND 298
#define MAINK 299
#define TYPE_start 300
#define TYPE_end 301
#define DOT 302
#define ARROW 303
#define ID 304
#define NUM 305
#define STRING_LITERAL 306

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "ex1.y"

	struct tnode *node;
	FieldList *field;
	

#line 247 "y.tab.c"

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
  YYSYMBOL_ENDK = 24,                      /* ENDK  */
  YYSYMBOL_BEGINK = 25,                    /* BEGINK  */
  YYSYMBOL_IFK = 26,                       /* IFK  */
  YYSYMBOL_THENK = 27,                     /* THENK  */
  YYSYMBOL_ELSEK = 28,                     /* ELSEK  */
  YYSYMBOL_ENDIFK = 29,                    /* ENDIFK  */
  YYSYMBOL_WHILEK = 30,                    /* WHILEK  */
  YYSYMBOL_DOK = 31,                       /* DOK  */
  YYSYMBOL_ENDWHILEK = 32,                 /* ENDWHILEK  */
  YYSYMBOL_RETURN_K = 33,                  /* RETURN_K  */
  YYSYMBOL_LBRACE = 34,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 35,                    /* RBRACE  */
  YYSYMBOL_BREAKK = 36,                    /* BREAKK  */
  YYSYMBOL_CONTINUEK = 37,                 /* CONTINUEK  */
  YYSYMBOL_REPEATK = 38,                   /* REPEATK  */
  YYSYMBOL_UNTILK = 39,                    /* UNTILK  */
  YYSYMBOL_DECL = 40,                      /* DECL  */
  YYSYMBOL_ENDDECL = 41,                   /* ENDDECL  */
  YYSYMBOL_OR = 42,                        /* OR  */
  YYSYMBOL_AND = 43,                       /* AND  */
  YYSYMBOL_MAINK = 44,                     /* MAINK  */
  YYSYMBOL_TYPE_start = 45,                /* TYPE_start  */
  YYSYMBOL_TYPE_end = 46,                  /* TYPE_end  */
  YYSYMBOL_DOT = 47,                       /* DOT  */
  YYSYMBOL_ARROW = 48,                     /* ARROW  */
  YYSYMBOL_ID = 49,                        /* ID  */
  YYSYMBOL_NUM = 50,                       /* NUM  */
  YYSYMBOL_STRING_LITERAL = 51,            /* STRING_LITERAL  */
  YYSYMBOL_52_ = 52,                       /* '['  */
  YYSYMBOL_53_ = 53,                       /* ']'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 56,                  /* $accept  */
  YYSYMBOL_program = 57,                   /* program  */
  YYSYMBOL_typedefBl = 58,                 /* typedefBl  */
  YYSYMBOL_typedefList = 59,               /* typedefList  */
  YYSYMBOL_typedef = 60,                   /* typedef  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_typefieldL = 62,                /* typefieldL  */
  YYSYMBOL_typefield = 63,                 /* typefield  */
  YYSYMBOL_GDeclBlock = 64,                /* GDeclBlock  */
  YYSYMBOL_GDecList = 65,                  /* GDecList  */
  YYSYMBOL_GDecL = 66,                     /* GDecL  */
  YYSYMBOL_Type = 67,                      /* Type  */
  YYSYMBOL_GVarList = 68,                  /* GVarList  */
  YYSYMBOL_funcdeclparamlist = 69,         /* funcdeclparamlist  */
  YYSYMBOL_funcdeclparam = 70,             /* funcdeclparam  */
  YYSYMBOL_FdefBlock = 71,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 72,                      /* Fdef  */
  YYSYMBOL_73_2 = 73,                      /* $@2  */
  YYSYMBOL_paramlist = 74,                 /* paramlist  */
  YYSYMBOL_param = 75,                     /* param  */
  YYSYMBOL_LdeclBlock = 76,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 77,                  /* LDecList  */
  YYSYMBOL_LDecl = 78,                     /* LDecl  */
  YYSYMBOL_IdList = 79,                    /* IdList  */
  YYSYMBOL_Body = 80,                      /* Body  */
  YYSYMBOL_ArgList = 81,                   /* ArgList  */
  YYSYMBOL_returnstmt = 82,                /* returnstmt  */
  YYSYMBOL_MainBlock = 83,                 /* MainBlock  */
  YYSYMBOL_stmtlist = 84,                  /* stmtlist  */
  YYSYMBOL_stmt = 85,                      /* stmt  */
  YYSYMBOL_allocStmt = 86,                 /* allocStmt  */
  YYSYMBOL_freeStmt = 87,                  /* freeStmt  */
  YYSYMBOL_funcCall = 88,                  /* funcCall  */
  YYSYMBOL_InputStmt = 89,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 90,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 91,                   /* AsgStmt  */
  YYSYMBOL_memberAccess = 92,              /* memberAccess  */
  YYSYMBOL_IfStmt = 93,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 94,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 95,                /* RepeatStmt  */
  YYSYMBOL_doWhileStmt = 96,               /* doWhileStmt  */
  YYSYMBOL_expr = 97,                      /* expr  */
  YYSYMBOL_boolexpr = 98                   /* boolexpr  */
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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   491

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  288

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   306


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
      54,    55,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    41,    41,    47,    48,    49,    52,    53,    56,    57,
      60,    60,    63,    64,    67,    68,    69,    71,    72,    79,
      80,    83,    86,    87,    88,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   103,   104,   105,   108,   111,
     112,   115,   115,   118,   119,   120,   122,   125,   126,   129,
     130,   132,   135,   136,   139,   142,   143,   146,   148,   151,
     152,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   170,   171,   174,   178,   179,   181,
     182,   183,   185,   187,   188,   189,   190,   191,   194,   195,
     196,   199,   200,   203,   206,   208,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   228,   229,   230,   231,   232,   233,   234,   235,   236
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
  "ENDK", "BEGINK", "IFK", "THENK", "ELSEK", "ENDIFK", "WHILEK", "DOK",
  "ENDWHILEK", "RETURN_K", "LBRACE", "RBRACE", "BREAKK", "CONTINUEK",
  "REPEATK", "UNTILK", "DECL", "ENDDECL", "OR", "AND", "MAINK",
  "TYPE_start", "TYPE_end", "DOT", "ARROW", "ID", "NUM", "STRING_LITERAL",
  "'['", "']'", "'('", "')'", "$accept", "program", "typedefBl",
  "typedefList", "typedef", "$@1", "typefieldL", "typefield", "GDeclBlock",
  "GDecList", "GDecL", "Type", "GVarList", "funcdeclparamlist",
  "funcdeclparam", "FdefBlock", "Fdef", "$@2", "paramlist", "param",
  "LdeclBlock", "LDecList", "LDecl", "IdList", "Body", "ArgList",
  "returnstmt", "MainBlock", "stmtlist", "stmt", "allocStmt", "freeStmt",
  "funcCall", "InputStmt", "OutputStmt", "AsgStmt", "memberAccess",
  "IfStmt", "WhileStmt", "RepeatStmt", "doWhileStmt", "expr", "boolexpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-130)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,   -43,   100,   108,    16,     7,    34,  -130,    11,  -130,
    -130,  -130,  -130,   109,  -130,     8,  -130,  -130,   127,  -130,
    -130,   104,  -130,    23,  -130,  -130,    56,   -31,    43,    73,
    -130,  -130,   -43,    70,   104,  -130,  -130,    86,  -130,    79,
     115,  -130,    10,   212,   101,  -130,  -130,   119,    72,   120,
      45,  -130,   126,    36,   132,   154,   174,   210,  -130,   115,
     293,   164,   144,  -130,   115,  -130,  -130,   183,   115,   233,
     247,   254,  -130,  -130,   217,    68,  -130,  -130,   223,   321,
    -130,   361,   238,   229,  -130,   248,    75,  -130,  -130,  -130,
    -130,   115,  -130,  -130,   152,  -130,  -130,   251,   228,   243,
     249,   262,   281,   361,   220,   292,   299,   361,    -4,   326,
     282,  -130,  -130,  -130,   327,  -130,  -130,  -130,    32,  -130,
    -130,  -130,  -130,  -130,   294,   306,  -130,  -130,   309,  -130,
     297,   354,   312,   220,   315,   226,   226,   388,   322,   323,
     147,  -130,  -130,   220,  -130,   329,   244,  -130,  -130,   291,
     188,   328,   330,   220,    47,  -130,  -130,  -130,  -130,   204,
     351,  -130,   356,   119,  -130,   220,   180,     6,   325,   226,
     427,   252,   290,   353,  -130,  -130,   220,    14,   220,   220,
     220,   220,   220,   358,   359,   399,  -130,  -130,    33,  -130,
      85,   244,   363,   441,  -130,   355,   164,   449,   220,   412,
     413,   417,   201,   310,   220,   220,   220,   220,   220,   220,
     226,   226,   402,   403,   226,    71,  -130,   246,   246,  -130,
    -130,  -130,   226,   380,  -130,    -3,   220,  -130,   381,  -130,
    -130,   414,  -130,   110,  -130,  -130,  -130,  -130,   244,   244,
     244,   244,   244,   244,   407,  -130,   361,   361,   331,   404,
     373,   447,   220,   220,   244,   448,  -130,   189,   255,   318,
      35,   220,   450,  -130,   461,   139,  -130,   220,   451,   361,
    -130,  -130,  -130,   181,  -130,  -130,   454,   215,  -130,   352,
    -130,   220,   421,  -130,   469,   458,  -130,  -130
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     5,     0,    22,
      23,    17,    24,     0,    20,     0,     7,    10,     0,     9,
       1,     0,     3,     0,    18,    19,     0,    31,     0,     0,
       6,     8,    22,     0,     0,    40,     4,     0,    32,     0,
      37,    21,     0,     0,     0,    39,     2,     0,     0,     0,
       0,    36,     0,    25,     0,     0,     0,     0,    13,    45,
       0,     0,    30,    38,     0,    34,    28,     0,    37,     0,
       0,     0,    11,    12,     0,     0,    44,    48,     0,     0,
      50,     0,     0,     0,    35,     0,     0,    14,    15,    16,
      46,     0,    41,    53,     0,    47,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    72,    73,     0,    61,    62,    63,     0,    64,
      65,    69,    68,    58,     0,    27,    33,    43,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   102,   104,     0,   109,   110,    57,    66,    67,     0,
       0,     0,     0,     0,     0,    70,    54,    59,    71,     0,
       0,    29,     0,     0,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,    90,     0,    77,
       0,    56,     0,     0,    88,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,    96,    97,    98,
      99,   100,     0,     0,    83,     0,     0,    78,     0,    87,
      26,     0,    86,     0,    79,    82,    76,   119,   113,   111,
     112,   114,   116,   115,   117,   118,     0,     0,     0,   105,
       0,     0,     0,     0,    55,     0,    42,     0,     0,     0,
       0,     0,     0,    74,     0,     0,    75,     0,     0,     0,
      92,    93,    95,     0,    94,    84,     0,     0,    80,     0,
     106,     0,     0,    91,     0,     0,    85,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,  -130,   459,  -130,  -130,   423,   464,  -130,
     465,    12,  -130,   415,   420,  -130,   452,  -130,  -130,   390,
     324,  -130,   406,  -130,   295,  -130,  -130,   140,   -99,  -107,
    -130,  -130,   -81,  -130,  -130,  -130,   -79,  -130,  -130,  -130,
    -130,   -70,  -129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    18,    19,    29,    57,    58,     6,    13,
      14,    49,    28,    50,    51,    34,    35,   128,    75,    76,
      61,    79,    80,    94,    82,   190,   109,     7,   110,   111,
     112,   113,   144,   115,   116,   117,   145,   119,   120,   121,
     122,   170,   171
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     114,     8,   118,   157,   137,   150,   252,   172,   149,   178,
     179,   180,   181,    26,    15,    52,    20,   178,   179,   180,
     181,    39,   114,    40,   118,    15,   114,   182,   118,   114,
     157,   118,     1,    33,   146,   182,   178,   179,   180,   181,
     203,   159,   157,   151,   152,   272,    33,     2,   153,   253,
     154,     1,   138,    41,   182,     2,   114,    27,   118,    53,
       3,   200,    42,   167,    64,    23,   247,   139,   114,   216,
     118,    74,    78,   177,   178,   179,   180,   181,    37,   160,
     185,   244,   245,   188,   191,   248,   225,    91,    67,   193,
      68,    78,   182,   250,    64,   197,   140,   141,   142,   202,
      65,   143,   189,    74,   226,    38,   215,    43,   217,   218,
     219,   220,   221,   178,   179,   180,   181,     9,    10,    44,
      47,    32,    10,    92,   249,    62,     9,    10,   233,    48,
     126,   182,     9,    10,   238,   239,   240,   241,   242,   243,
     227,    11,   178,   179,   180,   181,    22,   258,   259,    12,
      24,   157,   157,    12,    16,    59,   254,    17,    12,    60,
     182,    36,   129,   257,    12,   114,   114,   118,   118,    63,
     279,   130,   157,    30,    46,    66,    17,   114,   114,   118,
     118,    69,   264,   265,   178,   179,   180,   181,   114,    81,
     118,   273,   276,   138,   151,   152,    83,   277,   114,   176,
     118,   154,   182,    70,   178,   179,   180,   181,   139,   138,
     184,   284,   204,   205,   206,   207,   208,   209,   178,   179,
     180,   181,   182,    71,   139,   138,   192,    54,    55,    54,
      55,   138,   198,    85,   280,   199,   182,   140,   141,   142,
     139,   267,   143,    87,   268,    72,   139,   178,   179,   180,
     181,   180,   181,   140,   141,   142,   216,    88,   143,    56,
      97,    56,    98,    99,    89,   182,    90,   182,   282,   140,
     141,   142,    93,   123,   143,   140,   141,   142,   100,   124,
     169,   101,   132,   269,   270,   102,   103,    97,   104,    98,
      99,   105,   106,   107,   210,   211,    97,   133,    98,    99,
     131,   125,   147,   134,   108,   100,   156,   212,   101,   148,
       9,    10,   102,   103,   100,   104,   135,   101,   105,   106,
     107,   102,   103,    97,   104,    98,    99,   105,   106,   107,
     183,   108,   210,   211,    77,   136,   155,   158,     9,    10,
     108,   100,    12,   163,   101,   213,   164,   161,   102,   103,
     271,   104,   210,   211,   105,   106,   107,    97,   162,    98,
      99,   166,    95,   165,   168,   237,    97,   108,    98,    99,
      12,   174,   175,   210,   211,   100,   160,   186,   101,   187,
     201,   283,   102,   103,   100,   104,   260,   101,   105,   106,
     107,   102,   103,    97,   104,    98,    99,   105,   106,   107,
     194,   108,   178,   179,   180,   181,   195,   214,   230,   224,
     108,   100,   222,   223,   101,   210,   211,   228,   173,   103,
     182,   104,   234,   235,   105,   106,   107,   236,   262,   246,
     178,   179,   180,   181,   247,   251,   255,   108,   204,   205,
     206,   207,   208,   209,   178,   179,   180,   181,   182,   256,
     211,   229,   178,   179,   180,   181,   261,   263,   266,   232,
     274,   278,   182,   281,   178,   179,   180,   181,   287,    21,
     182,   275,   178,   179,   180,   181,   285,    31,    25,   286,
      73,   127,   182,    86,    84,    96,    45,   196,     0,     0,
     182,   231
};

static const yytype_int16 yycheck[] =
{
      81,    44,    81,   110,   103,     9,     9,   136,   107,     3,
       4,     5,     6,     5,     2,     5,     0,     3,     4,     5,
       6,    52,   103,    54,   103,    13,   107,    21,   107,   110,
     137,   110,    17,    21,   104,    21,     3,     4,     5,     6,
     169,     9,   149,    47,    48,    10,    34,    40,    52,    52,
      54,    17,     5,    10,    21,    40,   137,    49,   137,    49,
      45,    55,    19,   133,    19,    54,    31,    20,   149,    55,
     149,    59,    60,   143,     3,     4,     5,     6,    55,    47,
     150,   210,   211,   153,   154,   214,    53,    19,    52,   159,
      54,    79,    21,   222,    19,   165,    49,    50,    51,   169,
      55,    54,    55,    91,    19,    49,   176,    34,   178,   179,
     180,   181,   182,     3,     4,     5,     6,    17,    18,    49,
      34,    17,    18,    55,    53,    53,    17,    18,   198,    50,
      55,    21,    17,    18,   204,   205,   206,   207,   208,   209,
      55,    41,     3,     4,     5,     6,     6,   246,   247,    49,
      41,   258,   259,    49,    46,    54,   226,    49,    49,    40,
      21,    21,    10,    53,    49,   246,   247,   246,   247,    49,
     269,    19,   279,    46,    34,    49,    49,   258,   259,   258,
     259,    49,   252,   253,     3,     4,     5,     6,   269,    25,
     269,   261,    53,     5,    47,    48,    52,   267,   279,    52,
     279,    54,    21,    49,     3,     4,     5,     6,    20,     5,
      22,   281,    11,    12,    13,    14,    15,    16,     3,     4,
       5,     6,    21,    49,    20,     5,    22,    17,    18,    17,
      18,     5,    52,    50,    53,    55,    21,    49,    50,    51,
      20,    52,    54,    10,    55,    35,    20,     3,     4,     5,
       6,     5,     6,    49,    50,    51,    55,    10,    54,    49,
       5,    49,     7,     8,    10,    21,    49,    21,    53,    49,
      50,    51,    49,    35,    54,    49,    50,    51,    23,    50,
      54,    26,    54,    28,    29,    30,    31,     5,    33,     7,
       8,    36,    37,    38,    42,    43,     5,    54,     7,     8,
      49,    53,    10,    54,    49,    23,    24,    55,    26,    10,
      17,    18,    30,    31,    23,    33,    54,    26,    36,    37,
      38,    30,    31,     5,    33,     7,     8,    36,    37,    38,
      39,    49,    42,    43,    41,    54,    10,    10,    17,    18,
      49,    23,    49,    34,    26,    55,    49,    53,    30,    31,
      32,    33,    42,    43,    36,    37,    38,     5,    52,     7,
       8,    49,    41,     9,    49,    55,     5,    49,     7,     8,
      49,    49,    49,    42,    43,    23,    47,    49,    26,    49,
      55,    29,    30,    31,    23,    33,    55,    26,    36,    37,
      38,    30,    31,     5,    33,     7,     8,    36,    37,    38,
      49,    49,     3,     4,     5,     6,    50,    54,    53,    10,
      49,    23,    54,    54,    26,    42,    43,    54,    30,    31,
      21,    33,    10,    10,    36,    37,    38,    10,    55,    27,
       3,     4,     5,     6,    31,    55,    55,    49,    11,    12,
      13,    14,    15,    16,     3,     4,     5,     6,    21,    35,
      43,    10,     3,     4,     5,     6,    52,    10,    10,    10,
      10,    10,    21,     9,     3,     4,     5,     6,    10,     5,
      21,    10,     3,     4,     5,     6,    55,    18,    13,    10,
      57,    91,    21,    68,    64,    79,    34,   163,    -1,    -1,
      21,   196
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    40,    45,    57,    58,    64,    83,    44,    17,
      18,    41,    49,    65,    66,    67,    46,    49,    59,    60,
       0,    64,    83,    54,    41,    66,     5,    49,    68,    61,
      46,    60,    17,    67,    71,    72,    83,    55,    49,    52,
      54,    10,    19,    34,    49,    72,    83,    34,    50,    67,
      69,    70,     5,    49,    17,    18,    49,    62,    63,    54,
      40,    76,    53,    49,    19,    55,    49,    52,    54,    49,
      49,    49,    35,    63,    67,    74,    75,    41,    67,    77,
      78,    25,    80,    52,    70,    50,    69,    10,    10,    10,
      49,    19,    55,    49,    79,    41,    78,     5,     7,     8,
      23,    26,    30,    31,    33,    36,    37,    38,    49,    82,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    35,    50,    53,    55,    75,    73,    10,
      19,    49,    54,    54,    54,    54,    54,    84,     5,    20,
      49,    50,    51,    54,    88,    92,    97,    10,    10,    84,
       9,    47,    48,    52,    54,    10,    24,    85,    10,     9,
      47,    53,    52,    34,    49,     9,    49,    97,    49,    54,
      97,    98,    98,    30,    49,    49,    52,    97,     3,     4,
       5,     6,    21,    39,    22,    97,    49,    49,    97,    55,
      81,    97,    22,    97,    49,    50,    76,    97,    52,    55,
      55,    55,    97,    98,    11,    12,    13,    14,    15,    16,
      42,    43,    55,    55,    54,    97,    55,    97,    97,    97,
      97,    97,    54,    54,    10,    53,    19,    55,    54,    10,
      53,    80,    10,    97,    10,    10,    10,    55,    97,    97,
      97,    97,    97,    97,    98,    98,    27,    31,    98,    53,
      98,    55,     9,    52,    97,    55,    35,    53,    84,    84,
      55,    52,    55,    10,    97,    97,    10,    52,    55,    28,
      29,    32,    10,    97,    10,    10,    53,    97,    10,    84,
      53,     9,    53,    29,    97,    55,    10,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    58,    58,    59,    59,
      61,    60,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    69,    69,    69,    70,    71,
      71,    73,    72,    74,    74,    74,    75,    76,    76,    77,
      77,    78,    79,    79,    80,    81,    81,    82,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    86,    86,    87,    88,    88,    89,
      89,    89,    90,    91,    91,    91,    91,    91,    92,    92,
      92,    93,    93,    94,    95,    96,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     3,     1,     3,     2,     2,     1,
       0,     5,     2,     1,     3,     3,     3,     2,     3,     2,
       1,     3,     1,     1,     1,     3,     9,     6,     4,     7,
       4,     1,     2,     6,     4,     3,     1,     0,     2,     2,
       1,     0,    10,     3,     1,     0,     2,     3,     2,     2,
       1,     3,     3,     1,     3,     3,     1,     2,     8,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       2,     2,     1,     1,     6,     6,     5,     3,     4,     5,
       8,    11,     5,     4,     7,    10,     5,     4,     3,     3,
       3,     9,     7,     7,     7,     7,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     4,     7,     2,     2,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3
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
  case 2: /* program: typedefBl GDeclBlock FdefBlock MainBlock  */
#line 41 "ex1.y"
                                                        {
				//$$=createConnect($2,$3);
				//generate($3);
				printf("Done!\n");
				exit(0);
			}
#line 1556 "y.tab.c"
    break;

  case 3: /* program: GDeclBlock MainBlock  */
#line 47 "ex1.y"
                                                {printf("Done!");(yyval.node)=NULL;}
#line 1562 "y.tab.c"
    break;

  case 4: /* program: typedefBl GDeclBlock MainBlock  */
#line 48 "ex1.y"
                                                                     { printf("Done!\n"); exit(0); }
#line 1568 "y.tab.c"
    break;

  case 6: /* typedefBl: TYPE_start typedefList TYPE_end  */
#line 52 "ex1.y"
                                                {printType();}
#line 1574 "y.tab.c"
    break;

  case 10: /* $@1: %empty  */
#line 60 "ex1.y"
            {createNewType((yyvsp[0].node)->varname);}
#line 1580 "y.tab.c"
    break;

  case 11: /* typedef: ID $@1 LBRACE typefieldL RBRACE  */
#line 60 "ex1.y"
                                                                        {setFieldsOfType((yyvsp[-4].node)->varname,(yyvsp[-1].field));}
#line 1586 "y.tab.c"
    break;

  case 12: /* typefieldL: typefieldL typefield  */
#line 63 "ex1.y"
                                        {(yyval.field)=mergerField((yyvsp[-1].field),(yyvsp[0].field));}
#line 1592 "y.tab.c"
    break;

  case 13: /* typefieldL: typefield  */
#line 64 "ex1.y"
                                {(yyval.field)=(yyvsp[0].field);}
#line 1598 "y.tab.c"
    break;

  case 14: /* typefield: INTT ID SEMICOLON  */
#line 67 "ex1.y"
                                {(yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup("INT"));}
#line 1604 "y.tab.c"
    break;

  case 15: /* typefield: STRINGT ID SEMICOLON  */
#line 68 "ex1.y"
                                        {(yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup("STRING"));}
#line 1610 "y.tab.c"
    break;

  case 16: /* typefield: ID ID SEMICOLON  */
#line 69 "ex1.y"
                                        {(yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup((yyvsp[-2].node)->varname));}
#line 1616 "y.tab.c"
    break;

  case 17: /* GDeclBlock: DECL ENDDECL  */
#line 71 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1622 "y.tab.c"
    break;

  case 18: /* GDeclBlock: DECL GDecList ENDDECL  */
#line 72 "ex1.y"
                                        {
			addToST((yyvsp[-1].node));
			printSymbolTable();
			(yyval.node)=(yyvsp[-1].node);
		}
#line 1632 "y.tab.c"
    break;

  case 19: /* GDecList: GDecList GDecL  */
#line 79 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1638 "y.tab.c"
    break;

  case 20: /* GDecList: GDecL  */
#line 80 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1644 "y.tab.c"
    break;

  case 21: /* GDecL: Type GVarList SEMICOLON  */
#line 83 "ex1.y"
                                {(yyval.node)=createDeclaration((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1650 "y.tab.c"
    break;

  case 22: /* Type: INTT  */
#line 86 "ex1.y"
                {(yyval.node)=createType(INT);}
#line 1656 "y.tab.c"
    break;

  case 23: /* Type: STRINGT  */
#line 87 "ex1.y"
                        {(yyval.node)=createType(STRING);}
#line 1662 "y.tab.c"
    break;

  case 24: /* Type: ID  */
#line 88 "ex1.y"
                {(yyval.node)=createUserType((yyvsp[0].node));}
#line 1668 "y.tab.c"
    break;

  case 25: /* GVarList: GVarList COMM ID  */
#line 91 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1674 "y.tab.c"
    break;

  case 26: /* GVarList: GVarList COMM ID '[' NUM ']' '[' NUM ']'  */
#line 92 "ex1.y"
                                                                {(yyval.node)=createArray((yyvsp[-8].node),(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1680 "y.tab.c"
    break;

  case 27: /* GVarList: GVarList COMM ID '[' NUM ']'  */
#line 93 "ex1.y"
                                                {(yyval.node)=createArray((yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1686 "y.tab.c"
    break;

  case 28: /* GVarList: GVarList COMM MUL ID  */
#line 94 "ex1.y"
                                        {(yyval.node)=createConnect((yyvsp[-3].node),createPointer((yyvsp[0].node)));}
#line 1692 "y.tab.c"
    break;

  case 29: /* GVarList: ID '[' NUM ']' '[' NUM ']'  */
#line 95 "ex1.y"
                                                {(yyval.node)=createArray(NULL,(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1698 "y.tab.c"
    break;

  case 30: /* GVarList: ID '[' NUM ']'  */
#line 96 "ex1.y"
                                        {(yyval.node)=createArray(NULL,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1704 "y.tab.c"
    break;

  case 31: /* GVarList: ID  */
#line 97 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1710 "y.tab.c"
    break;

  case 32: /* GVarList: MUL ID  */
#line 98 "ex1.y"
                        {(yyval.node)=createPointer((yyvsp[0].node));}
#line 1716 "y.tab.c"
    break;

  case 33: /* GVarList: GVarList COMM ID '(' funcdeclparamlist ')'  */
#line 99 "ex1.y"
                                                                {(yyval.node)=createConnect((yyvsp[-5].node),createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node)));}
#line 1722 "y.tab.c"
    break;

  case 34: /* GVarList: ID '(' funcdeclparamlist ')'  */
#line 100 "ex1.y"
                                                {(yyval.node)=createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1728 "y.tab.c"
    break;

  case 35: /* funcdeclparamlist: funcdeclparamlist COMM funcdeclparam  */
#line 103 "ex1.y"
                                                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1734 "y.tab.c"
    break;

  case 36: /* funcdeclparamlist: funcdeclparam  */
#line 104 "ex1.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1740 "y.tab.c"
    break;

  case 37: /* funcdeclparamlist: %empty  */
#line 105 "ex1.y"
                                        {(yyval.node)=NULL;}
#line 1746 "y.tab.c"
    break;

  case 38: /* funcdeclparam: Type ID  */
#line 108 "ex1.y"
                        {(yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),false);}
#line 1752 "y.tab.c"
    break;

  case 39: /* FdefBlock: FdefBlock Fdef  */
#line 111 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1758 "y.tab.c"
    break;

  case 40: /* FdefBlock: Fdef  */
#line 112 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1764 "y.tab.c"
    break;

  case 41: /* $@2: %empty  */
#line 115 "ex1.y"
                                {currfunc=Lookup((yyvsp[-3].node)->varname);}
#line 1770 "y.tab.c"
    break;

  case 42: /* Fdef: Type ID '(' paramlist ')' $@2 LBRACE LdeclBlock Body RBRACE  */
#line 115 "ex1.y"
                                                                                                        {(yyval.node)=createFuncDef((yyvsp[-9].node),(yyvsp[-8].node),(yyvsp[-6].node),(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1776 "y.tab.c"
    break;

  case 43: /* paramlist: paramlist COMM param  */
#line 118 "ex1.y"
                                        { (yyval.node) = createConnect((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1782 "y.tab.c"
    break;

  case 44: /* paramlist: param  */
#line 119 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1788 "y.tab.c"
    break;

  case 45: /* paramlist: %empty  */
#line 120 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1794 "y.tab.c"
    break;

  case 46: /* param: Type ID  */
#line 122 "ex1.y"
                {(yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),true);}
#line 1800 "y.tab.c"
    break;

  case 47: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 125 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1806 "y.tab.c"
    break;

  case 48: /* LdeclBlock: DECL ENDDECL  */
#line 126 "ex1.y"
                                        {(yyval.node)=NULL;}
#line 1812 "y.tab.c"
    break;

  case 49: /* LDecList: LDecList LDecl  */
#line 129 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1818 "y.tab.c"
    break;

  case 50: /* LDecList: LDecl  */
#line 130 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1824 "y.tab.c"
    break;

  case 51: /* LDecl: Type IdList SEMICOLON  */
#line 132 "ex1.y"
                                {(yyval.node)=createLocalDecl((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1830 "y.tab.c"
    break;

  case 52: /* IdList: IdList COMM ID  */
#line 135 "ex1.y"
                        {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1836 "y.tab.c"
    break;

  case 53: /* IdList: ID  */
#line 136 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1842 "y.tab.c"
    break;

  case 54: /* Body: BEGINK stmtlist ENDK  */
#line 139 "ex1.y"
                                {(yyval.node)=(yyvsp[-1].node);}
#line 1848 "y.tab.c"
    break;

  case 55: /* ArgList: ArgList COMM expr  */
#line 142 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1854 "y.tab.c"
    break;

  case 56: /* ArgList: expr  */
#line 143 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1860 "y.tab.c"
    break;

  case 57: /* returnstmt: RETURN_K expr  */
#line 146 "ex1.y"
                                {(yyval.node)=createReturn((yyvsp[0].node));}
#line 1866 "y.tab.c"
    break;

  case 58: /* MainBlock: INTT MAINK '(' ')' LBRACE LdeclBlock Body RBRACE  */
#line 148 "ex1.y"
                                                            {(yyval.node)=createMain((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1872 "y.tab.c"
    break;

  case 59: /* stmtlist: stmtlist stmt  */
#line 151 "ex1.y"
                        { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1878 "y.tab.c"
    break;

  case 60: /* stmtlist: stmt  */
#line 152 "ex1.y"
                              {(yyval.node)=(yyvsp[0].node);}
#line 1884 "y.tab.c"
    break;

  case 61: /* stmt: InputStmt  */
#line 155 "ex1.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 1890 "y.tab.c"
    break;

  case 62: /* stmt: OutputStmt  */
#line 156 "ex1.y"
                             {(yyval.node)=(yyvsp[0].node);}
#line 1896 "y.tab.c"
    break;

  case 63: /* stmt: AsgStmt  */
#line 157 "ex1.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 1902 "y.tab.c"
    break;

  case 64: /* stmt: IfStmt  */
#line 158 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1908 "y.tab.c"
    break;

  case 65: /* stmt: WhileStmt  */
#line 159 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1914 "y.tab.c"
    break;

  case 66: /* stmt: BREAKK SEMICOLON  */
#line 160 "ex1.y"
                                        {(yyval.node)=createBreak();}
#line 1920 "y.tab.c"
    break;

  case 67: /* stmt: CONTINUEK SEMICOLON  */
#line 161 "ex1.y"
                                        {(yyval.node)=createContinue();}
#line 1926 "y.tab.c"
    break;

  case 68: /* stmt: doWhileStmt  */
#line 162 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1932 "y.tab.c"
    break;

  case 69: /* stmt: RepeatStmt  */
#line 163 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1938 "y.tab.c"
    break;

  case 70: /* stmt: returnstmt SEMICOLON  */
#line 164 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1944 "y.tab.c"
    break;

  case 71: /* stmt: funcCall SEMICOLON  */
#line 165 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1950 "y.tab.c"
    break;

  case 72: /* stmt: allocStmt  */
#line 166 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1956 "y.tab.c"
    break;

  case 73: /* stmt: freeStmt  */
#line 167 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1962 "y.tab.c"
    break;

  case 74: /* allocStmt: ID ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 170 "ex1.y"
                                                              { (yyval.node) = createAlloc((yyvsp[-5].node)); }
#line 1968 "y.tab.c"
    break;

  case 75: /* allocStmt: memberAccess ASSIGN ALLOC '(' ')' SEMICOLON  */
#line 171 "ex1.y"
                                                                  { (yyval.node) = createAlloc((yyvsp[-5].node)); }
#line 1974 "y.tab.c"
    break;

  case 76: /* freeStmt: FREE '(' ID ')' SEMICOLON  */
#line 174 "ex1.y"
                                                             { (yyval.node) = createFree((yyvsp[-2].node)); }
#line 1980 "y.tab.c"
    break;

  case 77: /* funcCall: ID '(' ')'  */
#line 178 "ex1.y"
                        {(yyval.node)=createFuncCall((yyvsp[-2].node),NULL);}
#line 1986 "y.tab.c"
    break;

  case 78: /* funcCall: ID '(' ArgList ')'  */
#line 179 "ex1.y"
                                        {(yyval.node)=createFuncCall((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1992 "y.tab.c"
    break;

  case 79: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 181 "ex1.y"
                                          {(yyval.node)=createRead((yyvsp[-2].node));}
#line 1998 "y.tab.c"
    break;

  case 80: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 182 "ex1.y"
                                                                {(yyval.node)=createReadArr((yyvsp[-5].node),(yyvsp[-3].node));}
#line 2004 "y.tab.c"
    break;

  case 81: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 183 "ex1.y"
                                                                        {(yyval.node)=createReadArr((yyvsp[-8].node),createConnect((yyvsp[-6].node),(yyvsp[-3].node)));}
#line 2010 "y.tab.c"
    break;

  case 82: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 185 "ex1.y"
                                             {(yyval.node)=createWrite((yyvsp[-2].node));}
#line 2016 "y.tab.c"
    break;

  case 83: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 187 "ex1.y"
                                 {(yyval.node)=createAssign((yyvsp[-3].node),(yyvsp[-1].node));}
#line 2022 "y.tab.c"
    break;

  case 84: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 188 "ex1.y"
                                                        {(yyval.node)=createArrAssign((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 2028 "y.tab.c"
    break;

  case 85: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 189 "ex1.y"
                                                                    {(yyval.node)=createArrAssign((yyvsp[-9].node),createConnect((yyvsp[-7].node),(yyvsp[-4].node)),(yyvsp[-1].node));}
#line 2034 "y.tab.c"
    break;

  case 86: /* AsgStmt: MUL ID ASSIGN expr SEMICOLON  */
#line 190 "ex1.y"
                                                {(yyval.node)=createAssignToDeref((yyvsp[-3].node),(yyvsp[-1].node));}
#line 2040 "y.tab.c"
    break;

  case 87: /* AsgStmt: memberAccess ASSIGN expr SEMICOLON  */
#line 191 "ex1.y"
                                                        {(yyval.node)=createMemAssg((yyvsp[-3].node),(yyvsp[-1].node));}
#line 2046 "y.tab.c"
    break;

  case 88: /* memberAccess: memberAccess DOT ID  */
#line 194 "ex1.y"
                                        {(yyval.node)= createMemberAcc((yyvsp[-2].node),(yyvsp[0].node),ACCDOT);}
#line 2052 "y.tab.c"
    break;

  case 89: /* memberAccess: ID DOT ID  */
#line 195 "ex1.y"
                                        {(yyval.node)= createMemberAcc((yyvsp[-2].node),(yyvsp[0].node),ACCDOT);}
#line 2058 "y.tab.c"
    break;

  case 90: /* memberAccess: ID ARROW ID  */
#line 196 "ex1.y"
                                        {(yyval.node)= createMemberAcc((yyvsp[-2].node),(yyvsp[0].node),ACCARR);}
#line 2064 "y.tab.c"
    break;

  case 91: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ELSEK stmtlist ENDIFK  */
#line 199 "ex1.y"
                                                                        {(yyval.node)=createIfElseNode((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[-1].node));}
#line 2070 "y.tab.c"
    break;

  case 92: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ENDIFK  */
#line 200 "ex1.y"
                                                                {(yyval.node)=createIfNode((yyvsp[-4].node),(yyvsp[-1].node));}
#line 2076 "y.tab.c"
    break;

  case 93: /* WhileStmt: WHILEK '(' boolexpr ')' DOK stmtlist ENDWHILEK  */
#line 203 "ex1.y"
                                                                {(yyval.node)=createWhile((yyvsp[-4].node),(yyvsp[-1].node));}
#line 2082 "y.tab.c"
    break;

  case 94: /* RepeatStmt: REPEATK stmtlist UNTILK '(' boolexpr ')' SEMICOLON  */
#line 206 "ex1.y"
                                                                   {(yyval.node)=createRepeat((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2088 "y.tab.c"
    break;

  case 95: /* doWhileStmt: DOK stmtlist WHILEK '(' boolexpr ')' SEMICOLON  */
#line 208 "ex1.y"
                                                                {(yyval.node)=createDoWhile((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2094 "y.tab.c"
    break;

  case 96: /* expr: expr PLUS expr  */
#line 211 "ex1.y"
                                {(yyval.node) = makeOperatorNode('+',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2100 "y.tab.c"
    break;

  case 97: /* expr: expr MINUS expr  */
#line 212 "ex1.y"
                                {(yyval.node) = makeOperatorNode('-',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2106 "y.tab.c"
    break;

  case 98: /* expr: expr MUL expr  */
#line 213 "ex1.y"
                                {(yyval.node) = makeOperatorNode('*',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2112 "y.tab.c"
    break;

  case 99: /* expr: expr DIV expr  */
#line 214 "ex1.y"
                                {(yyval.node) = makeOperatorNode('/',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2118 "y.tab.c"
    break;

  case 100: /* expr: expr MOD expr  */
#line 215 "ex1.y"
                                {(yyval.node) = makeOperatorNode('%',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2124 "y.tab.c"
    break;

  case 101: /* expr: '(' expr ')'  */
#line 216 "ex1.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 2130 "y.tab.c"
    break;

  case 102: /* expr: NUM  */
#line 217 "ex1.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 2136 "y.tab.c"
    break;

  case 103: /* expr: ID  */
#line 218 "ex1.y"
                                {(yyval.node)=createVariableUsageNode((yyvsp[0].node)->varname);}
#line 2142 "y.tab.c"
    break;

  case 104: /* expr: STRING_LITERAL  */
#line 219 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 2148 "y.tab.c"
    break;

  case 105: /* expr: ID '[' expr ']'  */
#line 220 "ex1.y"
                                {(yyval.node)=createArrayAccess((yyvsp[-3].node),(yyvsp[-1].node));}
#line 2154 "y.tab.c"
    break;

  case 106: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 221 "ex1.y"
                                        {(yyval.node)=createArrayAccess((yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 2160 "y.tab.c"
    break;

  case 107: /* expr: MUL ID  */
#line 222 "ex1.y"
                        {(yyval.node)=createDerefer((yyvsp[0].node));}
#line 2166 "y.tab.c"
    break;

  case 108: /* expr: AMP ID  */
#line 223 "ex1.y"
                        {(yyval.node)=createAddr((yyvsp[0].node));}
#line 2172 "y.tab.c"
    break;

  case 109: /* expr: funcCall  */
#line 224 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 2178 "y.tab.c"
    break;

  case 110: /* expr: memberAccess  */
#line 225 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 2184 "y.tab.c"
    break;

  case 111: /* boolexpr: expr GE expr  */
#line 228 "ex1.y"
                        {(yyval.node)=createCondition(Nge,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2190 "y.tab.c"
    break;

  case 112: /* boolexpr: expr LE expr  */
#line 229 "ex1.y"
                        {(yyval.node)=createCondition(Nle,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2196 "y.tab.c"
    break;

  case 113: /* boolexpr: expr GT expr  */
#line 230 "ex1.y"
                        {(yyval.node)=createCondition(Ngt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2202 "y.tab.c"
    break;

  case 114: /* boolexpr: expr LT expr  */
#line 231 "ex1.y"
                        {(yyval.node)=createCondition(Nlt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2208 "y.tab.c"
    break;

  case 115: /* boolexpr: expr NE expr  */
#line 232 "ex1.y"
                        {(yyval.node)=createCondition(Nne,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2214 "y.tab.c"
    break;

  case 116: /* boolexpr: expr EQ expr  */
#line 233 "ex1.y"
                        {(yyval.node)=createCondition(Neq,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2220 "y.tab.c"
    break;

  case 117: /* boolexpr: boolexpr OR boolexpr  */
#line 234 "ex1.y"
                                {(yyval.node)=createCondition(Nor,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2226 "y.tab.c"
    break;

  case 118: /* boolexpr: boolexpr AND boolexpr  */
#line 235 "ex1.y"
                                        {(yyval.node)=createCondition(Nand,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2232 "y.tab.c"
    break;

  case 119: /* boolexpr: '(' boolexpr ')'  */
#line 236 "ex1.y"
                                {(yyval.node)=(yyvsp[-1].node);}
#line 2238 "y.tab.c"
    break;


#line 2242 "y.tab.c"

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

#line 239 "ex1.y"


int yyerror(char const *s)
{
	extern int linecount;
    printf("yyerror %s at line %d near token %s\n",s,linecount,yytext);
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
	fprintf(target, "CALL Main\n");
	yyparse();
	
	return 0;
}
