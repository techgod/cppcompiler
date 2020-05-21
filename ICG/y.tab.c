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
     WHILE = 275,
     INC_OP = 276,
     DEC_OP = 277,
     LE_OP = 278,
     GE_OP = 279,
     EQ_OP = 280,
     NE_OP = 281,
     MUL_ASSIGN = 282,
     DIV_ASSIGN = 283,
     MOD_ASSIGN = 284,
     ADD_ASSIGN = 285,
     SUB_ASSIGN = 286,
     CHAR = 287,
     INT = 288,
     FLOAT = 289,
     VOID = 290
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
#define WHILE 275
#define INC_OP 276
#define DEC_OP 277
#define LE_OP 278
#define GE_OP 279
#define EQ_OP 280
#define NE_OP 281
#define MUL_ASSIGN 282
#define DIV_ASSIGN 283
#define MOD_ASSIGN 284
#define ADD_ASSIGN 285
#define SUB_ASSIGN 286
#define CHAR 287
#define INT 288
#define FLOAT 289
#define VOID 290




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
#line 37 "icg.y"
{	
	char sval[300];
}
/* Line 193 of yacc.c.  */
#line 198 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 211 "y.tab.c"

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
#define YYLAST   260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  196

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,    18,     2,     2,
      47,    48,    17,    14,    49,    15,     2,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    46,
      42,    19,    43,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,    53,     2,     2,     2,
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
      41,    54,    55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,    12,    17,    19,    21,    24,    26,
      28,    30,    32,    34,    36,    38,    41,    45,    47,    50,
      52,    54,    57,    60,    63,    68,    75,    79,    81,    83,
      85,    87,    88,    89,    97,    98,    99,   109,   112,   115,
     118,   121,   125,   129,   133,   137,   143,   149,   155,   161,
     163,   165,   167,   169,   171,   175,   179,   181,   183,   187,
     189,   191,   193,   195,   197,   199,   201,   202,   203,   211,
     213,   216,   218,   222,   224,   226,   228,   230,   234,   236,
     239,   242,   244,   247,   249,   251,   253,   255,   257,   259,
     261,   265,   269,   271,   275,   279,   283,   287,   289,   293,
     297,   299,   303,   307,   311,   315,   318,   323,   327,   329,
     334,   339,   343,   345,   349,   352,   354,   356
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    58,    -1,     3,     4,    42,    61,    43,
      58,    -1,     3,     4,    11,    58,    -1,    59,    -1,    60,
      -1,    59,    60,    -1,    66,    -1,    93,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,    44,    45,
      -1,    44,    63,    45,    -1,    64,    -1,    63,    64,    -1,
      66,    -1,    67,    -1,    13,    83,    -1,    94,    46,    -1,
      65,    46,    -1,    12,    47,    10,    48,    -1,    12,    47,
      10,    49,    84,    48,    -1,    75,    76,    46,    -1,    62,
      -1,    83,    -1,    71,    -1,    68,    -1,    -1,    -1,    26,
      47,    69,    84,    70,    48,    67,    -1,    -1,    -1,    25,
      47,    83,    72,    83,    73,    74,    48,    67,    -1,    24,
      27,    -1,    24,    28,    -1,    27,    24,    -1,    28,    24,
      -1,    24,    36,    21,    -1,    24,    37,    21,    -1,    24,
      33,    21,    -1,    24,    34,    21,    -1,    24,    19,    24,
      14,    21,    -1,    24,    19,    24,    15,    21,    -1,    24,
      19,    24,    17,    21,    -1,    24,    19,    24,    16,    21,
      -1,    41,    -1,    38,    -1,    39,    -1,    40,    -1,    77,
      -1,    76,    49,    77,    -1,    24,    19,    78,    -1,    24,
      -1,    80,    -1,    87,    79,    78,    -1,    19,    -1,    36,
      -1,    37,    -1,    33,    -1,    34,    -1,    35,    -1,    89,
      -1,    -1,    -1,    89,    81,    50,    84,    82,    51,    80,
      -1,    46,    -1,    84,    46,    -1,    78,    -1,    84,    49,
      78,    -1,    24,    -1,    21,    -1,    23,    -1,    22,    -1,
      47,    84,    48,    -1,    85,    -1,    86,    27,    -1,    86,
      28,    -1,    86,    -1,    88,    87,    -1,    14,    -1,    15,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    90,
      -1,    89,    31,    90,    -1,    89,    32,    90,    -1,    91,
      -1,    90,    42,    91,    -1,    90,    43,    91,    -1,    90,
      29,    91,    -1,    90,    30,    91,    -1,    92,    -1,    91,
      14,    92,    -1,    91,    15,    92,    -1,    87,    -1,    92,
      17,    87,    -1,    92,    16,    87,    -1,    92,    18,    87,
      -1,    75,    95,    62,    -1,    95,    62,    -1,    95,    47,
      98,    48,    -1,    95,    47,    48,    -1,    24,    -1,    95,
      47,    96,    48,    -1,    95,    47,    98,    48,    -1,    95,
      47,    48,    -1,    97,    -1,    96,    49,    97,    -1,    75,
      24,    -1,    75,    -1,    24,    -1,    98,    49,    24,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    76,    77,    78,    83,    84,    89,    90,
      95,    96,    97,    98,    99,   104,   105,   110,   111,   116,
     117,   118,   119,   120,   125,   126,   131,   136,   137,   138,
     139,   146,   152,   145,   176,   183,   175,   344,   353,   361,
     369,   377,   390,   402,   414,   426,   442,   458,   474,   493,
     494,   495,   496,   501,   502,   507,   533,   538,   539,   623,
     624,   625,   626,   627,   628,   633,   635,   642,   634,   671,
     672,   677,   678,   683,   684,   685,   686,   687,   692,   693,
     705,   720,   721,   757,   758,   759,   760,   761,   762,   767,
     768,   778,   792,   793,   803,   813,   823,   837,   838,   849,
     863,   864,   874,   884,   898,   899,   903,   911,   920,   926,
     930,   931,   936,   937,   942,   943,   948,   953
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
  "FOR", "WHILE", "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "CHAR", "INT", "FLOAT", "VOID", "'<'", "'>'", "'{'", "'}'", "';'", "'('",
  "')'", "','", "'?'", "':'", "'!'", "'~'", "\"INC_OP\"", "\"DEC_OP\"",
  "$accept", "S", "program", "translation_unit", "ext_dec", "libraries",
  "compound_statement", "block_item_list", "block_item", "printstat",
  "declaration", "statement", "iteration_2_statement", "@1", "@2",
  "iteration_statement", "@3", "@4", "expr", "type_specifier",
  "init_declarator_list", "init_declarator", "assignment_expression",
  "assignment_operator", "conditional_expression", "@5", "@6",
  "expression_statement", "expression", "primary_expression",
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
     289,   290,    60,    62,   123,   125,    59,    40,    41,    44,
      63,    58,    33,   126,   291,   292
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    58,    59,    59,    60,    60,
      61,    61,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    65,    65,    66,    67,    67,    67,
      67,    69,    70,    68,    72,    73,    71,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    79,    79,    79,    80,    81,    82,    80,    83,
      83,    84,    84,    85,    85,    85,    85,    85,    86,    86,
      86,    87,    87,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      92,    92,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    96,    96,    97,    97,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     6,     4,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     2,     1,
       1,     2,     2,     2,     4,     6,     3,     1,     1,     1,
       1,     0,     0,     7,     0,     0,     9,     2,     2,     2,
       2,     3,     3,     3,     3,     5,     5,     5,     5,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     7,     1,
       2,     1,     3,     1,     1,     1,     1,     3,     1,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     2,     4,     3,     1,     4,
       4,     3,     1,     3,     2,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,   108,    50,    51,    52,    49,     0,     2,     5,
       6,     8,     0,     9,     0,     0,     1,     7,    56,     0,
      53,     0,     0,     0,   105,     0,     0,     0,    26,     0,
     104,     0,     0,    83,    84,    74,    76,    75,    73,     0,
       0,    15,    69,     0,    85,    86,    87,    88,    27,     0,
      17,     0,    19,    20,    30,    29,     0,    71,    57,    28,
       0,    78,    81,   100,     0,    65,    89,    92,    97,     0,
       0,   116,   111,   115,     0,   112,     0,     4,    10,    11,
      12,    13,    14,     0,    73,    55,    56,    54,     0,    21,
       0,    31,     0,    16,    18,    23,    70,     0,    79,    80,
      59,    62,    63,    64,    60,    61,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,   114,   109,     0,   110,     0,     0,     0,    34,
       0,    77,    72,    58,   100,    90,    91,     0,    95,    96,
      93,    94,    98,    99,   102,   101,   103,   107,     0,   113,
     117,     3,    24,     0,     0,    32,    67,   106,     0,    35,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      33,    68,     0,    37,    38,     0,     0,     0,     0,    39,
      40,     0,     0,    43,    44,    41,    42,    36,     0,     0,
       0,     0,    45,    46,    48,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    83,    48,    49,    50,    51,
      11,    53,    54,   130,   160,    55,   154,   163,   169,    12,
      19,    20,    57,   106,    58,   110,   161,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    13,    69,    14,
      74,    75,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -151
static const yytype_int16 yypact[] =
{
     122,    24,  -151,  -151,  -151,  -151,  -151,    36,  -151,   175,
    -151,  -151,    54,  -151,   -17,     0,  -151,  -151,     7,    56,
    -151,   -17,    -6,    31,  -151,   122,   163,    76,  -151,    63,
    -151,    45,   143,  -151,  -151,  -151,  -151,  -151,    67,    77,
      85,  -151,  -151,    76,  -151,  -151,  -151,  -151,  -151,    95,
    -151,    57,  -151,  -151,  -151,  -151,    63,  -151,  -151,  -151,
      66,  -151,    17,   172,    76,    -7,    51,    38,   176,    97,
     112,  -151,  -151,   149,   -27,  -151,    25,  -151,  -151,  -151,
    -151,  -151,  -151,   161,  -151,  -151,   210,  -151,   222,  -151,
     143,  -151,    78,  -151,  -151,  -151,  -151,    76,  -151,  -151,
    -151,  -151,  -151,  -151,  -151,  -151,    76,  -151,    76,    76,
     183,    76,    76,    76,    76,    76,    76,    76,    76,    76,
    -151,   162,  -151,  -151,   179,  -151,   211,   122,    89,  -151,
      76,  -151,  -151,  -151,  -151,    51,    51,    76,    38,    38,
      38,    38,   176,   176,  -151,  -151,  -151,   187,   132,  -151,
    -151,  -151,  -151,    76,   143,   188,   188,   189,   139,  -151,
     190,   191,  -151,   151,   130,    76,    49,   215,   216,   193,
    -151,  -151,   219,  -151,  -151,   223,   224,   225,   226,  -151,
    -151,   130,   207,  -151,  -151,  -151,  -151,  -151,   227,   228,
     229,   230,  -151,  -151,  -151,  -151
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,   -21,  -151,   243,  -151,    75,  -151,   204,  -151,
     -12,  -150,  -151,  -151,  -151,  -151,  -151,  -151,  -151,   -20,
    -151,   231,   -22,  -151,    90,  -151,  -151,   -32,   -42,  -151,
    -151,   -52,  -151,  -151,   103,   114,   115,  -151,  -151,     1,
    -151,   133,   135
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -112
static const yytype_int16 yytable[] =
{
      89,    92,    56,    73,    77,    85,    31,    32,    33,    34,
      52,    25,   107,    21,   170,    35,    36,    37,    38,    39,
      40,   123,   124,    70,   108,   109,    27,    22,    15,    56,
      23,   187,     3,     4,     5,     6,    16,    52,    22,    41,
      42,    43,    26,   -66,    98,    99,    44,    45,    46,    47,
      70,  -108,   115,   116,  -108,    71,   134,   134,   129,   134,
     134,   134,   134,   134,   134,   144,   145,   146,   172,     3,
       4,     5,     6,   125,   126,   132,   173,   174,    18,    72,
     111,   112,   175,   176,   133,   177,   178,    86,   155,    24,
      33,    34,    88,   113,   114,   156,    30,    35,    36,    37,
      84,    73,    28,    95,    73,    29,   151,    31,    32,    33,
      34,   158,    96,   134,  -108,    97,    35,    36,    37,    38,
      39,    40,   159,    43,    90,     1,   131,    97,    44,    45,
      46,    47,    91,     3,     4,     5,     6,   152,   153,    22,
      93,    42,    43,   120,    33,    34,     2,    44,    45,    46,
      47,    35,    36,    37,    84,    39,    40,    33,    34,   121,
       3,     4,     5,     6,    35,    36,    37,    84,    78,    79,
      80,    81,    82,   122,    22,   166,    42,    43,   167,   168,
     157,   126,    44,    45,    46,    47,    71,   162,    97,    42,
      43,   100,   117,   118,   119,    44,    45,    46,    47,     2,
       3,     4,     5,     6,   127,   101,   102,   103,   104,   105,
     147,   135,   136,     3,     4,     5,     6,     3,     4,     5,
       6,   188,   189,   190,   191,   138,   139,   140,   141,    27,
     142,   143,   128,   137,  -111,   150,  -110,    97,   164,   179,
     180,   181,   165,   182,   183,   184,   185,   186,   192,   193,
     194,   195,    17,    94,     0,   171,   148,   149,     0,     0,
      87
};

static const yytype_int16 yycheck[] =
{
      32,    43,    22,    23,    25,    27,    12,    13,    14,    15,
      22,    11,    64,    12,   164,    21,    22,    23,    24,    25,
      26,    48,    49,    22,    31,    32,    19,    44,     4,    49,
      47,   181,    38,    39,    40,    41,     0,    49,    44,    45,
      46,    47,    42,    50,    27,    28,    52,    53,    54,    55,
      49,    44,    14,    15,    47,    24,   108,   109,    90,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    19,    38,
      39,    40,    41,    48,    49,    97,    27,    28,    24,    48,
      29,    30,    33,    34,   106,    36,    37,    24,   130,    14,
      14,    15,    47,    42,    43,   137,    21,    21,    22,    23,
      24,   121,    46,    46,   124,    49,   127,    12,    13,    14,
      15,   153,    46,   165,    47,    49,    21,    22,    23,    24,
      25,    26,   154,    47,    47,     3,    48,    49,    52,    53,
      54,    55,    47,    38,    39,    40,    41,    48,    49,    44,
      45,    46,    47,    46,    14,    15,    24,    52,    53,    54,
      55,    21,    22,    23,    24,    25,    26,    14,    15,    47,
      38,    39,    40,    41,    21,    22,    23,    24,     5,     6,
       7,     8,     9,    24,    44,    24,    46,    47,    27,    28,
      48,    49,    52,    53,    54,    55,    24,    48,    49,    46,
      47,    19,    16,    17,    18,    52,    53,    54,    55,    24,
      38,    39,    40,    41,    43,    33,    34,    35,    36,    37,
      48,   108,   109,    38,    39,    40,    41,    38,    39,    40,
      41,    14,    15,    16,    17,   111,   112,   113,   114,    19,
     115,   116,    10,    50,    47,    24,    47,    49,    48,    24,
      24,    48,    51,    24,    21,    21,    21,    21,    21,    21,
      21,    21,     9,    49,    -1,   165,   121,   124,    -1,    -1,
      29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    38,    39,    40,    41,    57,    58,    59,
      60,    66,    75,    93,    95,     4,     0,    60,    24,    76,
      77,    95,    44,    47,    62,    11,    42,    19,    46,    49,
      62,    12,    13,    14,    15,    21,    22,    23,    24,    25,
      26,    45,    46,    47,    52,    53,    54,    55,    62,    63,
      64,    65,    66,    67,    68,    71,    75,    78,    80,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    94,
      95,    24,    48,    75,    96,    97,    98,    58,     5,     6,
       7,     8,     9,    61,    24,    78,    24,    77,    47,    83,
      47,    47,    84,    45,    64,    46,    46,    49,    27,    28,
      19,    33,    34,    35,    36,    37,    79,    87,    31,    32,
      81,    29,    30,    42,    43,    14,    15,    16,    17,    18,
      46,    47,    24,    48,    49,    48,    49,    43,    10,    83,
      69,    48,    78,    78,    87,    90,    90,    50,    91,    91,
      91,    91,    92,    92,    87,    87,    87,    48,    98,    97,
      24,    58,    48,    49,    72,    84,    84,    48,    84,    83,
      70,    82,    48,    73,    48,    51,    24,    27,    28,    74,
      67,    80,    19,    27,    28,    33,    34,    36,    37,    24,
      24,    48,    24,    21,    21,    21,    21,    67,    14,    15,
      16,    17,    21,    21,    21,    21
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
        case 31:
#line 146 "icg.y"
    {
		fprintf(fp_icg,"L%d:\n", ln);
		fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
		ln++;
	}
    break;

  case 32:
#line 152 "icg.y"
    {
			
			fprintf(fp_icg, "ifFalse t%d goto L%d\n", --tempno, ln);
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;
		}
    break;

  case 33:
#line 159 "icg.y"
    {
			//end of expression 3

			fprintf(fp_icg, "goto L%d\n", --ln);
			fprintf(fp_quad, "\tgoto\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

			fprintf(fp_icg, "L%d:\n", ln);
			fprintf(fp_quad, "\t Label\t\t  \t\t  \t\tL%d\n", ln);
			ln++;	
		}
    break;

  case 34:
#line 176 "icg.y"
    { 
			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
    break;

  case 35:
#line 183 "icg.y"
    {
			fprintf(fp_icg, "ifFalse t%d goto L%d\n", --tempno, ln);
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;
		}
    break;

  case 36:
#line 189 "icg.y"
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
			fprintf(fp_quad, "\t Label\t\t  \t\t  \t\tL%d\n", ln);
			ln++;

		}
    break;

  case 37:
#line 345 "icg.y"
    {  
			// printf("ID %s\n", $1);
			exprno = 0; 

			m = strlen((yyvsp[(1) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 38:
#line 354 "icg.y"
    {  
			exprno = 1;

			m = strlen((yyvsp[(1) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 39:
#line 362 "icg.y"
    {  
			exprno = 2;

			m = strlen((yyvsp[(2) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(2) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 40:
#line 370 "icg.y"
    {  
			exprno = 3; 

			m = strlen((yyvsp[(2) - (2)].sval));
			strncpy((yyval.sval), (yyvsp[(2) - (2)].sval), m);
			(yyval.sval)[m] = '\0';
		}
    break;

  case 41:
#line 378 "icg.y"
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

  case 42:
#line 391 "icg.y"
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

  case 43:
#line 403 "icg.y"
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

  case 44:
#line 415 "icg.y"
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

  case 45:
#line 427 "icg.y"
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

  case 46:
#line 443 "icg.y"
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

  case 47:
#line 459 "icg.y"
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

  case 48:
#line 475 "icg.y"
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

  case 55:
#line 508 "icg.y"
    {
			if(*(yyvsp[(3) - (3)].sval)!='\0')
			{
				fprintf(fp_icg, "%s = %s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval)); 
				fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[(3) - (3)].sval), (yyvsp[(1) - (3)].sval));
			}
			else
			{
				fprintf(fp_icg, "%s = t%d\n", (yyvsp[(1) - (3)].sval), --tempno); 
				fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, (yyvsp[(1) - (3)].sval));
				tempno++;
			}
			/*
			if(tempno > 0){
				fprintf(fp_icg, "%s = t%d\n", $1, --tempno); 
				fprintf(fp_quad, "\t=\t\tt%d\t\t  \t\t%s\n", tempno, $1);
				tempno++;
			}
			else if(tempno == 0){
				fprintf(fp_icg, "%s = %s\n", $1, $3); 
				fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", $3, $1);
			}
			*/
			
		}
    break;

  case 57:
#line 538 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 58:
#line 540 "icg.y"
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

  case 59:
#line 623 "icg.y"
    { assignop = 0; 	}
    break;

  case 60:
#line 624 "icg.y"
    { assignop = 1; 	}
    break;

  case 61:
#line 625 "icg.y"
    { assignop = 2; 	}
    break;

  case 62:
#line 626 "icg.y"
    { assignop = 3; 	}
    break;

  case 63:
#line 627 "icg.y"
    { assignop = 4; 	}
    break;

  case 64:
#line 628 "icg.y"
    { assignop = 5; 	}
    break;

  case 65:
#line 633 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval));  }
    break;

  case 66:
#line 635 "icg.y"
    { 
			fprintf(fp_icg,"ifFalse t%d goto L%d\n", --tempno, ln); 
			fprintf(fp_quad, "\tifFalse\t\tt%d\t\t  \t\tL%d\n", tempno, ln);
			tempno++;		
			ln++;
		}
    break;

  case 67:
#line 642 "icg.y"
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

  case 68:
#line 657 "icg.y"
    {
			
			fprintf(fp_icg, "%s = %s\n", buffer, (yyvsp[(7) - (7)].sval));
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", (yyvsp[(7) - (7)].sval), buffer);

			fprintf(fp_icg,"L%d:\n", ln);
			fprintf(fp_quad, "\tLabel\t\t  \t\t  \t\tL%d\n", ln);
			ln++;
		}
    break;

  case 71:
#line 677 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 73:
#line 683 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 74:
#line 684 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 75:
#line 685 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 76:
#line 686 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); 	}
    break;

  case 77:
#line 687 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(2) - (3)].sval)); 	}
    break;

  case 78:
#line 692 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 79:
#line 694 "icg.y"
    {
			sprintf(buffer,"t%d ",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s + 1\n",buffer, (yyvsp[(1) - (2)].sval));
			fprintf(fp_quad, "\t+\t\t%s\t\t1 \t\t%s\n", (yyvsp[(1) - (2)].sval), buffer);

			fprintf(fp_icg, "%s = %s\n", (yyvsp[(1) - (2)].sval), buffer);
			fprintf(fp_quad, "\t=\t\t%s\t\t  \t\t%s\n", buffer, (yyvsp[(1) - (2)].sval));
			
		}
    break;

  case 80:
#line 706 "icg.y"
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

  case 81:
#line 720 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 82:
#line 722 "icg.y"
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

  case 83:
#line 757 "icg.y"
    {	unaryop = 0; }
    break;

  case 84:
#line 758 "icg.y"
    {	unaryop = 1; }
    break;

  case 85:
#line 759 "icg.y"
    {	unaryop = 2; }
    break;

  case 86:
#line 760 "icg.y"
    {	unaryop = 3; }
    break;

  case 87:
#line 761 "icg.y"
    {	unaryop = 4; }
    break;

  case 88:
#line 762 "icg.y"
    {	unaryop = 5; }
    break;

  case 89:
#line 767 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 90:
#line 769 "icg.y"
    {
			sprintf(buffer,"t %d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s == %s\n", buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t==\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 91:
#line 779 "icg.y"
    {
			sprintf(buffer,"t %d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s != %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t!=\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 92:
#line 792 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 93:
#line 794 "icg.y"
    {
			sprintf(buffer,"t %d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s < %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t<\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 94:
#line 804 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s > %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t>\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 95:
#line 814 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s <= %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t<=\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 96:
#line 824 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s >= %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t>=\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 97:
#line 837 "icg.y"
    {	strcpy((yyval.sval), (yyvsp[(1) - (1)].sval)); }
    break;

  case 98:
#line 839 "icg.y"
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

  case 99:
#line 850 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s - %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t-\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 101:
#line 865 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s * %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t*\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 102:
#line 875 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s / %s\n",buffer, (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t/\t\t%s\t\t%s\t\t%s\n", (yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 103:
#line 885 "icg.y"
    {
			sprintf(buffer,"t%d",tempno++);
			m = strlen(buffer);
			buffer[m] = '\0';
			fprintf(fp_icg, "%s = %s %c %s\n",buffer, (yyvsp[(1) - (3)].sval), '%',(yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\t%c\t\t%s\t\t%s\t\t%s\n", '%',(yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].sval), buffer);

			strncpy((yyval.sval), buffer, m+1);		//check out
		}
    break;

  case 106:
#line 904 "icg.y"
    {
			paramno++;	
			fprintf(fp_icg, "call(%s, %d)\n", (yyvsp[(1) - (4)].sval), paramno);	
			fprintf(fp_quad, "\tcall\t\t%s\t\t%d\n", (yyvsp[(1) - (4)].sval), paramno);

			paramno = 0;	
		}
    break;

  case 107:
#line 912 "icg.y"
    {
			fprintf(fp_icg, "call(%s, 0)\n", (yyvsp[(1) - (3)].sval));	
			fprintf(fp_quad, "\tcall\t\t%s\t\t0\n", (yyvsp[(1) - (3)].sval));
		}
    break;

  case 108:
#line 921 "icg.y"
    { 
			m = strlen((yyvsp[(1) - (1)].sval));
			strncpy((yyval.sval), (yyvsp[(1) - (1)].sval), m);	
			(yyval.sval)[m] = '\0';
		}
    break;

  case 109:
#line 927 "icg.y"
    {
			
		}
    break;

  case 116:
#line 949 "icg.y"
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[(1) - (1)].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[(1) - (1)].sval));
		}
    break;

  case 117:
#line 954 "icg.y"
    {
			fprintf(fp_icg, "param %s\n", (yyvsp[(3) - (3)].sval));
			fprintf(fp_quad, "\tparam\t\t%s\n", (yyvsp[(3) - (3)].sval));	
			
			paramno++; 
		}
    break;


/* Line 1267 of yacc.c.  */
#line 2542 "y.tab.c"
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


#line 963 "icg.y"



void yyerror(const char *str){
	fflush(stdout);
	printf("Line:%d:", line);
	printf("\033[1;31m");
	printf("error: ");
	printf("\033[0m");
	printf("%s\n", str);
}


int main(){
	
	fp_icg 	 	= fopen("Outputs/icg.txt", "w");
	fp_quad		= fopen("Outputs/quad.txt", "w");
	
	fprintf(fp_quad, "\tOp\t\tArg1\t\tArg2\t\tRes\n");
	fprintf(fp_quad, "------------------------------------------------------------------------\n");

	yyparse();
	
	fclose(fp_icg);
	
	//printf("Intermediate Code\n\n");

	//system("cat Outputs/icg.txt");	
	fclose(fp_quad);
	
	return 0;
}


