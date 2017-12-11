/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parse.y" /* yacc.c:339  */


	#define YYDEBUG 1
	#include <iostream>
	#include <vector>
	#include "includes/ast.h"
	#include "includes/externs.h"

	int yylex (void);
	extern char *yytext;
	void yyerror (const char *);
  	int currentIndex = 0;


#line 81 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    MINUS = 309,
    NAME = 310,
    NEWLINE = 311,
    NOT = 312,
    NOTEQUAL = 313,
    NUMBER = 314,
    OR = 315,
    PASS = 316,
    PERCENT = 317,
    PERCENTEQUAL = 318,
    PLUS = 319,
    PLUSEQUAL = 320,
    PRINT = 321,
    RAISE = 322,
    RBRACE = 323,
    RETURN = 324,
    RIGHTSHIFT = 325,
    RIGHTSHIFTEQUAL = 326,
    RPAR = 327,
    RSQB = 328,
    SEMI = 329,
    SLASH = 330,
    SLASHEQUAL = 331,
    STAR = 332,
    STAREQUAL = 333,
    STRING = 334,
    TILDE = 335,
    TRY = 336,
    VBAREQUAL = 337,
    WHILE = 338,
    WITH = 339,
    YIELD = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "parse.y" /* yacc.c:355  */

  Node *node;
  float fltNumber;
  char *id;
  int simType;

#line 214 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 245 "parse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   850

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  315
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  478

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    53,    56,    57,    60,    61,    64,    65,
      68,    69,    72,    73,    76,    77,    80,    81,    80,    84,
      85,    88,    89,    92,    93,    96,    97,   100,   101,   104,
     105,   108,   109,   112,   113,   116,   117,   120,   121,   124,
     125,   128,   129,   132,   133,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   147,   148,   151,   152,   155,   156,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   173,   175,   178,   179,   182,   183,   186,   187,
     190,   191,   194,   197,   200,   201,   202,   203,   204,   207,
     210,   213,   214,   217,   220,   221,   224,   225,   228,   229,
     232,   233,   236,   239,   242,   243,   246,   247,   248,   251,
     252,   255,   256,   259,   260,   263,   264,   267,   268,   271,
     272,   275,   278,   279,   282,   283,   286,   287,   290,   291,
     292,   293,   294,   295,   296,   297,   300,   301,   304,   305,
     308,   309,   312,   313,   316,   317,   320,   321,   324,   325,
     328,   329,   332,   335,   336,   339,   340,   343,   344,   347,
     348,   351,   352,   355,   356,   359,   360,   363,   364,   367,
     368,   371,   372,   375,   376,   379,   380,   384,   385,   388,
     389,   392,   393,   396,   397,   400,   401,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   417,   418,
     421,   422,   425,   426,   429,   430,   433,   434,   437,   438,
     441,   442,   445,   446,   449,   450,   451,   452,   455,   456,
     459,   460,   461,   464,   465,   488,   489,   492,   493,   494,
     495,   496,   497,   498,   501,   502,   505,   506,   509,   510,
     513,   514,   517,   518,   521,   522,   525,   526,   529,   530,
     533,   534,   535,   538,   539,   542,   543,   546,   547,   548,
     551,   552,   555,   556,   559,   560,   563,   564,   567,   568,
     571,   572,   575,   576,   579,   580,   583,   584,   587,   588,
     591,   592,   595,   596,   599,   602,   603,   606,   607,   610,
     611,   614,   615,   616,   619,   620,   623,   624,   627,   628,
     631,   632,   635,   636,   639,   640,   643,   644,   647,   648,
     651,   652,   655,   656,   659,   660
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "OR", "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL",
  "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL",
  "RPAR", "RSQB", "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL",
  "STRING", "TILDE", "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD",
  "$accept", "start", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "decorator", "opt_arglist", "decorators",
  "decorated", "funcdef", "$@1", "$@2", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "star_COMMA_test", "opt_test",
  "plus_COMMA_test", "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

#define YYPACT_NINF -395

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-395)))

#define YYTABLE_NINF -262

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -395,    54,  -395,   324,  -395,   726,    -4,   726,  -395,    31,
    -395,   770,  -395,   770,   770,  -395,    55,   726,    -4,   107,
     726,    82,   726,  -395,  -395,  -395,   257,  -395,  -395,  -395,
     197,   726,   726,  -395,  -395,   116,   726,   726,   726,  -395,
    -395,   137,  -395,  -395,    18,  -395,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,    64,   151,  -395,   658,   148,   154,   159,    -8,    86,
      19,  -395,   770,  -395,  -395,    96,  -395,    30,  -395,  -395,
     162,  -395,    17,  -395,    41,     7,   148,  -395,    38,   139,
     141,    14,  -395,   170,  -395,   171,    43,   726,   175,    37,
     104,   118,  -395,   157,  -395,   121,  -395,  -395,   158,   122,
    -395,  -395,   726,  -395,  -395,   178,  -395,   573,   184,  -395,
     194,  -395,  -395,  -395,  -395,   146,    51,   186,   257,   257,
    -395,   257,  -395,  -395,  -395,  -395,  -395,   150,  -395,  -395,
     161,  -395,   770,   770,   770,   770,  -395,  -395,   770,  -395,
    -395,   770,  -395,  -395,  -395,  -395,   770,  -395,    92,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,  -395,   179,    82,   726,   156,   138,  -395,  -395,   726,
     573,   726,   201,   726,   726,     5,   172,   198,   202,   573,
      -4,   168,  -395,   726,   169,    60,  -395,   173,  -395,   196,
     726,   770,   216,  -395,  -395,  -395,   216,  -395,  -395,   770,
     216,  -395,  -395,   217,   216,   726,  -395,   191,  -395,   124,
     573,   155,   770,  -395,  -395,   624,   726,    25,   151,  -395,
    -395,  -395,   148,   154,   159,    -8,    86,    19,  -395,   180,
     770,   138,   543,  -395,    82,  -395,  -395,  -395,  -395,  -395,
     165,  -395,    20,  -395,  -395,  -395,   166,   770,   223,   230,
     195,   240,  -395,  -395,  -395,  -395,   200,  -395,  -395,  -395,
    -395,  -395,  -395,   181,   242,   726,   244,   157,   220,   726,
    -395,  -395,   221,  -395,   726,   249,  -395,  -395,   223,   494,
     726,   253,    32,   254,   245,   573,   726,   148,   222,  -395,
    -395,  -395,   726,  -395,  -395,   203,   258,   259,   205,  -395,
     266,  -395,   226,   726,   726,   134,  -395,   267,   270,   148,
     726,  -395,   573,   214,   232,   272,  -395,   147,   274,  -395,
     268,  -395,  -395,    15,  -395,   275,  -395,  -395,   257,   756,
    -395,   726,  -395,  -395,  -395,   415,   136,   573,   278,   261,
     283,   573,   284,  -395,  -395,   233,   289,  -395,  -395,   292,
    -395,   294,   726,  -395,  -395,  -395,   726,  -395,  -395,   243,
    -395,   573,  -395,   290,  -395,  -395,   195,   726,   305,    60,
     269,   726,  -395,    69,   307,   119,   310,  -395,   263,  -395,
    -395,  -395,  -395,  -395,   726,  -395,  -395,   573,   313,  -395,
     573,  -395,   573,  -395,   262,   573,  -395,   677,  -395,   314,
     323,  -395,  -395,   325,  -395,   327,   573,  -395,  -395,   328,
     756,  -395,  -395,  -395,   756,   330,   756,  -395,  -395,  -395,
     756,   331,  -395,  -395,   573,  -395,  -395,  -395,  -395,  -395,
     726,  -395,  -395,   709,  -395,   573,   573,  -395,   726,   120,
    -395,   756,   119,  -395,   756,  -395,  -395,  -395,   726,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,    16,     1,     0,     0,     0,    89,     0,
      90,     0,     3,     0,     0,   315,     0,     0,     0,    26,
     241,   237,   239,   221,   231,     4,     0,   232,    83,   220,
      77,    95,    92,   243,   222,     0,     0,     0,   313,     6,
      13,    16,   135,   133,     0,     5,    39,    44,    45,    46,
      47,    48,    49,    84,    85,    86,    88,    87,    50,   100,
     101,    51,    52,    53,    40,   128,   129,   130,   131,   132,
      75,   178,   179,   181,   184,   185,   198,   200,   202,   204,
     208,   212,     0,   219,   226,   233,   176,    59,   134,    93,
     127,   119,     0,   310,     0,     0,   269,    82,   125,     0,
       0,     0,   123,     0,   117,   102,   112,     0,     0,     0,
      75,     0,   240,    75,   236,     0,   235,   234,    75,     0,
     238,   183,     0,    72,    75,    99,    91,     0,     0,   154,
     156,   312,    12,    15,    14,     0,     0,   271,     0,     0,
     175,     0,   189,   188,   190,   192,   194,   196,   187,   191,
       0,   193,     0,     0,     0,     0,   206,   207,     0,   211,
     210,     0,   217,   216,   215,   214,     0,   218,   224,   242,
      65,    67,    71,    70,    68,    61,    64,    60,    69,    63,
      62,    66,    55,     0,     0,     0,   286,     9,   230,     0,
       0,   283,   267,     0,     0,     0,   314,   104,   121,     0,
       0,     0,   249,     0,     0,     0,    33,     0,    21,    24,
       0,     0,    32,   273,   278,   229,    32,   246,   227,     0,
      32,   244,   228,    81,    32,     0,    94,     0,   163,     0,
       0,     0,     0,    17,    42,     0,   270,     0,   180,   182,
     197,   195,   186,   199,   201,   203,   205,   209,   213,     0,
       0,   286,   261,   225,     0,    54,    57,    56,   126,   120,
       0,    10,     0,   311,   281,   282,     0,   266,    97,     0,
       0,   110,   106,   103,   116,   108,     0,   139,   118,   111,
     248,    30,    38,     0,    28,     0,    32,   275,     0,    31,
     279,   247,     0,   245,     0,    32,    73,    76,    97,    16,
     158,     0,   149,     0,   141,     0,     0,   155,     0,    41,
      43,    74,     0,   252,   223,     0,     0,   258,     0,   256,
       0,    58,     0,     0,     0,   297,   284,    32,     0,   268,
       0,   124,     0,     0,     0,   114,   122,   137,    36,    34,
       0,    29,    23,    25,    22,    32,   272,   276,     0,     0,
      79,    31,    80,    98,   166,    16,   162,     0,     0,   151,
       0,     0,     0,   152,   153,    26,     0,   177,   250,     0,
     251,   254,   261,     8,   293,   288,     0,   294,   296,   285,
     291,     0,    96,   143,   107,   109,   113,     0,     0,    35,
       0,    31,   277,   307,    26,   301,   168,   172,   171,    78,
     164,   165,   159,   160,     0,   157,   145,     0,     0,   144,
       0,   147,     0,    20,     0,     0,   257,   253,   260,   263,
     290,   295,   280,     0,   115,     0,     0,    37,    27,     0,
       0,   306,   304,   305,     0,     0,     0,   300,   298,   299,
       0,    32,   161,   148,     0,   146,   140,    19,    18,   255,
     265,   259,   262,     0,   292,     0,     0,   136,     0,   309,
     174,     0,   303,   170,    31,   167,   150,   264,     0,   287,
     142,   138,   274,   308,   173,   302,   169,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -395,  -395,  -395,  -395,  -395,   308,    97,  -395,  -395,   309,
    -395,  -395,  -395,  -318,  -395,  -395,  -395,  -395,  -197,  -192,
    -395,  -395,  -265,    -2,  -395,   126,  -395,   100,  -395,  -395,
    -395,     8,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,    53,  -395,  -395,  -395,  -395,  -395,  -395,
     -31,   163,    87,  -395,  -395,    22,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,    56,    66,  -395,  -395,  -185,  -395,  -395,  -395,  -394,
    -395,    -5,  -395,  -134,   227,    -6,  -395,  -395,    -3,   219,
     235,   218,  -395,   229,  -395,   213,  -395,   -61,  -395,  -395,
    -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,  -395,
    -395,  -395,  -395,   -40,    12,  -395,  -395,    -7,  -395,   -14,
    -395,  -395,  -395,  -395,   351,  -395,  -395,  -395,  -395,  -395,
    -395,   -59,  -395,   -67,   279,  -395,   -63,  -104,  -395,  -395,
     -18,  -395
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    39,     3,    40,   260,    41,    42,    43,
      44,   308,   366,   108,   286,   109,   341,   208,   290,   209,
     283,   338,    45,   228,   136,    47,    48,   255,   182,   183,
      49,   137,   123,   295,   296,    50,    51,    52,    53,    54,
      55,    56,    57,   331,   226,    58,    59,    60,   100,   273,
     274,   104,   275,   335,   105,   106,    61,   198,    62,    63,
      64,    65,   337,    66,    67,    68,   302,   359,   409,    69,
     231,   129,   303,   404,   405,   229,   355,   395,   441,   396,
     397,    70,   140,    71,    72,    73,    74,   152,    75,    76,
      77,    78,   158,    79,   161,    80,   166,    81,    82,    83,
     168,    84,   114,   115,   119,   111,    85,   120,   116,    86,
     253,   318,   371,   319,   320,   451,   452,    97,   192,    87,
     112,   345,   346,   213,    88,   266,   261,   262,   420,   454,
     326,   327,   377,   437,   438,   439,   431,   432,   433,    94,
      89,   101
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      90,    46,    93,   117,   237,   264,   214,    99,    96,   217,
      98,    96,   103,   282,   277,   110,   113,   118,   126,   291,
     121,   167,   190,   293,   131,   124,   125,   297,    92,     7,
     -31,   128,   130,   170,   354,   196,   459,   135,   185,   156,
     460,   162,   462,   171,   323,   304,   463,   414,   153,   201,
     188,    91,   312,   172,     4,   173,   270,   189,   191,   358,
     271,   204,   157,   300,   185,    19,    20,   474,   186,    91,
     476,    21,    22,   187,    23,    24,   435,    26,   174,    27,
     193,   163,   272,   175,    29,   139,    95,   -31,   205,   344,
     401,     7,   206,   176,   164,   177,   165,   324,   352,    33,
      34,   178,   202,   211,   138,   248,   179,   234,   180,   430,
     102,   205,   181,   249,   207,   206,   250,   223,   212,   210,
     363,   216,   107,   197,   139,   235,   220,    19,    20,   139,
     380,   127,   224,    21,    22,   239,    23,    24,   211,    26,
     159,    27,   402,   251,   252,     6,    29,   383,   392,   242,
     160,     9,   403,   219,   211,   300,   141,   301,   153,   436,
     430,    33,    34,   155,   376,   257,   154,    38,   211,   256,
     305,   306,   406,   387,   388,   169,   411,   265,   184,   258,
     269,   194,   195,   347,   263,   199,   215,   200,   268,   314,
     203,   211,   219,   218,   225,   222,   422,   427,   280,   230,
     232,   233,   236,   241,   288,   287,     7,   240,    96,   254,
     -11,   259,   292,  -105,   393,   398,    96,   267,   276,   185,
     298,   378,   443,   279,   281,   445,   285,   446,   284,   307,
     448,   311,   289,   294,   299,   313,   257,   322,   328,   330,
     256,   457,    19,    20,   465,   332,   334,   317,    21,    22,
     271,    23,    24,   339,    26,   336,    27,   325,   340,   466,
     343,    29,   348,   349,   329,   351,     7,   122,   357,   361,
     470,   471,   362,   365,  -260,   368,    33,    34,   370,   369,
     342,   372,   373,   379,   311,   381,   384,   385,   386,   350,
     389,   391,   390,   407,   408,   356,   398,    46,   410,   412,
     398,   130,   398,    20,   415,   413,   398,   367,    21,    22,
     417,    23,    24,   416,    26,   -31,    27,   423,   374,   375,
     426,    29,   434,   139,   428,   382,   440,   398,   444,   450,
     398,     5,     6,     7,   447,     8,    33,    34,     9,   453,
     455,    10,   456,   458,    11,   461,   399,   464,   315,   132,
     133,   353,    12,    46,   321,   424,    13,   333,    14,    15,
      16,   310,   364,   278,    17,    18,   238,   418,   360,    19,
      20,   421,   243,   245,   247,    21,    22,   449,    23,    24,
      25,    26,   425,    27,   419,    28,   429,   246,    29,   244,
      30,    31,   134,    32,   469,   475,   473,   221,     0,   442,
       0,     0,     0,    33,    34,    35,     0,    36,    37,    38,
       0,     0,   317,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     8,     0,     0,     9,
       0,     0,    10,   400,     0,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,    13,   325,    14,
      15,    16,     0,   472,     0,    17,    18,     0,     0,     0,
      19,    20,     0,   477,     0,     0,    21,    22,     0,    23,
      24,     0,    26,     0,    27,     0,    28,     0,     0,    29,
       0,    30,    31,     0,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    34,    35,     0,    36,    37,
      38,     5,     6,     7,     0,     8,     0,     0,     9,     0,
       0,    10,     0,     0,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    14,    15,
      16,     0,     0,     0,    17,    18,     0,     0,     0,    19,
      20,     0,     0,     0,     0,    21,    22,     0,    23,    24,
       0,    26,     7,    27,     0,    28,     0,     0,    29,     0,
      30,    31,     0,    32,   316,     0,     0,     0,     0,     0,
       0,     0,     0,    33,    34,    35,     0,    36,    37,    38,
       5,     0,     7,     0,     8,     0,     0,     0,    19,    20,
      10,     0,     0,    11,    21,    22,     0,    23,    24,     0,
      26,     0,    27,     0,     0,    13,     0,    29,    15,    16,
       0,     0,     0,     0,    18,     0,     0,     0,    19,    20,
       0,     0,    33,    34,    21,    22,     0,    23,    24,   227,
      26,     5,    27,     7,    28,     8,     0,    29,     0,    30,
      31,    10,    32,     0,    11,     0,     0,     0,     0,     0,
       0,     0,    33,    34,     0,     0,    13,     0,    38,    15,
      16,     0,     0,     0,     0,    18,     0,     0,     0,    19,
      20,     0,     0,     0,     0,    21,    22,     0,    23,    24,
     309,    26,     0,    27,     0,    28,     7,   142,    29,     0,
      30,    31,  -261,    32,     0,   143,   144,   145,   316,     0,
     146,     0,   147,    33,    34,     0,     0,   148,   149,    38,
       0,     0,     0,     0,     0,   150,   151,     0,     7,     0,
       0,     0,    19,    20,     0,     0,     0,     0,    21,    22,
       0,    23,    24,   468,    26,     7,    27,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    20,    33,    34,     0,     0,
      21,    22,     0,    23,    24,     7,    26,     0,    27,     0,
       0,    19,    20,    29,     0,     0,     0,    21,    22,     7,
      23,    24,     0,    26,     0,    27,     0,     0,    33,    34,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   394,    20,     0,     0,    33,    34,    21,    22,     0,
      23,    24,     0,    26,     0,    27,    20,     0,     0,     0,
      29,    21,    22,     0,    23,    24,     0,     0,     0,    27,
       0,     0,     0,     0,    29,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
      34
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,    21,   138,   190,   110,    14,    11,   113,
      13,    14,    17,   205,   199,    20,    21,    22,    32,   216,
      26,    82,    15,   220,    38,    30,    31,   224,     6,     9,
      15,    36,    37,     3,   299,    21,   430,    19,    21,    47,
     434,    22,   436,    13,    24,   230,   440,   365,    10,     6,
       9,    55,    27,    23,     0,    25,    51,    16,    51,    27,
      55,    24,    70,    31,    21,    45,    46,   461,    51,    55,
     464,    51,    52,    56,    54,    55,   394,    57,    48,    59,
      42,    62,    77,    53,    64,    60,    55,    72,    51,   286,
     355,     9,    55,    63,    75,    65,    77,    77,   295,    79,
      80,    71,   107,    34,    40,   166,    76,    56,    78,    40,
      55,    51,    82,    21,    77,    55,    24,   122,   110,    15,
     305,   113,    15,   101,    60,    74,   118,    45,    46,    60,
     327,    15,   124,    51,    52,   141,    54,    55,    34,    57,
      54,    59,     6,    51,    52,     8,    64,   332,   345,   152,
      64,    14,    16,    34,    34,    31,     5,    33,    10,    40,
      40,    79,    80,     4,    30,   183,    12,    85,    34,   183,
      15,    16,   357,    26,    27,    79,   361,   191,    16,   184,
     194,    42,    41,   287,   189,    15,    68,    16,   193,   250,
      15,    34,    34,    72,    16,    73,   381,   389,   203,    15,
       6,    55,    16,    42,   211,   210,     9,    57,   211,    30,
      72,    55,   219,    41,   348,   349,   219,    16,    16,    21,
     225,   325,   407,    55,    55,   410,    30,   412,    55,   232,
     415,   236,    16,    16,    43,    55,   254,    72,    72,    16,
     254,   426,    45,    46,   441,    15,     6,   252,    51,    52,
      55,    54,    55,    72,    57,    55,    59,   262,    16,   444,
      16,    64,    42,    42,   267,    16,     9,    70,    15,    15,
     455,   456,    27,    51,    15,    72,    79,    80,    73,    21,
     285,    15,    56,    16,   289,    15,    72,    55,    16,   294,
      16,    16,    24,    15,    33,   300,   430,   299,    15,    15,
     434,   306,   436,    46,    15,    72,   440,   312,    51,    52,
      16,    54,    55,    21,    57,    72,    59,    27,   323,   324,
      15,    64,    15,    60,    55,   330,    16,   461,    15,    15,
     464,     7,     8,     9,    72,    11,    79,    80,    14,    16,
      15,    17,    15,    15,    20,    15,   351,    16,   251,    41,
      41,   298,    28,   355,   254,   386,    32,   270,    34,    35,
      36,   235,   306,   200,    40,    41,   139,   372,   302,    45,
      46,   376,   153,   155,   161,    51,    52,   417,    54,    55,
      56,    57,   387,    59,   372,    61,   391,   158,    64,   154,
      66,    67,    41,    69,   453,   462,   459,   118,    -1,   404,
      -1,    -1,    -1,    79,    80,    81,    -1,    83,    84,    85,
      -1,    -1,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,     8,     9,    -1,    11,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   450,    -1,    32,   453,    34,
      35,    36,    -1,   458,    -1,    40,    41,    -1,    -1,    -1,
      45,    46,    -1,   468,    -1,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    -1,    59,    -1,    61,    -1,    -1,    64,
      -1,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,    84,
      85,     7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,    35,
      36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      -1,    57,     9,    59,    -1,    61,    -1,    -1,    64,    -1,
      66,    67,    -1,    69,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    -1,    83,    84,    85,
       7,    -1,     9,    -1,    11,    -1,    -1,    -1,    45,    46,
      17,    -1,    -1,    20,    51,    52,    -1,    54,    55,    -1,
      57,    -1,    59,    -1,    -1,    32,    -1,    64,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,    -1,    79,    80,    51,    52,    -1,    54,    55,    56,
      57,     7,    59,     9,    61,    11,    -1,    64,    -1,    66,
      67,    17,    69,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    -1,    -1,    32,    -1,    85,    35,
      36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    -1,    54,    55,
      56,    57,    -1,    59,    -1,    61,     9,    29,    64,    -1,
      66,    67,    15,    69,    -1,    37,    38,    39,    21,    -1,
      42,    -1,    44,    79,    80,    -1,    -1,    49,    50,    85,
      -1,    -1,    -1,    -1,    -1,    57,    58,    -1,     9,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    24,    57,     9,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    79,    80,    -1,    -1,
      51,    52,    -1,    54,    55,     9,    57,    -1,    59,    -1,
      -1,    45,    46,    64,    -1,    -1,    -1,    51,    52,     9,
      54,    55,    -1,    57,    -1,    59,    -1,    -1,    79,    80,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    79,    80,    51,    52,    -1,
      54,    55,    -1,    57,    -1,    59,    46,    -1,    -1,    -1,
      64,    51,    52,    -1,    54,    55,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    64,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    87,    88,    90,     0,     7,     8,     9,    11,    14,
      17,    20,    28,    32,    34,    35,    36,    40,    41,    45,
      46,    51,    52,    54,    55,    56,    57,    59,    61,    64,
      66,    67,    69,    79,    80,    81,    83,    84,    85,    89,
      91,    93,    94,    95,    96,   108,   109,   111,   112,   116,
     121,   122,   123,   124,   125,   126,   127,   128,   131,   132,
     133,   142,   144,   145,   146,   147,   149,   150,   151,   155,
     167,   169,   170,   171,   172,   174,   175,   176,   177,   179,
     181,   183,   184,   185,   187,   192,   195,   205,   210,   226,
     167,    55,   141,   167,   225,    55,   174,   203,   174,   203,
     134,   227,    55,   167,   137,   140,   141,    15,    99,   101,
     167,   191,   206,   167,   188,   189,   194,   226,   167,   190,
     193,   171,    70,   118,   167,   167,   205,    15,   167,   157,
     167,   205,    91,    95,   210,    19,   110,   117,    40,    60,
     168,     5,    29,    37,    38,    39,    42,    44,    49,    50,
      57,    58,   173,    10,    12,     4,    47,    70,   178,    54,
      64,   180,    22,    62,    75,    77,   182,   183,   186,    79,
       3,    13,    23,    25,    48,    53,    63,    65,    71,    76,
      78,    82,   114,   115,    16,    21,    51,    56,     9,    16,
      15,    51,   204,    42,    42,    41,    21,   141,   143,    15,
      16,     6,   167,    15,    24,    51,    55,    77,   103,   105,
      15,    34,   117,   209,   223,    68,   117,   223,    72,    34,
     117,   220,    73,   167,   117,    16,   130,    56,   109,   161,
      15,   156,     6,    55,    56,    74,    16,   169,   170,   171,
      57,    42,   174,   175,   176,   177,   179,   181,   183,    21,
      24,    51,    52,   196,    30,   113,   205,   226,   167,    55,
      92,   212,   213,   167,   161,   205,   211,    16,   167,   205,
      51,    55,    77,   135,   136,   138,    16,   161,   137,    55,
     167,    55,   105,   106,    55,    30,   100,   167,   203,    16,
     104,   104,   203,   104,    16,   119,   120,   104,   167,    43,
      31,    33,   152,   158,   161,    15,    16,   174,    97,    56,
     111,   167,    27,    55,   183,    92,    21,   167,   197,   199,
     200,   113,    72,    24,    77,   167,   216,   217,    72,   174,
      16,   129,    15,   138,     6,   139,    55,   148,   107,    72,
      16,   102,   167,    16,   104,   207,   208,   223,    42,    42,
     167,    16,   104,   129,   108,   162,   167,    15,    27,   153,
     158,    15,    27,   161,   157,    51,    98,   167,    72,    21,
      73,   198,    15,    56,   167,   167,    30,   218,   223,    16,
     104,    15,   167,   161,    72,    55,    16,    26,    27,    16,
      24,    16,   104,   169,    45,   163,   165,   166,   169,   167,
      18,   108,     6,    16,   159,   160,   161,    15,    33,   154,
      15,   161,    15,    72,    99,    15,    21,    16,   167,   200,
     214,   167,   161,    27,   136,   167,    15,   105,    55,   167,
      40,   222,   223,   224,    15,    99,    40,   219,   220,   221,
      16,   164,   167,   161,    15,   161,   161,    72,   161,   199,
      15,   201,   202,    16,   215,    15,    15,   161,    15,   165,
     165,    15,   165,   165,    16,   104,   161,   167,    24,   217,
     161,   161,   167,   222,   165,   219,   165,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    96,    97,    95,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   122,   123,   123,   123,   123,   123,   124,
     125,   126,   126,   127,   128,   128,   129,   129,   130,   130,
     131,   131,   132,   133,   134,   134,   135,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   146,   146,   146,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   182,   182,   183,   183,
     184,   184,   184,   185,   185,   186,   186,   187,   187,   187,
     187,   187,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   191,   192,   192,   193,   193,   194,   194,   195,   195,
     196,   196,   196,   197,   197,   198,   198,   199,   199,   199,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   213,   213,   214,   214,   215,
     215,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     0,     0,     7,     3,
       2,     2,     4,     2,     0,     4,     0,     3,     0,     3,
       2,     1,     0,     1,     3,     3,     2,     3,     0,     1,
       1,     4,     3,     3,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     1,     3,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     0,     3,     0,     3,     2,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     0,     3,     0,
       1,     1,     2,     4,     2,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     2,     3,     0,     1,     3,     1,
       3,     3,     3,     0,     5,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     5,     5,     0,
       7,     4,     9,     6,     6,     6,     4,     3,     3,     0,
       3,     0,     5,     3,     0,     3,     1,     3,     1,     1,
       1,     2,     0,     1,     4,     2,     1,     3,     1,     3,
       2,     1,     1,     4,     3,     2,     1,     4,     0,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     4,     2,     2,     0,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     2,     3,     2,     3,     4,     3,
       3,     3,     2,     3,     2,     3,     0,     3,     1,     4,
       1,     0,     1,     0,     2,     1,     3,     2,     3,     0,
       3,     2,     4,     2,     5,     0,     1,     2,     1,     2,
       7,     4,     1,     0,     2,     3,     0,     3,     0,     3,
       0,     2,     4,     2,     2,     3,     1,     0,     1,     1,
       5,     4,     3,     2,     1,     1,     5,     4,     3,     2,
       1,     3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 64 "parse.y" /* yacc.c:1646  */
    {std::cout<<"AT dotted_name LPAR opt_arglist RPAR NEWLINE\n"; }
#line 1898 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 65 "parse.y" /* yacc.c:1646  */
    {std::cout<<"AT dotted_name NEWLINE\n"; }
#line 1904 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "parse.y" /* yacc.c:1646  */
    {currentIndex++; Scope::scope.push_back(new StmtsStruct()); 
		}
#line 1911 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "parse.y" /* yacc.c:1646  */
    { Scope::scope.at(currentIndex)->name = (yyvsp[0].id); }
#line 1917 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 81 "parse.y" /* yacc.c:1646  */
    {currentIndex--; }
#line 1923 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 84 "parse.y" /* yacc.c:1646  */
    {std::cout<<"lrpar"; }
#line 1929 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 85 "parse.y" /* yacc.c:1646  */
    {std::cout<<"lrpar"; }
#line 1935 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 112 "parse.y" /* yacc.c:1646  */
    {std::cout<<"lpar fplist rpar";}
#line 1941 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "parse.y" /* yacc.c:1646  */
    {std::cout<<"lpar fplist rpar";}
#line 1947 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 173 "parse.y" /* yacc.c:1646  */
    { Scope::scope.at(currentIndex)->stmts.push_back((yyvsp[0].node)) ;
		std::cout<<"PRINT opt_test";}
#line 1954 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 178 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_COMMA_test COMMA test\n"; }
#line 1960 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 182 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-2].node); std::cout<<"test star_COMMA_test opt_COMMA\n"; }
#line 1966 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 224 "parse.y" /* yacc.c:1646  */
    {std::cout<<"opt_COMMA"; }
#line 1972 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 282 "parse.y" /* yacc.c:1646  */
    {std::cout<<"EXEC expr IN test opt_COMMA_test";}
#line 1978 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 283 "parse.y" /* yacc.c:1646  */
    {std::cout<<"EXEC expr";}
#line 1984 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 290 "parse.y" /* yacc.c:1646  */
    {std::cout<<"if_stmt\n"; }
#line 1990 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 339 "parse.y" /* yacc.c:1646  */
    {std::cout<<"test AS expr"; }
#line 1996 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 340 "parse.y" /* yacc.c:1646  */
    {std::cout<<"test with item"; }
#line 2002 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 375 "parse.y" /* yacc.c:1646  */
    {std::cout<<"LAMBDA varargslist COLON old_test\n";}
#line 2008 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 379 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[-1].node); std::cout<<"or_test\n";}
#line 2014 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 388 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"and test\n";}
#line 2020 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 392 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"not test\n";}
#line 2026 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 397 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"comparison\n";}
#line 2032 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 400 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"expr\n";}
#line 2038 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 417 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"xor_expr\n";}
#line 2044 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 421 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"and_expr\n";}
#line 2050 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 425 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"shift_expr\n";}
#line 2056 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 429 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"arith_expr\n";}
#line 2062 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 437 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"term\n";}
#line 2068 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 438 "parse.y" /* yacc.c:1646  */
    {std::cout<<"arithi\n"; }
#line 2074 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 445 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"factor\n";}
#line 2080 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 456 "parse.y" /* yacc.c:1646  */
    {(yyval.node)=(yyvsp[0].node); std::cout<<"power\n";}
#line 2086 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 464 "parse.y" /* yacc.c:1646  */
    {std::cout<<"atom star_trailer DOUBLESTAR factor \n";}
#line 2092 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 465 "parse.y" /* yacc.c:1646  */
    { 
		if ((yyvsp[0].simType) == 1) { 
			Node* node = new FuncNode(dynamic_cast<IdentNode*>(yyvsp[-1].node)->getIdent(), NULL, false); 
			Scope::scope.at(currentIndex)->stmts.push_back(node) ;
			 
			if (currentIndex == 0) { //start eval. start from cur scope and look all the way up
			 int lookUpIndex = currentIndex ; 
			 for (int i = lookUpIndex ; i <= 0 ; i--) {
				auto *nextScope = Scope::scope.at(i); 
					if (nextScope->name == (dynamic_cast<FuncNode*>(node))->getId()) { std::cout<<"FFFFF";
						for (auto &stmt : nextScope->stmts) {
							stmt->eval()->print();	
						}			
					}
				}
	
							
			} 
		}else (yyval.node)=(yyvsp[-1].node);   
	std::cout<<"atom star_trailer\n";
	}
#line 2118 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 488 "parse.y" /* yacc.c:1646  */
    { (yyval.simType) = 1; std::cout<<"star_trailer trailer \n";}
#line 2124 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 489 "parse.y" /* yacc.c:1646  */
    { (yyval.simType) = 0;  }
#line 2130 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 492 "parse.y" /* yacc.c:1646  */
    {std::cout<<"atom\n";}
#line 2136 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 496 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = new IdentNode((yyvsp[0].id)); std::cout<<"name\n";}
#line 2142 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 497 "parse.y" /* yacc.c:1646  */
    {(yyval.node) = new FloatLiteral((yyvsp[0].fltNumber)); std::cout<<"number\n";}
#line 2148 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 530 "parse.y" /* yacc.c:1646  */
    {std::cout<<"LAMBDA COLON test\n";}
#line 2154 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 533 "parse.y" /* yacc.c:1646  */
    {std::cout<<"LPAR opt_arglist RPAR\n";}
#line 2160 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 591 "parse.y" /* yacc.c:1646  */
    {std::cout<<"class";}
#line 2166 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2170 "parse.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 663 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}

