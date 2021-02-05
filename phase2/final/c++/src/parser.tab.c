/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>

extern char* yytext;

extern int yylex();
extern int yyparse();
extern FILE *yyin, *yyout;
void yyerror (char *s);
int yylex();

#line 85 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Void = 3,                       /* Void  */
  YYSYMBOL_Int = 4,                        /* Int  */
  YYSYMBOL_Double = 5,                     /* Double  */
  YYSYMBOL_Bool = 6,                       /* Bool  */
  YYSYMBOL_String = 7,                     /* String  */
  YYSYMBOL_Class = 8,                      /* Class  */
  YYSYMBOL_Interface = 9,                  /* Interface  */
  YYSYMBOL_Null = 10,                      /* Null  */
  YYSYMBOL_This = 11,                      /* This  */
  YYSYMBOL_Extends = 12,                   /* Extends  */
  YYSYMBOL_Implements = 13,                /* Implements  */
  YYSYMBOL_For = 14,                       /* For  */
  YYSYMBOL_While = 15,                     /* While  */
  YYSYMBOL_If = 16,                        /* If  */
  YYSYMBOL_Else = 17,                      /* Else  */
  YYSYMBOL_Return = 18,                    /* Return  */
  YYSYMBOL_Break = 19,                     /* Break  */
  YYSYMBOL_Continue = 20,                  /* Continue  */
  YYSYMBOL_New = 21,                       /* New  */
  YYSYMBOL_NewArray = 22,                  /* NewArray  */
  YYSYMBOL_Print = 23,                     /* Print  */
  YYSYMBOL_ReadInteger = 24,               /* ReadInteger  */
  YYSYMBOL_ReadLine = 25,                  /* ReadLine  */
  YYSYMBOL_Dtoi = 26,                      /* Dtoi  */
  YYSYMBOL_Itod = 27,                      /* Itod  */
  YYSYMBOL_Btoi = 28,                      /* Btoi  */
  YYSYMBOL_Itob = 29,                      /* Itob  */
  YYSYMBOL_Private = 30,                   /* Private  */
  YYSYMBOL_Protected = 31,                 /* Protected  */
  YYSYMBOL_Public = 32,                    /* Public  */
  YYSYMBOL_Add = 33,                       /* Add  */
  YYSYMBOL_Sub = 34,                       /* Sub  */
  YYSYMBOL_Mult = 35,                      /* Mult  */
  YYSYMBOL_Div = 36,                       /* Div  */
  YYSYMBOL_Perc = 37,                      /* Perc  */
  YYSYMBOL_Lt = 38,                        /* Lt  */
  YYSYMBOL_Le = 39,                        /* Le  */
  YYSYMBOL_Gt = 40,                        /* Gt  */
  YYSYMBOL_Ge = 41,                        /* Ge  */
  YYSYMBOL_Assign = 42,                    /* Assign  */
  YYSYMBOL_Eq = 43,                        /* Eq  */
  YYSYMBOL_Neq = 44,                       /* Neq  */
  YYSYMBOL_Or = 45,                        /* Or  */
  YYSYMBOL_And = 46,                       /* And  */
  YYSYMBOL_Not = 47,                       /* Not  */
  YYSYMBOL_Semicolon = 48,                 /* Semicolon  */
  YYSYMBOL_Comma = 49,                     /* Comma  */
  YYSYMBOL_Dot = 50,                       /* Dot  */
  YYSYMBOL_Obrac = 51,                     /* Obrac  */
  YYSYMBOL_Cbrac = 52,                     /* Cbrac  */
  YYSYMBOL_Opar = 53,                      /* Opar  */
  YYSYMBOL_Cpar = 54,                      /* Cpar  */
  YYSYMBOL_Ocurl = 55,                     /* Ocurl  */
  YYSYMBOL_Ccurl = 56,                     /* Ccurl  */
  YYSYMBOL_IntConst = 57,                  /* IntConst  */
  YYSYMBOL_DoubleConst = 58,               /* DoubleConst  */
  YYSYMBOL_StringConst = 59,               /* StringConst  */
  YYSYMBOL_BoolConst = 60,                 /* BoolConst  */
  YYSYMBOL_Ident = 61,                     /* Ident  */
  YYSYMBOL_Usub = 62,                      /* Usub  */
  YYSYMBOL_YYACCEPT = 63,                  /* $accept  */
  YYSYMBOL_Program = 64,                   /* Program  */
  YYSYMBOL_Decl = 65,                      /* Decl  */
  YYSYMBOL_DeclPlus = 66,                  /* DeclPlus  */
  YYSYMBOL_VariableDecl = 67,              /* VariableDecl  */
  YYSYMBOL_VariableDeclPlus = 68,          /* VariableDeclPlus  */
  YYSYMBOL_Variable = 69,                  /* Variable  */
  YYSYMBOL_VariablePlus = 70,              /* VariablePlus  */
  YYSYMBOL_Type = 71,                      /* Type  */
  YYSYMBOL_FunctionDecl = 72,              /* FunctionDecl  */
  YYSYMBOL_Formals = 73,                   /* Formals  */
  YYSYMBOL_ClassDeclFirst = 74,            /* ClassDeclFirst  */
  YYSYMBOL_IdentPlus = 75,                 /* IdentPlus  */
  YYSYMBOL_ClassDeclSecond = 76,           /* ClassDeclSecond  */
  YYSYMBOL_ClassDecl = 77,                 /* ClassDecl  */
  YYSYMBOL_Field = 78,                     /* Field  */
  YYSYMBOL_FieldStar = 79,                 /* FieldStar  */
  YYSYMBOL_AccessMode = 80,                /* AccessMode  */
  YYSYMBOL_InterfaceDecl = 81,             /* InterfaceDecl  */
  YYSYMBOL_Prototype = 82,                 /* Prototype  */
  YYSYMBOL_PrototypeStar = 83,             /* PrototypeStar  */
  YYSYMBOL_StmtBlock = 84,                 /* StmtBlock  */
  YYSYMBOL_Stmt = 85,                      /* Stmt  */
  YYSYMBOL_StmtPlus = 86,                  /* StmtPlus  */
  YYSYMBOL_IfStmtFirst = 87,               /* IfStmtFirst  */
  YYSYMBOL_IfStmt = 88,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 89,                 /* WhileStmt  */
  YYSYMBOL_ForStmt = 90,                   /* ForStmt  */
  YYSYMBOL_ReturnStmt = 91,                /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 92,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 93,              /* ContinueStmt  */
  YYSYMBOL_PrintStmt = 94,                 /* PrintStmt  */
  YYSYMBOL_Expr = 95,                      /* Expr  */
  YYSYMBOL_ExprPlus = 96,                  /* ExprPlus  */
  YYSYMBOL_LValue = 97,                    /* LValue  */
  YYSYMBOL_Call = 98,                      /* Call  */
  YYSYMBOL_Actuals = 99,                   /* Actuals  */
  YYSYMBOL_Constant = 100                  /* Constant  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1008

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   317


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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    96,    97,    98,    99,   103,   104,   108,
     112,   112,   116,   120,   121,   125,   126,   127,   128,   129,
     130,   134,   135,   139,   139,   143,   143,   147,   148,   152,
     152,   156,   160,   161,   165,   165,   169,   170,   171,   171,
     175,   179,   180,   184,   184,   188,   189,   190,   191,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   208,
     208,   212,   212,   216,   220,   224,   225,   226,   227,   231,
     235,   239,   243,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   258,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   279,   280,   284,   285,   286,   290,   291,   295,
     295,   299,   300,   301,   302,   303
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
  "\"end of file\"", "error", "\"invalid token\"", "Void", "Int",
  "Double", "Bool", "String", "Class", "Interface", "Null", "This",
  "Extends", "Implements", "For", "While", "If", "Else", "Return", "Break",
  "Continue", "New", "NewArray", "Print", "ReadInteger", "ReadLine",
  "Dtoi", "Itod", "Btoi", "Itob", "Private", "Protected", "Public", "Add",
  "Sub", "Mult", "Div", "Perc", "Lt", "Le", "Gt", "Ge", "Assign", "Eq",
  "Neq", "Or", "And", "Not", "Semicolon", "Comma", "Dot", "Obrac", "Cbrac",
  "Opar", "Cpar", "Ocurl", "Ccurl", "IntConst", "DoubleConst",
  "StringConst", "BoolConst", "Ident", "Usub", "$accept", "Program",
  "Decl", "DeclPlus", "VariableDecl", "VariableDeclPlus", "Variable",
  "VariablePlus", "Type", "FunctionDecl", "Formals", "ClassDeclFirst",
  "IdentPlus", "ClassDeclSecond", "ClassDecl", "Field", "FieldStar",
  "AccessMode", "InterfaceDecl", "Prototype", "PrototypeStar", "StmtBlock",
  "Stmt", "StmtPlus", "IfStmtFirst", "IfStmt", "WhileStmt", "ForStmt",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "PrintStmt", "Expr",
  "ExprPlus", "LValue", "Call", "Actuals", "Constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
#endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     107,   -54,   -91,   -91,   -91,   -91,   -48,   -34,   -91,    40,
     -91,   107,   -91,    -2,   -33,   -91,   -91,   -91,   -11,    41,
      -1,   -91,   -91,   -91,     6,    12,   144,     5,    46,   -91,
     -91,   144,   -91,    91,   -32,    39,   -91,    42,    45,    65,
      50,   -91,   -91,   -91,    52,   -91,    56,   -91,    57,   -91,
     -20,   -91,    52,   155,   -91,   -91,   -26,    66,    67,   -91,
     -91,   -91,    69,    70,    71,   615,    77,    80,    68,    79,
      81,    82,    85,    86,    88,    92,    93,   615,   615,   -91,
     615,   -91,   -91,   -91,   -91,   -91,    -6,   -91,   213,   -91,
     -91,   265,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   862,
     102,   -91,   -91,   -91,   -91,   -91,   -91,   -91,    31,   144,
     144,   410,   615,   615,   100,   881,   -91,   -91,   -91,   615,
     615,   101,   103,   615,   615,   615,   615,   214,     1,   644,
     615,   -91,   -91,   317,   -91,   -91,   615,   615,   615,   615,
     615,   615,   615,   615,   615,   615,   615,   615,   615,   -91,
      72,   615,   615,   -91,   -91,   104,   109,   615,   900,   666,
     688,   -91,   620,   957,   451,   -91,   -91,   710,   732,   754,
     776,   -91,   492,   110,   -91,   214,   214,   -18,   -18,   -18,
     957,   -18,   -18,   -18,   -18,   -18,   214,   214,   114,   842,
     -18,   106,   124,   919,   615,   369,   369,   144,   131,   957,
     -91,   -91,   -91,   -91,   -91,   -91,   615,   -91,   -91,   -91,
     533,   938,   -91,   169,    48,   139,   134,   369,   798,   574,
     369,   -91,   -91,   -91,   -91,   -91,   369,   369,   820,   -91,
     -91,   -91,   369,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    15,    16,    17,    18,     0,     0,    19,     0,
       7,     2,     3,     0,     0,     4,     5,     6,     0,    26,
       0,     1,     8,     9,     0,    12,    24,     0,    30,    44,
      20,    24,    13,     0,     0,     0,    25,     0,     0,     0,
       0,    23,    14,    12,     0,    27,    29,    35,     0,    40,
       0,    43,     0,     0,    22,    28,    39,     0,     0,    21,
     115,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,    48,   111,   112,   114,   113,   104,    11,     0,    58,
      60,     0,    51,    52,    53,    57,    54,    55,    56,     0,
      75,    77,    74,    36,    37,    38,    31,    34,     0,    24,
      24,     0,     0,     0,   104,     0,    70,    71,    96,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    93,     0,
     110,    47,    10,     0,    46,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     0,    32,    33,     0,     0,     0,     0,     0,
       0,    69,     0,   102,     0,    94,    95,     0,     0,     0,
       0,    78,     0,     0,    45,    79,    80,    81,    82,    83,
      85,    86,    87,    88,    89,    90,    92,    91,   105,     0,
      73,     0,     0,     0,     0,     0,     0,     0,     0,   103,
      99,    98,   101,   100,   109,   107,   110,   106,    42,    41,
       0,     0,    64,    62,     0,     0,     0,     0,     0,     0,
       0,    63,    97,    72,   108,    68,     0,     0,     0,    61,
      66,    67,     0,    65
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   179,   -91,   -44,   -91,   -23,   -91,     0,    83,
     -19,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -28,   -90,   105,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -63,    74,   -91,   -91,   -14,   -91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    88,    13,    33,    34,    15,
      35,    28,    46,    38,    16,   107,    56,   108,    17,    51,
      39,    89,    90,    91,   221,    92,    93,    94,    95,    96,
      97,    98,    99,   172,   100,   101,   173,   102
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      14,   135,   115,    32,   103,   104,   105,    18,    32,    87,
      42,    14,    40,    19,   127,   128,    54,   129,    24,    24,
     141,   142,   143,   144,    59,   145,   146,    20,    25,    43,
     106,    24,   150,   151,     1,     2,     3,     4,     5,    50,
      21,    58,    26,   135,   132,   -19,    23,   130,   158,   159,
     160,   150,   151,    27,    29,   -19,   162,   163,    30,    37,
     167,   168,   169,   170,   153,    31,    36,   163,    48,     2,
       3,     4,     5,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,    32,    32,   189,   190,
     155,   156,     8,    44,   193,     2,     3,     4,     5,    24,
      47,   199,   222,    45,    52,   212,   213,    53,    14,   199,
       1,     2,     3,     4,     5,     6,     7,    55,    57,   109,
     110,    49,   111,   112,   113,   116,     8,   225,   117,   118,
     229,   211,   119,   188,   120,   121,   230,   231,   122,   123,
      41,   124,   233,   163,   152,   125,   126,   218,     2,     3,
       4,     5,     8,   130,   208,   165,   228,   166,   191,     2,
       3,     4,     5,   192,   205,    60,    61,   206,     8,    62,
      63,    64,   209,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,   215,   220,   223,   224,    77,
      22,   154,   216,   133,   164,     0,     0,   214,     0,     0,
       0,     0,    78,    79,     0,     8,     0,     0,    80,     0,
      53,    81,    82,    83,    84,    85,    86,     2,     3,     4,
       5,     0,     0,    60,    61,     0,     0,    62,    63,    64,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,     0,     0,     0,     0,    77,     0,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,     0,
      78,    79,     0,     0,   150,   151,    80,     0,    53,   131,
      82,    83,    84,    85,    86,    60,    61,     0,     0,    62,
      63,    64,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,     0,     0,    80,     0,
      53,   134,    82,    83,    84,    85,   114,    60,    61,     0,
       0,    62,    63,    64,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,     0,     0,     0,
      80,     0,    53,   174,    82,    83,    84,    85,   114,    60,
      61,     0,     0,    62,    63,    64,     0,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,     0,
       0,     0,     0,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      60,    61,    80,     0,    53,     0,    82,    83,    84,    85,
     114,    68,    69,     0,    71,    72,    73,    74,    75,    76,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,   157,     0,
       0,    60,    61,    80,     0,     0,     0,    82,    83,    84,
      85,   114,    68,    69,     0,    71,    72,    73,    74,    75,
      76,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
     198,     0,    60,    61,    80,     0,     0,     0,    82,    83,
      84,    85,   114,    68,    69,     0,    71,    72,    73,    74,
      75,    76,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,   204,     0,    60,    61,    80,     0,     0,     0,    82,
      83,    84,    85,   114,    68,    69,     0,    71,    72,    73,
      74,    75,    76,     0,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,     0,     0,     0,    60,    61,    80,   217,     0,     0,
      82,    83,    84,    85,   114,    68,    69,     0,    71,    72,
      73,    74,    75,    76,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,     0,    60,    61,    80,   227,     0,
       0,    82,    83,    84,    85,   114,    68,    69,     0,    71,
      72,    73,    74,    75,    76,     0,     0,     0,     0,    77,
       0,     0,     0,   136,   137,   138,   139,   140,   141,   142,
     143,   144,    78,   145,   146,   147,   148,     0,    80,   197,
     150,   151,    82,    83,    84,    85,   114,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
     148,     0,     0,     0,   150,   151,     0,     0,   171,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,   148,     0,     0,     0,   150,   151,     0,     0,
     195,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,   148,     0,     0,     0,   150,   151,
       0,     0,   196,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,   148,     0,     0,     0,
     150,   151,     0,     0,   200,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,   148,     0,
       0,     0,   150,   151,     0,     0,   201,   136,   137,   138,
     139,   140,   141,   142,   143,   144,     0,   145,   146,   147,
     148,     0,     0,     0,   150,   151,     0,     0,   202,   136,
     137,   138,   139,   140,   141,   142,   143,   144,     0,   145,
     146,   147,   148,     0,     0,     0,   150,   151,     0,     0,
     203,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,   148,     0,     0,     0,   150,   151,
       0,     0,   226,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,   148,     0,     0,     0,
     150,   151,     0,     0,   232,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,   148,     0,
       0,     0,   150,   151,   207,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     0,   145,   146,   147,   148,     0,
     149,     0,   150,   151,   136,   137,   138,   139,   140,   141,
     142,   143,   144,     0,   145,   146,   147,   148,     0,   161,
       0,   150,   151,   136,   137,   138,   139,   140,   141,   142,
     143,   144,     0,   145,   146,   147,   148,     0,   194,     0,
     150,   151,   136,   137,   138,   139,   140,   141,   142,   143,
     144,     0,   145,   146,   147,   148,     0,   210,     0,   150,
     151,   136,   137,   138,   139,   140,   141,   142,   143,   144,
       0,   145,   146,   147,   148,     0,   219,     0,   150,   151,
     136,   137,   138,   139,   140,   141,   142,   143,   144,     0,
     145,   146,   147,   148,     0,     0,     0,   150,   151
};

static const yytype_int16 yycheck[] =
{
       0,    91,    65,    26,    30,    31,    32,    61,    31,    53,
      33,    11,    31,    61,    77,    78,    44,    80,    51,    51,
      38,    39,    40,    41,    52,    43,    44,    61,    61,    61,
      56,    51,    50,    51,     3,     4,     5,     6,     7,    39,
       0,    61,    53,   133,    88,    51,    48,    53,   111,   112,
     113,    50,    51,    12,    55,    61,   119,   120,    52,    13,
     123,   124,   125,   126,   108,    53,    61,   130,     3,     4,
       5,     6,     7,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   109,   110,   151,   152,
     109,   110,    61,    54,   157,     4,     5,     6,     7,    51,
      55,   164,    54,    61,    54,   195,   196,    55,   108,   172,
       3,     4,     5,     6,     7,     8,     9,    61,    61,    53,
      53,    56,    53,    53,    53,    48,    61,   217,    48,    61,
     220,   194,    53,    61,    53,    53,   226,   227,    53,    53,
      49,    53,   232,   206,    42,    53,    53,   210,     4,     5,
       6,     7,    61,    53,    48,    54,   219,    54,    54,     4,
       5,     6,     7,    54,    54,    10,    11,    53,    61,    14,
      15,    16,    48,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    54,    17,    48,    54,    34,
      11,   108,   206,    88,   120,    -1,    -1,   197,    -1,    -1,
      -1,    -1,    47,    48,    -1,    61,    -1,    -1,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,     4,     5,     6,
       7,    -1,    -1,    10,    11,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    -1,
      47,    48,    -1,    -1,    50,    51,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    10,    11,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    10,    11,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    10,
      11,    -1,    -1,    14,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      10,    11,    53,    -1,    55,    -1,    57,    58,    59,    60,
      61,    21,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    10,    11,    53,    -1,    -1,    -1,    57,    58,    59,
      60,    61,    21,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,    -1,    10,    11,    53,    -1,    -1,    -1,    57,    58,
      59,    60,    61,    21,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    10,    11,    53,    -1,    -1,    -1,    57,
      58,    59,    60,    61,    21,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    -1,    -1,    10,    11,    53,    54,    -1,    -1,
      57,    58,    59,    60,    61,    21,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    -1,    -1,    -1,    10,    11,    53,    54,    -1,
      -1,    57,    58,    59,    60,    61,    21,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    47,    43,    44,    45,    46,    -1,    53,    49,
      50,    51,    57,    58,    59,    60,    61,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    -1,
      -1,    -1,    50,    51,    -1,    -1,    54,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    -1,    -1,    -1,    50,    51,    -1,    -1,    54,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    -1,    -1,    -1,    50,    51,
      -1,    -1,    54,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    -1,    -1,    -1,
      50,    51,    -1,    -1,    54,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    -1,
      -1,    -1,    50,    51,    52,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    44,    45,    46,    -1,
      48,    -1,    50,    51,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    44,    45,    46,    -1,    48,
      -1,    50,    51,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    -1,    48,    -1,
      50,    51,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    46,    -1,    48,    -1,    50,
      51,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    44,    45,    46,    -1,    48,    -1,    50,    51,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    46,    -1,    -1,    -1,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    61,    64,
      65,    66,    67,    69,    71,    72,    77,    81,    61,    61,
      61,     0,    65,    48,    51,    61,    53,    12,    74,    55,
      52,    53,    69,    70,    71,    73,    61,    13,    76,    83,
      73,    49,    69,    61,    54,    61,    75,    55,     3,    56,
      71,    82,    54,    55,    84,    61,    79,    61,    61,    84,
      10,    11,    14,    15,    16,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    34,    47,    48,
      53,    56,    57,    58,    59,    60,    61,    67,    68,    84,
      85,    86,    88,    89,    90,    91,    92,    93,    94,    95,
      97,    98,   100,    30,    31,    32,    56,    78,    80,    53,
      53,    53,    53,    53,    61,    95,    48,    48,    61,    53,
      53,    53,    53,    53,    53,    53,    53,    95,    95,    95,
      53,    56,    67,    86,    56,    85,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    43,    44,    45,    46,    48,
      50,    51,    42,    67,    72,    73,    73,    48,    95,    95,
      95,    48,    95,    95,    96,    54,    54,    95,    95,    95,
      95,    54,    96,    99,    56,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    61,    95,
      95,    54,    54,    95,    48,    54,    54,    49,    49,    95,
      54,    54,    54,    54,    49,    54,    53,    52,    48,    48,
      48,    95,    85,    85,    71,    54,    99,    54,    95,    48,
      17,    87,    54,    48,    54,    85,    54,    54,    95,    85,
      85,    85,    54,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    66,    66,    67,
      68,    68,    69,    70,    70,    71,    71,    71,    71,    71,
      71,    72,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    77,    78,    78,    79,    79,    80,    80,    80,    80,
      81,    82,    82,    83,    83,    84,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      86,    87,    87,    88,    89,    90,    90,    90,    90,    91,
      92,    93,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       3,     6,     6,     2,     0,     2,     0,     1,     2,     2,
       0,     7,     2,     2,     2,     0,     1,     1,     1,     0,
       5,     6,     6,     2,     0,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     0,     6,     5,     9,     8,     8,     7,     3,
       2,     2,     6,     3,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     2,     6,     4,     4,
       4,     4,     1,     2,     1,     3,     4,     4,     6,     2,
       0,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* Program: DeclPlus  */
#line 92 "parser.y"
                {fprintf(yyout, "OK");}
#line 1487 "parser.tab.c"
    break;


#line 1491 "parser.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 306 "parser.y"
                     /* C code */
void yyerror (char *s) {
    fprintf(yyout, "Syntax Error");
    return;
} 
