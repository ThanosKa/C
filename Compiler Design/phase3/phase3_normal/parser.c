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
     INTEGER = 258,
     REAL = 259,
     ID = 260,
     STRING = 261,
     MULTI_COMMENT = 262,
     MULTI_COMMENT_NEVER_CLOSED = 263,
     NESTED_INSIDE_MULTI_COMMENT = 264,
     STRING_NEVER_CLOSED = 265,
     WARNING_STRING = 266,
     ASSIGNMENT = 267,
     ADD = 268,
     SUB = 269,
     SHARP = 270,
     SLASH = 271,
     PERCENT = 272,
     EQUAL = 273,
     NOT_EQUAL = 274,
     PLUS_PLUS = 275,
     MINUS_MINUS = 276,
     LESS = 277,
     GREATER = 278,
     GREATER_OR_EQUAL = 279,
     LESS_OR_EQUAL = 280,
     AND = 281,
     OR = 282,
     LEFT_CURLY_BRACKET = 283,
     RIGHT_CURLY_BRACKET = 284,
     LEFT_SQUARE_BRACKET = 285,
     RIGHT_SQUARE_BRACKET = 286,
     LEFT_PARENTHESES = 287,
     RIGHT_PARENTHESES = 288,
     SEMICOLON = 289,
     COMMA = 290,
     COLON = 291,
     DOUBLE_COLON = 292,
     DOT = 293,
     DOUBLE_DOT = 294,
     IF = 295,
     ELSE = 296,
     WHILE = 297,
     FOR = 298,
     FUNCTION = 299,
     RETURN = 300,
     BREAK = 301,
     CONTINUE = 302,
     NOT = 303,
     LOCAL_KEYWORD = 304,
     TRUE = 305,
     FALSE = 306,
     NIL = 307,
     LINE_COMMENT = 308,
     UMINUS = 309
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define ID 260
#define STRING 261
#define MULTI_COMMENT 262
#define MULTI_COMMENT_NEVER_CLOSED 263
#define NESTED_INSIDE_MULTI_COMMENT 264
#define STRING_NEVER_CLOSED 265
#define WARNING_STRING 266
#define ASSIGNMENT 267
#define ADD 268
#define SUB 269
#define SHARP 270
#define SLASH 271
#define PERCENT 272
#define EQUAL 273
#define NOT_EQUAL 274
#define PLUS_PLUS 275
#define MINUS_MINUS 276
#define LESS 277
#define GREATER 278
#define GREATER_OR_EQUAL 279
#define LESS_OR_EQUAL 280
#define AND 281
#define OR 282
#define LEFT_CURLY_BRACKET 283
#define RIGHT_CURLY_BRACKET 284
#define LEFT_SQUARE_BRACKET 285
#define RIGHT_SQUARE_BRACKET 286
#define LEFT_PARENTHESES 287
#define RIGHT_PARENTHESES 288
#define SEMICOLON 289
#define COMMA 290
#define COLON 291
#define DOUBLE_COLON 292
#define DOT 293
#define DOUBLE_DOT 294
#define IF 295
#define ELSE 296
#define WHILE 297
#define FOR 298
#define FUNCTION 299
#define RETURN 300
#define BREAK 301
#define CONTINUE 302
#define NOT 303
#define LOCAL_KEYWORD 304
#define TRUE 305
#define FALSE 306
#define NIL 307
#define LINE_COMMENT 308
#define UMINUS 309




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #include "quad.h"   
    int yylex(void);
    void yyerror(char* yaccProvidedMessage); 

    void check_term ();
    expr* arithmetic_expr(expr* t, expr* t1, int t2, expr* t3);
    expr* compare_expr(expr* t, expr* t1, int t2, expr* t3);
    expr* bool_expr(expr* t, expr* t1, int t2, expr* t3);

    extern int yylineno;
    extern char* yytext;
    extern FILE* yyin;

    unsigned int scope = 0;
    unsigned int dollars_counter = 0;
    unsigned int state = 0;
    unsigned int loopcounter = 0;
    unsigned int is_member = 0;
    SymbolTableEntry* sym_temp;


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
#line 25 "parser.y"
{ 
    unsigned unsVal;
    int intVal; 
    double realVal; 
    char* strVal;
    struct expr* exprVal;
    struct SymbolTableEntry* symbVal;
    struct call_c* callVal;
    struct stmt_t* stmtVal;
    struct for_s*  forVal;
}
/* Line 193 of yacc.c.  */
#line 238 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 251 "parser.c"

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
#define YYFINAL  82
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   782

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNRULES -- Number of states.  */
#define YYNSTATES  206

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    13,    16,    18,
      20,    22,    24,    27,    30,    32,    34,    36,    38,    40,
      42,    44,    48,    52,    56,    60,    64,    68,    72,    76,
      80,    84,    88,    92,    96,    98,   102,   105,   108,   111,
     114,   117,   120,   122,   126,   128,   130,   132,   136,   138,
     140,   143,   146,   148,   152,   157,   161,   166,   171,   174,
     181,   183,   185,   189,   194,   201,   205,   211,   213,   217,
     218,   222,   226,   228,   232,   238,   239,   243,   244,   249,
     251,   252,   255,   256,   261,   263,   267,   269,   271,   273,
     275,   277,   279,   280,   284,   285,   289,   290,   295,   297,
     300,   305,   307,   311,   315,   316,   317,   325,   326,   327,
     331,   339,   343,   346,   348,   350,   352,   354,   356
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    -1,    58,    -1,    57,    58,
      -1,     1,    -1,    59,    34,    -1,    88,    -1,    91,    -1,
      98,    -1,    99,    -1,    46,    34,    -1,    47,    34,    -1,
      73,    -1,    81,    -1,   101,    -1,   102,    -1,   100,    -1,
      34,    -1,    61,    -1,    59,    13,    59,    -1,    59,    14,
      59,    -1,    59,    15,    59,    -1,    59,    17,    59,    -1,
      59,    16,    59,    -1,    59,    23,    59,    -1,    59,    24,
      59,    -1,    59,    22,    59,    -1,    59,    25,    59,    -1,
      59,    18,    59,    -1,    59,    19,    59,    -1,    59,    26,
      59,    -1,    59,    27,    59,    -1,    60,    -1,    32,    59,
      33,    -1,    14,    59,    -1,    48,    59,    -1,    20,    63,
      -1,    63,    20,    -1,    21,    63,    -1,    63,    21,    -1,
      62,    -1,    63,    12,    59,    -1,    63,    -1,    65,    -1,
      70,    -1,    32,    81,    33,    -1,    82,    -1,     5,    -1,
      49,     5,    -1,    37,     5,    -1,    64,    -1,    63,    38,
       5,    -1,    63,    30,    59,    31,    -1,    65,    38,     5,
      -1,    65,    30,    59,    31,    -1,    65,    32,    69,    33,
      -1,    63,    66,    -1,    32,    81,    33,    32,    69,    33,
      -1,    67,    -1,    68,    -1,    32,    69,    33,    -1,     5,
      32,    59,    33,    -1,     5,    32,    69,    35,    59,    33,
      -1,     5,    32,    33,    -1,    39,     5,    32,    69,    33,
      -1,    59,    -1,    69,    35,    59,    -1,    -1,    30,    69,
      31,    -1,    30,    71,    31,    -1,    72,    -1,    71,    35,
      72,    -1,    28,    59,    36,    59,    29,    -1,    -1,    28,
      74,    29,    -1,    -1,    28,    75,    57,    29,    -1,     5,
      -1,    -1,    44,    76,    -1,    -1,    32,    79,    83,    33,
      -1,    73,    -1,    77,    78,    80,    -1,     3,    -1,     4,
      -1,     6,    -1,    52,    -1,    50,    -1,    51,    -1,    -1,
       5,    84,    85,    -1,    -1,    85,    35,     5,    -1,    -1,
      40,    32,    59,    33,    -1,    41,    -1,    86,    58,    -1,
      86,    58,    87,    58,    -1,    42,    -1,    32,    59,    33,
      -1,    89,    90,    58,    -1,    -1,    -1,    43,    32,    69,
      34,    93,    59,    34,    -1,    -1,    -1,    95,    58,    96,
      -1,    94,    92,    69,    33,    92,    97,    92,    -1,    45,
      59,    34,    -1,    45,    34,    -1,    53,    -1,     7,    -1,
       9,    -1,    11,    -1,     8,    -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   115,   115,   116,   119,   124,   153,   156,   160,   164,
     168,   172,   176,   187,   198,   202,   206,   210,   214,   218,
     224,   228,   232,   236,   240,   244,   248,   252,   256,   260,
     264,   268,   272,   276,   280,   286,   290,   297,   304,   319,
     335,   350,   366,   372,   387,   391,   392,   396,   401,   407,
     438,   456,   466,   472,   476,   483,   484,   487,   491,   501,
     509,   513,   519,   526,   527,   528,   531,   540,   545,   552,
     555,   568,   583,   588,   595,   602,   602,   612,   612,   625,
     629,   640,   667,   667,   675,   682,   692,   696,   700,   704,
     705,   709,   715,   715,   723,   726,   738,   741,   749,   755,
     759,   766,   769,   776,   785,   791,   796,   804,   807,   810,
     816,   827,   832,   839,   840,   841,   844,   847,   848
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "ID", "STRING",
  "MULTI_COMMENT", "MULTI_COMMENT_NEVER_CLOSED",
  "NESTED_INSIDE_MULTI_COMMENT", "STRING_NEVER_CLOSED", "WARNING_STRING",
  "ASSIGNMENT", "ADD", "SUB", "SHARP", "SLASH", "PERCENT", "EQUAL",
  "NOT_EQUAL", "PLUS_PLUS", "MINUS_MINUS", "LESS", "GREATER",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "AND", "OR", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "SEMICOLON", "COMMA", "COLON",
  "DOUBLE_COLON", "DOT", "DOUBLE_DOT", "IF", "ELSE", "WHILE", "FOR",
  "FUNCTION", "RETURN", "BREAK", "CONTINUE", "NOT", "LOCAL_KEYWORD",
  "TRUE", "FALSE", "NIL", "LINE_COMMENT", "UMINUS", "$accept", "program",
  "stmtp", "stmt", "expr", "term", "assignexpr", "primary", "lvalue",
  "member", "call", "callsuffix", "normcall", "methodcall", "elist",
  "objectdef", "indexed", "indexedelem", "block", "@1", "@2", "funcname",
  "funcprefix", "funcargs", "@3", "funcbody", "funcdef", "const", "idlist",
  "@4", "idlist_case_commaid", "ifprefix", "elseprefix", "ifstmt",
  "whilestart", "whilecond", "whilestmt", "N", "M", "forprefix",
  "loopstart", "loopend", "loopstmt", "forstmt", "returnstmt", "comment",
  "warning", "string_comment_error", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    57,    57,    57,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    60,    60,    60,    60,    60,
      60,    60,    60,    61,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    64,    64,    64,    64,    65,    65,    65,
      66,    66,    67,    67,    67,    67,    68,    69,    69,    69,
      70,    70,    71,    71,    72,    74,    73,    75,    73,    76,
      76,    77,    79,    78,    80,    81,    82,    82,    82,    82,
      82,    82,    84,    83,    83,    85,    85,    86,    87,    88,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    99,   100,   100,   100,   101,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     1,     1,     3,     1,     1,
       2,     2,     1,     3,     4,     3,     4,     4,     2,     6,
       1,     1,     3,     4,     6,     3,     5,     1,     3,     0,
       3,     3,     1,     3,     5,     0,     3,     0,     4,     1,
       0,     2,     0,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     3,     0,     4,     1,     2,
       4,     1,     3,     3,     0,     0,     7,     0,     0,     3,
       7,     3,     2,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,    86,    87,    49,    88,   114,   117,   115,   118,
     116,     0,     0,     0,    77,    69,     0,    19,     0,     0,
     101,     0,    80,     0,     0,     0,     0,     0,    90,    91,
      89,   113,     0,     2,     4,     0,    34,    20,    42,    44,
      52,    45,    46,    14,     0,    15,    48,     0,     8,     0,
       9,   104,    10,    11,    18,    16,    17,    36,     0,    38,
       0,    40,     0,     0,     0,    67,     0,     0,    72,     0,
       0,    51,     0,    69,    79,    81,   112,     0,    12,    13,
      37,    50,     1,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
      39,    41,     0,    69,     0,     0,    58,    60,    61,     0,
      69,     0,    82,     0,    99,     0,     0,    69,     0,    76,
       0,     0,    70,     0,    71,     0,    35,    47,     0,     0,
     111,    21,    22,    23,    25,    24,    30,    31,    28,    26,
      27,    29,    32,    33,    69,    43,     0,     0,    53,     0,
       0,     0,    55,    94,    84,    85,    98,     0,     0,   103,
       0,     0,    78,     0,    68,    73,    69,    97,   105,    65,
      67,     0,    54,    62,    69,    56,    57,    92,     0,   100,
     102,   104,     0,     0,     0,    63,     0,     0,    96,    83,
     107,    74,    59,     0,    68,    66,    93,     0,   104,   106,
      64,     0,   108,   110,    95,   109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   106,   107,   108,    66,    42,    67,    68,    43,    62,
      63,    75,    44,   113,   153,   155,    45,    46,   178,   188,
     196,    47,   157,    48,    49,   116,    50,   117,   184,    51,
     197,   205,   198,    52,    53,    54,    55,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -173
static const yytype_int16 yypact[] =
{
     140,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,
    -173,   474,    -3,    -3,    -8,    19,   346,  -173,    22,     0,
    -173,     4,    49,   396,    21,    26,   474,    88,  -173,  -173,
    -173,  -173,    97,   295,  -173,   529,  -173,  -173,  -173,    96,
    -173,   -19,  -173,  -173,    68,  -173,  -173,   295,  -173,    71,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173,    61,     5,
     -19,     5,    78,   193,   474,   755,   -17,   -15,  -173,   595,
      76,  -173,   474,   474,  -173,  -173,  -173,   551,  -173,  -173,
    -173,  -173,  -173,  -173,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,  -173,    79,   474,
    -173,  -173,   474,   474,   105,   108,  -173,  -173,  -173,   474,
     474,   109,  -173,    87,    77,   474,   295,   474,    86,  -173,
     244,   514,  -173,   474,  -173,   110,  -173,    93,   616,   -27,
    -173,    42,    42,  -173,  -173,  -173,   340,   340,   107,   107,
     107,   107,   390,   390,   435,   755,   700,    -5,  -173,   104,
     719,    17,  -173,   132,  -173,  -173,  -173,   295,   637,  -173,
      30,    93,  -173,   474,   755,  -173,   474,  -173,  -173,  -173,
     658,   118,  -173,  -173,   474,  -173,  -173,  -173,   106,  -173,
    -173,  -173,   738,    31,   474,  -173,   474,    54,  -173,  -173,
    -173,  -173,  -173,   573,   679,  -173,   121,   295,  -173,  -173,
    -173,   137,  -173,  -173,  -173,  -173
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -173,  -173,    94,   -30,   -11,  -173,  -173,  -173,    29,  -173,
      83,  -173,  -173,  -173,   -72,  -173,  -173,    33,    46,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,   -10,  -173,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -172,  -173,  -173,
    -173,  -173,  -173,  -173,  -173,  -173,  -173,  -173
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -76
static const yytype_int16 yytable[] =
{
      57,   129,     4,    83,    65,    69,    70,   168,   123,   190,
      98,   109,    77,   110,   122,    80,   124,   114,   123,   111,
     125,   -75,     2,     3,     4,     5,   203,    71,   173,    58,
     123,   147,    72,    11,    18,   102,    73,   103,   151,    12,
      13,    59,    61,   104,   105,   160,    27,    64,   118,    15,
     176,    16,   123,   121,    74,    78,    18,    86,    87,    88,
      79,   128,    65,   181,   192,   123,   123,    26,    27,    28,
      29,    30,   171,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   159,   195,   145,   123,
      83,   146,    65,    81,   183,    60,    60,    82,   150,    65,
     112,    98,   187,   115,   158,    22,    65,   119,    99,   127,
     148,   144,   164,   149,   152,    14,   100,   101,   156,   161,
      84,    85,    86,    87,    88,   166,   102,   179,   103,   -76,
     -76,   -76,   -76,   170,   104,   105,   174,   177,    64,   189,
      -3,     1,   204,     2,     3,     4,     5,     6,     7,     8,
       9,    10,   182,   186,    11,    65,   201,   120,   165,   154,
      12,    13,     0,    65,     0,     0,     0,   202,    14,     0,
      15,     0,    16,   193,    17,   194,     0,    18,     0,     0,
      19,     0,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,    11,     0,     0,
       0,     0,     0,    12,    13,     0,     0,     0,     0,     0,
       0,    14,     0,    15,     0,    16,     0,    17,     0,     0,
      18,     0,     0,    19,     0,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,    11,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,    14,   162,    15,     0,    16,     0,    17,     0,
       0,    18,     0,     0,    19,     0,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,    18,     0,     0,    19,     0,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,     2,
       3,     4,     5,    84,    85,    86,    87,    88,   -76,   -76,
      11,     0,    91,    92,    93,    94,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    16,     0,
       0,     0,     0,    18,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,    26,    27,    28,    29,    30,     2,
       3,     4,     5,    84,    85,    86,    87,    88,    89,    90,
      11,     0,    91,    92,    93,    94,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,    16,     0,
      76,     0,     0,    18,     0,     0,     0,     0,     2,     3,
       4,     5,     0,     0,    26,    27,    28,    29,    30,    11,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    15,     0,    16,   169,     0,
       0,     0,    18,     0,     0,     0,     0,     2,     3,     4,
       5,     0,     0,    26,    27,    28,    29,    30,    11,     0,
       0,     0,     0,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     0,    16,     0,     0,     0,
       0,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,    30,    84,    85,    86,
      87,    88,    89,    90,     0,     0,    91,    92,    93,    94,
      95,    96,    84,    85,    86,    87,    88,    89,    90,     0,
     163,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,     0,    97,    84,    85,    86,    87,    88,    89,
      90,     0,     0,    91,    92,    93,    94,    95,    96,     0,
       0,     0,     0,     0,     0,   130,    84,    85,    86,    87,
      88,    89,    90,     0,     0,    91,    92,    93,    94,    95,
      96,     0,     0,     0,     0,     0,     0,   199,    84,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
      94,    95,    96,     0,     0,     0,     0,     0,   126,    84,
      85,    86,    87,    88,    89,    90,     0,     0,    91,    92,
      93,    94,    95,    96,     0,     0,     0,     0,     0,   167,
      84,    85,    86,    87,    88,    89,    90,     0,     0,    91,
      92,    93,    94,    95,    96,     0,     0,     0,     0,     0,
     180,    84,    85,    86,    87,    88,    89,    90,     0,     0,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,   185,    84,    85,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
       0,     0,   200,    84,    85,    86,    87,    88,    89,    90,
       0,     0,    91,    92,    93,    94,    95,    96,     0,     0,
       0,   172,    84,    85,    86,    87,    88,    89,    90,     0,
       0,    91,    92,    93,    94,    95,    96,     0,     0,     0,
     175,    84,    85,    86,    87,    88,    89,    90,     0,     0,
      91,    92,    93,    94,    95,    96,     0,   191,    84,    85,
      86,    87,    88,    89,    90,     0,     0,    91,    92,    93,
      94,    95,    96
};

static const yytype_int16 yycheck[] =
{
      11,    73,     5,    33,    15,    16,    16,    34,    35,   181,
       5,    30,    23,    32,    31,    26,    31,    47,    35,    38,
      35,    29,     3,     4,     5,     6,   198,     5,    33,    32,
      35,   103,    32,    14,    37,    30,    32,    32,   110,    20,
      21,    12,    13,    38,    39,   117,    49,    28,    58,    30,
      33,    32,    35,    64,     5,    34,    37,    15,    16,    17,
      34,    72,    73,    33,    33,    35,    35,    48,    49,    50,
      51,    52,   144,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,   116,    33,    99,    35,
     120,   102,   103,     5,   166,    12,    13,     0,   109,   110,
      32,     5,   174,    32,   115,    44,   117,    29,    12,    33,
       5,    32,   123,     5,     5,    28,    20,    21,    41,    33,
      13,    14,    15,    16,    17,    32,    30,   157,    32,    22,
      23,    24,    25,   144,    38,    39,    32,     5,    28,    33,
       0,     1,     5,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   163,    35,    14,   166,    35,    63,   125,   113,
      20,    21,    -1,   174,    -1,    -1,    -1,   197,    28,    -1,
      30,    -1,    32,   184,    34,   186,    -1,    37,    -1,    -1,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    32,    -1,    34,    -1,    -1,
      37,    -1,    -1,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,    32,    -1,    34,    -1,
      -1,    37,    -1,    -1,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    30,    -1,    32,    -1,    34,
      -1,    -1,    37,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     3,
       4,     5,     6,    13,    14,    15,    16,    17,    18,    19,
      14,    -1,    22,    23,    24,    25,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,     3,
       4,     5,     6,    13,    14,    15,    16,    17,    18,    19,
      14,    -1,    22,    23,    24,    25,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    -1,
      34,    -1,    -1,    37,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    48,    49,    50,    51,    52,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    48,    49,    50,    51,    52,    14,    -1,
      -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    25,
      26,    27,    13,    14,    15,    16,    17,    18,    19,    -1,
      36,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    34,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    33,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      33,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    33,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    33,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    31,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      31,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    26,    27,    -1,    29,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    14,    20,    21,    28,    30,    32,    34,    37,    40,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    70,    73,    77,    81,    82,    86,    88,    89,
      91,    94,    98,    99,   100,   101,   102,    59,    32,    63,
      65,    63,    74,    75,    28,    59,    69,    71,    72,    59,
      81,     5,    32,    32,     5,    76,    34,    59,    34,    34,
      59,     5,     0,    58,    13,    14,    15,    16,    17,    18,
      19,    22,    23,    24,    25,    26,    27,    34,     5,    12,
      20,    21,    30,    32,    38,    39,    66,    67,    68,    30,
      32,    38,    32,    78,    58,    32,    90,    92,    81,    29,
      57,    59,    31,    35,    31,    35,    33,    33,    59,    69,
      34,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    32,    59,    59,    69,     5,     5,
      59,    69,     5,    79,    73,    80,    41,    87,    59,    58,
      69,    33,    29,    36,    59,    72,    32,    33,    34,    33,
      59,    69,    31,    33,    32,    31,    33,     5,    83,    58,
      33,    33,    59,    69,    93,    33,    35,    69,    84,    33,
      92,    29,    33,    59,    59,    33,    85,    95,    97,    34,
      33,    35,    58,    92,     5,    96
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
        case 2:
#line 115 "parser.y"
    {fprintf(stderr, "program -> stmtp\n");}
    break;

  case 4:
#line 119 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        reset_temp_var_scope();
        fprintf(stderr, "stmtp -> stmt\n");
    }
    break;

  case 5:
#line 124 "parser.y"
    {
        (yyval.stmtVal) = malloc(sizeof(struct stmt_t));
        
        if ((yyvsp[(1) - (2)].stmtVal) && (yyvsp[(2) - (2)].stmtVal)){
            if ((yyvsp[(1) - (2)].stmtVal)->breakList && (yyvsp[(2) - (2)].stmtVal)->breakList){
                (yyval.stmtVal)->breakList = mergelist((yyvsp[(1) - (2)].stmtVal)->breakList, (yyvsp[(2) - (2)].stmtVal)->breakList);
            } else if ((yyvsp[(1) - (2)].stmtVal)->breakList && !(yyvsp[(2) - (2)].stmtVal)->breakList){
                (yyval.stmtVal)->breakList = (yyvsp[(2) - (2)].stmtVal)->breakList;
            } else if (!(yyvsp[(1) - (2)].stmtVal)->breakList && (yyvsp[(2) - (2)].stmtVal)->breakList){
                (yyval.stmtVal)->breakList = (yyvsp[(1) - (2)].stmtVal)->breakList;
            } else {
                make_stmt((yyval.stmtVal));
            }
        }
        
        if ((yyvsp[(1) - (2)].stmtVal) && (yyvsp[(2) - (2)].stmtVal)){
            if ((yyvsp[(1) - (2)].stmtVal)->contList && (yyvsp[(2) - (2)].stmtVal)->contList){
                (yyval.stmtVal)->contList = mergelist((yyvsp[(1) - (2)].stmtVal)->contList, (yyvsp[(2) - (2)].stmtVal)->contList);
            } else if ((yyvsp[(1) - (2)].stmtVal)->contList && !(yyvsp[(2) - (2)].stmtVal)->contList){
                (yyval.stmtVal)->contList = (yyvsp[(2) - (2)].stmtVal)->contList;
            } else if (!(yyvsp[(1) - (2)].stmtVal)->breakList && (yyvsp[(2) - (2)].stmtVal)->breakList){
                (yyval.stmtVal)->contList = (yyvsp[(1) - (2)].stmtVal)->contList;
            } else {
                make_stmt((yyval.stmtVal));
            }
        }
        reset_temp_var_scope();
        fprintf(stderr, "stmtp -> stmtp stmt\n");
    }
    break;

  case 6:
#line 153 "parser.y"
    {yyerror("syntax error");}
    break;

  case 7:
#line 156 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> expr;\n");
    }
    break;

  case 8:
#line 160 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> ifstmt\n");
    }
    break;

  case 9:
#line 164 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> whilestmt\n");
    }
    break;

  case 10:
#line 168 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> forstmt\n");
    }
    break;

  case 11:
#line 172 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> returnstmt\n");
    }
    break;

  case 12:
#line 176 "parser.y"
    {
        if (!state) yyerror("Break statement not in a function");
        else {
            (yyvsp[(1) - (2)].stmtVal) = malloc(sizeof(struct stmt_t));
            make_stmt((yyvsp[(1) - (2)].stmtVal));
            (yyvsp[(1) - (2)].stmtVal)->breakList = newlist(nextquad());
            (yyval.stmtVal) = NULL;
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        fprintf(stderr, "statement -> break;\n");
    }
    break;

  case 13:
#line 187 "parser.y"
    {
        if (!state) yyerror("Continue statement not in a function");
        else {
            (yyvsp[(1) - (2)].stmtVal) = malloc(sizeof(struct stmt_t));
            make_stmt((yyvsp[(1) - (2)].stmtVal));
            (yyvsp[(1) - (2)].stmtVal)->contList = newlist(nextquad());
            (yyval.stmtVal) = (yyvsp[(1) - (2)].stmtVal);
            emit(jump, NULL, NULL, NULL,0, yylineno);
        }
        fprintf(stderr, "statement -> continue;\n");
    }
    break;

  case 14:
#line 198 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        fprintf(stderr, "statement -> block;\n");
    }
    break;

  case 15:
#line 202 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> funcdef;\n");
    }
    break;

  case 16:
#line 206 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> warning;\n");
    }
    break;

  case 17:
#line 210 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> string_comment_error;\n");
    }
    break;

  case 18:
#line 214 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> comment;\n");
    }
    break;

  case 19:
#line 218 "parser.y"
    {
        (yyval.stmtVal) = stmt_allocate();
        fprintf(stderr, "statement -> ;\n");
    }
    break;

  case 20:
#line 224 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "expression -> assignexpr;\n");
    }
    break;

  case 21:
#line 228 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), add, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr + expr\n");
    }
    break;

  case 22:
#line 232 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), sub, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr - expr\n");
    }
    break;

  case 23:
#line 236 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), mul, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr * expr\n");
    }
    break;

  case 24:
#line 240 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), mod, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr %% expr\n");
    }
    break;

  case 25:
#line 244 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), divide, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr // expr\n");
    }
    break;

  case 26:
#line 248 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), if_greater, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr > expr\n");
    }
    break;

  case 27:
#line 252 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), if_greatereq, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr >= expr\n");
    }
    break;

  case 28:
#line 256 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), if_less, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr < expr\n");
    }
    break;

  case 29:
#line 260 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), if_lesseq, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr <= expr\n");
    }
    break;

  case 30:
#line 264 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), if_eq, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr == expr\n");
    }
    break;

  case 31:
#line 268 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), if_neq, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr != expr\n");
    }
    break;

  case 32:
#line 272 "parser.y"
    {
        (yyval.exprVal) = bool_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), and, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr && expr\n");
    }
    break;

  case 33:
#line 276 "parser.y"
    {
        (yyval.exprVal) = bool_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), or, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expr || expr\n");
    }
    break;

  case 34:
#line 280 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "expression -> term;\n");
    }
    break;

  case 35:
#line 286 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(2) - (3)].exprVal);
        fprintf(stderr, "term -> (expr)\n");
    }
    break;

  case 36:
#line 290 "parser.y"
    {
        compile_time_expression_error((yyvsp[(2) - (2)].exprVal));
        (yyval.exprVal) = newexpr(arithexpr_e);
        (yyval.exprVal)->sym = newtemp();
        emit(uminus, (yyvsp[(2) - (2)].exprVal), NULL ,(yyval.exprVal), 0, yylineno);
        fprintf(stderr, "term -> -expr\n");
    }
    break;

  case 37:
#line 297 "parser.y"
    {
        /* Τotal Expression Assessment */
        (yyval.exprVal) = newexpr(boolexpr_e);
        (yyval.exprVal)->sym = newtemp();
        emit(uminus, (yyvsp[(2) - (2)].exprVal), NULL ,(yyval.exprVal), 0, yylineno);
        fprintf(stderr, "term -> not expr\n");
    }
    break;

  case 38:
#line 304 "parser.y"
    {
        check_term();
        compile_time_expression_error((yyvsp[(2) - (2)].exprVal));
        if ((yyvsp[(2) - (2)].exprVal)->type == tableitem_e){
            (yyval.exprVal) = emit_iftableitem((yyvsp[(2) - (2)].exprVal), yylineno);
            emit(add, (yyval.exprVal), newexpr_constnum(1), (yyval.exprVal), 0, yylineno);
            emit(tablesetelem, (yyvsp[(2) - (2)].exprVal), (yyvsp[(2) - (2)].exprVal)->index, (yyval.exprVal), 0, yylineno);
        } else {
            emit(add, (yyvsp[(2) - (2)].exprVal), newexpr_constnum(1), (yyvsp[(2) - (2)].exprVal), 0, yylineno);
            (yyval.exprVal) = newexpr(arithexpr_e);
            (yyval.exprVal)->sym = newtemp();
            emit(assign, NULL, (yyvsp[(2) - (2)].exprVal), (yyval.exprVal), 0, yylineno);      
        }
        fprintf(stderr, "term -> ++lvalue\n");
    }
    break;

  case 39:
#line 319 "parser.y"
    {
        check_term();
        compile_time_expression_error((yyvsp[(1) - (2)].exprVal));
        (yyval.exprVal) = newexpr(arithexpr_e);
        (yyval.exprVal)->sym = newtemp();
        if ((yyvsp[(1) - (2)].exprVal)->type == tableitem_e){
            expr* val = emit_iftableitem((yyvsp[(1) - (2)].exprVal), yylineno);
            emit(assign, NULL, val, (yyval.exprVal), 0, yylineno);
            emit(add, val, newexpr_constnum(1), val, 0, yylineno);
            emit(tablesetelem, (yyvsp[(1) - (2)].exprVal), (yyvsp[(1) - (2)].exprVal)->index, val, 0, yylineno);
        } else {
            emit(assign, NULL, (yyvsp[(1) - (2)].exprVal), (yyval.exprVal), 0, yylineno);
            emit(add, (yyvsp[(1) - (2)].exprVal), newexpr_constnum(1), (yyvsp[(1) - (2)].exprVal), 0, yylineno);
        }
        fprintf(stderr, "term -> lvalue++\n");
    }
    break;

  case 40:
#line 335 "parser.y"
    {
        check_term();
        compile_time_expression_error((yyvsp[(2) - (2)].exprVal));
        if ((yyvsp[(2) - (2)].exprVal)->type == tableitem_e){
            (yyval.exprVal) = emit_iftableitem((yyvsp[(2) - (2)].exprVal), yylineno);
            emit(sub, (yyval.exprVal), newexpr_constnum(1), (yyval.exprVal), 0, yylineno);
            emit(tablesetelem, (yyvsp[(2) - (2)].exprVal), (yyvsp[(2) - (2)].exprVal)->index, (yyval.exprVal), 0, yylineno);
        } else {
            emit(sub, (yyvsp[(2) - (2)].exprVal), newexpr_constnum(1), (yyvsp[(2) - (2)].exprVal), 0, yylineno);
            (yyval.exprVal) = newexpr(arithexpr_e);
            (yyval.exprVal)->sym = newtemp();
            emit(assign, (yyvsp[(2) - (2)].exprVal), NULL, (yyval.exprVal), 0, yylineno);      
        }
        fprintf(stderr, "term -> --lvalue\n");
    }
    break;

  case 41:
#line 350 "parser.y"
    {
        check_term();
        compile_time_expression_error((yyvsp[(1) - (2)].exprVal));
        (yyval.exprVal) = newexpr(arithexpr_e);
        (yyval.exprVal)->sym = newtemp();
        if ((yyvsp[(1) - (2)].exprVal)->type == tableitem_e){
            expr* val = emit_iftableitem((yyvsp[(1) - (2)].exprVal), yylineno);
            emit(assign, NULL, val, (yyval.exprVal), 0, yylineno);
            emit(sub, val, newexpr_constnum(1), val, 0, yylineno);
            emit(tablesetelem, (yyvsp[(1) - (2)].exprVal), (yyvsp[(1) - (2)].exprVal)->index, val, 0, yylineno);
        } else {
            emit(assign, NULL, (yyvsp[(1) - (2)].exprVal), (yyval.exprVal), 0, yylineno);
            emit(sub, (yyvsp[(1) - (2)].exprVal), newexpr_constnum(1), (yyvsp[(1) - (2)].exprVal), 0, yylineno);
        }
        fprintf(stderr, "term -> lvalue--\n");
    }
    break;

  case 42:
#line 366 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "term -> primary\n");
    }
    break;

  case 43:
#line 372 "parser.y"
    {
        if ((yyvsp[(1) - (3)].exprVal)->type == tableitem_e){
            emit(tablesetelem, (yyvsp[(3) - (3)].exprVal), (yyvsp[(1) - (3)].exprVal)->index, (yyvsp[(1) - (3)].exprVal), 0, yylineno);
            (yyval.exprVal) = emit_iftableitem((yyvsp[(1) - (3)].exprVal), yylineno);
            (yyval.exprVal)->type = assignexpr_e;
        } else{
            emit(assign, (yyvsp[(3) - (3)].exprVal), NULL, (yyvsp[(1) - (3)].exprVal), 0, yylineno);
            (yyval.exprVal) = newexpr(assignexpr_e);
            (yyval.exprVal)->sym = newtemp();
            emit(assign, (yyvsp[(1) - (3)].exprVal), NULL, (yyval.exprVal), 0, yylineno);
        }
        fprintf(stderr, "assignexpr -> lvalue = expr\n");
    }
    break;

  case 44:
#line 387 "parser.y"
    {
        (yyval.exprVal) = emit_iftableitem((yyvsp[(1) - (1)].exprVal), yylineno);
        fprintf(stderr, "primary -> lvalue\n");
    }
    break;

  case 45:
#line 391 "parser.y"
    {fprintf(stderr, "primary -> call\n");}
    break;

  case 46:
#line 392 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "primary -> objectdef\n");
    }
    break;

  case 47:
#line 396 "parser.y"
    {
        (yyval.exprVal) = newexpr(programfunc_e);
        (yyval.exprVal)->sym = (yyvsp[(2) - (3)].symbVal);
        fprintf(stderr, "primary -> (funcdef)\n");
    }
    break;

  case 48:
#line 401 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal); 
        fprintf(stderr, "primary -> const\n");
    }
    break;

  case 49:
#line 407 "parser.y"
    {
        int temp = scope;
        int accessibility_flag = 1;
        while (temp > 0){
            if(lookup_last_type(temp) == 1){
                fprintf(stderr, "\nERROR -> cannot access function %s in line %d\n\n", (yyvsp[(1) - (1)].strVal), yylineno);
                accessibility_flag = 0;
            } else {
                sym_temp = lookup_by_specific_scope_and_return((yyvsp[(1) - (1)].strVal), temp);
                accessibility_flag = 0;
            }
            temp--;
        }
        if (lookup_by_specific_scope ((yyvsp[(1) - (1)].strVal), 0)){
            sym_temp = lookup_by_specific_scope_and_return((yyvsp[(1) - (1)].strVal), 0);
            accessibility_flag = 0;
        }
        if (!accessibility_flag){
            if (!scope){
                sym_temp = insert_and_space_offset((yyvsp[(1) - (1)].strVal), scope, yylineno, GLOBAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            }
        } else {
            sym_temp = insert_and_space_offset((yyvsp[(1) - (1)].strVal), scope, yylineno, LOCAL, currscopespace(), currscopeoffset());
            inccurrscopeoffset();
        }
      
      	(yyval.exprVal) = lvalue_expr(sym_temp);
        is_member = 0;
        fprintf(stderr, "lvalue -> ID\n");
    }
    break;

  case 50:
#line 438 "parser.y"
    {
        if (!check_library_collisions((yyvsp[(2) - (2)].strVal))){
            if (!lookup_by_specific_scope((yyvsp[(2) - (2)].strVal), 0)){
                if (!scope){
                    sym_temp = insert_and_space_offset((yyvsp[(2) - (2)].strVal), scope, yylineno, GLOBAL, currscopespace(), currscopeoffset());
                    inccurrscopeoffset();
                } else {
                    sym_temp = insert_and_space_offset((yyvsp[(2) - (2)].strVal), scope, yylineno, LOCAL, currscopespace(), currscopeoffset());
                    inccurrscopeoffset();
                }
            } else sym_temp = lookup_by_specific_scope_and_return((yyvsp[(2) - (2)].strVal), scope);
        } else {
            fprintf(stderr, "\nERROR -> collision  with LIBFUNC in line %d\n\n", yylineno);         
        }
        (yyval.exprVal) = lvalue_expr(sym_temp);
        is_member = 0;
        fprintf(stderr, "lvalue -> LOCAL_KEYWORD ID\n");
    }
    break;

  case 51:
#line 456 "parser.y"
    {  
        if (!lookup_by_specific_scope((yyvsp[(2) - (2)].strVal), 0)){
            fprintf(stderr, "\nERROR -> undeclared variable or function %s in line %d\n\n", (yyvsp[(2) - (2)].strVal), yylineno);
        } else {
            sym_temp = lookup_by_specific_scope_and_return((yyvsp[(2) - (2)].strVal), scope);
            (yyval.exprVal) = lvalue_expr(sym_temp);
        }
        is_member = 0;
        fprintf(stderr, "lvalue -> DOUBLE_COLON ID\n");
    }
    break;

  case 52:
#line 466 "parser.y"
    {
        is_member = 1;
        fprintf(stderr, "lvalue -> member\n");
    }
    break;

  case 53:
#line 472 "parser.y"
    {
        (yyval.exprVal) = member_item((yyvsp[(1) - (3)].exprVal),yylval.strVal);
        fprintf(stderr, "member -> lvalue.id\n");
    }
    break;

  case 54:
#line 476 "parser.y"
    {
        (yyvsp[(1) - (4)].exprVal) = emit_iftableitem((yyvsp[(1) - (4)].exprVal), yylineno);
        (yyval.exprVal) = newexpr(tableitem_e);
        (yyval.exprVal)->sym = (yyvsp[(1) - (4)].exprVal)->sym;
        (yyval.exprVal)->index = (yyvsp[(3) - (4)].exprVal);
        fprintf(stderr, "member -> lvalue[expr]\n");
    }
    break;

  case 55:
#line 483 "parser.y"
    {fprintf(stderr, "member -> call.id\n");}
    break;

  case 56:
#line 484 "parser.y"
    {fprintf(stderr, "member -> call[expr]\n");}
    break;

  case 57:
#line 487 "parser.y"
    {
        (yyval.exprVal) = make_call((yyvsp[(1) - (4)].exprVal), (yyvsp[(3) - (4)].exprVal), yylineno);
        fprintf(stderr, "call -> call[elist]\n");
    }
    break;

  case 58:
#line 491 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = emit_iftableitem((yyvsp[(1) - (2)].exprVal), yylineno);
        if ((yyvsp[(2) - (2)].callVal)->method){
            (yyvsp[(1) - (2)].exprVal) = emit_iftableitem(member_item((yyvsp[(1) - (2)].exprVal), (yyvsp[(2) - (2)].callVal)->name), yylineno);
            (yyvsp[(1) - (2)].exprVal)->next = (yyvsp[(2) - (2)].callVal)->elist;
            (yyvsp[(2) - (2)].callVal)->elist = (yyvsp[(1) - (2)].exprVal);
        }
        (yyval.exprVal) = make_call((yyvsp[(1) - (2)].exprVal), (yyvsp[(2) - (2)].callVal)->elist, yylineno);
        fprintf(stderr, "call -> lvalue callsuffix\n");
    }
    break;

  case 59:
#line 501 "parser.y"
    {
        expr* func = newexpr(programfunc_e);
        func->sym = (yyvsp[(2) - (6)].symbVal);
        (yyval.exprVal) = make_call(func, (yyvsp[(5) - (6)].exprVal), yylineno);
        fprintf(stderr, "call -> (funcdef) (elist)\n");
    }
    break;

  case 60:
#line 509 "parser.y"
    {
        (yyval.callVal) = (yyvsp[(1) - (1)].callVal);
        fprintf(stderr, "callsuffix -> normcall\n");
    }
    break;

  case 61:
#line 513 "parser.y"
    {
        (yyval.callVal) = (yyvsp[(1) - (1)].callVal);
        fprintf(stderr, "callsuffix -> methodcall\n");
    }
    break;

  case 62:
#line 519 "parser.y"
    {
        (yyval.callVal) = malloc(sizeof(struct call_c));
        (yyval.callVal)->elist = (yyvsp[(2) - (3)].exprVal);
        (yyval.callVal)->method = 0;
        (yyval.callVal)->name = NULL;
        fprintf(stderr, "normcall -> (elist)\n");
    }
    break;

  case 63:
#line 526 "parser.y"
    {fprintf(stderr, "methodcall -> id(elist)\n");}
    break;

  case 64:
#line 527 "parser.y"
    {fprintf(stderr, "methodcall -> id(elist)\n");}
    break;

  case 65:
#line 528 "parser.y"
    {fprintf(stderr, "methodcall -> id()\n");}
    break;

  case 66:
#line 531 "parser.y"
    {
        (yyval.callVal) = malloc(sizeof(struct call_c));
        (yyval.callVal)->elist = (yyvsp[(4) - (5)].exprVal);
        (yyval.callVal)->method = 1;
        (yyval.callVal)->name = (yyvsp[(2) - (5)].strVal);
        fprintf(stderr, "methodcall -> ..id(elist)\n");
    }
    break;

  case 67:
#line 540 "parser.y"
    {
        (yyvsp[(1) - (1)].exprVal)->next= NULL;
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "elist -> expr\n");
    }
    break;

  case 68:
#line 545 "parser.y"
    {
        expr* temp = (yyvsp[(1) - (3)].exprVal);
        while(temp->next) temp = temp->next;
        temp->next = (yyvsp[(3) - (3)].exprVal);
        (yyval.exprVal) = (yyvsp[(1) - (3)].exprVal);
        fprintf(stderr, "elist -> elist, expr\n");
    }
    break;

  case 69:
#line 552 "parser.y"
    {}
    break;

  case 70:
#line 555 "parser.y"
    {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        expr* temp = (yyvsp[(2) - (3)].exprVal);
        int i = 0;
        while (temp){
            emit(tablesetelem, newexpr_constnum(i++), temp, t, 0, yylineno);
            temp = temp->next;
        }
        (yyval.exprVal) = t;
        fprintf(stderr, "objectdef -> [elist]\n");
    }
    break;

  case 71:
#line 568 "parser.y"
    {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        expr* temp = (yyvsp[(2) - (3)].exprVal);
        int i = 0;
        while (temp){
            emit(tablesetelem, temp->index, temp, t, 0, yylineno);
            temp = temp->next;
        }
        (yyval.exprVal) = t;
        fprintf(stderr, "objectdef -> [indexed]\n");
    }
    break;

  case 72:
#line 583 "parser.y"
    {
        (yyvsp[(1) - (1)].exprVal)->next = NULL;
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "indexed -> indexedelem\n");
    }
    break;

  case 73:
#line 588 "parser.y"
    {
        (yyvsp[(3) - (3)].exprVal)->next = (yyvsp[(1) - (3)].exprVal);
        (yyval.exprVal) = (yyvsp[(3) - (3)].exprVal);
        fprintf(stderr, "indexed -> indexed, indexedelem\n");
    }
    break;

  case 74:
#line 595 "parser.y"
    {
        (yyvsp[(2) - (5)].exprVal)->index = (yyvsp[(4) - (5)].exprVal);
        (yyval.exprVal) = (yyvsp[(2) - (5)].exprVal);
        fprintf(stderr, "indexedelem -> {expr:expr}\n");
    }
    break;

  case 75:
#line 602 "parser.y"
    {
        scope++;
        enable(scope);
        state++;
    }
    break;

  case 76:
#line 606 "parser.y"
    {
        hide(scope);
        scope--;
        state--;
        fprintf(stderr, "block -> {}\n");
    }
    break;

  case 77:
#line 612 "parser.y"
    {
        scope++;
        enable(scope);
        state++;
    }
    break;

  case 78:
#line 616 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(3) - (4)].stmtVal);
        hide(scope);
        scope--;
        state--;
        fprintf(stderr, "block -> {stmt*}\n");
    }
    break;

  case 79:
#line 625 "parser.y"
    { 
        (yyval.strVal) = yylval.strVal; 
        fprintf(stderr, "funcname -> ID\n");
    }
    break;

  case 80:
#line 629 "parser.y"
    {
        char* a = malloc(sizeof(char*));
        char* b = malloc(sizeof(char*));
        strcat(b,strdup("$"));
        sprintf(a,"%d",dollars_counter);
        dollars_counter++;
        (yyval.strVal) = strcat(b,a);
        fprintf(stderr, "funcname -> \n");
    }
    break;

  case 81:
#line 640 "parser.y"
    {  
        if (check_library_collisions((yyvsp[(2) - (2)].strVal)) && !scope) fprintf(stderr, "\nERROR -> Collision with library function: at line %d\n\n", yylineno);
        else {
            if (!lookup_by_specific_scope((yyvsp[(2) - (2)].strVal), scope)) {
                (yyval.symbVal) = insert_and_return((yyvsp[(2) - (2)].strVal), scope, yylineno, USERFUNC);
                (yyval.symbVal)->iaddress = nextquad();
                emit(funcstart, NULL, NULL, lvalue_expr((yyval.symbVal)), 0, yylineno);
                push(currscopeoffset());
                enterscopespace();
                resetformalargsoffset();
            }
            else {
                int user = lookup_by_specific_type_and_scope((yyvsp[(2) - (2)].strVal), USERFUNC, scope);
                int global = lookup_by_specific_type_and_scope((yyvsp[(2) - (2)].strVal), GLOBAL, scope);
                int local = lookup_by_specific_type_and_scope((yyvsp[(2) - (2)].strVal), LOCAL, scope);
                int formal = lookup_by_specific_type_and_scope((yyvsp[(2) - (2)].strVal), FORMAL, scope);

                if (user != -1) fprintf(stderr, "\nERROR in line %d -> Function %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), user);
                else if (global != -1) fprintf(stderr, "\nERROR in line %d -> Global variable %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), global); 
                else if (local != -1 ) fprintf(stderr, "\nERROR in line %d -> Local variable %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), local); 
                else if (formal != -1 ) fprintf(stderr, "\nERROR in line %d -> Formal variable %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), formal);   
            }
        }
        fprintf(stderr, "funcprefix -> FUNCTION funcname\n");
    }
    break;

  case 82:
#line 667 "parser.y"
    {++scope;}
    break;

  case 83:
#line 667 "parser.y"
    {
        enterscopespace();
        resetfunctionlocalsoffset();
        scope--;
        fprintf(stderr, "funcargs -> (idlist)\n");
    }
    break;

  case 84:
#line 675 "parser.y"
    {
        (yyval.unsVal) = currscopeoffset();
        exitscopespace();
        fprintf(stderr, "funcbody -> block\n");
    }
    break;

  case 85:
#line 682 "parser.y"
    {
        exitscopespace();
        (yyvsp[(1) - (3)].symbVal)->totalLocals = (yyvsp[(3) - (3)].unsVal);
        restorecurrscopeoffset(pop_and_top());
        (yyval.symbVal) = (yyvsp[(1) - (3)].symbVal);
        emit(funcend, NULL, NULL, lvalue_expr((yyvsp[(1) - (3)].symbVal)), 0, yylineno);
        fprintf(stderr, "funcdef -> funcprefix funcargs funcbody\n");
    }
    break;

  case 86:
#line 692 "parser.y"
    {
        (yyval.exprVal) = newexpr_constnum(yylval.intVal);
        fprintf(stderr, "const -> INTEGER\n");
    }
    break;

  case 87:
#line 696 "parser.y"
    {
        (yyval.exprVal) = newexpr_constnum(yylval.realVal);
        fprintf(stderr, "const -> REAL\n");
    }
    break;

  case 88:
#line 700 "parser.y"
    {
        (yyval.exprVal) = newexpr_conststring(yylval.strVal);
        fprintf(stderr, "const -> STRING\n");
    }
    break;

  case 89:
#line 704 "parser.y"
    {fprintf(stderr, "const -> NIL\n");}
    break;

  case 90:
#line 705 "parser.y"
    {
        (yyval.exprVal) = newexpr_constbool(1);
        fprintf(stderr, "const -> TRUE\n");
    }
    break;

  case 91:
#line 709 "parser.y"
    {
        (yyval.exprVal) = newexpr_constbool(0);
        fprintf(stderr, "const -> FALSE\n");
    }
    break;

  case 92:
#line 715 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        else {
            sym_temp = insert_and_space_offset(yylval.strVal, scope, yylineno, FORMAL, currscopespace(), currscopeoffset());
            inccurrscopeoffset();
        } 
        fprintf(stderr, "idlist -> ID\n");
    }
    break;

  case 95:
#line 726 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        else {
            if (!lookup_last(yylval.strVal, scope)) {
                sym_temp = insert_and_space_offset(yylval.strVal, scope, yylineno, FORMAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            } else {
                fprintf(stderr, "\nERROR -> Formal Variable %s already defined: at line %d\n\n", yylval.strVal, yylineno); 
            }    
        }
        fprintf(stderr, "idlist -> idlist,ID\n");
    }
    break;

  case 97:
#line 741 "parser.y"
    {
        emit(if_eq, (yyvsp[(3) - (4)].exprVal), newexpr_constbool(1), NULL, nextquad()+2, yylineno);
        (yyval.unsVal) = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
        fprintf(stderr, "ifprefix -> IF LEFT_PARENTHESES expr RIGHT_PARENTHESES\n");
    }
    break;

  case 98:
#line 749 "parser.y"
    {
        (yyval.unsVal) = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
    }
    break;

  case 99:
#line 755 "parser.y"
    { 
        patchlabel((yyvsp[(1) - (2)].unsVal), nextquad());
        fprintf(stderr, "ifstmt -> if (expr) stmt\n");
    }
    break;

  case 100:
#line 759 "parser.y"
    {
        patchlabel((yyvsp[(1) - (4)].unsVal), (yyvsp[(3) - (4)].unsVal)+1);	
        patchlabel((yyvsp[(3) - (4)].unsVal), nextquad());
        fprintf(stderr, "ifstmt -> if (expr) stmt ELSE stmt\n");
    }
    break;

  case 101:
#line 766 "parser.y"
    {(yyval.unsVal) = nextquad();}
    break;

  case 102:
#line 769 "parser.y"
    {
        emit(if_eq, (yyvsp[(2) - (3)].exprVal), newexpr_constbool(1), NULL, nextquad()+2, yylineno);
        (yyval.unsVal) = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
    }
    break;

  case 103:
#line 776 "parser.y"
    {
        emit(jump, NULL, NULL, NULL, (yyvsp[(1) - (3)].unsVal), yylineno);
        patchlabel((yyvsp[(2) - (3)].unsVal), nextquad());
        patchlist((yyvsp[(3) - (3)].stmtVal)->breakList, nextquad());
        patchlist((yyvsp[(3) - (3)].stmtVal)->contList, nextquad());
        fprintf(stderr, "whilestmt -> WHILE(expr) { stmt } \n");
    }
    break;

  case 104:
#line 785 "parser.y"
    {
        (yyval.unsVal) = nextquad();
        emit(jump, NULL, NULL, NULL, 0, yylineno);
    }
    break;

  case 105:
#line 791 "parser.y"
    {
        (yyval.unsVal) = nextquad();
    }
    break;

  case 106:
#line 796 "parser.y"
    {
      //  $$ = malloc(sizeof(struct for_s));
        (yyval.forVal)->test = (yyvsp[(5) - (7)].unsVal);
        (yyval.forVal)->enter = nextquad();
        emit(if_eq, (yyvsp[(6) - (7)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
    }
    break;

  case 107:
#line 804 "parser.y"
    {++loopcounter;}
    break;

  case 108:
#line 807 "parser.y"
    {--loopcounter;}
    break;

  case 109:
#line 810 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(2) - (3)].stmtVal);
        fprintf(stderr, "loopstmt -> loopstart stmt loopend\n");
    }
    break;

  case 110:
#line 816 "parser.y"
    {
        patchlabel((yyvsp[(1) - (7)].forVal)->enter, (yyvsp[(5) - (7)].unsVal)+1);
        patchlabel((yyvsp[(2) - (7)].unsVal), nextquad());
        patchlabel((yyvsp[(5) - (7)].unsVal), (yyvsp[(1) - (7)].forVal)->test);
        patchlabel((yyvsp[(7) - (7)].unsVal), (yyvsp[(2) - (7)].unsVal)+1);
        patchlist((yyvsp[(6) - (7)].stmtVal)->breakList, nextquad());
        patchlist((yyvsp[(6) - (7)].stmtVal)->contList, (yyvsp[(2) - (7)].unsVal)+1);
        fprintf(stderr, "forstmt -> for(elist; expr; elist) stmt\n");
    }
    break;

  case 111:
#line 827 "parser.y"
    {
        if (!state) yyerror("Return statement not in a function");
        else emit(ret, NULL, NULL, (yyvsp[(2) - (3)].exprVal), 0, yylineno);
        fprintf(stderr, "returnstmt -> RETURN expr SEMICOLON\n");
    }
    break;

  case 112:
#line 832 "parser.y"
    {
        if (!state) yyerror("Return statement not in a function");
        else emit(ret, NULL, NULL, NULL, 0, yylineno);
        fprintf(stderr, "returnstmt -> RETURN SEMICOLON\n");
    }
    break;

  case 113:
#line 839 "parser.y"
    {fprintf(stderr, "comment -> Single line comment\n");}
    break;

  case 114:
#line 840 "parser.y"
    {fprintf(stderr, "comment -> Multiline comment\n");}
    break;

  case 115:
#line 841 "parser.y"
    {fprintf(stderr, "comment -> Multiline comment with nested comments\n");}
    break;

  case 116:
#line 844 "parser.y"
    {fprintf(stderr, "warning -> WARNING_STRING\n");}
    break;

  case 117:
#line 847 "parser.y"
    {fprintf(stderr, "string_comment_error -> MULTI_COMMENT_NEVER_CLOSED\n");}
    break;

  case 118:
#line 848 "parser.y"
    {fprintf(stderr, "string_comment_error -> STRING_NEVER_CLOSED\n");}
    break;


/* Line 1267 of yacc.c.  */
#line 2862 "parser.c"
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


#line 850 "parser.y"


expr* arithmetic_expr(expr* t, expr* t1, int t2, expr* t3){
    compile_time_expression_error(t1);
    compile_time_expression_error(t3);
    if (t1->type == constnum_e && t3->type == constnum_e){
        int result;
        if (t2 == 1) result = t1->numConst + t3->numConst;
        else if (t2 == 2) result = t1->numConst - t3->numConst;
        else if (t2 == 3) result = t1->numConst * t3->numConst;
        else if (t2 == 4) result = t1->numConst / t3->numConst;
        else if (t2 == 5) result = (int)t1->numConst % (int)t3->numConst;
        t = newexpr_constnum(result);
    } else {
        t = newexpr(arithexpr_e);
        t->sym = newtemp();
    }
    emit(t2, t1, t3, t, 0, yylineno);
    return t;
}

expr* compare_expr(expr* t, expr* t1, int t2, expr* t3){
    /* Τotal Expression Assessment */
    t = newexpr(boolexpr_e);
    t->sym = newtemp();
    emit(t2, t1, t3, t,  nextquad()+3, yylineno);
    emit(assign, NULL, newexpr_constbool(0), t, 0, yylineno);
    emit(jump, NULL, NULL, NULL, nextquad()+2 ,yylineno);
    emit(assign, NULL, newexpr_constbool(1), t, 0, yylineno);
    return t;
}

expr* bool_expr(expr* t, expr* t1, int t2, expr* t3){
    /* Τotal Expression Assessment */
    t = newexpr(boolexpr_e);
    t->sym = newtemp();
    emit(t2, t1, t3, t, 0, yylineno);
    return t;
}

void check_term () {
    if (!is_member){
        if (lookup_by_specific_type(yylval.strVal, USERFUNC)) fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
        if (lookup_by_specific_type(yylval.strVal, LIBFUNC)) fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
     } else {
        if (lookup_by_specific_type(yytext, USERFUNC)) fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
        if (lookup_by_specific_type(yytext, LIBFUNC)) fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
     }
}

void yyerror (char* yaccProvidedMessage){
	fprintf(stderr, "\nERROR -> %s: at line %d, before token %s\n\n", yaccProvidedMessage, yylineno, yytext);
}

int main(int argc, char** argv){
    if (argc > 1){
        if (!(yyin=fopen(argv[1],"r") )){
            fprintf(stderr,"Cannot read file: %s\n",argv[1]);
            return 1;
        }
    } else yyin=stdin;

    initialize_libraries();
    yyparse();  
    print_by_scopes();
    print_quads();

    return 0;   
}
