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
    ID = 298,                      /* ID  */
    NUM = 299,                     /* NUM  */
    STRING_LITERAL = 300           /* STRING_LITERAL  */
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
#define ID 298
#define NUM 299
#define STRING_LITERAL 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "ex1.y"

	struct tnode *node;
	

#line 234 "y.tab.c"

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
  YYSYMBOL_ID = 43,                        /* ID  */
  YYSYMBOL_NUM = 44,                       /* NUM  */
  YYSYMBOL_STRING_LITERAL = 45,            /* STRING_LITERAL  */
  YYSYMBOL_46_ = 46,                       /* '['  */
  YYSYMBOL_47_ = 47,                       /* ']'  */
  YYSYMBOL_48_ = 48,                       /* '('  */
  YYSYMBOL_49_ = 49,                       /* ')'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_GDeclBlock = 52,                /* GDeclBlock  */
  YYSYMBOL_GDecList = 53,                  /* GDecList  */
  YYSYMBOL_GDecL = 54,                     /* GDecL  */
  YYSYMBOL_Type = 55,                      /* Type  */
  YYSYMBOL_GVarList = 56,                  /* GVarList  */
  YYSYMBOL_funcdeclparamlist = 57,         /* funcdeclparamlist  */
  YYSYMBOL_funcdeclparam = 58,             /* funcdeclparam  */
  YYSYMBOL_FdefBlock = 59,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 60,                      /* Fdef  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_paramlist = 62,                 /* paramlist  */
  YYSYMBOL_param = 63,                     /* param  */
  YYSYMBOL_LdeclBlock = 64,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 65,                  /* LDecList  */
  YYSYMBOL_LDecl = 66,                     /* LDecl  */
  YYSYMBOL_IdList = 67,                    /* IdList  */
  YYSYMBOL_Body = 68,                      /* Body  */
  YYSYMBOL_ArgList = 69,                   /* ArgList  */
  YYSYMBOL_returnstmt = 70,                /* returnstmt  */
  YYSYMBOL_MainBlock = 71,                 /* MainBlock  */
  YYSYMBOL_stmtlist = 72,                  /* stmtlist  */
  YYSYMBOL_stmt = 73,                      /* stmt  */
  YYSYMBOL_funcCall = 74,                  /* funcCall  */
  YYSYMBOL_InputStmt = 75,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 76,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 77,                   /* AsgStmt  */
  YYSYMBOL_IfStmt = 78,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 79,                 /* WhileStmt  */
  YYSYMBOL_RepeatStmt = 80,                /* RepeatStmt  */
  YYSYMBOL_doWhileStmt = 81,               /* doWhileStmt  */
  YYSYMBOL_expr = 82,                      /* expr  */
  YYSYMBOL_boolexpr = 83                   /* boolexpr  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   398

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      48,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    43,    44,    47,    48,    55,    56,    59,
      62,    63,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    78,    79,    80,    83,    86,    87,    90,    90,
      93,    94,    95,    97,   100,   101,   104,   105,   107,   110,
     111,   114,   117,   118,   121,   123,   126,   127,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   143,
     144,   146,   147,   148,   150,   152,   153,   154,   155,   158,
     159,   162,   165,   167,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   186,   187,
     188,   189,   190,   191,   192,   193,   194
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
  "UNTILK", "DECL", "ENDDECL", "OR", "AND", "MAINK", "ID", "NUM",
  "STRING_LITERAL", "'['", "']'", "'('", "')'", "$accept", "program",
  "GDeclBlock", "GDecList", "GDecL", "Type", "GVarList",
  "funcdeclparamlist", "funcdeclparam", "FdefBlock", "Fdef", "$@1",
  "paramlist", "param", "LdeclBlock", "LDecList", "LDecl", "IdList",
  "Body", "ArgList", "returnstmt", "MainBlock", "stmtlist", "stmt",
  "funcCall", "InputStmt", "OutputStmt", "AsgStmt", "IfStmt", "WhileStmt",
  "RepeatStmt", "doWhileStmt", "expr", "boolexpr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-98)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      43,   -19,   -10,    79,    14,   -98,    41,   -98,   -98,   -98,
      78,   -98,    29,   -98,   -19,    48,    14,   -98,   -98,    83,
     -98,   -98,    85,    96,   106,   102,   -98,   -98,   123,   -98,
     119,    84,   -98,    33,    84,   137,   140,   153,    28,   -98,
     157,   166,   175,    44,   -98,   113,   200,   184,   -98,    84,
     -98,   -98,   180,    84,   -98,    84,   -98,   -98,   186,   147,
     -98,   323,   177,   191,   -98,   206,    54,   -98,   222,   -98,
     130,   -98,   -98,   214,   210,   216,   221,   226,   323,   183,
     260,   271,   323,    13,   289,   237,   -98,   297,   -98,   -98,
     -98,   -98,   -98,   -98,   -98,   -98,   266,   273,   -98,   137,
     -98,   274,   309,   277,   183,   189,   189,   341,   278,   281,
     254,   -98,   -98,   183,   -98,   201,   -98,   -98,   255,   183,
     183,     5,   -98,   -98,   -98,   -98,   -98,   293,   200,   -98,
     183,   152,     9,   189,   375,   -22,   105,   290,   -98,   -98,
     183,   108,   183,   183,   183,   183,   183,   292,   187,   115,
     -98,    73,   201,   296,   306,   246,   183,   332,   335,    94,
     295,   183,   183,   183,   183,   183,   183,   189,   189,   325,
     324,   189,   155,   -98,    -1,    -1,   -98,   -98,   -98,   189,
     -98,    -6,   183,   -98,   -98,   -98,   -98,   164,   -98,   -98,
     -98,   201,   201,   201,   201,   201,   201,   319,   -98,   323,
     323,   315,   321,   322,   183,   183,   201,   167,   212,   280,
      46,   183,   351,   272,   168,   183,   358,   323,   -98,   -98,
     -98,   174,   -98,   -98,   364,   178,   -98,   298,   -98,   183,
     333,   -98,   291,   373,   -98,   -98
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,    10,    11,     5,
       0,     8,     0,     1,    10,     0,     0,    27,     3,     0,
       6,     7,     0,    18,     0,     0,    26,     2,     0,    19,
       0,    24,     9,     0,    32,     0,     0,     0,     0,    23,
       0,    12,     0,     0,    31,     0,     0,    17,    25,     0,
      21,    15,     0,    24,    33,     0,    28,    35,     0,     0,
      37,     0,     0,     0,    22,     0,     0,    30,     0,    40,
       0,    34,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    48,    49,
      50,    51,    52,    56,    55,    45,     0,    14,    20,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    80,    82,     0,    87,    44,    53,    54,     0,     0,
       0,     0,    57,    41,    46,    58,    16,     0,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    79,    74,    75,    76,    77,    78,     0,
      65,     0,     0,    60,    13,    29,    68,     0,    61,    64,
      96,    90,    88,    89,    91,    93,    92,    94,    95,     0,
       0,     0,    83,     0,     0,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,    71,
      73,     0,    72,    66,     0,     0,    62,     0,    84,     0,
       0,    69,     0,     0,    67,    63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -98,   -98,   -98,   382,    35,   -98,   340,   336,   -98,
     378,   -98,   -98,   342,   275,   -98,   339,   -98,   267,   -98,
     -98,    12,   -76,   -74,   -61,   -98,   -98,   -98,   -98,   -98,
     -98,   -98,   -78,   -97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    10,    11,    37,    24,    38,    39,    16,
      17,    68,    43,    44,    46,    59,    60,    70,    62,   151,
      84,     5,    85,    86,   114,    88,    89,    90,    91,    92,
      93,    94,   134,   135
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      87,   115,   107,   204,   144,   145,   118,     7,     8,   136,
     108,   124,   142,   143,   144,   145,    18,    87,   167,   168,
     146,    87,   119,     6,    87,   109,   132,   169,    27,     9,
     146,    14,     8,   124,    22,   141,   160,    12,    40,    15,
     205,   148,   149,   152,   124,    12,    87,    49,   110,   111,
     112,    15,   155,   113,   150,   159,   220,    87,   158,   120,
       1,   121,   172,    55,   174,   175,   176,   177,   178,    42,
     197,   198,    23,    49,   201,   200,    41,    50,   187,    13,
      58,     2,   203,   191,   192,   193,   194,   195,   196,    19,
      42,    25,   182,    56,    58,     7,     8,   142,   143,   144,
     145,     7,     8,    98,   206,   161,   162,   163,   164,   165,
     166,   142,   143,   144,   145,   146,    32,    20,   142,   143,
     144,   145,   183,   208,   209,    33,   213,   214,    29,   146,
       7,     8,    28,   221,   124,   124,   146,   225,    87,    87,
     100,   227,    30,   173,    31,   167,   168,    87,    87,   101,
      34,   232,    57,   124,   170,    35,    87,   173,   142,   143,
     144,   145,   181,    36,     7,     8,    87,   142,   143,   144,
     145,   142,   143,   144,   145,    45,   146,   142,   143,   144,
     145,   142,   143,   144,   145,   146,    71,    47,   108,   146,
     142,   143,   144,   145,   108,   146,    48,   180,   156,   146,
      51,   157,   202,   109,   142,   143,   144,   145,   146,   109,
      95,   207,    52,   215,    53,   224,   216,    73,    54,    74,
      75,   228,   146,    61,    65,   230,   110,   111,   112,    69,
      63,   113,   110,   111,   112,    96,    76,   133,   217,   218,
      77,    78,    73,    79,    74,    75,    80,    81,    82,   142,
     143,   144,   145,    97,    99,    83,   186,   102,   103,   123,
      73,    76,    74,    75,   104,    77,    78,   146,    79,   105,
     116,    80,    81,    82,   106,   142,   143,   144,   145,    76,
      83,   117,   223,    77,    78,    73,    79,    74,    75,    80,
      81,    82,   147,   146,   142,   143,   144,   145,    83,   122,
     140,   234,   121,    73,    76,    74,    75,   125,    77,    78,
     219,    79,   146,   126,    80,    81,    82,   129,   130,   127,
     131,   138,    76,    83,   139,   231,    77,    78,    73,    79,
      74,    75,    80,    81,    82,   167,   168,   153,   171,   185,
     179,    83,   188,   184,   190,   189,    73,    76,    74,    75,
     199,    77,    78,   200,    79,   167,   168,    80,    81,    82,
     168,   222,   167,   168,   210,    76,    83,   211,   226,   137,
      78,   212,    79,   229,   128,    80,    81,    82,   142,   143,
     144,   145,   233,   235,    83,    64,   161,   162,   163,   164,
     165,   166,    21,    66,    26,   154,   146,    67,    72
};

static const yytype_uint8 yycheck[] =
{
      61,    79,    78,     9,     5,     6,    82,    17,    18,   106,
       5,    85,     3,     4,     5,     6,     4,    78,    40,    41,
      21,    82,     9,    42,    85,    20,   104,    49,    16,    39,
      21,    17,    18,   107,     5,   113,   133,     2,     5,     4,
      46,   119,   120,   121,   118,    10,   107,    19,    43,    44,
      45,    16,   130,    48,    49,   133,    10,   118,    49,    46,
      17,    48,   140,    19,   142,   143,   144,   145,   146,    34,
     167,   168,    43,    19,   171,    29,    43,    49,   156,     0,
      45,    38,   179,   161,   162,   163,   164,   165,   166,    48,
      55,    43,    19,    49,    59,    17,    18,     3,     4,     5,
       6,    17,    18,    49,   182,    11,    12,    13,    14,    15,
      16,     3,     4,     5,     6,    21,    10,    39,     3,     4,
       5,     6,    49,   199,   200,    19,   204,   205,    43,    21,
      17,    18,    49,   211,   208,   209,    21,   215,   199,   200,
      10,   217,    46,    49,    48,    40,    41,   208,   209,    19,
      48,   229,    39,   227,    49,    32,   217,    49,     3,     4,
       5,     6,    47,    44,    17,    18,   227,     3,     4,     5,
       6,     3,     4,     5,     6,    38,    21,     3,     4,     5,
       6,     3,     4,     5,     6,    21,    39,    47,     5,    21,
       3,     4,     5,     6,     5,    21,    43,    10,    46,    21,
      43,    49,    47,    20,     3,     4,     5,     6,    21,    20,
      33,    47,    46,    46,    48,    47,    49,     5,    43,     7,
       8,    47,    21,    23,    44,    47,    43,    44,    45,    43,
      46,    48,    43,    44,    45,    44,    24,    48,    26,    27,
      28,    29,     5,    31,     7,     8,    34,    35,    36,     3,
       4,     5,     6,    47,    32,    43,    10,    43,    48,    22,
       5,    24,     7,     8,    48,    28,    29,    21,    31,    48,
      10,    34,    35,    36,    48,     3,     4,     5,     6,    24,
      43,    10,    10,    28,    29,     5,    31,     7,     8,    34,
      35,    36,    37,    21,     3,     4,     5,     6,    43,    10,
      46,    10,    48,     5,    24,     7,     8,    10,    28,    29,
      30,    31,    21,    47,    34,    35,    36,    43,     9,    46,
      43,    43,    24,    43,    43,    27,    28,    29,     5,    31,
       7,     8,    34,    35,    36,    40,    41,    44,    48,    33,
      48,    43,    10,    47,    49,    10,     5,    24,     7,     8,
      25,    28,    29,    29,    31,    40,    41,    34,    35,    36,
      41,    10,    40,    41,    49,    24,    43,    46,    10,    28,
      29,    49,    31,     9,    99,    34,    35,    36,     3,     4,
       5,     6,    49,    10,    43,    49,    11,    12,    13,    14,
      15,    16,    10,    53,    16,   128,    21,    55,    59
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    38,    51,    52,    71,    42,    17,    18,    39,
      53,    54,    55,     0,    17,    55,    59,    60,    71,    48,
      39,    54,     5,    43,    56,    43,    60,    71,    49,    43,
      46,    48,    10,    19,    48,    32,    44,    55,    57,    58,
       5,    43,    55,    62,    63,    38,    64,    47,    43,    19,
      49,    43,    46,    48,    43,    19,    49,    39,    55,    65,
      66,    23,    68,    46,    58,    44,    57,    63,    61,    43,
      67,    39,    66,     5,     7,     8,    24,    28,    29,    31,
      34,    35,    36,    43,    70,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    33,    44,    47,    49,    32,
      10,    19,    43,    48,    48,    48,    48,    72,     5,    20,
      43,    44,    45,    48,    74,    82,    10,    10,    72,     9,
      46,    48,    10,    22,    73,    10,    47,    46,    64,    43,
       9,    43,    82,    48,    82,    83,    83,    28,    43,    43,
      46,    82,     3,     4,     5,     6,    21,    37,    82,    82,
      49,    69,    82,    44,    68,    82,    46,    49,    49,    82,
      83,    11,    12,    13,    14,    15,    16,    40,    41,    49,
      49,    48,    82,    49,    82,    82,    82,    82,    82,    48,
      10,    47,    19,    49,    47,    33,    10,    82,    10,    10,
      49,    82,    82,    82,    82,    82,    82,    83,    83,    25,
      29,    83,    47,    83,     9,    46,    82,    47,    72,    72,
      49,    46,    49,    82,    82,    46,    49,    26,    27,    30,
      10,    82,    10,    10,    47,    82,    10,    72,    47,     9,
      47,    27,    82,    49,    10,    10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    51,    52,    52,    53,    53,    54,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    57,    58,    59,    59,    61,    60,
      62,    62,    62,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    69,    69,    70,    71,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    75,    76,    77,    77,    77,    77,    78,
      78,    79,    80,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     1,     2,     3,     2,     1,     3,
       1,     1,     3,     9,     6,     4,     7,     4,     1,     2,
       6,     4,     3,     1,     0,     2,     2,     1,     0,    10,
       3,     1,     0,     2,     3,     2,     2,     1,     3,     3,
       1,     3,     3,     1,     2,     8,     2,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     2,     2,     3,
       4,     5,     8,    11,     5,     4,     7,    10,     5,     9,
       7,     7,     7,     7,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     4,     7,     2,     2,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3
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
#line 37 "ex1.y"
                                                {
				//$$=createConnect($2,$3);
				//generate($3);
				printf("Done!\n");
				exit(0);
			}
#line 1483 "y.tab.c"
    break;

  case 3: /* program: GDeclBlock MainBlock  */
#line 43 "ex1.y"
                                                {printf("Done!");(yyval.node)=NULL;}
#line 1489 "y.tab.c"
    break;

  case 5: /* GDeclBlock: DECL ENDDECL  */
#line 47 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1495 "y.tab.c"
    break;

  case 6: /* GDeclBlock: DECL GDecList ENDDECL  */
#line 48 "ex1.y"
                                        {
			addToST((yyvsp[-1].node));
			printSymbolTable();
			(yyval.node)=(yyvsp[-1].node);
		}
#line 1505 "y.tab.c"
    break;

  case 7: /* GDecList: GDecList GDecL  */
#line 55 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1511 "y.tab.c"
    break;

  case 8: /* GDecList: GDecL  */
#line 56 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1517 "y.tab.c"
    break;

  case 9: /* GDecL: Type GVarList SEMICOLON  */
#line 59 "ex1.y"
                                {(yyval.node)=createDeclaration((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1523 "y.tab.c"
    break;

  case 10: /* Type: INTT  */
#line 62 "ex1.y"
                {(yyval.node)=createType(INT);}
#line 1529 "y.tab.c"
    break;

  case 11: /* Type: STRINGT  */
#line 63 "ex1.y"
                        {(yyval.node)=createType(STRING);}
#line 1535 "y.tab.c"
    break;

  case 12: /* GVarList: GVarList COMM ID  */
#line 66 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1541 "y.tab.c"
    break;

  case 13: /* GVarList: GVarList COMM ID '[' NUM ']' '[' NUM ']'  */
#line 67 "ex1.y"
                                                                {(yyval.node)=createArray((yyvsp[-8].node),(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1547 "y.tab.c"
    break;

  case 14: /* GVarList: GVarList COMM ID '[' NUM ']'  */
#line 68 "ex1.y"
                                                {(yyval.node)=createArray((yyvsp[-5].node),(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1553 "y.tab.c"
    break;

  case 15: /* GVarList: GVarList COMM MUL ID  */
#line 69 "ex1.y"
                                        {(yyval.node)=createConnect((yyvsp[-3].node),createPointer((yyvsp[0].node)));}
#line 1559 "y.tab.c"
    break;

  case 16: /* GVarList: ID '[' NUM ']' '[' NUM ']'  */
#line 70 "ex1.y"
                                                {(yyval.node)=createArray(NULL,(yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1565 "y.tab.c"
    break;

  case 17: /* GVarList: ID '[' NUM ']'  */
#line 71 "ex1.y"
                                        {(yyval.node)=createArray(NULL,(yyvsp[-3].node),(yyvsp[-1].node));}
#line 1571 "y.tab.c"
    break;

  case 18: /* GVarList: ID  */
#line 72 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1577 "y.tab.c"
    break;

  case 19: /* GVarList: MUL ID  */
#line 73 "ex1.y"
                        {(yyval.node)=createPointer((yyvsp[0].node));}
#line 1583 "y.tab.c"
    break;

  case 20: /* GVarList: GVarList COMM ID '(' funcdeclparamlist ')'  */
#line 74 "ex1.y"
                                                                {(yyval.node)=createConnect((yyvsp[-5].node),createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node)));}
#line 1589 "y.tab.c"
    break;

  case 21: /* GVarList: ID '(' funcdeclparamlist ')'  */
#line 75 "ex1.y"
                                                {(yyval.node)=createFuncDecl((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1595 "y.tab.c"
    break;

  case 22: /* funcdeclparamlist: funcdeclparamlist COMM funcdeclparam  */
#line 78 "ex1.y"
                                                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1601 "y.tab.c"
    break;

  case 23: /* funcdeclparamlist: funcdeclparam  */
#line 79 "ex1.y"
                                                {(yyval.node)=(yyvsp[0].node);}
#line 1607 "y.tab.c"
    break;

  case 24: /* funcdeclparamlist: %empty  */
#line 80 "ex1.y"
                                        {(yyval.node)=NULL;}
#line 1613 "y.tab.c"
    break;

  case 25: /* funcdeclparam: Type ID  */
#line 83 "ex1.y"
                        {(yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),false);}
#line 1619 "y.tab.c"
    break;

  case 26: /* FdefBlock: FdefBlock Fdef  */
#line 86 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1625 "y.tab.c"
    break;

  case 27: /* FdefBlock: Fdef  */
#line 87 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1631 "y.tab.c"
    break;

  case 28: /* $@1: %empty  */
#line 90 "ex1.y"
                                {currfunc=Lookup((yyvsp[-3].node)->varname);}
#line 1637 "y.tab.c"
    break;

  case 29: /* Fdef: Type ID '(' paramlist ')' $@1 LBRACE LdeclBlock Body RBRACE  */
#line 90 "ex1.y"
                                                                                                        {(yyval.node)=createFuncDef((yyvsp[-9].node),(yyvsp[-8].node),(yyvsp[-6].node),(yyvsp[-2].node),(yyvsp[-1].node));}
#line 1643 "y.tab.c"
    break;

  case 30: /* paramlist: paramlist COMM param  */
#line 93 "ex1.y"
                                        { (yyval.node) = createConnect((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1649 "y.tab.c"
    break;

  case 31: /* paramlist: param  */
#line 94 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1655 "y.tab.c"
    break;

  case 32: /* paramlist: %empty  */
#line 95 "ex1.y"
                                {(yyval.node)=NULL;}
#line 1661 "y.tab.c"
    break;

  case 33: /* param: Type ID  */
#line 97 "ex1.y"
                {(yyval.node)=createparam((yyvsp[-1].node),(yyvsp[0].node),true);}
#line 1667 "y.tab.c"
    break;

  case 34: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 100 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1673 "y.tab.c"
    break;

  case 35: /* LdeclBlock: DECL ENDDECL  */
#line 101 "ex1.y"
                                        {(yyval.node)=NULL;}
#line 1679 "y.tab.c"
    break;

  case 36: /* LDecList: LDecList LDecl  */
#line 104 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1685 "y.tab.c"
    break;

  case 37: /* LDecList: LDecl  */
#line 105 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1691 "y.tab.c"
    break;

  case 38: /* LDecl: Type IdList SEMICOLON  */
#line 107 "ex1.y"
                                {(yyval.node)=createLocalDecl((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1697 "y.tab.c"
    break;

  case 39: /* IdList: IdList COMM ID  */
#line 110 "ex1.y"
                        {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1703 "y.tab.c"
    break;

  case 40: /* IdList: ID  */
#line 111 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1709 "y.tab.c"
    break;

  case 41: /* Body: BEGINK stmtlist ENDK  */
#line 114 "ex1.y"
                                {(yyval.node)=(yyvsp[-1].node);}
#line 1715 "y.tab.c"
    break;

  case 42: /* ArgList: ArgList COMM expr  */
#line 117 "ex1.y"
                                {(yyval.node)=createConnect((yyvsp[-2].node),(yyvsp[0].node));}
#line 1721 "y.tab.c"
    break;

  case 43: /* ArgList: expr  */
#line 118 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1727 "y.tab.c"
    break;

  case 44: /* returnstmt: RETURN_K expr  */
#line 121 "ex1.y"
                                {(yyval.node)=createReturn((yyvsp[0].node));}
#line 1733 "y.tab.c"
    break;

  case 45: /* MainBlock: INTT MAINK '(' ')' LBRACE LdeclBlock Body RBRACE  */
#line 123 "ex1.y"
                                                            {(yyval.node)=createMain((yyvsp[-2].node),(yyvsp[-1].node));}
#line 1739 "y.tab.c"
    break;

  case 46: /* stmtlist: stmtlist stmt  */
#line 126 "ex1.y"
                        { (yyval.node)=createConnect((yyvsp[-1].node),(yyvsp[0].node));}
#line 1745 "y.tab.c"
    break;

  case 47: /* stmtlist: stmt  */
#line 127 "ex1.y"
                              {(yyval.node)=(yyvsp[0].node);}
#line 1751 "y.tab.c"
    break;

  case 48: /* stmt: InputStmt  */
#line 130 "ex1.y"
                  {(yyval.node)=(yyvsp[0].node);}
#line 1757 "y.tab.c"
    break;

  case 49: /* stmt: OutputStmt  */
#line 131 "ex1.y"
                             {(yyval.node)=(yyvsp[0].node);}
#line 1763 "y.tab.c"
    break;

  case 50: /* stmt: AsgStmt  */
#line 132 "ex1.y"
                          {(yyval.node)=(yyvsp[0].node);}
#line 1769 "y.tab.c"
    break;

  case 51: /* stmt: IfStmt  */
#line 133 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1775 "y.tab.c"
    break;

  case 52: /* stmt: WhileStmt  */
#line 134 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1781 "y.tab.c"
    break;

  case 53: /* stmt: BREAKK SEMICOLON  */
#line 135 "ex1.y"
                                        {(yyval.node)=createBreak();}
#line 1787 "y.tab.c"
    break;

  case 54: /* stmt: CONTINUEK SEMICOLON  */
#line 136 "ex1.y"
                                        {(yyval.node)=createContinue();}
#line 1793 "y.tab.c"
    break;

  case 55: /* stmt: doWhileStmt  */
#line 137 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1799 "y.tab.c"
    break;

  case 56: /* stmt: RepeatStmt  */
#line 138 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1805 "y.tab.c"
    break;

  case 57: /* stmt: returnstmt SEMICOLON  */
#line 139 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1811 "y.tab.c"
    break;

  case 58: /* stmt: funcCall SEMICOLON  */
#line 140 "ex1.y"
                                        {(yyval.node)=(yyvsp[-1].node);}
#line 1817 "y.tab.c"
    break;

  case 59: /* funcCall: ID '(' ')'  */
#line 143 "ex1.y"
                        {(yyval.node)=createFuncCall((yyvsp[-2].node),NULL);}
#line 1823 "y.tab.c"
    break;

  case 60: /* funcCall: ID '(' ArgList ')'  */
#line 144 "ex1.y"
                                        {(yyval.node)=createFuncCall((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1829 "y.tab.c"
    break;

  case 61: /* InputStmt: READ '(' ID ')' SEMICOLON  */
#line 146 "ex1.y"
                                          {(yyval.node)=createRead((yyvsp[-2].node));}
#line 1835 "y.tab.c"
    break;

  case 62: /* InputStmt: READ '(' ID '[' expr ']' ')' SEMICOLON  */
#line 147 "ex1.y"
                                                                {(yyval.node)=createReadArr((yyvsp[-5].node),(yyvsp[-3].node));}
#line 1841 "y.tab.c"
    break;

  case 63: /* InputStmt: READ '(' ID '[' expr ']' '[' expr ']' ')' SEMICOLON  */
#line 148 "ex1.y"
                                                                        {(yyval.node)=createReadArr((yyvsp[-8].node),createConnect((yyvsp[-6].node),(yyvsp[-3].node)));}
#line 1847 "y.tab.c"
    break;

  case 64: /* OutputStmt: WRITE '(' expr ')' SEMICOLON  */
#line 150 "ex1.y"
                                             {(yyval.node)=createWrite((yyvsp[-2].node));}
#line 1853 "y.tab.c"
    break;

  case 65: /* AsgStmt: ID ASSIGN expr SEMICOLON  */
#line 152 "ex1.y"
                                 {(yyval.node)=createAssign((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1859 "y.tab.c"
    break;

  case 66: /* AsgStmt: ID '[' expr ']' ASSIGN expr SEMICOLON  */
#line 153 "ex1.y"
                                                        {(yyval.node)=createArrAssign((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-1].node));}
#line 1865 "y.tab.c"
    break;

  case 67: /* AsgStmt: ID '[' expr ']' '[' expr ']' ASSIGN expr SEMICOLON  */
#line 154 "ex1.y"
                                                                    {(yyval.node)=createArrAssign((yyvsp[-9].node),createConnect((yyvsp[-7].node),(yyvsp[-4].node)),(yyvsp[-1].node));}
#line 1871 "y.tab.c"
    break;

  case 68: /* AsgStmt: MUL ID ASSIGN expr SEMICOLON  */
#line 155 "ex1.y"
                                                {(yyval.node)=createAssignToDeref((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1877 "y.tab.c"
    break;

  case 69: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ELSEK stmtlist ENDIFK  */
#line 158 "ex1.y"
                                                                        {(yyval.node)=createIfElseNode((yyvsp[-6].node), (yyvsp[-3].node), (yyvsp[-1].node));}
#line 1883 "y.tab.c"
    break;

  case 70: /* IfStmt: IFK '(' boolexpr ')' THENK stmtlist ENDIFK  */
#line 159 "ex1.y"
                                                                {(yyval.node)=createIfNode((yyvsp[-4].node),(yyvsp[-1].node));}
#line 1889 "y.tab.c"
    break;

  case 71: /* WhileStmt: WHILEK '(' boolexpr ')' DOK stmtlist ENDWHILEK  */
#line 162 "ex1.y"
                                                                {(yyval.node)=createWhile((yyvsp[-4].node),(yyvsp[-1].node));}
#line 1895 "y.tab.c"
    break;

  case 72: /* RepeatStmt: REPEATK stmtlist UNTILK '(' boolexpr ')' SEMICOLON  */
#line 165 "ex1.y"
                                                                   {(yyval.node)=createRepeat((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1901 "y.tab.c"
    break;

  case 73: /* doWhileStmt: DOK stmtlist WHILEK '(' boolexpr ')' SEMICOLON  */
#line 167 "ex1.y"
                                                                {(yyval.node)=createDoWhile((yyvsp[-5].node),(yyvsp[-2].node));}
#line 1907 "y.tab.c"
    break;

  case 74: /* expr: expr PLUS expr  */
#line 170 "ex1.y"
                                {(yyval.node) = makeOperatorNode('+',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1913 "y.tab.c"
    break;

  case 75: /* expr: expr MINUS expr  */
#line 171 "ex1.y"
                                {(yyval.node) = makeOperatorNode('-',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1919 "y.tab.c"
    break;

  case 76: /* expr: expr MUL expr  */
#line 172 "ex1.y"
                                {(yyval.node) = makeOperatorNode('*',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1925 "y.tab.c"
    break;

  case 77: /* expr: expr DIV expr  */
#line 173 "ex1.y"
                                {(yyval.node) = makeOperatorNode('/',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1931 "y.tab.c"
    break;

  case 78: /* expr: expr MOD expr  */
#line 174 "ex1.y"
                                {(yyval.node) = makeOperatorNode('%',(yyvsp[-2].node),(yyvsp[0].node));}
#line 1937 "y.tab.c"
    break;

  case 79: /* expr: '(' expr ')'  */
#line 175 "ex1.y"
                                {(yyval.node) = (yyvsp[-1].node);}
#line 1943 "y.tab.c"
    break;

  case 80: /* expr: NUM  */
#line 176 "ex1.y"
                                {(yyval.node) = (yyvsp[0].node);}
#line 1949 "y.tab.c"
    break;

  case 81: /* expr: ID  */
#line 177 "ex1.y"
                                {(yyval.node)=createVariableUsageNode((yyvsp[0].node)->varname);}
#line 1955 "y.tab.c"
    break;

  case 82: /* expr: STRING_LITERAL  */
#line 178 "ex1.y"
                                {(yyval.node)=(yyvsp[0].node);}
#line 1961 "y.tab.c"
    break;

  case 83: /* expr: ID '[' expr ']'  */
#line 179 "ex1.y"
                                {(yyval.node)=createArrayAccess((yyvsp[-3].node),(yyvsp[-1].node));}
#line 1967 "y.tab.c"
    break;

  case 84: /* expr: ID '[' expr ']' '[' expr ']'  */
#line 180 "ex1.y"
                                        {(yyval.node)=createArrayAccess((yyvsp[-6].node),createConnect((yyvsp[-4].node),(yyvsp[-1].node)));}
#line 1973 "y.tab.c"
    break;

  case 85: /* expr: MUL ID  */
#line 181 "ex1.y"
                        {(yyval.node)=createDerefer((yyvsp[0].node));}
#line 1979 "y.tab.c"
    break;

  case 86: /* expr: AMP ID  */
#line 182 "ex1.y"
                        {(yyval.node)=createAddr((yyvsp[0].node));}
#line 1985 "y.tab.c"
    break;

  case 87: /* expr: funcCall  */
#line 183 "ex1.y"
                        {(yyval.node)=(yyvsp[0].node);}
#line 1991 "y.tab.c"
    break;

  case 88: /* boolexpr: expr GE expr  */
#line 186 "ex1.y"
                        {(yyval.node)=createCondition(Nge,(yyvsp[-2].node),(yyvsp[0].node));}
#line 1997 "y.tab.c"
    break;

  case 89: /* boolexpr: expr LE expr  */
#line 187 "ex1.y"
                        {(yyval.node)=createCondition(Nle,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2003 "y.tab.c"
    break;

  case 90: /* boolexpr: expr GT expr  */
#line 188 "ex1.y"
                        {(yyval.node)=createCondition(Ngt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2009 "y.tab.c"
    break;

  case 91: /* boolexpr: expr LT expr  */
#line 189 "ex1.y"
                        {(yyval.node)=createCondition(Nlt,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2015 "y.tab.c"
    break;

  case 92: /* boolexpr: expr NE expr  */
#line 190 "ex1.y"
                        {(yyval.node)=createCondition(Nne,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2021 "y.tab.c"
    break;

  case 93: /* boolexpr: expr EQ expr  */
#line 191 "ex1.y"
                        {(yyval.node)=createCondition(Neq,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2027 "y.tab.c"
    break;

  case 94: /* boolexpr: boolexpr OR boolexpr  */
#line 192 "ex1.y"
                                {(yyval.node)=createCondition(Nor,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2033 "y.tab.c"
    break;

  case 95: /* boolexpr: boolexpr AND boolexpr  */
#line 193 "ex1.y"
                                        {(yyval.node)=createCondition(Nand,(yyvsp[-2].node),(yyvsp[0].node));}
#line 2039 "y.tab.c"
    break;

  case 96: /* boolexpr: '(' boolexpr ')'  */
#line 194 "ex1.y"
                                {(yyval.node)=(yyvsp[-1].node);}
#line 2045 "y.tab.c"
    break;


#line 2049 "y.tab.c"

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

#line 197 "ex1.y"


int yyerror(char const *s)
{
	extern int linecount;
    printf("yyerror %s at line %d near token %s\n",s,linecount,yytext);
}

int main(void) {
	FILE *s=fopen("input.txt","r");
	target=fopen("ans.xsm","w");
	yyin=s;
	generateHeader();
	fprintf(target, "CALL Main\n");
	yyparse();
	
	return 0;
}
