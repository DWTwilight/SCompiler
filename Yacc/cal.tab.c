/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 ".\\cal.y"
 
#include <stdio.h> 
#include <stdlib.h> 
#include <stdarg.h> 
#include "Common.h" 
#include "Node.h" 

int yylex(void); 
void yyerror(char *s); 
extern FILE* yyin;
extern FILE* yyout;
extern int yylineno;

auto cManager = CompileManager::GetInstance();

/* Line 371 of yacc.c  */
#line 84 "cal.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "cal.tab.h".  */
#ifndef YY_YY_CAL_TAB_H_INCLUDED
# define YY_YY_CAL_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     FLOATNUM = 258,
     INTEGER = 259,
     IDENTIFIER = 260,
     WHILE = 261,
     IF = 262,
     PRINT = 263,
     INT = 264,
     VOID = 265,
     RETURN = 266,
     FLOAT = 267,
     FOR = 268,
     IFX = 269,
     ELSE = 270,
     NE = 271,
     EQ = 272,
     LE = 273,
     GE = 274,
     UMINUS = 275
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 16 ".\\cal.y"
 
int iValue; /* integer value */ 
float fValue;
int sIndex; /* symbol table index */ 
int type;
Node* nPtr; /* node pointer */


/* Line 387 of yacc.c  */
#line 156 "cal.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CAL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 184 "cal.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   286

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    26,     2,     2,
      30,    31,    24,    22,    33,    23,     2,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
      17,    34,    16,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    29,     2,     2,     2,     2,
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
      15,    18,    19,    20,    21,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    13,    16,    19,    20,
      30,    34,    36,    37,    40,    42,    44,    46,    49,    51,
      55,    57,    61,    62,    66,    68,    72,    74,    78,    80,
      83,    87,    92,    98,   107,   113,   121,   125,   128,   131,
     135,   138,   141,   144,   145,   149,   151,   152,   154,   156,
     158,   160,   162,   165,   169,   173,   177,   181,   185,   189,
     193,   197,   201,   205,   209,   213
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      36,     0,    -1,    36,    37,    -1,    37,    -1,    38,    -1,
      43,    28,    -1,     1,    28,    -1,     1,    29,    -1,    -1,
      42,     5,    39,    30,    40,    31,    32,    51,    29,    -1,
      40,    33,    41,    -1,    41,    -1,    -1,    42,     5,    -1,
       9,    -1,    12,    -1,    10,    -1,    42,    44,    -1,    45,
      -1,    44,    33,    45,    -1,     5,    -1,     5,    34,    54,
      -1,    -1,    42,    47,    48,    -1,    49,    -1,    48,    33,
      49,    -1,     5,    -1,     5,    34,    55,    -1,    28,    -1,
      55,    28,    -1,     8,    55,    28,    -1,     5,    34,    55,
      28,    -1,     6,    30,    55,    31,    50,    -1,    13,    30,
      50,    55,    28,    50,    31,    50,    -1,     7,    30,    55,
      31,    50,    -1,     7,    30,    55,    31,    50,    15,    50,
      -1,    32,    51,    29,    -1,    46,    28,    -1,    11,    28,
      -1,    11,    55,    28,    -1,     1,    28,    -1,     1,    29,
      -1,    51,    50,    -1,    -1,    52,    33,    53,    -1,    53,
      -1,    -1,    55,    -1,     4,    -1,     3,    -1,    54,    -1,
       5,    -1,    23,    55,    -1,    55,    22,    55,    -1,    55,
      23,    55,    -1,    55,    24,    55,    -1,    55,    25,    55,
      -1,    55,    26,    55,    -1,    55,    17,    55,    -1,    55,
      16,    55,    -1,    55,    21,    55,    -1,    55,    20,    55,
      -1,    55,    18,    55,    -1,    55,    19,    55,    -1,    30,
      55,    31,    -1,     5,    30,    52,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    38,    42,    43,    44,    45,    49,    49,
      53,    54,    55,    59,    63,    63,    63,    67,    71,    72,
      76,    77,    81,    81,    85,    86,    90,    91,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   112,   113,   117,   118,   119,   123,   127,   128,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOATNUM", "INTEGER", "IDENTIFIER",
  "WHILE", "IF", "PRINT", "INT", "VOID", "RETURN", "FLOAT", "FOR", "IFX",
  "ELSE", "'>'", "'<'", "NE", "EQ", "LE", "GE", "'+'", "'-'", "'*'", "'/'",
  "'%'", "UMINUS", "';'", "'}'", "'('", "')'", "'{'", "','", "'='",
  "$accept", "program", "section", "function", "$@1", "param_list",
  "param", "type", "gdecl", "gvar_list", "gvar", "decl", "$@2", "var_list",
  "var", "stmt", "stmt_list", "arg_list", "arg", "number", "expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,    62,    60,   271,   272,
     273,   274,    43,    45,    42,    47,    37,   275,    59,   125,
      40,    41,   123,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    35,    36,    36,    37,    37,    37,    37,    39,    38,
      40,    40,    40,    41,    42,    42,    42,    43,    44,    44,
      45,    45,    47,    46,    48,    48,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    52,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,     2,     2,     2,     0,     9,
       3,     1,     0,     2,     1,     1,     1,     2,     1,     3,
       1,     3,     0,     3,     1,     3,     1,     3,     1,     2,
       3,     4,     5,     8,     5,     7,     3,     2,     2,     3,
       2,     2,     2,     0,     3,     1,     0,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    14,    16,    15,     0,     3,     4,     0,     0,
       6,     7,     1,     2,    20,    17,    18,     5,     0,     0,
       0,    49,    48,    21,    12,    20,    19,     0,    11,     0,
       0,     0,    13,    43,    10,     0,     0,    51,     0,     0,
       0,     0,     0,     0,    28,     9,     0,    43,    22,     0,
      42,    50,     0,    40,    41,    46,     0,     0,     0,    51,
       0,    38,     0,     0,    52,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,     0,    45,    47,     0,     0,     0,    30,    39,     0,
      64,    36,    26,    23,    24,    59,    58,    62,    63,    61,
      60,    53,    54,    55,    56,    57,    65,     0,    31,     0,
       0,     0,     0,     0,    44,    32,    34,     0,    27,    25,
       0,     0,    35,     0,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     5,     6,     7,    19,    27,    28,    48,     9,    15,
      16,    49,    67,    93,    94,    50,    35,    81,    82,    51,
      52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -60
static const yytype_int16 yypact[] =
{
      45,   -15,   -60,   -60,   -60,    10,   -60,   -60,    -3,   -21,
     -60,   -60,   -60,   -60,   -25,   -10,   -60,   -60,    37,    -2,
      48,   -60,   -60,   -60,    15,    22,   -60,    32,   -60,    54,
      28,    15,   -60,   -60,   -60,    70,    19,   -22,    40,    67,
      39,    91,    85,    39,   -60,   -60,    39,   -60,   -60,    64,
     -60,   -60,   195,   -60,   -60,    39,    39,    39,    39,    86,
     208,   -60,   221,   130,   -60,   147,   100,   112,   -60,    39,
      39,    39,    39,    39,    39,    39,    39,    39,    39,    39,
     -60,    35,   -60,   260,   234,   163,   179,   -60,   -60,    39,
     -60,   -60,    84,    87,   -60,    62,    62,    62,    62,    62,
      62,    65,    65,   -60,   -60,   -60,   -60,    39,   -60,   130,
     130,   247,    39,   112,   -60,   -60,   107,   130,   260,   -60,
     130,    93,   -60,   130,   -60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -60,   120,   -60,   -60,   -60,    95,    21,   -60,   -60,
     124,   -60,   -60,   -60,    14,   -59,    98,   -60,    41,   128,
     -40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -9
static const yytype_int8 yytable[] =
{
      60,    62,    14,    64,    89,    -8,    65,    17,    55,    18,
      12,     1,    56,    10,    11,    83,    84,    85,    86,     2,
       3,     8,     4,    20,     2,     3,     8,     4,    24,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      21,    22,    21,    22,    59,    29,     1,    53,    54,   111,
     115,   116,    29,    25,     2,     3,    18,     4,   121,    32,
      33,   122,    43,    30,   124,    31,   106,    83,   107,    46,
      57,    36,   118,    21,    22,    37,    38,    39,    40,     2,
       3,    41,     4,    42,    75,    76,    77,    78,    79,    77,
      78,    79,    68,    43,    21,    22,    59,    58,    44,    45,
      46,    36,    47,    21,    22,    37,    38,    39,    40,     2,
       3,    41,     4,    42,    43,    63,    55,    92,   112,    61,
     113,    46,   120,    43,   123,    13,    34,   119,    44,    91,
      46,    36,    47,    21,    22,    37,    38,    39,    40,     2,
       3,    41,     4,    42,    26,    66,    23,     0,   114,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    44,     0,
      46,     0,    47,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,     0,     0,    90,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       0,     0,     0,     0,   109,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
     110,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,     0,    80,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,     0,    87,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    88,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,     0,   108,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,     0,   117,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-60)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
      40,    41,     5,    43,    63,    30,    46,    28,    30,    34,
       0,     1,    34,    28,    29,    55,    56,    57,    58,     9,
      10,     0,    12,    33,     9,    10,     5,    12,    30,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
       3,     4,     3,     4,     5,    24,     1,    28,    29,    89,
     109,   110,    31,     5,     9,    10,    34,    12,   117,     5,
      32,   120,    23,    31,   123,    33,    31,   107,    33,    30,
      30,     1,   112,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    22,    23,    24,    25,    26,    24,
      25,    26,    28,    23,     3,     4,     5,    30,    28,    29,
      30,     1,    32,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    23,    30,    30,     5,    34,    28,
      33,    30,    15,    23,    31,     5,    31,   113,    28,    29,
      30,     1,    32,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    20,    47,    18,    -1,   107,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    -1,
      30,    -1,    32,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    28,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    28,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    28,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     9,    10,    12,    36,    37,    38,    42,    43,
      28,    29,     0,    37,     5,    44,    45,    28,    34,    39,
      33,     3,     4,    54,    30,     5,    45,    40,    41,    42,
      31,    33,     5,    32,    41,    51,     1,     5,     6,     7,
       8,    11,    13,    23,    28,    29,    30,    32,    42,    46,
      50,    54,    55,    28,    29,    30,    34,    30,    30,     5,
      55,    28,    55,    30,    55,    55,    51,    47,    28,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      28,    52,    53,    55,    55,    55,    55,    28,    28,    50,
      31,    29,     5,    48,    49,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    31,    33,    28,    31,
      31,    55,    34,    33,    53,    50,    50,    28,    55,    49,
      15,    50,    50,    31,    50
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
/* Line 1792 of yacc.c  */
#line 49 ".\\cal.y"
    {cManager->AddFunction((yyvsp[(2) - (2)].sIndex), (yyvsp[(1) - (2)].type));}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 49 ".\\cal.y"
    {cManager->CompleteFunction(); (yyvsp[(8) - (9)].nPtr)->Translate(); if((yyvsp[(1) - (9)].type) == 2){fprintf(yyout, "\t\treturn\n");} delete (yyvsp[(8) - (9)].nPtr) ;}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 59 ".\\cal.y"
    {cManager->AddParam((yyvsp[(2) - (2)].sIndex), (yyvsp[(1) - (2)].type));}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 63 ".\\cal.y"
    {(yyval.type) = 0;}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 63 ".\\cal.y"
    { (yyval.type) = 1 ;}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 63 ".\\cal.y"
    {(yyval.type) = 2;}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 67 ".\\cal.y"
    { cManager->SetGVarType((yyvsp[(1) - (2)].type)) ;}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 76 ".\\cal.y"
    { cManager->AddGVar((yyvsp[(1) - (1)].sIndex), NULL) ;}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 77 ".\\cal.y"
    {cManager->AddGVar((yyvsp[(1) - (3)].sIndex), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 81 ".\\cal.y"
    { cManager->SetCurrentType((yyvsp[(1) - (1)].type)) ;}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 81 ".\\cal.y"
    { (yyval.nPtr) = (yyvsp[(3) - (3)].nPtr) ;}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 85 ".\\cal.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr) ;}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 86 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetConnNode(2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 90 ".\\cal.y"
    {cManager->AddLocalVariable((yyvsp[(1) - (1)].sIndex)); (yyval.nPtr) = cManager->GetConnNode(0) ;}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 91 ".\\cal.y"
    {cManager->AddLocalVariable((yyvsp[(1) - (3)].sIndex)); (yyval.nPtr) = new AssignNode(cManager->GetVarNode((yyvsp[(1) - (3)].sIndex)), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 95 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetConnNode(0) ;}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 96 ".\\cal.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr) ;}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 97 ".\\cal.y"
    { (yyval.nPtr) = new PrintNode((yyvsp[(2) - (3)].nPtr)) ;}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 98 ".\\cal.y"
    { (yyval.nPtr) = new AssignNode(cManager->GetVarNode((yyvsp[(1) - (4)].sIndex)), (yyvsp[(3) - (4)].nPtr)) ;}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 99 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetWhile((yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)) ;}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 100 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetFor((yyvsp[(3) - (8)].nPtr), (yyvsp[(4) - (8)].nPtr), (yyvsp[(6) - (8)].nPtr), (yyvsp[(8) - (8)].nPtr)) ;}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 101 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetIf((yyvsp[(3) - (5)].nPtr), (yyvsp[(5) - (5)].nPtr)) ;}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 102 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetIf((yyvsp[(3) - (7)].nPtr), (yyvsp[(5) - (7)].nPtr), (yyvsp[(7) - (7)].nPtr)) ;}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 103 ".\\cal.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr) ;}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 104 ".\\cal.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr) ;}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 105 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetReturnNode(NULL) ;}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 106 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetReturnNode((yyvsp[(2) - (3)].nPtr)) ;}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 107 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetConnNode(0) ;}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 108 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetConnNode(0) ;}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 112 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetConnNode(2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)) ;}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 113 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetConnNode(0) ;}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 117 ".\\cal.y"
    { cManager->GetArgListNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 118 ".\\cal.y"
    { (yyval.nPtr) = new ArgListNode((yyvsp[(1) - (1)].nPtr)) ;}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 119 ".\\cal.y"
    { (yyval.nPtr) = new ArgListNode(NULL) ;}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 123 ".\\cal.y"
    { (yyval.nPtr) = new ArgNode((yyvsp[(1) - (1)].nPtr)) ;}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 127 ".\\cal.y"
    { (yyval.nPtr) = new IntNode((yyvsp[(1) - (1)].iValue)) ;}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 128 ".\\cal.y"
    { (yyval.nPtr) = new FloatNode((yyvsp[(1) - (1)].fValue)) ;}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 132 ".\\cal.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr) ;}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 133 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetVarNode((yyvsp[(1) - (1)].sIndex)) ;}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 134 ".\\cal.y"
    { (yyval.nPtr) = new NegNode((yyvsp[(2) - (2)].nPtr)) ;}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 135 ".\\cal.y"
    { (yyval.nPtr) = new AddNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 136 ".\\cal.y"
    { (yyval.nPtr) = new SubNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 137 ".\\cal.y"
    { (yyval.nPtr) = new MulNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 138 ".\\cal.y"
    { (yyval.nPtr) = new DivNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 139 ".\\cal.y"
    { (yyval.nPtr) = new ModNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 140 ".\\cal.y"
    { (yyval.nPtr) = new LTNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 141 ".\\cal.y"
    { (yyval.nPtr) = new GTNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 142 ".\\cal.y"
    { (yyval.nPtr) = new GENode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 143 ".\\cal.y"
    { (yyval.nPtr) = new LENode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 144 ".\\cal.y"
    { (yyval.nPtr) = new NENode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 145 ".\\cal.y"
    { (yyval.nPtr) = new EQNode((yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)) ;}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 146 ".\\cal.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr) ;}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 147 ".\\cal.y"
    { (yyval.nPtr) = cManager->GetFunc((yyvsp[(3) - (4)].nPtr), (yyvsp[(1) - (4)].sIndex)) ;}
    break;


/* Line 1792 of yacc.c  */
#line 1828 "cal.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 149 ".\\cal.y"

void yyerror(char *s) { 
    fprintf(stdout, "line %d: %s\n", yylineno, s);
    cManager->SetFlag(false);
}

int main(int argc, char** args){
    if (argc >= 3) {
		yyin = fopen(args[1], "r");
		if (yyin == NULL) {
			printf("Cannot open file: %s\n", args[1]);
			return -1;
		}

		yyout = fopen(args[2], "w");
		if(yyout == NULL){
			printf("Cannot write out!");
			return -1;
		}
	}
	else {
		printf("Invalid Args!\n");
		return -1;
	}

    yyparse();
    fclose(yyin);
    fclose(yyout);
    
    if(cManager->GetFlag()){
        return 0;
    }
    return 1;
}