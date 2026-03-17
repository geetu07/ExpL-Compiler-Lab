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
    ENDK = 277,                    /* ENDK  */
    BEGINK = 278,                  /* BEGINK  */
    IFK = 279,                     /* IFK  */
    THENK = 280,                   /* THENK  */
    ELSEK = 281,                   /* ELSEK  */
    ENDIFK = 282,                  /* ENDIFK  */
    WHILEK = 283,                  /* WHILEK  */
    DOK = 284,                     /* DOK  */
    ENDWHILEK = 285,               /* ENDWHILEK  */
    RETURN_K = 286,                /* RETURN_K  */
    LBRACE = 287,                  /* LBRACE  */
    RBRACE = 288,                  /* RBRACE  */
    BREAKK = 289,                  /* BREAKK  */
    CONTINUEK = 290,               /* CONTINUEK  */
    REPEATK = 291,                 /* REPEATK  */
    UNTILK = 292,                  /* UNTILK  */
    DECL = 293,                    /* DECL  */
    ENDDECL = 294,                 /* ENDDECL  */
    OR = 295,                      /* OR  */
    AND = 296,                     /* AND  */
    MAINK = 297,                   /* MAINK  */
    TYPE_start = 298,              /* TYPE_start  */
    TYPE_end = 299,                /* TYPE_end  */
    DOT = 300,                     /* DOT  */
    ARROW = 301,                   /* ARROW  */
    ID = 302,                      /* ID  */
    NUM = 303,                     /* NUM  */
    STRING_LITERAL = 304           /* STRING_LITERAL  */
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
#define ENDK 277
#define BEGINK 278
#define IFK 279
#define THENK 280
#define ELSEK 281
#define ENDIFK 282
#define WHILEK 283
#define DOK 284
#define ENDWHILEK 285
#define RETURN_K 286
#define LBRACE 287
#define RBRACE 288
#define BREAKK 289
#define CONTINUEK 290
#define REPEATK 291
#define UNTILK 292
#define DECL 293
#define ENDDECL 294
#define OR 295
#define AND 296
#define MAINK 297
#define TYPE_start 298
#define TYPE_end 299
#define DOT 300
#define ARROW 301
#define ID 302
#define NUM 303
#define STRING_LITERAL 304

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "ex1.y"

	struct tnode *node;
	FieldList *field;
	

#line 243 "y.tab.c"

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
  YYSYMBOL_ENDK = 22,                      /* ENDK  */
  YYSYMBOL_BEGINK = 23,                    /* BEGINK  */
  YYSYMBOL_IFK = 24,                       /* IFK  */
  YYSYMBOL_THENK = 25,                     /* THENK  */
  YYSYMBOL_ELSEK = 26,                     /* ELSEK  */
  YYSYMBOL_ENDIFK = 27,                    /* ENDIFK  */
  YYSYMBOL_WHILEK = 28,                    /* WHILEK  */
  YYSYMBOL_DOK = 29,                       /* DOK  */
  YYSYMBOL_ENDWHILEK = 30,                 /* ENDWHILEK  */
  YYSYMBOL_RETURN_K = 31,                  /* RETURN_K  */
  YYSYMBOL_LBRACE = 32,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 33,                    /* RBRACE  */
  YYSYMBOL_BREAKK = 34,                    /* BREAKK  */
  YYSYMBOL_CONTINUEK = 35,                 /* CONTINUEK  */
  YYSYMBOL_REPEATK = 36,                   /* REPEATK  */
  YYSYMBOL_UNTILK = 37,                    /* UNTILK  */
  YYSYMBOL_DECL = 38,                      /* DECL  */
  YYSYMBOL_ENDDECL = 39,                   /* ENDDECL  */
  YYSYMBOL_OR = 40,                        /* OR  */
  YYSYMBOL_AND = 41,                       /* AND  */
  YYSYMBOL_MAINK = 42,                     /* MAINK  */
  YYSYMBOL_TYPE_start = 43,                /* TYPE_start  */
  YYSYMBOL_TYPE_end = 44,                  /* TYPE_end  */
  YYSYMBOL_DOT = 45,                       /* DOT  */
  YYSYMBOL_ARROW = 46,                     /* ARROW  */
  YYSYMBOL_ID = 47,                        /* ID  */
  YYSYMBOL_NUM = 48,                       /* NUM  */
  YYSYMBOL_STRING_LITERAL = 49,            /* STRING_LITERAL  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_typedefBl = 56,                 /* typedefBl  */
  YYSYMBOL_typedefList = 57,               /* typedefList  */
  YYSYMBOL_typedef = 58,                   /* typedef  */
  YYSYMBOL_59_1 = 59,                      /* $@1  */
  YYSYMBOL_typefieldL = 60,                /* typefieldL  */
  YYSYMBOL_typefield = 61,                 /* typefield  */
  YYSYMBOL_GDeclBlock = 62,                /* GDeclBlock  */
  YYSYMBOL_GDecList = 63,                  /* GDecList  */
  YYSYMBOL_GDecL = 64,                     /* GDecL  */
  YYSYMBOL_Type = 65,                      /* Type  */
  YYSYMBOL_GVarList = 66,                  /* GVarList  */
  YYSYMBOL_funcdeclparamlist = 67,         /* funcdeclparamlist  */
  YYSYMBOL_funcdeclparam = 68,             /* funcdeclparam  */
  YYSYMBOL_FdefBlock = 69,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 70,                      /* Fdef  */
  YYSYMBOL_71_2 = 71,                      /* $@2  */
  YYSYMBOL_paramlist = 72,                 /* paramlist  */
  YYSYMBOL_param = 73,                     /* param  */
  YYSYMBOL_LdeclBlock = 74,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 75,                  /* LDecList  */
  YYSYMBOL_LDecl = 76,                     /* LDecl  */
  YYSYMBOL_IdList = 77,                    /* IdList  */
  YYSYMBOL_Body = 78,                      /* Body  */
  YYSYMBOL_ArgList = 79,                   /* ArgList  */
  YYSYMBOL_returnstmt = 80,                /* returnstmt  */
  YYSYMBOL_MainBlock = 81,                 /* MainBlock  */
  YYSYMBOL_stmtlist = 82,                  /* stmtlist  */
  YYSYMBOL_stmt = 83,                      /* stmt  */
  YYSYMBOL_funcCall = 84,                  /* funcCall  */
  YYSYMBOL_InputStmt = 85,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 86,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 87,                   /* AsgStmt  */
  YYSYMBOL_memberAccess = 88,              /* memberAccess  */
  YYSYMBOL_IfStmt = 89,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 90,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 91,                /* RepeatStmt  */
  YYSYMBOL_doWhileStmt = 92,               /* doWhileStmt  */
  YYSYMBOL_expr = 93,                      /* expr  */
  YYSYMBOL_boolexpr = 94                   /* boolexpr  */
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
#define YYLAST   490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      52,    53,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
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
     164,   165,   168,   169,   171,   172,   173,   175,   177,   178,
     179,   180,   181,   184,   185,   186,   189,   190,   193,   196,
     198,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   218,   219,   220,   221,
     222,   223,   224,   225,   226
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
  "EQ", "NE", "INTT", "STRINGT", "COMM", "AMP", "MOD", "ENDK", "BEGINK",
  "IFK", "THENK", "ELSEK", "ENDIFK", "WHILEK", "DOK", "ENDWHILEK",
  "RETURN_K", "LBRACE", "RBRACE", "BREAKK", "CONTINUEK", "REPEATK",
  "UNTILK", "DECL", "ENDDECL", "OR", "AND", "MAINK", "TYPE_start",
  "TYPE_end", "DOT", "ARROW", "ID", "NUM", "STRING_LITERAL", "'['", "']'",
  "'('", "')'", "$accept", "program", "typedefBl", "typedefList",
  "typedef", "$@1", "typefieldL", "typefield", "GDeclBlock", "GDecList",
  "GDecL", "Type", "GVarList", "funcdeclparamlist", "funcdeclparam",
  "FdefBlock", "Fdef", "$@2", "paramlist", "param", "LdeclBlock",
  "LDecList", "LDecl", "IdList", "Body", "ArgList", "returnstmt",
  "MainBlock", "stmtlist", "stmt", "funcCall", "InputStmt", "OutputStmt",
  "AsgStmt", "memberAccess", "IfStmt", "WhileStmt", "RepeatStmt",
  "doWhileStmt", "expr", "boolexpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      62,   -38,   100,   -10,    16,    15,    58,  -127,   -20,  -127,
    -127,  -127,  -127,   215,  -127,     3,  -127,  -127,    96,  -127,
    -127,    55,  -127,    29,  -127,  -127,   -14,   -40,    12,    25,
    -127,  -127,   -38,    48,    55,  -127,  -127,    80,  -127,    68,
      72,  -127,     4,   160,    74,  -127,  -127,   142,   130,   112,
      -5,  -127,   137,   203,   151,   156,   172,    45,  -127,    72,
     283,   202,   170,  -127,    72,  -127,  -127,   182,    72,   227,
     233,   237,  -127,  -127,   209,     5,  -127,  -127,   211,   368,
    -127,   345,   231,   220,  -127,   222,    50,  -127,  -127,  -127,
    -127,    72,  -127,  -127,   105,  -127,  -127,   229,   232,   236,
     239,   244,   345,   174,   271,   273,   345,   190,   275,   258,
    -127,   289,  -127,  -127,  -127,    -6,  -127,  -127,  -127,  -127,
    -127,   253,   256,  -127,  -127,   278,  -127,   266,   307,   270,
     174,   197,   197,   370,   276,   282,   309,  -127,  -127,   174,
    -127,   286,   469,  -127,  -127,   290,   174,   295,   298,   174,
     148,  -127,  -127,  -127,  -127,   174,   299,  -127,   288,   142,
    -127,   174,   119,    14,   197,   407,   108,   165,   296,  -127,
    -127,   174,    93,   174,   174,   174,   174,   174,   297,   421,
    -127,  -127,    40,  -127,    51,   469,   429,  -127,   305,   202,
     441,   174,   337,   347,   117,   188,   174,   174,   174,   174,
     174,   174,   197,   197,   333,   339,   197,   131,  -127,   254,
     254,  -127,  -127,  -127,   197,  -127,    -8,   174,  -127,  -127,
    -127,   329,  -127,   183,  -127,  -127,  -127,   469,   469,   469,
     469,   469,   469,   325,  -127,   345,   345,   262,   332,   267,
     174,   174,   469,  -127,   121,   243,   304,    -3,   174,   374,
     449,   187,   174,   377,   345,  -127,  -127,  -127,   206,  -127,
    -127,   379,   210,  -127,   336,  -127,   174,   338,  -127,   461,
     380,  -127,  -127
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
      60,     0,    61,    62,    63,     0,    64,    65,    69,    68,
      58,     0,    27,    33,    43,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    97,    99,     0,
     104,   105,    57,    66,    67,     0,     0,     0,     0,     0,
       0,    70,    54,    59,    71,     0,     0,    29,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,   102,
     103,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    85,     0,    72,     0,    56,     0,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    91,
      92,    93,    94,    95,     0,    78,     0,     0,    73,    82,
      26,     0,    81,     0,    74,    77,   114,   108,   106,   107,
     109,   111,   110,   112,   113,     0,     0,     0,   100,     0,
       0,     0,    55,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,    90,     0,    89,
      79,     0,     0,    75,     0,   101,     0,     0,    86,     0,
       0,    80,    76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,  -127,   371,  -127,  -127,   340,   388,  -127,
     382,    34,  -127,   328,   344,  -127,   366,  -127,  -127,   311,
     250,  -127,   324,  -127,   225,  -127,  -127,   218,   -91,  -104,
     -81,  -127,  -127,  -127,   -79,  -127,  -127,  -127,  -127,   -90,
    -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,     5,    18,    19,    29,    57,    58,     6,    13,
      14,    49,    28,    50,    51,    34,    35,   125,    75,    76,
      61,    79,    80,    94,    82,   184,   108,     7,   109,   110,
     140,   112,   113,   114,   141,   116,   117,   118,   119,   165,
     166
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,   240,   115,   155,     8,   153,   167,   257,    26,    52,
      39,   133,    40,   142,    64,   145,    20,   173,   174,   175,
     176,   111,    41,   115,    91,   111,   236,   115,   111,   153,
     115,    42,    23,    38,    16,   177,    15,    17,   195,   156,
     163,   153,   241,   173,   174,   175,   176,    15,    65,   172,
      27,    53,   111,     2,   115,    33,   179,    43,    92,   182,
     185,   177,    54,    55,   111,   186,   115,   193,    33,    64,
     217,   190,    32,    10,   194,     1,   233,   234,    72,     1,
     237,   207,    37,   209,   210,   211,   212,   213,   239,     9,
      10,   216,    56,    74,    78,    44,   173,   174,   175,   176,
       2,   223,    12,   123,   218,     3,   227,   228,   229,   230,
     231,   232,    47,    78,   177,   126,    48,     9,    10,    12,
     173,   174,   175,   176,   127,    74,    59,   242,   196,   197,
     198,   199,   200,   201,   173,   174,   175,   176,   177,    11,
      30,   153,   153,    17,   245,   246,   208,    12,   202,   203,
     250,   251,   177,   134,   111,   111,   115,   115,   258,    63,
     153,   204,   262,   264,   111,   111,   115,   115,   135,   191,
     208,   252,   192,   111,   253,   115,   269,    54,    55,   134,
      60,    62,   238,   111,    66,   115,   173,   174,   175,   176,
     173,   174,   175,   176,   135,   136,   137,   138,    69,   146,
     139,   183,   134,    70,   177,   202,   203,    56,   177,   173,
     174,   175,   176,   173,   174,   175,   176,   135,   205,    71,
      83,   136,   137,   138,    22,    81,   139,   177,   202,   203,
      85,   177,     9,    10,   244,   147,   148,    87,   261,    36,
     149,   226,   150,    88,   136,   137,   138,    89,    97,   164,
      98,    99,    46,    67,    24,    68,    90,   265,    93,   175,
     176,   267,    12,    97,   120,    98,    99,   100,   121,   254,
     255,   101,   102,   122,   103,   177,   128,   104,   105,   106,
     152,   143,   100,   144,   129,   151,   101,   102,   130,   103,
     107,   131,   104,   105,   106,    97,   132,    98,    99,   154,
       9,    10,   202,   203,   157,   107,   158,   202,   203,    97,
     159,    98,    99,   160,   100,   247,   161,   162,   101,   102,
     249,   103,    77,   169,   104,   105,   106,   178,   100,   170,
      12,   156,   101,   102,   256,   103,   188,   107,   104,   105,
     106,    97,   180,    98,    99,   181,   187,   224,   206,   214,
      97,   107,    98,    99,   147,   148,   220,   225,   235,   171,
     100,   150,   243,   268,   101,   102,   203,   103,   236,   100,
     104,   105,   106,   101,   102,    97,   103,    98,    99,   104,
     105,   106,   248,   107,   259,     9,    10,   263,   266,    31,
     272,   270,   107,    21,   100,    25,    86,    73,   168,   102,
      45,   103,   124,    96,   104,   105,   106,    95,    84,   189,
     173,   174,   175,   176,   221,    12,     0,   107,   196,   197,
     198,   199,   200,   201,   173,   174,   175,   176,   177,     0,
       0,   215,   173,   174,   175,   176,     0,     0,     0,   219,
       0,     0,   177,     0,   173,   174,   175,   176,     0,     0,
     177,   222,   173,   174,   175,   176,     0,     0,     0,   260,
       0,     0,   177,     0,   173,   174,   175,   176,     0,     0,
     177,   271,   173,   174,   175,   176,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     0,     0,     0,     0,     0,
     177
};

static const yytype_int16 yycheck[] =
{
      81,     9,    81,     9,    42,   109,   132,    10,     5,     5,
      50,   102,    52,   103,    19,   106,     0,     3,     4,     5,
       6,   102,    10,   102,    19,   106,    29,   106,   109,   133,
     109,    19,    52,    47,    44,    21,     2,    47,   164,    45,
     130,   145,    50,     3,     4,     5,     6,    13,    53,   139,
      47,    47,   133,    38,   133,    21,   146,    32,    53,   149,
     150,    21,    17,    18,   145,   155,   145,    53,    34,    19,
      19,   161,    17,    18,   164,    17,   202,   203,    33,    17,
     206,   171,    53,   173,   174,   175,   176,   177,   214,    17,
      18,    51,    47,    59,    60,    47,     3,     4,     5,     6,
      38,   191,    47,    53,    53,    43,   196,   197,   198,   199,
     200,   201,    32,    79,    21,    10,    48,    17,    18,    47,
       3,     4,     5,     6,    19,    91,    52,   217,    11,    12,
      13,    14,    15,    16,     3,     4,     5,     6,    21,    39,
      44,   245,   246,    47,   235,   236,    53,    47,    40,    41,
     240,   241,    21,     5,   235,   236,   235,   236,   248,    47,
     264,    53,   252,   254,   245,   246,   245,   246,    20,    50,
      53,    50,    53,   254,    53,   254,   266,    17,    18,     5,
      38,    51,    51,   264,    47,   264,     3,     4,     5,     6,
       3,     4,     5,     6,    20,    47,    48,    49,    47,     9,
      52,    53,     5,    47,    21,    40,    41,    47,    21,     3,
       4,     5,     6,     3,     4,     5,     6,    20,    53,    47,
      50,    47,    48,    49,     6,    23,    52,    21,    40,    41,
      48,    21,    17,    18,    51,    45,    46,    10,    51,    21,
      50,    53,    52,    10,    47,    48,    49,    10,     5,    52,
       7,     8,    34,    50,    39,    52,    47,    51,    47,     5,
       6,    51,    47,     5,    33,     7,     8,    24,    48,    26,
      27,    28,    29,    51,    31,    21,    47,    34,    35,    36,
      22,    10,    24,    10,    52,    10,    28,    29,    52,    31,
      47,    52,    34,    35,    36,     5,    52,     7,     8,    10,
      17,    18,    40,    41,    51,    47,    50,    40,    41,     5,
      32,     7,     8,    47,    24,    53,     9,    47,    28,    29,
      53,    31,    39,    47,    34,    35,    36,    37,    24,    47,
      47,    45,    28,    29,    30,    31,    48,    47,    34,    35,
      36,     5,    47,     7,     8,    47,    47,    10,    52,    52,
       5,    47,     7,     8,    45,    46,    51,    10,    25,    50,
      24,    52,    33,    27,    28,    29,    41,    31,    29,    24,
      34,    35,    36,    28,    29,     5,    31,     7,     8,    34,
      35,    36,    50,    47,    10,    17,    18,    10,     9,    18,
      10,    53,    47,     5,    24,    13,    68,    57,    28,    29,
      34,    31,    91,    79,    34,    35,    36,    39,    64,   159,
       3,     4,     5,     6,   189,    47,    -1,    47,    11,    12,
      13,    14,    15,    16,     3,     4,     5,     6,    21,    -1,
      -1,    10,     3,     4,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    21,    -1,     3,     4,     5,     6,    -1,    -1,
      21,    10,     3,     4,     5,     6,    -1,    -1,    -1,    10,
      -1,    -1,    21,    -1,     3,     4,     5,     6,    -1,    -1,
      21,    10,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    38,    43,    55,    56,    62,    81,    42,    17,
      18,    39,    47,    63,    64,    65,    44,    47,    57,    58,
       0,    62,    81,    52,    39,    64,     5,    47,    66,    59,
      44,    58,    17,    65,    69,    70,    81,    53,    47,    50,
      52,    10,    19,    32,    47,    70,    81,    32,    48,    65,
      67,    68,     5,    47,    17,    18,    47,    60,    61,    52,
      38,    74,    51,    47,    19,    53,    47,    50,    52,    47,
      47,    47,    33,    61,    65,    72,    73,    39,    65,    75,
      76,    23,    78,    50,    68,    48,    67,    10,    10,    10,
      47,    19,    53,    47,    77,    39,    76,     5,     7,     8,
      24,    28,    29,    31,    34,    35,    36,    47,    80,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      33,    48,    51,    53,    73,    71,    10,    19,    47,    52,
      52,    52,    52,    82,     5,    20,    47,    48,    49,    52,
      84,    88,    93,    10,    10,    82,     9,    45,    46,    50,
      52,    10,    22,    83,    10,     9,    45,    51,    50,    32,
      47,     9,    47,    93,    52,    93,    94,    94,    28,    47,
      47,    50,    93,     3,     4,     5,     6,    21,    37,    93,
      47,    47,    93,    53,    79,    93,    93,    47,    48,    74,
      93,    50,    53,    53,    93,    94,    11,    12,    13,    14,
      15,    16,    40,    41,    53,    53,    52,    93,    53,    93,
      93,    93,    93,    93,    52,    10,    51,    19,    53,    10,
      51,    78,    10,    93,    10,    10,    53,    93,    93,    93,
      93,    93,    93,    94,    94,    25,    29,    94,    51,    94,
       9,    50,    93,    33,    51,    82,    82,    53,    50,    53,
      93,    93,    50,    53,    26,    27,    30,    10,    93,    10,
      10,    51,    93,    10,    82,    51,     9,    51,    27,    93,
      53,    10,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    56,    56,    57,    57,
      59,    58,    60,    60,    61,    61,    61,    62,    62,    63,
      63,    64,    65,    65,    65,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    67,    67,    67,    68,    69,
      69,    71,    70,    72,    72,    72,    73,    74,    74,    75,
      75,    76,    77,    77,    78,    79,    79,    80,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    86,    87,    87,
      87,    87,    87,    88,    88,    88,    89,    89,    90,    91,
      92,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94
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
       2,     2,     3,     4,     5,     8,    11,     5,     4,     7,
      10,     5,     4,     3,     3,     3,     9,     7,     7,     7,
       7,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       4,     7,     2,     2,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3
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
#line 1545 "y.tab.c"
    break;

  case 3: /* program: GDeclBlock MainBlock  */
#line 47 "ex1.y"
                                                {printf("Done!");(yyval.node)=NULL;}
#line 1551 "y.tab.c"
    break;

  case 4: /* program: typedefBl GDeclBlock MainBlock  */
#line 48 "ex1.y"
                                                                     { printf("Done!\n"); exit(0); }
#line 1557 "y.tab.c"
    break;

  case 6: /* typedefBl: TYPE_start typedefList TYPE_end  */
#line 52 "ex1.y"
                                                {printType();}
#line 1563 "y.tab.c"
    break;

  case 10: /* $@1: %empty  */
#line 60 "ex1.y"
            {createNewType((yyvsp[0].node)->varname);}
#line 1569 "y.tab.c"
    break;

  case 11: /* typedef: ID $@1 LBRACE typefieldL RBRACE  */
#line 60 "ex1.y"
                                                                        {setFieldsOfType((yyvsp[-4].node)->varname,(yyvsp[-1].field));}
#line 1575 "y.tab.c"
    break;

  case 12: /* typefieldL: typefieldL typefield  */
#line 63 "ex1.y"
                                        {(yyval.field)=mergerField((yyvsp[-1].field),(yyvsp[0].field));}
#line 1581 "y.tab.c"
    break;

  case 13: /* typefieldL: typefield  */
#line 64 "ex1.y"
                                {(yyval.field)=(yyvsp[0].field);}
#line 1587 "y.tab.c"
    break;

  case 14: /* typefield: INTT ID SEMICOLON  */
#line 67 "ex1.y"
                                {(yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup("INT"));}
#line 1593 "y.tab.c"
    break;

  case 15: /* typefield: STRINGT ID SEMICOLON  */
#line 68 "ex1.y"
                                        {(yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup("STRING"));}
#line 1599 "y.tab.c"
    break;

  case 16: /* typefield: ID ID SEMICOLON  */
#line 69 "ex1.y"
                                        {(yyval.field)=createTypeFieldE((yyvsp[-1].node)->varname,typeLookup((yyvsp[-2].node)->varname));}
#line 1605 "y.tab.c"
    break;

  case 17: /* GDeclBlock: DECL ENDDECL  */
#line 71 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1611 "y.tab.c"
    break;

  case 18: /* GDeclBlock: DECL GDecList ENDDECL  */
#line 72 "ex1.y"
                                        {
			addToST((yyvsp[-1].node));
			printSymbolTable();
			(yyval.node)=(yyvsp[-1].node);
		}
#line 1621 "y.tab.c"
    break;

  case 19: /* GDecList: GDecList GDecL  */
#line 79 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1627 "y.tab.c"
    break;

  case 20: /* GDecList: GDecL  */
#line 80 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1633 "y.tab.c"
    break;

  case 21: /* GDecL: Type GVarList SEMICOLON  */
#line 83 "ex1.y"
                                {(yyval.node)=createDeclaration((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1639 "y.tab.c"
    break;

  case 22: /* Type: INTT  */
#line 86 "ex1.y"
                {(yyval.node)=createType(INT);}
#line 1645 "y.tab.c"
    break;

  case 23: /* Type: STRINGT  */
#line 87 "ex1.y"
                        {(yyval.node)=createType(STRING);}
#line 1651 "y.tab.c"
    break;

  case 24: /* Type: ID  */
#line 88 "ex1.y"
                {(yyval.node)=createUserType((yyvsp[0].node));}
#line 1657 "y.tab.c"
    break;

  case 25: /* GVarList: GVarList COMM ID  */
#line 91 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1663 "y.tab.c"
    break;

  case 26: /* GVarList: GVarList COMM ID '[' NUM ']' '[' NUM ']'  */
#line 92 "ex1.y"
                                                                {(yyval.node)=createArray((yyvsp[-8].node),(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1669 "y.tab.c"
    break;

  case 27: /* GVarList: GVarList COMM ID '[' NUM ']'  */
#line 93 "ex1.y"
                                                {(yyval.node)=createArray((yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1675 "y.tab.c"
    break;

  case 28: /* GVarList: GVarList COMM MUL ID  */
#line 94 "ex1.y"
                                        {(yyval.node)=createConnect((yyvsp[-3].node),createPointer((yyvsp[0].node)));}
#line 1681 "y.tab.c"
    break;

  case 29: /* GVarList: ID '[' NUM ']' '[' NUM ']'  */
#line 95 "ex1.y"
                                                {(yyval.node)=createArray(NULL,(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1687 "y.tab.c"
    break;

  case 30: /* GVarList: ID '[' NUM ']'  */
#line 96 "ex1.y"
                                        {(yyval.node)=createArray(NULL,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1693 "y.tab.c"
    break;

  case 31: /* GVarList: ID  */
#line 97 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1699 "y.tab.c"
    break;

  case 32: /* GVarList: MUL ID  */
#line 98 "ex1.y"
                        {(yyval.node)=createPointer((yyvsp[0].node));}
#line 1705 "y.tab.c"
    break;

  case 33: /* GVarList: GVarList COMM ID '(' funcdeclparamlist ')'  */
#line 99 "ex1.y"
                                                                {(yyval.node)=createConnect((yyvsp[-5].node),createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node)));}
#line 1711 "y.tab.c"
    break;

  case 34: /* GVarList: ID '(' funcdeclparamlist ')'  */
#line 100 "ex1.y"
                                                {(yyval.node)=createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1717 "y.tab.c"
    break;

  case 35: /* funcdeclparamlist: funcdeclparamlist COMM funcdeclparam  */
#line 103 "ex1.y"
                                                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1723 "y.tab.c"
    break;

  case 36: /* funcdeclparamlist: funcdeclparam  */
#line 104 "ex1.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1729 "y.tab.c"
    break;

  case 37: /* funcdeclparamlist: %empty  */
#line 105 "ex1.y"
                                        {(yyval.node)=NULL;}
#line 1735 "y.tab.c"
    break;

  case 38: /* funcdeclparam: Type ID  */
#line 108 "ex1.y"
                        {(yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),false);}
#line 1741 "y.tab.c"
    break;

  case 39: /* FdefBlock: FdefBlock Fdef  */
#line 111 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1747 "y.tab.c"
    break;

  case 40: /* FdefBlock: Fdef  */
#line 112 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1753 "y.tab.c"
    break;

  case 41: /* $@2: %empty  */
#line 115 "ex1.y"
                                {currfunc=Lookup((yyvsp[-3].node)->varname);}
#line 1759 "y.tab.c"
    break;

  case 42: /* Fdef: Type ID '(' paramlist ')' $@2 LBRACE LdeclBlock Body RBRACE  */
#line 115 "ex1.y"
                                                                                                        {(yyval.node)=createFuncDef((yyvsp[-9].node),(yyvsp[-8].node),(yyvsp[-6].node),(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1765 "y.tab.c"
    break;

  case 43: /* paramlist: paramlist COMM param  */
#line 118 "ex1.y"
                                        { (yyval.node) = createConnect((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1771 "y.tab.c"
    break;

  case 44: /* paramlist: param  */
#line 119 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1777 "y.tab.c"
    break;

  case 45: /* paramlist: %empty  */
#line 120 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1783 "y.tab.c"
    break;

  case 46: /* param: Type ID  */
#line 122 "ex1.y"
                {(yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),true);}
#line 1789 "y.tab.c"
    break;

  case 47: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 125 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1795 "y.tab.c"
    break;

  case 48: /* LdeclBlock: DECL ENDDECL  */
#line 126 "ex1.y"
                                        {(yyval.node)=NULL;}
#line 1801 "y.tab.c"
    break;

  case 49: /* LDecList: LDecList LDecl  */
#line 129 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1807 "y.tab.c"
    break;

  case 50: /* LDecList: LDecl  */
#line 130 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1813 "y.tab.c"
    break;

  case 51: /* LDecl: Type IdList SEMICOLON  */
#line 132 "ex1.y"
                                {(yyval.node)=createLocalDecl((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1819 "y.tab.c"
    break;

  case 52: /* IdList: IdList COMM ID  */
#line 135 "ex1.y"
                        {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1825 "y.tab.c"
    break;

  case 53: /* IdList: ID  */
#line 136 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1831 "y.tab.c"
    break;

  case 54: /* Body: BEGINK stmtlist ENDK  */
#line 139 "ex1.y"
                                {(yyval.node)=(yyvsp[-1].node);}
#line 1837 "y.tab.c"
    break;

  case 55: /* ArgList: ArgList COMM expr  */
#line 142 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1843 "y.tab.c"
    break;

  case 56: /* ArgList: expr  */
#line 143 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1849 "y.tab.c"
    break;

  case 57: /* returnstmt: RETURN_K expr  */
#line 146 "ex1.y"
                                {(yyval.node)=createReturn((yyvsp[0].node));}
#line 1855 "y.tab.c"
    break;

  case 58: /* MainBlock: INTT MAINK '(' ')' LBRACE LdeclBlock Body RBRACE  */
#line 148 "ex1.y"
                                                            {(yyval.node)=createMain((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1861 "y.tab.c"
    break;

  case 59: /* stmtlist: stmtlist stmt  */
#line 151 "ex1.y"
                        { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1867 "y.tab.c"
    break;

  case 60: /* stmtlist: stmt  */
#line 152 "ex1.y"
                              {(yyval.node)=(yyvsp[0].node);}
#line 1873 "y.tab.c"
    break;

  case 61: /* stmt: InputStmt  */
#line 155 "ex1.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 1879 "y.tab.c"
    break;

  case 62: /* stmt: OutputStmt  */
#line 156 "ex1.y"
                             {(yyval.node)=(yyvsp[0].node);}
#line 1885 "y.tab.c"
    break;

  case 63: /* stmt: AsgStmt  */
#line 157 "ex1.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 1891 "y.tab.c"
    break;

  case 64: /* stmt: IfStmt  */
#line 158 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1897 "y.tab.c"
    break;

  case 65: /* stmt: WhileStmt  */
#line 159 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1903 "y.tab.c"
    break;

  case 66: /* stmt: BREAKK SEMICOLON  */
#line 160 "ex1.y"
                                        {(yyval.node)=createBreak();}
#line 1909 "y.tab.c"
    break;

  case 67: /* stmt: CONTINUEK SEMICOLON  */
#line 161 "ex1.y"
                                        {(yyval.node)=createContinue();}
#line 1915 "y.tab.c"
    break;

  case 68: /* stmt: doWhileStmt  */
#line 162 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1921 "y.tab.c"
    break;

  case 69: /* stmt: RepeatStmt  */
#line 163 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1927 "y.tab.c"
    break;

  case 70: /* stmt: returnstmt SEMICOLON  */
#line 164 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1933 "y.tab.c"
    break;

  case 71: /* stmt: funcCall SEMICOLON  */
#line 165 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1939 "y.tab.c"
    break;

  case 72: /* funcCall: ID '(' ')'  */
#line 168 "ex1.y"
                        {(yyval.node)=createFuncCall((yyvsp[-2].node),NULL);}
#line 1945 "y.tab.c"
    break;

  case 73: /* funcCall: ID '(' ArgList ')'  */
#line 169 "ex1.y"
                                        {(yyval.node)=createFuncCall((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1951 "y.tab.c"
    break;

  case 74: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 171 "ex1.y"
                                          {(yyval.node)=createRead((yyvsp[-2].node));}
#line 1957 "y.tab.c"
    break;

  case 75: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 172 "ex1.y"
                                                                {(yyval.node)=createReadArr((yyvsp[-5].node),(yyvsp[-3].node));}
#line 1963 "y.tab.c"
    break;

  case 76: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 173 "ex1.y"
                                                                        {(yyval.node)=createReadArr((yyvsp[-8].node),createConnect((yyvsp[-6].node),(yyvsp[-3].node)));}
#line 1969 "y.tab.c"
    break;

  case 77: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 175 "ex1.y"
                                             {(yyval.node)=createWrite((yyvsp[-2].node));}
#line 1975 "y.tab.c"
    break;

  case 78: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 177 "ex1.y"
                                 {(yyval.node)=createAssign((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1981 "y.tab.c"
    break;

  case 79: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 178 "ex1.y"
                                                        {(yyval.node)=createArrAssign((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1987 "y.tab.c"
    break;

  case 80: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 179 "ex1.y"
                                                                    {(yyval.node)=createArrAssign((yyvsp[-9].node),createConnect((yyvsp[-7].node),(yyvsp[-4].node)),(yyvsp[-1].node));}
#line 1993 "y.tab.c"
    break;

  case 81: /* AsgStmt: MUL ID ASSIGN expr SEMICOLON  */
#line 180 "ex1.y"
                                                {(yyval.node)=createAssignToDeref((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1999 "y.tab.c"
    break;

  case 82: /* AsgStmt: memberAccess ASSIGN expr SEMICOLON  */
#line 181 "ex1.y"
                                                        {(yyval.node)=createMemAssg((yyvsp[-3].node),(yyvsp[-1].node));}
#line 2005 "y.tab.c"
    break;

  case 83: /* memberAccess: memberAccess DOT ID  */
#line 184 "ex1.y"
                                        {(yyval.node)= createMemberAcc((yyvsp[-2].node),(yyvsp[0].node),ACCDOT);}
#line 2011 "y.tab.c"
    break;

  case 84: /* memberAccess: ID DOT ID  */
#line 185 "ex1.y"
                                        {(yyval.node)= createMemberAcc((yyvsp[-2].node),(yyvsp[0].node),ACCDOT);}
#line 2017 "y.tab.c"
    break;

  case 85: /* memberAccess: ID ARROW ID  */
#line 186 "ex1.y"
                                        {(yyval.node)= createMemberAcc((yyvsp[-2].node),(yyvsp[0].node),ACCARR);}
#line 2023 "y.tab.c"
    break;

  case 86: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ELSEK stmtlist ENDIFK  */
#line 189 "ex1.y"
                                                                        {(yyval.node)=createIfElseNode((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[-1].node));}
#line 2029 "y.tab.c"
    break;

  case 87: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ENDIFK  */
#line 190 "ex1.y"
                                                                {(yyval.node)=createIfNode((yyvsp[-4].node),(yyvsp[-1].node));}
#line 2035 "y.tab.c"
    break;

  case 88: /* WhileStmt: WHILEK '(' boolexpr ')' DOK stmtlist ENDWHILEK  */
#line 193 "ex1.y"
                                                                {(yyval.node)=createWhile((yyvsp[-4].node),(yyvsp[-1].node));}
#line 2041 "y.tab.c"
    break;

  case 89: /* RepeatStmt: REPEATK stmtlist UNTILK '(' boolexpr ')' SEMICOLON  */
#line 196 "ex1.y"
                                                                   {(yyval.node)=createRepeat((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2047 "y.tab.c"
    break;

  case 90: /* doWhileStmt: DOK stmtlist WHILEK '(' boolexpr ')' SEMICOLON  */
#line 198 "ex1.y"
                                                                {(yyval.node)=createDoWhile((yyvsp[-5].node),(yyvsp[-2].node));}
#line 2053 "y.tab.c"
    break;

  case 91: /* expr: expr PLUS expr  */
#line 201 "ex1.y"
                                {(yyval.node) = makeOperatorNode('+',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2059 "y.tab.c"
    break;

  case 92: /* expr: expr MINUS expr  */
#line 202 "ex1.y"
                                {(yyval.node) = makeOperatorNode('-',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2065 "y.tab.c"
    break;

  case 93: /* expr: expr MUL expr  */
#line 203 "ex1.y"
                                {(yyval.node) = makeOperatorNode('*',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2071 "y.tab.c"
    break;

  case 94: /* expr: expr DIV expr  */
#line 204 "ex1.y"
                                {(yyval.node) = makeOperatorNode('/',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2077 "y.tab.c"
    break;

  case 95: /* expr: expr MOD expr  */
#line 205 "ex1.y"
                                {(yyval.node) = makeOperatorNode('%',(yyvsp[-2].node),(yyvsp[0].node));}
#line 2083 "y.tab.c"
    break;

  case 96: /* expr: '(' expr ')'  */
#line 206 "ex1.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 2089 "y.tab.c"
    break;

  case 97: /* expr: NUM  */
#line 207 "ex1.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 2095 "y.tab.c"
    break;

  case 98: /* expr: ID  */
#line 208 "ex1.y"
                                {(yyval.node)=createVariableUsageNode((yyvsp[0].node)->varname);}
#line 2101 "y.tab.c"
    break;

  case 99: /* expr: STRING_LITERAL  */
#line 209 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 2107 "y.tab.c"
    break;

  case 100: /* expr: ID '[' expr ']'  */
#line 210 "ex1.y"
                                {(yyval.node)=createArrayAccess((yyvsp[-3].node),(yyvsp[-1].node));}
#line 2113 "y.tab.c"
    break;

  case 101: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 211 "ex1.y"
                                        {(yyval.node)=createArrayAccess((yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 2119 "y.tab.c"
    break;

  case 102: /* expr: MUL ID  */
#line 212 "ex1.y"
                        {(yyval.node)=createDerefer((yyvsp[0].node));}
#line 2125 "y.tab.c"
    break;

  case 103: /* expr: AMP ID  */
#line 213 "ex1.y"
                        {(yyval.node)=createAddr((yyvsp[0].node));}
#line 2131 "y.tab.c"
    break;

  case 104: /* expr: funcCall  */
#line 214 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 2137 "y.tab.c"
    break;

  case 105: /* expr: memberAccess  */
#line 215 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 2143 "y.tab.c"
    break;

  case 106: /* boolexpr: expr GE expr  */
#line 218 "ex1.y"
                        {(yyval.node)=createCondition(Nge,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2149 "y.tab.c"
    break;

  case 107: /* boolexpr: expr LE expr  */
#line 219 "ex1.y"
                        {(yyval.node)=createCondition(Nle,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2155 "y.tab.c"
    break;

  case 108: /* boolexpr: expr GT expr  */
#line 220 "ex1.y"
                        {(yyval.node)=createCondition(Ngt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2161 "y.tab.c"
    break;

  case 109: /* boolexpr: expr LT expr  */
#line 221 "ex1.y"
                        {(yyval.node)=createCondition(Nlt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2167 "y.tab.c"
    break;

  case 110: /* boolexpr: expr NE expr  */
#line 222 "ex1.y"
                        {(yyval.node)=createCondition(Nne,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2173 "y.tab.c"
    break;

  case 111: /* boolexpr: expr EQ expr  */
#line 223 "ex1.y"
                        {(yyval.node)=createCondition(Neq,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2179 "y.tab.c"
    break;

  case 112: /* boolexpr: boolexpr OR boolexpr  */
#line 224 "ex1.y"
                                {(yyval.node)=createCondition(Nor,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2185 "y.tab.c"
    break;

  case 113: /* boolexpr: boolexpr AND boolexpr  */
#line 225 "ex1.y"
                                        {(yyval.node)=createCondition(Nand,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2191 "y.tab.c"
    break;

  case 114: /* boolexpr: '(' boolexpr ')'  */
#line 226 "ex1.y"
                                {(yyval.node)=(yyvsp[-1].node);}
#line 2197 "y.tab.c"
    break;


#line 2201 "y.tab.c"

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

#line 229 "ex1.y"


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
	fprintf(target, "CALL Main\n");
	yyparse();
	
	return 0;
}
