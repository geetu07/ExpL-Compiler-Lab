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
    ENDK = 275,                    /* ENDK  */
    BEGINK = 276,                  /* BEGINK  */
    IFK = 277,                     /* IFK  */
    THENK = 278,                   /* THENK  */
    ELSEK = 279,                   /* ELSEK  */
    ENDIFK = 280,                  /* ENDIFK  */
    WHILEK = 281,                  /* WHILEK  */
    DOK = 282,                     /* DOK  */
    ENDWHILEK = 283,               /* ENDWHILEK  */
    BREAKK = 284,                  /* BREAKK  */
    CONTINUEK = 285,               /* CONTINUEK  */
    REPEATK = 286,                 /* REPEATK  */
    UNTILK = 287,                  /* UNTILK  */
    DECL = 288,                    /* DECL  */
    ENDDECL = 289,                 /* ENDDECL  */
    ID = 290,                      /* ID  */
    NUM = 291,                     /* NUM  */
    STRING_LITERAL = 292           /* STRING_LITERAL  */
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
#define ENDK 275
#define BEGINK 276
#define IFK 277
#define THENK 278
#define ELSEK 279
#define ENDIFK 280
#define WHILEK 281
#define DOK 282
#define ENDWHILEK 283
#define BREAKK 284
#define CONTINUEK 285
#define REPEATK 286
#define UNTILK 287
#define DECL 288
#define ENDDECL 289
#define ID 290
#define NUM 291
#define STRING_LITERAL 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "ex1.y"

	struct tnode *node;
	

#line 218 "y.tab.c"

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
  YYSYMBOL_ENDK = 20,                      /* ENDK  */
  YYSYMBOL_BEGINK = 21,                    /* BEGINK  */
  YYSYMBOL_IFK = 22,                       /* IFK  */
  YYSYMBOL_THENK = 23,                     /* THENK  */
  YYSYMBOL_ELSEK = 24,                     /* ELSEK  */
  YYSYMBOL_ENDIFK = 25,                    /* ENDIFK  */
  YYSYMBOL_WHILEK = 26,                    /* WHILEK  */
  YYSYMBOL_DOK = 27,                       /* DOK  */
  YYSYMBOL_ENDWHILEK = 28,                 /* ENDWHILEK  */
  YYSYMBOL_BREAKK = 29,                    /* BREAKK  */
  YYSYMBOL_CONTINUEK = 30,                 /* CONTINUEK  */
  YYSYMBOL_REPEATK = 31,                   /* REPEATK  */
  YYSYMBOL_UNTILK = 32,                    /* UNTILK  */
  YYSYMBOL_DECL = 33,                      /* DECL  */
  YYSYMBOL_ENDDECL = 34,                   /* ENDDECL  */
  YYSYMBOL_ID = 35,                        /* ID  */
  YYSYMBOL_NUM = 36,                       /* NUM  */
  YYSYMBOL_STRING_LITERAL = 37,            /* STRING_LITERAL  */
  YYSYMBOL_38_ = 38,                       /* '['  */
  YYSYMBOL_39_ = 39,                       /* ']'  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_declar = 44,                    /* declar  */
  YYSYMBOL_DecList = 45,                   /* DecList  */
  YYSYMBOL_DecL = 46,                      /* DecL  */
  YYSYMBOL_Type = 47,                      /* Type  */
  YYSYMBOL_VarList = 48,                   /* VarList  */
  YYSYMBOL_stmtlist = 49,                  /* stmtlist  */
  YYSYMBOL_stmt = 50,                      /* stmt  */
  YYSYMBOL_InputStmt = 51,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 52,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 53,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 54,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 55,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 56,                /* RepeatStmt  */
  YYSYMBOL_doWhileStmt = 57,               /* doWhileStmt  */
  YYSYMBOL_expr = 58                       /* expr  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   422

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


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
      40,    41,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    38,     2,    39,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    31,    31,    37,    40,    41,    47,    48,    51,    54,
      55,    58,    59,    60,    61,    62,    63,    66,    67,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    81,    82,
      83,    85,    87,    88,    89,    92,    93,    96,    99,   101,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118
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
  "EQ", "NE", "INTT", "STRINGT", "COMM", "ENDK", "BEGINK", "IFK", "THENK",
  "ELSEK", "ENDIFK", "WHILEK", "DOK", "ENDWHILEK", "BREAKK", "CONTINUEK",
  "REPEATK", "UNTILK", "DECL", "ENDDECL", "ID", "NUM", "STRING_LITERAL",
  "'['", "']'", "'('", "')'", "$accept", "program", "declar", "DecList",
  "DecL", "Type", "VarList", "stmtlist", "stmt", "InputStmt", "OutputStmt",
  "AsgStmt", "IfStmt", "WhileStmt", "RepeatStmt", "doWhileStmt", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-30)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -13,     5,    13,     8,   -15,   322,   -30,   -30,   -30,   -30,
     -30,    -6,   -30,    -8,    25,    38,    49,    50,   322,    48,
      56,   322,    -3,   264,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,    58,    -5,    59,    16,    16,    16,
     339,   -30,   -30,   281,    16,    16,    87,   -30,    69,   -30,
      71,    26,    77,   -30,   -30,    16,    18,    57,   107,    67,
      76,   372,   169,   -30,    78,    90,    16,   119,    16,   121,
      16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
     120,   108,   111,    16,    16,   -30,    -2,   101,   104,   183,
     -30,   198,   -30,    70,    70,    88,    88,   406,   406,   406,
     406,   406,   406,   -30,   322,   322,   138,   152,    16,    16,
     109,   122,    36,   131,   252,   293,    30,   136,   386,   212,
     132,   139,    16,   137,    16,   322,   -30,   -30,   -30,   -30,
     -30,   150,   -30,   124,   227,   -30,   241,   310,    16,   151,
     129,   -30,   -30,   400,   -30,   166,   -30,   -30
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     1,     3,     9,    10,
       4,     0,     7,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
      27,    26,     5,     6,    16,     0,     0,     0,     0,     0,
       0,    24,    25,     0,     0,     0,     0,    17,     0,     8,
       0,     0,    46,    45,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,    15,     0,     0,
      28,     0,    44,    40,    41,    42,    43,    50,    48,    49,
      51,    53,    52,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,     0,
       0,    13,     0,     0,     0,     0,    36,    37,    39,    38,
      33,     0,    14,     0,     0,    29,     0,     0,     0,     0,
       0,    55,    35,     0,    12,     0,    34,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -30,   -30,   -30,   -30,   167,   -30,   -30,   -17,   -23,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     5,    11,    12,    13,    35,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    40,     8,     9,    43,    49,    44,   108,     1,    57,
      58,     8,     9,     6,    50,    61,    62,    47,     7,    10,
      47,    70,    71,    72,    73,     3,    69,    34,    32,    74,
      75,    76,    77,    78,    79,    45,   109,    89,     4,    91,
     128,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,    52,    53,    54,   106,   107,    55,   105,    41,    80,
      70,    71,    72,    73,    66,    36,    42,    67,    74,    75,
      76,    77,    78,    79,   122,    72,    73,   123,    37,   118,
     119,    74,    75,    76,    77,    78,    79,   114,   115,    38,
      39,    47,    47,   134,    51,   136,    48,    63,    81,    74,
      75,    76,    77,    78,    79,    64,    65,    83,   137,   143,
      70,    71,    72,    73,    47,    68,    84,    87,    74,    75,
      76,    77,    78,    79,    70,    71,    72,    73,    88,    90,
     103,   104,    74,    75,    76,    77,    78,    79,   105,   110,
     111,    70,    71,    72,    73,   120,   129,   135,    82,    74,
      75,    76,    77,    78,    79,    70,    71,    72,    73,   138,
     139,   121,    92,    74,    75,    76,    77,    78,    79,   124,
     145,   132,    70,    71,    72,    73,   147,   133,    33,   116,
      74,    75,    76,    77,    78,    79,    70,    71,    72,    73,
     144,     0,     0,   117,    74,    75,    76,    77,    78,    79,
       0,    70,    71,    72,    73,     0,     0,     0,    86,    74,
      75,    76,    77,    78,    79,    70,    71,    72,    73,     0,
       0,     0,   112,    74,    75,    76,    77,    78,    79,     0,
      70,    71,    72,    73,     0,     0,     0,   113,    74,    75,
      76,    77,    78,    79,    70,    71,    72,    73,     0,     0,
       0,   131,    74,    75,    76,    77,    78,    79,     0,    14,
      15,     0,     0,     0,     0,     0,   140,     0,     0,     0,
       0,    14,    15,     0,    16,     0,   125,   126,    17,    18,
     141,    19,    20,    21,    46,     0,    16,    22,    14,    15,
      17,    18,     0,    19,    20,    21,     0,     0,     0,    22,
      14,    15,     0,    16,     0,     0,     0,    17,    18,     0,
      19,    20,    21,    60,     0,    16,    22,    14,    15,    17,
      18,   127,    19,    20,    21,     0,     0,     0,    22,    14,
      15,     0,    16,     0,     0,   142,    17,    18,     0,    19,
      20,    21,     0,     0,    16,    22,    14,    15,    17,    18,
       0,    19,    20,    21,     0,     0,     0,    22,     0,     0,
       0,    16,     0,     0,     0,    59,    18,     0,    19,    20,
      21,     0,     0,     0,    22,    70,    71,    72,    73,     0,
       0,     0,    85,    74,    75,    76,    77,    78,    79,    70,
      71,    72,    73,     0,     0,     0,   130,    74,    75,    76,
      77,    78,    79,    70,    71,    72,    73,     0,     0,     0,
     146,    74,    75,    76,    77,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1
};

static const yytype_int16 yycheck[] =
{
      23,    18,    17,    18,    21,    10,     9,     9,    21,    38,
      39,    17,    18,     0,    19,    44,    45,    40,    10,    34,
      43,     3,     4,     5,     6,    20,    55,    35,    34,    11,
      12,    13,    14,    15,    16,    38,    38,    66,    33,    68,
      10,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    35,    36,    37,    83,    84,    40,    27,    10,    41,
       3,     4,     5,     6,    38,    40,    10,    41,    11,    12,
      13,    14,    15,    16,    38,     5,     6,    41,    40,   108,
     109,    11,    12,    13,    14,    15,    16,   104,   105,    40,
      40,   114,   115,   122,    35,   124,    38,    10,    41,    11,
      12,    13,    14,    15,    16,    36,    35,    40,   125,   138,
       3,     4,     5,     6,   137,    38,    40,    39,    11,    12,
      13,    14,    15,    16,     3,     4,     5,     6,    38,    10,
      10,    23,    11,    12,    13,    14,    15,    16,    27,    38,
      36,     3,     4,     5,     6,    36,    10,    10,    41,    11,
      12,    13,    14,    15,    16,     3,     4,     5,     6,     9,
      36,    39,    41,    11,    12,    13,    14,    15,    16,    38,
      41,    39,     3,     4,     5,     6,    10,    38,    11,    41,
      11,    12,    13,    14,    15,    16,     3,     4,     5,     6,
      39,    -1,    -1,    41,    11,    12,    13,    14,    15,    16,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    39,    11,
      12,    13,    14,    15,    16,     3,     4,     5,     6,    -1,
      -1,    -1,    39,    11,    12,    13,    14,    15,    16,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    39,    11,    12,
      13,    14,    15,    16,     3,     4,     5,     6,    -1,    -1,
      -1,    39,    11,    12,    13,    14,    15,    16,    -1,     7,
       8,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,     7,     8,    -1,    22,    -1,    24,    25,    26,    27,
      39,    29,    30,    31,    20,    -1,    22,    35,     7,     8,
      26,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    35,
       7,     8,    -1,    22,    -1,    -1,    -1,    26,    27,    -1,
      29,    30,    31,    32,    -1,    22,    35,     7,     8,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,     7,
       8,    -1,    22,    -1,    -1,    25,    26,    27,    -1,    29,
      30,    31,    -1,    -1,    22,    35,     7,     8,    26,    27,
      -1,    29,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    22,    -1,    -1,    -1,    26,    27,    -1,    29,    30,
      31,    -1,    -1,    -1,    35,     3,     4,     5,     6,    -1,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,     3,
       4,     5,     6,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,     3,     4,     5,     6,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    11,    12,    13,
      14,    15,    16
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    43,    20,    33,    44,     0,    10,    17,    18,
      34,    45,    46,    47,     7,     8,    22,    26,    27,    29,
      30,    31,    35,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    34,    46,    35,    48,    40,    40,    40,    40,
      49,    10,    10,    49,     9,    38,    20,    50,    38,    10,
      19,    35,    35,    36,    37,    40,    58,    58,    58,    26,
      32,    58,    58,    10,    36,    35,    38,    41,    38,    58,
       3,     4,     5,     6,    11,    12,    13,    14,    15,    16,
      41,    41,    41,    40,    40,    10,    39,    39,    38,    58,
      10,    58,    41,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    10,    23,    27,    58,    58,     9,    38,
      38,    36,    39,    39,    49,    49,    41,    41,    58,    58,
      36,    39,    38,    41,    38,    24,    25,    28,    10,    10,
      10,    39,    39,    38,    58,    10,    58,    49,     9,    36,
      39,    39,    25,    58,    39,    41,    10,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    45,    46,    47,
      47,    48,    48,    48,    48,    48,    48,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    51,    51,
      51,    52,    53,    53,    53,    54,    54,    55,    56,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     2,     3,     2,     1,     3,     1,
       1,     3,     9,     6,     7,     4,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     5,     8,
      11,     5,     4,     7,    10,     9,     7,     7,     7,     7,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     4,     7
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
  case 2: /* program: BEGINK declar stmtlist ENDK SEMICOLON  */
#line 31 "ex1.y"
                                                {
				(yyval.node)=createConnect((yyvsp[-3].node),(yyvsp[-2].node));
				generate((yyvsp[-2].node));
				printf("Done!\n");
				exit(0);
			}
#line 1399 "y.tab.c"
    break;

  case 3: /* program: BEGINK ENDK SEMICOLON  */
#line 37 "ex1.y"
                                                {printf("Done!");(yyval.node)=NULL;}
#line 1405 "y.tab.c"
    break;

  case 4: /* declar: DECL ENDDECL  */
#line 40 "ex1.y"
                        {(yyval.node)=NULL;}
#line 1411 "y.tab.c"
    break;

  case 5: /* declar: DECL DecList ENDDECL  */
#line 41 "ex1.y"
                                        {
			addToST((yyvsp[-1].node));
			printSymbolTable();
		}
#line 1420 "y.tab.c"
    break;

  case 6: /* DecList: DecList DecL  */
#line 47 "ex1.y"
                        {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1426 "y.tab.c"
    break;

  case 7: /* DecList: DecL  */
#line 48 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1432 "y.tab.c"
    break;

  case 8: /* DecL: Type VarList SEMICOLON  */
#line 51 "ex1.y"
                                {(yyval.node)=createDeclaration((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1438 "y.tab.c"
    break;

  case 9: /* Type: INTT  */
#line 54 "ex1.y"
                {(yyval.node)=createType(INT);}
#line 1444 "y.tab.c"
    break;

  case 10: /* Type: STRINGT  */
#line 55 "ex1.y"
                        {(yyval.node)=createType(STRING);}
#line 1450 "y.tab.c"
    break;

  case 11: /* VarList: VarList COMM ID  */
#line 58 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1456 "y.tab.c"
    break;

  case 12: /* VarList: VarList COMM ID '[' NUM ']' '[' NUM ']'  */
#line 59 "ex1.y"
                                                                {(yyval.node)=createArray((yyvsp[-8].node),(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1462 "y.tab.c"
    break;

  case 13: /* VarList: VarList COMM ID '[' NUM ']'  */
#line 60 "ex1.y"
                                                {(yyval.node)=createArray((yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1468 "y.tab.c"
    break;

  case 14: /* VarList: ID '[' NUM ']' '[' NUM ']'  */
#line 61 "ex1.y"
                                                {(yyval.node)=createArray(NULL,(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1474 "y.tab.c"
    break;

  case 15: /* VarList: ID '[' NUM ']'  */
#line 62 "ex1.y"
                                        {(yyval.node)=createArray(NULL,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1480 "y.tab.c"
    break;

  case 16: /* VarList: ID  */
#line 63 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1486 "y.tab.c"
    break;

  case 17: /* stmtlist: stmtlist stmt  */
#line 66 "ex1.y"
                        { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1492 "y.tab.c"
    break;

  case 18: /* stmtlist: stmt  */
#line 67 "ex1.y"
                              {(yyval.node)=(yyvsp[0].node);}
#line 1498 "y.tab.c"
    break;

  case 19: /* stmt: InputStmt  */
#line 70 "ex1.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 1504 "y.tab.c"
    break;

  case 20: /* stmt: OutputStmt  */
#line 71 "ex1.y"
                             {(yyval.node)=(yyvsp[0].node);}
#line 1510 "y.tab.c"
    break;

  case 21: /* stmt: AsgStmt  */
#line 72 "ex1.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 1516 "y.tab.c"
    break;

  case 22: /* stmt: IfStmt  */
#line 73 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1522 "y.tab.c"
    break;

  case 23: /* stmt: WhileStmt  */
#line 74 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1528 "y.tab.c"
    break;

  case 24: /* stmt: BREAKK SEMICOLON  */
#line 75 "ex1.y"
                                        {(yyval.node)=createBreak();}
#line 1534 "y.tab.c"
    break;

  case 25: /* stmt: CONTINUEK SEMICOLON  */
#line 76 "ex1.y"
                                        {(yyval.node)=createContinue();}
#line 1540 "y.tab.c"
    break;

  case 26: /* stmt: doWhileStmt  */
#line 77 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1546 "y.tab.c"
    break;

  case 27: /* stmt: RepeatStmt  */
#line 78 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1552 "y.tab.c"
    break;

  case 28: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 81 "ex1.y"
                                          {(yyval.node)=createRead((yyvsp[-2].node));}
#line 1558 "y.tab.c"
    break;

  case 29: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 82 "ex1.y"
                                                                {(yyval.node)=createReadArr((yyvsp[-5].node),(yyvsp[-3].node));}
#line 1564 "y.tab.c"
    break;

  case 30: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 83 "ex1.y"
                                                                        {(yyval.node)=createReadArr((yyvsp[-8].node),createConnect((yyvsp[-6].node),(yyvsp[-3].node)));}
#line 1570 "y.tab.c"
    break;

  case 31: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 85 "ex1.y"
                                             {(yyval.node)=createWrite((yyvsp[-2].node));}
#line 1576 "y.tab.c"
    break;

  case 32: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 87 "ex1.y"
                                 {(yyval.node)=createAssign((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1582 "y.tab.c"
    break;

  case 33: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 88 "ex1.y"
                                                        {(yyval.node)=createArrAssign((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1588 "y.tab.c"
    break;

  case 34: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 89 "ex1.y"
                                                                    {(yyval.node)=createArrAssign((yyvsp[-9].node),createConnect((yyvsp[-7].node),(yyvsp[-4].node)),(yyvsp[-1].node));}
#line 1594 "y.tab.c"
    break;

  case 35: /* IfStmt: IFK '(' expr ')' THENK stmtlist ELSEK stmtlist ENDIFK  */
#line 92 "ex1.y"
                                                                {(yyval.node)=createIfElseNode((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[-1].node));}
#line 1600 "y.tab.c"
    break;

  case 36: /* IfStmt: IFK '(' expr ')' THENK stmtlist ENDIFK  */
#line 93 "ex1.y"
                                                        {(yyval.node)=createIfNode((yyvsp[-4].node),(yyvsp[-1].node));}
#line 1606 "y.tab.c"
    break;

  case 37: /* WhileStmt: WHILEK '(' expr ')' DOK stmtlist ENDWHILEK  */
#line 96 "ex1.y"
                                                        {(yyval.node)=createWhile((yyvsp[-4].node),(yyvsp[-1].node));}
#line 1612 "y.tab.c"
    break;

  case 38: /* RepeatStmt: REPEATK stmtlist UNTILK '(' expr ')' SEMICOLON  */
#line 99 "ex1.y"
                                                               {(yyval.node)=createRepeat((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1618 "y.tab.c"
    break;

  case 39: /* doWhileStmt: DOK stmtlist WHILEK '(' expr ')' SEMICOLON  */
#line 101 "ex1.y"
                                                        {(yyval.node)=createDoWhile((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1624 "y.tab.c"
    break;

  case 40: /* expr: expr PLUS expr  */
#line 103 "ex1.y"
                                {(yyval.node) = makeOperatorNode('+',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1630 "y.tab.c"
    break;

  case 41: /* expr: expr MINUS expr  */
#line 104 "ex1.y"
                                {(yyval.node) = makeOperatorNode('-',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1636 "y.tab.c"
    break;

  case 42: /* expr: expr MUL expr  */
#line 105 "ex1.y"
                                {(yyval.node) = makeOperatorNode('*',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1642 "y.tab.c"
    break;

  case 43: /* expr: expr DIV expr  */
#line 106 "ex1.y"
                                {(yyval.node) = makeOperatorNode('/',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1648 "y.tab.c"
    break;

  case 44: /* expr: '(' expr ')'  */
#line 107 "ex1.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 1654 "y.tab.c"
    break;

  case 45: /* expr: NUM  */
#line 108 "ex1.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1660 "y.tab.c"
    break;

  case 46: /* expr: ID  */
#line 109 "ex1.y"
                                {(yyval.node)=createVariableUsageNode((yyvsp[0].node)->varname);}
#line 1666 "y.tab.c"
    break;

  case 47: /* expr: STRING_LITERAL  */
#line 110 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1672 "y.tab.c"
    break;

  case 48: /* expr: expr GE expr  */
#line 111 "ex1.y"
                        {(yyval.node)=createCondition(Nge,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1678 "y.tab.c"
    break;

  case 49: /* expr: expr LE expr  */
#line 112 "ex1.y"
                        {(yyval.node)=createCondition(Nle,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1684 "y.tab.c"
    break;

  case 50: /* expr: expr GT expr  */
#line 113 "ex1.y"
                        {(yyval.node)=createCondition(Ngt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1690 "y.tab.c"
    break;

  case 51: /* expr: expr LT expr  */
#line 114 "ex1.y"
                        {(yyval.node)=createCondition(Nlt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1696 "y.tab.c"
    break;

  case 52: /* expr: expr NE expr  */
#line 115 "ex1.y"
                        {(yyval.node)=createCondition(Nne,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1702 "y.tab.c"
    break;

  case 53: /* expr: expr EQ expr  */
#line 116 "ex1.y"
                        {(yyval.node)=createCondition(Neq,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1708 "y.tab.c"
    break;

  case 54: /* expr: ID '[' expr ']'  */
#line 117 "ex1.y"
                                {(yyval.node)=createArrayAccess((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1714 "y.tab.c"
    break;

  case 55: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 118 "ex1.y"
                                        {(yyval.node)=createArrayAccess((yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1720 "y.tab.c"
    break;


#line 1724 "y.tab.c"

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

#line 121 "ex1.y"


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
