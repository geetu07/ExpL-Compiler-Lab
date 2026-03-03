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
    BREAKK = 286,                  /* BREAKK  */
    CONTINUEK = 287,               /* CONTINUEK  */
    REPEATK = 288,                 /* REPEATK  */
    UNTILK = 289,                  /* UNTILK  */
    DECL = 290,                    /* DECL  */
    ENDDECL = 291,                 /* ENDDECL  */
    ID = 292,                      /* ID  */
    NUM = 293,                     /* NUM  */
    STRING_LITERAL = 294           /* STRING_LITERAL  */
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
#define BREAKK 286
#define CONTINUEK 287
#define REPEATK 288
#define UNTILK 289
#define DECL 290
#define ENDDECL 291
#define ID 292
#define NUM 293
#define STRING_LITERAL 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "ex1.y"

	struct tnode *node;
	

#line 222 "y.tab.c"

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
  YYSYMBOL_BREAKK = 31,                    /* BREAKK  */
  YYSYMBOL_CONTINUEK = 32,                 /* CONTINUEK  */
  YYSYMBOL_REPEATK = 33,                   /* REPEATK  */
  YYSYMBOL_UNTILK = 34,                    /* UNTILK  */
  YYSYMBOL_DECL = 35,                      /* DECL  */
  YYSYMBOL_ENDDECL = 36,                   /* ENDDECL  */
  YYSYMBOL_ID = 37,                        /* ID  */
  YYSYMBOL_NUM = 38,                       /* NUM  */
  YYSYMBOL_STRING_LITERAL = 39,            /* STRING_LITERAL  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '{'  */
  YYSYMBOL_45_ = 45,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_program = 47,                   /* program  */
  YYSYMBOL_GDeclBlock = 48,                /* GDeclBlock  */
  YYSYMBOL_GDecList = 49,                  /* GDecList  */
  YYSYMBOL_GDecL = 50,                     /* GDecL  */
  YYSYMBOL_Type = 51,                      /* Type  */
  YYSYMBOL_GVarList = 52,                  /* GVarList  */
  YYSYMBOL_FdefBlock = 53,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 54,                      /* Fdef  */
  YYSYMBOL_paramlist = 55,                 /* paramlist  */
  YYSYMBOL_param = 56,                     /* param  */
  YYSYMBOL_LdeclBlock = 57,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 58,                  /* LDecList  */
  YYSYMBOL_LDecl = 59,                     /* LDecl  */
  YYSYMBOL_IdList = 60,                    /* IdList  */
  YYSYMBOL_Body = 61,                      /* Body  */
  YYSYMBOL_ArgList = 62,                   /* ArgList  */
  YYSYMBOL_MainBlock = 63,                 /* MainBlock  */
  YYSYMBOL_stmtlist = 64,                  /* stmtlist  */
  YYSYMBOL_stmt = 65,                      /* stmt  */
  YYSYMBOL_InputStmt = 66,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 67,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 68,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 69,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 70,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 71,                /* RepeatStmt  */
  YYSYMBOL_doWhileStmt = 72,               /* doWhileStmt  */
  YYSYMBOL_expr = 73                       /* expr  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   521

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   294


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
      42,    43,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    34,    34,    40,    41,    44,    45,    52,    53,    56,
      59,    60,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    75,    76,    79,    82,    83,    84,    86,    89,
      90,    93,    94,    96,    99,   100,   103,   106,   107,   110,
     113,   114,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   128,   129,   130,   132,   134,   135,   136,   137,   140,
     141,   144,   147,   149,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172
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
  "BREAKK", "CONTINUEK", "REPEATK", "UNTILK", "DECL", "ENDDECL", "ID",
  "NUM", "STRING_LITERAL", "'['", "']'", "'('", "')'", "'{'", "'}'",
  "$accept", "program", "GDeclBlock", "GDecList", "GDecL", "Type",
  "GVarList", "FdefBlock", "Fdef", "paramlist", "param", "LdeclBlock",
  "LDecList", "LDecl", "IdList", "Body", "ArgList", "MainBlock",
  "stmtlist", "stmt", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt",
  "WhileStmt", "RepeatStmt", "doWhileStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-77)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   378,    60,    25,   293,   -77,     4,    27,    34,    66,
      78,   378,    20,   105,   378,     2,   327,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,    71,   -77,
      14,   -77,   103,   293,   -77,   -77,   140,   122,     8,     8,
       8,   409,   -77,   -77,    90,     8,     8,   -77,   -77,   -77,
     -77,   137,   -28,   129,   124,   -77,   -77,     8,    73,   144,
     147,   160,   -77,   -77,     8,    69,    88,   130,   173,   182,
     415,   207,   -77,   178,   176,   -77,    15,   176,   444,     8,
     215,   -77,   -77,     8,     1,   149,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,   216,   202,   204,
       8,     8,   -77,    28,   194,   197,     5,   -77,   212,   161,
      36,   -77,   226,   -77,   240,   -77,    67,   486,   -77,    12,
      12,   -77,   -77,   500,   500,   500,   500,   500,   500,   -77,
     -77,   378,   378,   174,   193,     8,     8,   210,   -77,   176,
     -77,   -77,   219,   176,   214,   128,   220,     8,   -77,   294,
     337,    -7,   249,   458,   259,   228,   -77,   227,    68,   234,
       8,   272,     8,   486,   378,   -77,   -77,   -77,   -77,   -77,
     274,   250,   252,   -77,   111,   378,   273,   -77,   292,   368,
       8,   -77,   255,   -77,   253,   139,   -77,   264,   378,   269,
     -77,   -77,   472,   276,   -77,   172,   -77,   -77,   -77,   305,
     -77,   -77,   -77,   282,   -77,   -77
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,    45,    46,    50,    49,    10,    11,     5,     0,     8,
       0,     1,     0,     0,    23,     3,     0,     0,     0,     0,
       0,     0,    47,    48,     0,     0,     0,    39,    40,     6,
       7,     0,    18,     0,     0,    22,     2,     0,     0,     0,
       0,    71,    70,    72,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    27,     9,     0,    27,     0,     0,
       0,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    55,     0,     0,     0,     0,    26,     0,    12,
       0,    58,     0,    51,     0,    83,     0,    38,    69,    64,
      65,    66,    67,    75,    73,    74,    76,    78,    77,    68,
      54,     0,     0,     0,     0,     0,     0,    17,    28,     0,
      21,    15,     0,    27,     0,     0,    79,     0,    84,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,    37,     0,    60,    61,    63,    62,    56,
       0,     0,    14,    20,     0,     0,     0,    52,     0,     0,
       0,    16,     0,    30,     0,     0,    32,     0,    36,     0,
      80,    59,     0,     0,    35,     0,    29,    31,    24,     0,
      57,    13,    33,     0,    53,    34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -77,   296,    -2,   -77,   -77,   295,   -76,
     190,   -77,   -77,   145,   -77,   -77,   -77,     3,    -6,   -12,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    28,    29,   105,    53,    33,    34,   106,
     107,   175,   185,   186,   195,   187,   116,     5,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,   110,    32,   167,    48,    41,    59,    35,    44,    66,
      67,    45,    73,    59,    74,    70,    71,    88,    89,    51,
     108,    60,   132,     1,   139,    31,    30,    78,    60,    48,
      42,    32,    48,    96,    85,     2,    56,   135,    61,    62,
      63,    36,    46,    64,   115,    61,    62,    63,   140,   112,
      64,    52,   109,   114,   117,   139,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   158,   136,    37,
     133,   134,    86,    87,    88,    89,    38,    25,    26,   144,
      90,    91,    92,    93,    94,    95,   147,   139,    25,    26,
      96,    86,    87,    88,    89,     6,    27,     7,     8,    90,
      91,    92,    93,    94,    95,   153,   154,    49,    39,    96,
     148,   173,    97,    79,     9,    43,    80,   163,    10,    11,
      40,    12,    13,    14,    69,   149,   150,    15,    25,    26,
     176,    98,   178,    86,    87,    88,    89,    48,    48,    75,
      54,    90,    91,    92,    93,    94,    95,   183,    76,    57,
     192,    96,    86,    87,    88,    89,    25,    26,   179,    58,
      90,    91,    92,    93,    94,    95,    77,    48,   160,   188,
      96,   161,   184,    99,    72,   196,    48,    86,    87,    88,
      89,    81,   202,   184,    82,    90,    91,    92,    93,    94,
      95,   203,   118,    25,    26,    96,    86,    87,    88,    89,
      83,   142,    84,   143,    90,    91,    92,    93,    94,    95,
      86,    87,    88,    89,    96,   100,   104,   151,    90,    91,
      92,    93,    94,    95,   101,   113,   130,   131,    96,    86,
      87,    88,    89,   132,   138,   137,   152,    90,    91,    92,
      93,    94,    95,    86,    87,    88,    89,    96,   103,   141,
     155,    90,    91,    92,    93,    94,    95,   157,   159,   168,
     162,    96,    86,    87,    88,    89,   171,   145,   172,   174,
      90,    91,    92,    93,    94,    95,    86,    87,    88,    89,
      96,   146,   177,   180,    90,    91,    92,    93,    94,    95,
     194,   181,   182,   193,    96,    86,    87,    88,    89,     6,
     170,     7,     8,    90,    91,    92,    93,    94,    95,   198,
      25,    26,   199,    96,   189,   204,     1,   201,     9,   205,
     164,   165,    10,    11,    50,    12,    13,    14,    55,   156,
     197,    15,     6,   190,     7,     8,     0,     0,     0,     0,
       0,     0,     6,     0,     7,     8,     0,     0,     0,    47,
       0,     9,     0,     0,     0,    10,    11,     0,    12,    13,
      14,     9,     0,     0,    15,    10,    11,   166,    12,    13,
      14,     0,     0,     6,    15,     7,     8,     0,     0,     0,
       0,     0,     0,     6,     0,     7,     8,     0,     0,     0,
       0,     0,     9,     0,     0,   191,    10,    11,     0,    12,
      13,    14,     9,     0,     0,    15,    10,    11,     0,    12,
      13,    14,     0,     0,     6,    15,     7,     8,    86,    87,
      88,    89,     0,     0,     0,   102,    90,    91,    92,    93,
      94,    95,     0,     9,     0,     0,    96,    68,    11,     0,
      12,    13,    14,     0,     0,     0,    15,    86,    87,    88,
      89,     0,     0,     0,   111,    90,    91,    92,    93,    94,
      95,    86,    87,    88,    89,    96,     0,     0,   169,    90,
      91,    92,    93,    94,    95,    86,    87,    88,    89,    96,
       0,     0,   200,    90,    91,    92,    93,    94,    95,    86,
      87,    88,    89,    96,     0,     0,     0,    90,    91,    92,
      93,    94,    95,    86,    87,    88,    89,    96,     0,     0,
       0,    -1,    -1,    -1,    -1,    -1,    -1,     0,     0,     0,
       0,    96
};

static const yytype_int16 yycheck[] =
{
       2,    77,     4,    10,    16,    11,     5,     4,    14,    39,
      40,     9,    40,     5,    42,    45,    46,     5,     6,     5,
       5,    20,    29,    23,    19,     0,    28,    57,    20,    41,
      10,    33,    44,    21,    64,    35,    33,     9,    37,    38,
      39,    37,    40,    42,    43,    37,    38,    39,    43,    79,
      42,    37,    37,    83,    84,    19,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   143,    40,    42,
     100,   101,     3,     4,     5,     6,    42,    17,    18,    43,
      11,    12,    13,    14,    15,    16,    19,    19,    17,    18,
      21,     3,     4,     5,     6,     5,    36,     7,     8,    11,
      12,    13,    14,    15,    16,   135,   136,    36,    42,    21,
      43,    43,    43,    40,    24,    10,    43,   147,    28,    29,
      42,    31,    32,    33,    34,   131,   132,    37,    17,    18,
     160,    43,   162,     3,     4,     5,     6,   149,   150,    10,
      37,    11,    12,    13,    14,    15,    16,    36,    19,     9,
     180,    21,     3,     4,     5,     6,    17,    18,   164,    37,
      11,    12,    13,    14,    15,    16,    42,   179,    40,   175,
      21,    43,   174,    43,    37,    36,   188,     3,     4,     5,
       6,    37,    10,   185,    37,    11,    12,    13,    14,    15,
      16,    19,    43,    17,    18,    21,     3,     4,     5,     6,
      40,    40,    42,    42,    11,    12,    13,    14,    15,    16,
       3,     4,     5,     6,    21,    42,    38,    43,    11,    12,
      13,    14,    15,    16,    42,    10,    10,    25,    21,     3,
       4,     5,     6,    29,    37,    41,    43,    11,    12,    13,
      14,    15,    16,     3,     4,     5,     6,    21,    41,    37,
      40,    11,    12,    13,    14,    15,    16,    38,    44,    10,
      40,    21,     3,     4,     5,     6,    38,    41,    41,    35,
      11,    12,    13,    14,    15,    16,     3,     4,     5,     6,
      21,    41,    10,     9,    11,    12,    13,    14,    15,    16,
      37,    41,    40,    38,    21,     3,     4,     5,     6,     5,
      41,     7,     8,    11,    12,    13,    14,    15,    16,    45,
      17,    18,    43,    21,    41,    10,    23,    41,    24,    37,
      26,    27,    28,    29,    28,    31,    32,    33,    33,   139,
     185,    37,     5,    41,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,    22,
      -1,    24,    -1,    -1,    -1,    28,    29,    -1,    31,    32,
      33,    24,    -1,    -1,    37,    28,    29,    30,    31,    32,
      33,    -1,    -1,     5,    37,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    27,    28,    29,    -1,    31,
      32,    33,    24,    -1,    -1,    37,    28,    29,    -1,    31,
      32,    33,    -1,    -1,     5,    37,     7,     8,     3,     4,
       5,     6,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    -1,    24,    -1,    -1,    21,    28,    29,    -1,
      31,    32,    33,    -1,    -1,    -1,    37,     3,     4,     5,
       6,    -1,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,     3,     4,     5,     6,    21,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,     3,     4,     5,     6,    21,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,     3,
       4,     5,     6,    21,    -1,    -1,    -1,    11,    12,    13,
      14,    15,    16,     3,     4,     5,     6,    21,    -1,    -1,
      -1,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    21
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    23,    35,    47,    48,    63,     5,     7,     8,    24,
      28,    29,    31,    32,    33,    37,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    17,    18,    36,    49,    50,
      51,     0,    51,    53,    54,    63,    37,    42,    42,    42,
      42,    64,    10,    10,    64,     9,    40,    22,    65,    36,
      50,     5,    37,    52,    37,    54,    63,     9,    37,     5,
      20,    37,    38,    39,    42,    73,    73,    73,    28,    34,
      73,    73,    37,    40,    42,    10,    19,    42,    73,    40,
      43,    37,    37,    40,    42,    73,     3,     4,     5,     6,
      11,    12,    13,    14,    15,    16,    21,    43,    43,    43,
      42,    42,    10,    41,    38,    51,    55,    56,     5,    37,
      55,    10,    73,    10,    73,    43,    62,    73,    43,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      10,    25,    29,    73,    73,     9,    40,    41,    37,    19,
      43,    37,    40,    42,    43,    41,    41,    19,    43,    64,
      64,    43,    43,    73,    73,    40,    56,    38,    55,    44,
      40,    43,    40,    73,    26,    27,    30,    10,    10,    10,
      41,    38,    41,    43,    35,    57,    73,    10,    73,    64,
       9,    41,    40,    36,    51,    58,    59,    61,    64,    41,
      41,    27,    73,    38,    37,    60,    36,    59,    45,    43,
      10,    41,    10,    19,    10,    37
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    49,    49,    50,
      51,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    54,    55,    55,    55,    56,    57,
      57,    58,    58,    59,    60,    60,    61,    62,    62,    63,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    67,    68,    68,    68,    68,    69,
      69,    70,    71,    72,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     2,     3,     2,     1,     3,
       1,     1,     3,     9,     6,     4,     7,     4,     1,     2,
       6,     4,     2,     1,     9,     3,     1,     0,     2,     3,
       2,     2,     1,     3,     3,     1,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     5,     8,    11,     5,     4,     7,    10,     5,     9,
       7,     7,     7,     7,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     4,
       7,     2,     2,     3,     4
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
  case 2: /* program: GDeclBlock FdefBlock MainBlock  */
#line 34 "ex1.y"
                                                {
				//$$=createConnect($2,$3);
				//generate($3);
				printf("Done!\n");
				exit(0);
			}
#line 1470 "y.tab.c"
    break;

  case 3: /* program: GDeclBlock MainBlock  */
#line 40 "ex1.y"
                                                {printf("Done!");(yyval.node)=NULL;}
#line 1476 "y.tab.c"
    break;

  case 5: /* GDeclBlock: DECL ENDDECL  */
#line 44 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1482 "y.tab.c"
    break;

  case 6: /* GDeclBlock: DECL GDecList ENDDECL  */
#line 45 "ex1.y"
                                        {
			addToST((yyvsp[-1].node));
			printSymbolTable();
			(yyval.node)=NULL;
		}
#line 1492 "y.tab.c"
    break;

  case 7: /* GDecList: GDecList GDecL  */
#line 52 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1498 "y.tab.c"
    break;

  case 8: /* GDecList: GDecL  */
#line 53 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1504 "y.tab.c"
    break;

  case 9: /* GDecL: Type GVarList SEMICOLON  */
#line 56 "ex1.y"
                                {(yyval.node)=createDeclaration((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1510 "y.tab.c"
    break;

  case 10: /* Type: INTT  */
#line 59 "ex1.y"
                {(yyval.node)=createType(INT);}
#line 1516 "y.tab.c"
    break;

  case 11: /* Type: STRINGT  */
#line 60 "ex1.y"
                        {(yyval.node)=createType(STRING);}
#line 1522 "y.tab.c"
    break;

  case 12: /* GVarList: GVarList COMM ID  */
#line 63 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1528 "y.tab.c"
    break;

  case 13: /* GVarList: GVarList COMM ID '[' NUM ']' '[' NUM ']'  */
#line 64 "ex1.y"
                                                                {(yyval.node)=createArray((yyvsp[-8].node),(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1534 "y.tab.c"
    break;

  case 14: /* GVarList: GVarList COMM ID '[' NUM ']'  */
#line 65 "ex1.y"
                                                {(yyval.node)=createArray((yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1540 "y.tab.c"
    break;

  case 15: /* GVarList: GVarList COMM MUL ID  */
#line 66 "ex1.y"
                                        {(yyval.node)=createConnect((yyvsp[-3].node),createPointer((yyvsp[0].node)));}
#line 1546 "y.tab.c"
    break;

  case 16: /* GVarList: ID '[' NUM ']' '[' NUM ']'  */
#line 67 "ex1.y"
                                                {(yyval.node)=createArray(NULL,(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1552 "y.tab.c"
    break;

  case 17: /* GVarList: ID '[' NUM ']'  */
#line 68 "ex1.y"
                                        {(yyval.node)=createArray(NULL,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1558 "y.tab.c"
    break;

  case 18: /* GVarList: ID  */
#line 69 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1564 "y.tab.c"
    break;

  case 19: /* GVarList: MUL ID  */
#line 70 "ex1.y"
                        {(yyval.node)=createPointer((yyvsp[0].node));}
#line 1570 "y.tab.c"
    break;

  case 20: /* GVarList: GVarList COMM ID '(' paramlist ')'  */
#line 71 "ex1.y"
                                                        {(yyval.node)=createConnect((yyvsp[-5].node),createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node)));}
#line 1576 "y.tab.c"
    break;

  case 21: /* GVarList: ID '(' paramlist ')'  */
#line 72 "ex1.y"
                                        {(yyval.node)=createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1582 "y.tab.c"
    break;

  case 22: /* FdefBlock: FdefBlock Fdef  */
#line 75 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1588 "y.tab.c"
    break;

  case 23: /* FdefBlock: Fdef  */
#line 76 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1594 "y.tab.c"
    break;

  case 24: /* Fdef: Type ID '(' paramlist ')' '{' LdeclBlock Body '}'  */
#line 79 "ex1.y"
                                                                {(yyval.node)=createFuncDef((yyvsp[-8].node),(yyvsp[-7].node),(yyvsp[-5].node),(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1600 "y.tab.c"
    break;

  case 25: /* paramlist: paramlist COMM param  */
#line 82 "ex1.y"
                                        { (yyval.node) = createConnect((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1606 "y.tab.c"
    break;

  case 26: /* paramlist: param  */
#line 83 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1612 "y.tab.c"
    break;

  case 27: /* paramlist: %empty  */
#line 84 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1618 "y.tab.c"
    break;

  case 28: /* param: Type ID  */
#line 86 "ex1.y"
                {(yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node));}
#line 1624 "y.tab.c"
    break;

  case 29: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 89 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1630 "y.tab.c"
    break;

  case 30: /* LdeclBlock: DECL ENDDECL  */
#line 90 "ex1.y"
                                        {(yyval.node)=NULL;}
#line 1636 "y.tab.c"
    break;

  case 31: /* LDecList: LDecList LDecl  */
#line 93 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1642 "y.tab.c"
    break;

  case 32: /* LDecList: LDecl  */
#line 94 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1648 "y.tab.c"
    break;

  case 33: /* LDecl: Type IdList SEMICOLON  */
#line 96 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1654 "y.tab.c"
    break;

  case 34: /* IdList: IdList COMM ID  */
#line 99 "ex1.y"
                        {(yyval.node)=NULL;}
#line 1660 "y.tab.c"
    break;

  case 36: /* Body: stmtlist  */
#line 103 "ex1.y"
                {(yyval.node)=(yyvsp[0].node);}
#line 1666 "y.tab.c"
    break;

  case 39: /* MainBlock: BEGINK stmtlist ENDK  */
#line 110 "ex1.y"
                                {(yyval.node)=(yyvsp[-1].node);}
#line 1672 "y.tab.c"
    break;

  case 40: /* stmtlist: stmtlist stmt  */
#line 113 "ex1.y"
                        { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1678 "y.tab.c"
    break;

  case 41: /* stmtlist: stmt  */
#line 114 "ex1.y"
                              {(yyval.node)=(yyvsp[0].node);}
#line 1684 "y.tab.c"
    break;

  case 42: /* stmt: InputStmt  */
#line 117 "ex1.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 1690 "y.tab.c"
    break;

  case 43: /* stmt: OutputStmt  */
#line 118 "ex1.y"
                             {(yyval.node)=(yyvsp[0].node);}
#line 1696 "y.tab.c"
    break;

  case 44: /* stmt: AsgStmt  */
#line 119 "ex1.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 1702 "y.tab.c"
    break;

  case 45: /* stmt: IfStmt  */
#line 120 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1708 "y.tab.c"
    break;

  case 46: /* stmt: WhileStmt  */
#line 121 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1714 "y.tab.c"
    break;

  case 47: /* stmt: BREAKK SEMICOLON  */
#line 122 "ex1.y"
                                        {(yyval.node)=createBreak();}
#line 1720 "y.tab.c"
    break;

  case 48: /* stmt: CONTINUEK SEMICOLON  */
#line 123 "ex1.y"
                                        {(yyval.node)=createContinue();}
#line 1726 "y.tab.c"
    break;

  case 49: /* stmt: doWhileStmt  */
#line 124 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1732 "y.tab.c"
    break;

  case 50: /* stmt: RepeatStmt  */
#line 125 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1738 "y.tab.c"
    break;

  case 51: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 128 "ex1.y"
                                          {(yyval.node)=createRead((yyvsp[-2].node));}
#line 1744 "y.tab.c"
    break;

  case 52: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 129 "ex1.y"
                                                                {(yyval.node)=createReadArr((yyvsp[-5].node),(yyvsp[-3].node));}
#line 1750 "y.tab.c"
    break;

  case 53: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 130 "ex1.y"
                                                                        {(yyval.node)=createReadArr((yyvsp[-8].node),createConnect((yyvsp[-6].node),(yyvsp[-3].node)));}
#line 1756 "y.tab.c"
    break;

  case 54: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 132 "ex1.y"
                                             {(yyval.node)=createWrite((yyvsp[-2].node));}
#line 1762 "y.tab.c"
    break;

  case 55: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 134 "ex1.y"
                                 {(yyval.node)=createAssign((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1768 "y.tab.c"
    break;

  case 56: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 135 "ex1.y"
                                                        {(yyval.node)=createArrAssign((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1774 "y.tab.c"
    break;

  case 57: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 136 "ex1.y"
                                                                    {(yyval.node)=createArrAssign((yyvsp[-9].node),createConnect((yyvsp[-7].node),(yyvsp[-4].node)),(yyvsp[-1].node));}
#line 1780 "y.tab.c"
    break;

  case 58: /* AsgStmt: MUL ID ASSIGN expr SEMICOLON  */
#line 137 "ex1.y"
                                                {(yyval.node)=createAssignToDeref((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1786 "y.tab.c"
    break;

  case 59: /* IfStmt: IFK '(' expr ')' THENK stmtlist ELSEK stmtlist ENDIFK  */
#line 140 "ex1.y"
                                                                {(yyval.node)=createIfElseNode((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[-1].node));}
#line 1792 "y.tab.c"
    break;

  case 60: /* IfStmt: IFK '(' expr ')' THENK stmtlist ENDIFK  */
#line 141 "ex1.y"
                                                        {(yyval.node)=createIfNode((yyvsp[-4].node),(yyvsp[-1].node));}
#line 1798 "y.tab.c"
    break;

  case 61: /* WhileStmt: WHILEK '(' expr ')' DOK stmtlist ENDWHILEK  */
#line 144 "ex1.y"
                                                        {(yyval.node)=createWhile((yyvsp[-4].node),(yyvsp[-1].node));}
#line 1804 "y.tab.c"
    break;

  case 62: /* RepeatStmt: REPEATK stmtlist UNTILK '(' expr ')' SEMICOLON  */
#line 147 "ex1.y"
                                                               {(yyval.node)=createRepeat((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1810 "y.tab.c"
    break;

  case 63: /* doWhileStmt: DOK stmtlist WHILEK '(' expr ')' SEMICOLON  */
#line 149 "ex1.y"
                                                        {(yyval.node)=createDoWhile((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1816 "y.tab.c"
    break;

  case 64: /* expr: expr PLUS expr  */
#line 152 "ex1.y"
                                {(yyval.node) = makeOperatorNode('+',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1822 "y.tab.c"
    break;

  case 65: /* expr: expr MINUS expr  */
#line 153 "ex1.y"
                                {(yyval.node) = makeOperatorNode('-',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1828 "y.tab.c"
    break;

  case 66: /* expr: expr MUL expr  */
#line 154 "ex1.y"
                                {(yyval.node) = makeOperatorNode('*',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1834 "y.tab.c"
    break;

  case 67: /* expr: expr DIV expr  */
#line 155 "ex1.y"
                                {(yyval.node) = makeOperatorNode('/',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1840 "y.tab.c"
    break;

  case 68: /* expr: expr MOD expr  */
#line 156 "ex1.y"
                                {(yyval.node) = makeOperatorNode('%',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1846 "y.tab.c"
    break;

  case 69: /* expr: '(' expr ')'  */
#line 157 "ex1.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 1852 "y.tab.c"
    break;

  case 70: /* expr: NUM  */
#line 158 "ex1.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1858 "y.tab.c"
    break;

  case 71: /* expr: ID  */
#line 159 "ex1.y"
                                {(yyval.node)=createVariableUsageNode((yyvsp[0].node)->varname);}
#line 1864 "y.tab.c"
    break;

  case 72: /* expr: STRING_LITERAL  */
#line 160 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1870 "y.tab.c"
    break;

  case 73: /* expr: expr GE expr  */
#line 161 "ex1.y"
                        {(yyval.node)=createCondition(Nge,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1876 "y.tab.c"
    break;

  case 74: /* expr: expr LE expr  */
#line 162 "ex1.y"
                        {(yyval.node)=createCondition(Nle,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1882 "y.tab.c"
    break;

  case 75: /* expr: expr GT expr  */
#line 163 "ex1.y"
                        {(yyval.node)=createCondition(Ngt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1888 "y.tab.c"
    break;

  case 76: /* expr: expr LT expr  */
#line 164 "ex1.y"
                        {(yyval.node)=createCondition(Nlt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1894 "y.tab.c"
    break;

  case 77: /* expr: expr NE expr  */
#line 165 "ex1.y"
                        {(yyval.node)=createCondition(Nne,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1900 "y.tab.c"
    break;

  case 78: /* expr: expr EQ expr  */
#line 166 "ex1.y"
                        {(yyval.node)=createCondition(Neq,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1906 "y.tab.c"
    break;

  case 79: /* expr: ID '[' expr ']'  */
#line 167 "ex1.y"
                                {(yyval.node)=createArrayAccess((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1912 "y.tab.c"
    break;

  case 80: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 168 "ex1.y"
                                        {(yyval.node)=createArrayAccess((yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1918 "y.tab.c"
    break;

  case 81: /* expr: MUL ID  */
#line 169 "ex1.y"
                        {(yyval.node)=createDerefer((yyvsp[0].node));}
#line 1924 "y.tab.c"
    break;

  case 82: /* expr: AMP ID  */
#line 170 "ex1.y"
                        {(yyval.node)=createAddr((yyvsp[0].node));}
#line 1930 "y.tab.c"
    break;


#line 1934 "y.tab.c"

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

#line 175 "ex1.y"


int yyerror(char const *s)
{
	extern int linecount;
    printf("yyerror %s at line %d near token %s\n",s,linecount,yytext);
}

int main(void) {
	FILE *s=fopen("input.txt","r");
	
	yyin=s;
	yyparse();
	
	return 0;
}
