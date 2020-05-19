/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     HASH = 258,
     INCLUDE = 259,
     STDIO = 260,
     STDLIB = 261,
     MATH = 262,
     STRING = 263,
     TIME = 264,
     STRING_LITERAL = 265,
     HEADER_LITERAL = 266,
     PRINT = 267,
     RETURN = 268,
     UMINUS = 269,
     INTEGER_LITERAL = 270,
     CHARACTER_LITERAL = 271,
     FLOAT_LITERAL = 272,
     IDENTIFIER = 273,
     FOR = 274,
     INC_OP = 275,
     DEC_OP = 276,
     LE_OP = 277,
     GE_OP = 278,
     EQ_OP = 279,
     NE_OP = 280,
     MUL_ASSIGN = 281,
     DIV_ASSIGN = 282,
     MOD_ASSIGN = 283,
     ADD_ASSIGN = 284,
     SUB_ASSIGN = 285,
     CHAR = 286,
     INT = 287,
     FLOAT = 288,
     VOID = 289
   };
#endif
/* Tokens.  */
#define HASH 258
#define INCLUDE 259
#define STDIO 260
#define STDLIB 261
#define MATH 262
#define STRING 263
#define TIME 264
#define STRING_LITERAL 265
#define HEADER_LITERAL 266
#define PRINT 267
#define RETURN 268
#define UMINUS 269
#define INTEGER_LITERAL 270
#define CHARACTER_LITERAL 271
#define FLOAT_LITERAL 272
#define IDENTIFIER 273
#define FOR 274
#define INC_OP 275
#define DEC_OP 276
#define LE_OP 277
#define GE_OP 278
#define EQ_OP 279
#define NE_OP 280
#define MUL_ASSIGN 281
#define DIV_ASSIGN 282
#define MOD_ASSIGN 283
#define ADD_ASSIGN 284
#define SUB_ASSIGN 285
#define CHAR 286
#define INT 287
#define FLOAT 288
#define VOID 289




/* Copy the first part of user declarations.  */
#line 1 "icg.y"

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>

	void yyerror(const char*);
	int yylex();

	extern FILE * yyin, *yyout;

	FILE *fp_icg, *fp_quad;
	
	extern int line;
	
	char buffer[100];
	int ln = 0, tempno = 0;

	int assignop = -1;		//assignment operator == += -=
	int unaryop = -1;		//unary operator type
	int exprno = -1;		//FOR loop , 3rd expression
	int m = 0;				//string length for buffer

	int paramno = 0;		//Number of parameters

	char intbuf[20];
	char secIDbuf[20];





/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 40 "icg.y"
{	
	char sval[300];
}
/* Line 193 of yacc.c.  */
#line 199 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 212 "y.tab.c"

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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNRULES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,     2,     2,    18,     2,     2,
      46,    47,    17,    14,    48,    15,     2,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    50,    45,
      41,    19,    42,    49,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,    52,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    12,    17,    19,    21,    24,    26,
      28,    30,    32,    34,    36,    38,    41,    45,    47,    50,
      52,    54,    57,    60,    63,    68,    75,    79,    81,    83,
      85,    86,    87,    97,   100,   103,   106,   109,   113,   117,
     121,   125,   131,   137,   143,   149,   151,   153,   155,   157,
     159,   163,   167,   169,   171,   175,   177,   179,   181,   183,
     185,   187,   189,   190,   191,   199,   201,   204,   206,   210,
     212,   214,   216,   218,   222,   224,   227,   230,   232,   235,
     237,   239,   241,   243,   245,   247,   249,   253,   257,   259,
     263,   267,   271,   275,   277,   281,   285,   287,   291,   295,
     299,   303,   306,   311,   315,   317,   322,   327,   331,   333,
     337,   340,   342,   344
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,     3,     4,    41,    60,    42,
      57,    -1,     3,     4,    11,    57,    -1,    58,    -1,    59,
      -1,    58,    59,    -1,    65,    -1,    89,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,    43,    44,
      -1,    43,    62,    44,    -1,    63,    -1,    62,    63,    -1,
      65,    -1,    66,    -1,    13,    79,    -1,    90,    45,    -1,
      64,    45,    -1,    12,    46,    10,    47,    -1,    12,    46,
      10,    48,    80,    47,    -1,    71,    72,    45,    -1,    61,
      -1,    79,    -1,    67,    -1,    -1,    -1,    25,    46,    79,
      68,    79,    69,    70,    47,    66,    -1,    24,    26,    -1,
      24,    27,    -1,    26,    24,    -1,    27,    24,    -1,    24,
      35,    21,    -1,    24,    36,    21,    -1,    24,    32,    21,
      -1,    24,    33,    21,    -1,    24,    19,    24,    14,    21,
      -1,    24,    19,    24,    15,    21,    -1,    24,    19,    24,
      17,    21,    -1,    24,    19,    24,    16,    21,    -1,    40,
      -1,    37,    -1,    38,    -1,    39,    -1,    73,    -1,    72,
      48,    73,    -1,    24,    19,    74,    -1,    24,    -1,    76,
      -1,    83,    75,    74,    -1,    19,    -1,    35,    -1,    36,
      -1,    32,    -1,    33,    -1,    34,    -1,    85,    -1,    -1,
      -1,    85,    77,    49,    80,    78,    50,    76,    -1,    45,
      -1,    80,    45,    -1,    74,    -1,    80,    48,    74,    -1,
      24,    -1,    21,    -1,    23,    -1,    22,    -1,    46,    80,
      47,    -1,    81,    -1,    82,    26,    -1,    82,    27,    -1,
      82,    -1,    84,    83,    -1,    14,    -1,    15,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    86,    -1,    85,
      30,    86,    -1,    85,    31,    86,    -1,    87,    -1,    86,
      41,    87,    -1,    86,    42,    87,    -1,    86,    28,    87,
      -1,    86,    29,    87,    -1,    88,    -1,    87,    14,    88,
      -1,    87,    15,    88,    -1,    83,    -1,    88,    17,    83,
      -1,    88,    16,    83,    -1,    88,    18,    83,    -1,    71,
      91,    61,    -1,    91,    61,    -1,    91,    46,    94,    47,
      -1,    91,    46,    47,    -1,    24,    -1,    91,    46,    92,
      47,    -1,    91,    46,    94,    47,    -1,    91,    46,    47,
      -1,    93,    -1,    92,    48,    93,    -1,    71,    24,    -1,
      71,    -1,    24,    -1,    94,    48,    24,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    73,    73,    77,    78,    79,    84,    85,    90,    91,
      96,    97,    98,    99,   100,   105,   106,   111,   112,   117,
     118,   119,   120,   121,   126,   127,   132,   137,   138,   139,
     145,   152,   144,   317,   326,   334,   342,   350,   363,   375,
     387,   399,   415,   431,   447,   466,   467,   468,   469,   474,
     475,   480,   494,   499,   500,   584,   585,   586,   587,   588,
     589,   594,   596,   603,   595,   632,   633,   638,   639,   644,
     645,   646,   647,   648,   653,   654,   666,   681,   682,   718,
     719,   720,   721,   722,   723,   728,   729,   739,   753,   754,
     764,   774,   784,   798,   799,   810,   824,   825,   835,   845,
     859,   860,   864,   872,   881,   887,   891,   892,   897,   898,
     903,   904,   909,   914
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "INCLUDE", "STDIO", "STDLIB",
  "MATH", "STRING", "TIME", "STRING_LITERAL", "HEADER_LITERAL", "PRINT",
  "RETURN", "'+'", "'-'", "'/'", "'*'", "'%'", "'='", "UMINUS",
  "INTEGER_LITERAL", "CHARACTER_LITERAL", "FLOAT_LITERAL", "IDENTIFIER",
  "FOR", "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "CHAR", "INT", "FLOAT", "VOID", "'<'", "'>'", "'{'", "'}'", "';'", "'('",
  "')'", "','", "'?'", "':'", "'!'", "'~'", "\"INC_OP\"", "\"DEC_OP\"",
  "$accept", "S", "program", "translation_unit", "ext_dec", "libraries",
  "compound_statement", "block_item_list", "block_item", "printstat",
  "declaration", "statement", "iteration_statement", "@1", "@2", "expr",
  "type_specifier", "init_declarator_list", "init_declarator",
  "assignment_expression", "assignment_operator", "conditional_expression",
  "@3", "@4", "expression_statement", "expression", "primary_expression",
  "postfix_expression", "unary_expression", "unary_operator",
  "equality_expression", "relational_expression", "additive_expression",
  "multiplicative_expression", "function_definition", "function_call",
  "declarator", "parameter_list", "parameter_declaration",
  "identifier_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,    43,    45,    47,    42,    37,    61,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,    60,    62,   123,   125,    59,    40,    41,    44,    63,
      58,    33,   126,   290,   291
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    58,    58,    59,    59,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    63,
      63,    63,    63,    63,    64,    64,    65,    66,    66,    66,
      68,    69,    67,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    71,    72,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    76,    77,    78,    76,    79,    79,    80,    80,    81,
      81,    81,    81,    81,    82,    82,    82,    83,    83,    84,
      84,    84,    84,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    87,    87,    87,    88,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    91,    92,    92,
      93,    93,    94,    94
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     4,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     2,     2,     2,     4,     6,     3,     1,     1,     1,
       0,     0,     9,     2,     2,     2,     2,     3,     3,     3,
       3,     5,     5,     5,     5,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     0,     0,     7,     1,     2,     1,     3,     1,
       1,     1,     1,     3,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     2,     4,     3,     1,     4,     4,     3,     1,     3,
       2,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   104,    46,    47,    48,    45,     0,     2,     5,
       6,     8,     0,     9,     0,     0,     1,     7,    52,     0,
      49,     0,     0,     0,   101,     0,     0,     0,    26,     0,
     100,     0,     0,    79,    80,    70,    72,    71,    69,     0,
      15,    65,     0,    81,    82,    83,    84,    27,     0,    17,
       0,    19,    20,    29,     0,    67,    53,    28,     0,    74,
      77,    96,     0,    61,    85,    88,    93,     0,     0,   112,
     107,   111,     0,   108,     0,     4,    10,    11,    12,    13,
      14,     0,    69,    51,    52,    50,     0,    21,     0,     0,
      16,    18,    23,    66,     0,    75,    76,    55,    58,    59,
      60,    56,    57,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,   110,
     105,     0,   106,     0,     0,     0,    30,    73,    68,    54,
      96,    86,    87,     0,    91,    92,    89,    90,    94,    95,
      98,    97,    99,   103,     0,   109,   113,     3,    24,     0,
       0,    63,   102,     0,    31,     0,    25,     0,     0,     0,
       0,     0,     0,    64,     0,    33,    34,     0,     0,     0,
       0,    35,    36,     0,     0,    39,    40,    37,    38,    32,
       0,     0,     0,     0,    41,    42,    44,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    81,    47,    48,    49,    50,
      11,    52,    53,   150,   157,   162,    12,    19,    20,    55,
     103,    56,   107,   155,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    13,    67,    14,    72,    73,    74
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -52
static const yytype_int16 yypact[] =
{
     124,     8,   -52,   -52,   -52,   -52,   -52,    35,   -52,    51,
     -52,   -52,    -3,   -52,    25,     3,   -52,   -52,     7,    54,
     -52,    25,    -6,   163,   -52,   124,    88,    63,   -52,    19,
     -52,    23,   144,   -52,   -52,   -52,   -52,   -52,    30,    60,
     -52,   -52,    63,   -52,   -52,   -52,   -52,   -52,    98,   -52,
      22,   -52,   -52,   -52,    19,   -52,   -52,   -52,   128,   -52,
      15,   189,    63,    21,   151,    90,   108,    55,    99,   -52,
     -52,   110,   -18,   -52,    85,   -52,   -52,   -52,   -52,   -52,
     -52,   118,   -52,   -52,   169,   -52,   184,   -52,   144,    92,
     -52,   -52,   -52,   -52,    63,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,    63,   -52,    63,    63,   125,    63,    63,
      63,    63,    63,    63,    63,    63,    63,   -52,   167,   -52,
     -52,    91,   -52,   175,   124,   134,   -52,   -52,   -52,   -52,
     -52,   151,   151,    63,    90,    90,    90,    90,   108,   108,
     -52,   -52,   -52,   185,   164,   -52,   -52,   -52,   -52,    63,
     144,   161,   186,   172,   -52,   180,   -52,    -2,    63,    47,
     209,   210,   166,   -52,   211,   -52,   -52,   215,   216,   217,
     218,   -52,   -52,   132,   155,   -52,   -52,   -52,   -52,   -52,
     219,   220,   221,   222,   -52,   -52,   -52,   -52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -52,   -52,   -21,   -52,   235,   -52,     6,   -52,   197,   -52,
     -12,    73,   -52,   -52,   -52,   -52,   -20,   -52,   223,   -22,
     -52,    89,   -52,   -52,   -32,   -41,   -52,   -52,   -51,   -52,
     -52,   121,   107,   116,   -52,   -52,     1,   -52,   127,   131
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -108
static const yytype_int16 yytable[] =
{
      87,    89,    54,    71,    75,    83,    31,    32,    33,    34,
      51,   104,    15,    21,    25,    35,    36,    37,    38,    39,
      24,    18,   159,    68,   160,   161,    27,    30,    54,   120,
     121,     3,     4,     5,     6,    16,    51,    22,    40,    41,
      42,    95,    96,    84,    26,    43,    44,    45,    46,    68,
    -104,   105,   106,  -104,   130,   130,   126,   130,   130,   130,
     130,   130,   130,   140,   141,   142,   164,    92,    22,    86,
     -62,    23,   128,   165,   166,     2,  -104,    33,    34,   167,
     168,   129,   169,   170,    35,    36,    37,    82,     3,     4,
       5,     6,   151,    76,    77,    78,    79,    80,    71,    28,
     117,    71,    29,   147,   112,   113,    88,   130,   153,    42,
      31,    32,    33,    34,    43,    44,    45,    46,   154,    35,
      36,    37,    38,    39,   114,   115,   116,     1,     3,     4,
       5,     6,   122,   123,   119,     3,     4,     5,     6,   127,
      94,    22,    90,    41,    42,   118,    33,    34,     2,    43,
      44,    45,    46,    35,    36,    37,    82,    39,    33,    34,
     124,     3,     4,     5,     6,    35,    36,    37,    82,   180,
     181,   182,   183,    93,   133,    22,    94,    41,    42,   108,
     109,   148,   149,    43,    44,    45,    46,    69,    27,    41,
      42,    69,   110,   111,   125,    43,    44,    45,    46,   146,
       3,     4,     5,     6,     3,     4,     5,     6,    97,    94,
      70,   152,   123,   173,   143,   134,   135,   136,   137,   156,
      94,    98,    99,   100,   101,   102,   131,   132,   138,   139,
     158,  -107,  -106,   171,   172,   174,   175,   176,   177,   178,
     184,   185,   186,   187,    17,    91,   179,   163,   145,   144,
       0,     0,    85
};

static const yytype_int16 yycheck[] =
{
      32,    42,    22,    23,    25,    27,    12,    13,    14,    15,
      22,    62,     4,    12,    11,    21,    22,    23,    24,    25,
      14,    24,    24,    22,    26,    27,    19,    21,    48,    47,
      48,    37,    38,    39,    40,     0,    48,    43,    44,    45,
      46,    26,    27,    24,    41,    51,    52,    53,    54,    48,
      43,    30,    31,    46,   105,   106,    88,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    19,    45,    43,    46,
      49,    46,    94,    26,    27,    24,    46,    14,    15,    32,
      33,   103,    35,    36,    21,    22,    23,    24,    37,    38,
      39,    40,   133,     5,     6,     7,     8,     9,   118,    45,
      45,   121,    48,   124,    14,    15,    46,   158,   149,    46,
      12,    13,    14,    15,    51,    52,    53,    54,   150,    21,
      22,    23,    24,    25,    16,    17,    18,     3,    37,    38,
      39,    40,    47,    48,    24,    37,    38,    39,    40,    47,
      48,    43,    44,    45,    46,    46,    14,    15,    24,    51,
      52,    53,    54,    21,    22,    23,    24,    25,    14,    15,
      42,    37,    38,    39,    40,    21,    22,    23,    24,    14,
      15,    16,    17,    45,    49,    43,    48,    45,    46,    28,
      29,    47,    48,    51,    52,    53,    54,    24,    19,    45,
      46,    24,    41,    42,    10,    51,    52,    53,    54,    24,
      37,    38,    39,    40,    37,    38,    39,    40,    19,    48,
      47,    47,    48,    47,    47,   108,   109,   110,   111,    47,
      48,    32,    33,    34,    35,    36,   105,   106,   112,   113,
      50,    46,    46,    24,    24,    24,    21,    21,    21,    21,
      21,    21,    21,    21,     9,    48,   173,   158,   121,   118,
      -1,    -1,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    37,    38,    39,    40,    56,    57,    58,
      59,    65,    71,    89,    91,     4,     0,    59,    24,    72,
      73,    91,    43,    46,    61,    11,    41,    19,    45,    48,
      61,    12,    13,    14,    15,    21,    22,    23,    24,    25,
      44,    45,    46,    51,    52,    53,    54,    61,    62,    63,
      64,    65,    66,    67,    71,    74,    76,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    90,    91,    24,
      47,    71,    92,    93,    94,    57,     5,     6,     7,     8,
       9,    60,    24,    74,    24,    73,    46,    79,    46,    80,
      44,    63,    45,    45,    48,    26,    27,    19,    32,    33,
      34,    35,    36,    75,    83,    30,    31,    77,    28,    29,
      41,    42,    14,    15,    16,    17,    18,    45,    46,    24,
      47,    48,    47,    48,    42,    10,    79,    47,    74,    74,
      83,    86,    86,    49,    87,    87,    87,    87,    88,    88,
      83,    83,    83,    47,    94,    93,    24,    57,    47,    48,
      68,    80,    47,    80,    79,    78,    47,    69,    50,    24,
      26,    27,    70,    76,    19,    26,    27,    32,    33,    35,
      36,    24,    24,    47,    24,    21,    21,    21,    21,    66,
      14,    15,    16,    17,    21,    21,    21,    21
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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


/* Prevent warnings from -Wmissing-prototypes.  */

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
        case 30:
#line 145 "icg.y"
    { 
			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
    break;

  case 31:
#line 152 "icg.y"
    {
			fprintf(fp_icg, "ifFalse t%d goto L%d\n", --tempno, ln);
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;
		}
    break;

  case 32:
#line 158 "icg.y"
    {
		
			//expression 3

			switch(exprno){
				case 0:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[(7) - (9)].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[(7) - (9)].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 1:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[(7) - (9)].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[(7) - (9)].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 2:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[(7) - (9)].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[(7) - (9)].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[(7) - (9)].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[(7) - (9)].sval), buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 4:						
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[(7) - (9)].sval), intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[(7) - (9)].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[(7) - (9)].sval), intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[(7) - (9)].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 6:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[(7) - (9)].sval), intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[(7) - (9)].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 7:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[(7) - (9)].sval), intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[(7) - (9)].sval), intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 8:	
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 9:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 10:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;

				case 11:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, secIDbuf, intbuf);
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", secIDbuf, intbuf, buffer);

						fprintf(fp_icg, "%s = %s\n", (yyvsp[(7) - (9)].sval), buffer);
						fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(7) - (9)].sval));
						break;
			}

			exprno = -1;

			//end of expression 3

			fprintf(fp_icg, "goto L%d\n", --ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
    break;

  case 33:
#line 318 "icg.y"
    {  
			// printf("ID %s\n", $1);
			exprno = 0; 

			m = strlen((yyvsp[(1) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 34:
#line 327 "icg.y"
    {  
			exprno = 1;

			m = strlen((yyvsp[(1) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 35:
#line 335 "icg.y"
    {  
			exprno = 2;

			m = strlen((yyvsp[(2) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(2) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 36:
#line 343 "icg.y"
    {  
			exprno = 3; 

			m = strlen((yyvsp[(2) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(2) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 37:
#line 351 "icg.y"
    {  
			exprno = 4; 

			m = strlen((yyvsp[(1) - (3)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (3)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(3) - (3)].sval));
			strncpy(intbuf, (yyvsp[(3) - (3)].sval), m);
			intbuf[m] = '\0';

		}
    break;

  case 38:
#line 364 "icg.y"
    {  
			exprno = 5;
			
			m = strlen((yyvsp[(1) - (3)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (3)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(3) - (3)].sval));
			strncpy(intbuf, (yyvsp[(3) - (3)].sval), m);
			intbuf[m] = '\0';
		}
    break;

  case 39:
#line 376 "icg.y"
    {  
			exprno = 6;
			
			m = strlen((yyvsp[(1) - (3)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (3)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(3) - (3)].sval));
			strncpy(intbuf, (yyvsp[(3) - (3)].sval), m);
			intbuf[m] = '\0';
		}
    break;

  case 40:
#line 388 "icg.y"
    {  
			exprno = 7; 
			
			m = strlen((yyvsp[(1) - (3)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (3)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(3) - (3)].sval));
			strncpy(intbuf, (yyvsp[(3) - (3)].sval), m);
			intbuf[m] = '\0';
		}
    break;

  case 41:
#line 400 "icg.y"
    {  
			exprno = 8;

			m = strlen((yyvsp[(1) - (5)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (5)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(5) - (5)].sval));
			strncpy(intbuf, (yyvsp[(5) - (5)].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[(3) - (5)].sval));
			strncpy(secIDbuf, (yyvsp[(3) - (5)].sval), m);
			secIDbuf[m] = '\0';
		}
    break;

  case 42:
#line 416 "icg.y"
    {  
			exprno = 9;
			
			m = strlen((yyvsp[(1) - (5)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (5)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(5) - (5)].sval));
			strncpy(intbuf, (yyvsp[(5) - (5)].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[(3) - (5)].sval));
			strncpy(secIDbuf, (yyvsp[(3) - (5)].sval), m);
			secIDbuf[m] = '\0';
		}
    break;

  case 43:
#line 432 "icg.y"
    {  
			exprno = 10; 
			
			m = strlen((yyvsp[(1) - (5)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (5)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(5) - (5)].sval));
			strncpy(intbuf, (yyvsp[(5) - (5)].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[(3) - (5)].sval));
			strncpy(secIDbuf, (yyvsp[(3) - (5)].sval), m);
			secIDbuf[m] = '\0';
		}
    break;

  case 44:
#line 448 "icg.y"
    {  
			exprno = 11; 

			m = strlen((yyvsp[(1) - (5)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (5)].sval), m);
			(yyval.sval)[m] = '\0';

			m = strlen((yyvsp[(5) - (5)].sval));
			strncpy(intbuf, (yyvsp[(5) - (5)].sval), m);
			intbuf[m] = '\0';

			m = strlen((yyvsp[(3) - (5)].sval));
			strncpy(secIDbuf, (yyvsp[(3) - (5)].sval), m);
			secIDbuf[m] = '\0';
		}
    break;

  case 51:
#line 481 "icg.y"
    {
			if(tempno > 0){
				fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
				fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
				tempno++;
			}
			else if(tempno == 0){
				fprintf(fp_icg, "%s = %s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval)); 
				fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[(3) - (3)].sval), (yyvsp[(1) - (3)].sval));
		
			}
			
		}
    break;

  case 53:
#line 499 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 54:
#line 501 "icg.y"
    {
			switch(assignop){
				case 0: if(tempno > 0){
							fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
							fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
							tempno++;
						}
						else if(tempno == 0){
							fprintf(fp_icg, "%s = %s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval)); 
							fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[(3) - (3)].sval), (yyvsp[(1) - (3)].sval));							
						}
						break;

				case 1: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
						tempno++;
					
						break;
				case 2:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
						tempno++;

						break;
				case 3:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
						fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
						tempno++;

						break;
				case 4:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
						fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
						tempno++;

						break;
				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[(1) - (3)].sval), '%',(yyvsp[(3) - (3)].sval));
						fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%', (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

						fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
						fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
						tempno++;

						break;
			}
			
			assignop = -1;

			
		}
    break;

  case 55:
#line 584 "icg.y"
    { assignop = 0; 	}
    break;

  case 56:
#line 585 "icg.y"
    { assignop = 1; 	}
    break;

  case 57:
#line 586 "icg.y"
    { assignop = 2; 	}
    break;

  case 58:
#line 587 "icg.y"
    { assignop = 3; 	}
    break;

  case 59:
#line 588 "icg.y"
    { assignop = 4; 	}
    break;

  case 60:
#line 589 "icg.y"
    { assignop = 5; 	}
    break;

  case 61:
#line 594 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval));  }
    break;

  case 62:
#line 596 "icg.y"
    { 
			fprintf(fp_icg,"ifFalse t%d goto L%d\n", --tempno, ln); 
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;		
			ln++;
		}
    break;

  case 63:
#line 603 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[(4) - (4)].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[(4) - (4)].sval), buffer);

			fprintf(fp_icg,"goto L%d\n", ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);

			fprintf(fp_icg,"L%d:\n", --ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
    break;

  case 64:
#line 618 "icg.y"
    {
			
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[(7) - (7)].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[(7) - (7)].sval), buffer);

			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
    break;

  case 67:
#line 638 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 69:
#line 644 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 70:
#line 645 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 71:
#line 646 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 72:
#line 647 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 73:
#line 648 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(2) - (3)].sval)); 	}
    break;

  case 74:
#line 653 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 75:
#line 655 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[(1) - (2)].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[(1) - (2)].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[(1) - (2)].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(1) - (2)].sval));
			
		}
    break;

  case 76:
#line 667 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[(1) - (2)].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[(1) - (2)].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[(1) - (2)].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(1) - (2)].sval));
		}
    break;

  case 77:
#line 681 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 78:
#line 683 "icg.y"
    {
			switch(unaryop){
				case 1: 
						sprintf(buffer,"t%d",tempno++);	
						m = strlen(buffer);
						buffer[m] = '\0';					
						fprintf(fp_icg, "%s = -%s\n",buffer, (yyvsp[(2) - (2)].sval));	
						fprintf(fp_quad, "\t-\t\t%s\t\t  \t\t%s\n", (yyvsp[(2) - (2)].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);						
						break;

				case 4: 
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[(2) - (2)].sval));
						fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[(2) - (2)].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;

				case 5:
						sprintf(buffer,"t%d",tempno++);
						m = strlen(buffer);
						buffer[m] = '\0';
						fprintf(fp_icg, "%s = %s - 1\n",buffer, (yyvsp[(2) - (2)].sval));
						fprintf(fp_quad, "\t-\t\t%s\t\t1 \t\t%s\n", (yyvsp[(2) - (2)].sval), buffer);
						strncpy((yyval.sval), buffer, m+1);		//check out
						break;
			}
			unaryop = -1;
		}
    break;

  case 79:
#line 718 "icg.y"
    {	unaryop = 0; }
    break;

  case 80:
#line 719 "icg.y"
    {	unaryop = 1; }
    break;

  case 81:
#line 720 "icg.y"
    {	unaryop = 2; }
    break;

  case 82:
#line 721 "icg.y"
    {	unaryop = 3; }
    break;

  case 83:
#line 722 "icg.y"
    {	unaryop = 4; }
    break;

  case 84:
#line 723 "icg.y"
    {	unaryop = 5; }
    break;

  case 85:
#line 728 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 86:
#line 730 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s == %s\n", buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t==\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 87:
#line 740 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s != %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t!=\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 88:
#line 753 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 89:
#line 755 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s < %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t<\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 90:
#line 765 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s > %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t>\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 91:
#line 775 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s <= %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t<=\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 92:
#line 785 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s >= %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t>=\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 93:
#line 798 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 94:
#line 800 "icg.y"
    {
			// printf("%s + %s\n", $1, $3 );
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 95:
#line 811 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 97:
#line 826 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 98:
#line 836 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 99:
#line 846 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[(1) - (3)].sval), '%',(yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%',(yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 102:
#line 865 "icg.y"
    {
			paramno++;	
			fprintf(fp_icg, "call(%s, %d)\n", (yyvsp[(1) - (4)].sval), paramno);	
			fprintf(fp_quad, "\tcall\t\t%s\t\t%d\n", (yyvsp[(1) - (4)].sval), paramno);

			paramno = 0;	
		}
    break;

  case 103:
#line 873 "icg.y"
    {
			fprintf(fp_icg, "call(%s, 0)\n", (yyvsp[(1) - (3)].sval));	
			fprintf(fp_quad, "\tcall\t\t%s\t\t0\n", (yyvsp[(1) - (3)].sval));
		}
    break;

  case 104:
#line 882 "icg.y"
    { 
			m = strlen((yyvsp[(1) - (1)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (1)].sval), m);	
			(yyval.sval)[m] = '\0';
		}
    break;

  case 105:
#line 888 "icg.y"
    {
			
		}
    break;

  case 112:
#line 910 "icg.y"
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[(1) - (1)].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[(1) - (1)].sval));
		}
    break;

  case 113:
#line 915 "icg.y"
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[(3) - (3)].sval));	
			
			paramno++; 
		}
    break;


/* Line 1267 of yacc.c.  */
#line 2488 "y.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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


#line 924 "icg.y"



void yyerror(const char *str){
	fflush(stdout);
	printf("Line:%d: ", line);
	printf("\033[1;31m");
	printf("error: ");
	printf("\033[0m");
	printf("%s\n", str);
}


int main(){
	
	fp_icg 	 	= fopen("IntermediateCode/icg.txt", "w");
	fp_quad		= fopen("IntermediateCode/quad.txt", "w");
	printf("\n");
	

	fprintf(fp_quad, "\tOp\t\tArg1\t\tArg2\t\tRes\n");
	fprintf(fp_quad, "------------------------------------------------------------------------\n");

	yyparse();
	
	fclose(fp_icg);
	
	printf("\n\nIntermediate Code\n\n");
	system("cat IntermediateCode/icg.txt");

	printf("\n\nQuadruple Format\n\n");
	
	

	fclose(fp_quad);
	system("cat IntermediateCode/quad.txt");
	
	return 0;
}


