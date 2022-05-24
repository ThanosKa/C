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
     LINE_COMMENT = 267,
     ASSIGNMENT = 268,
     ADD = 269,
     SUB = 270,
     SHARP = 271,
     SLASH = 272,
     PERCENT = 273,
     EQUAL = 274,
     NOT_EQUAL = 275,
     PLUS_PLUS = 276,
     MINUS_MINUS = 277,
     LESS = 278,
     GREATER = 279,
     GREATER_OR_EQUAL = 280,
     LESS_OR_EQUAL = 281,
     AND = 282,
     OR = 283,
     LEFT_CURLY_BRACKET = 284,
     RIGHT_CURLY_BRACKET = 285,
     LEFT_SQUARE_BRACKET = 286,
     RIGHT_SQUARE_BRACKET = 287,
     LEFT_PARENTHESES = 288,
     RIGHT_PARENTHESES = 289,
     SEMICOLON = 290,
     COMMA = 291,
     COLON = 292,
     DOUBLE_COLON = 293,
     DOT = 294,
     DOUBLE_DOT = 295,
     IF = 296,
     ELSE = 297,
     WHILE = 298,
     FOR = 299,
     FUNCTION = 300,
     RETURN = 301,
     BREAK = 302,
     CONTINUE = 303,
     NOT = 304,
     LOCAL_KEYWORD = 305,
     TRUE = 306,
     FALSE = 307,
     NIL = 308
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
#define LINE_COMMENT 267
#define ASSIGNMENT 268
#define ADD 269
#define SUB 270
#define SHARP 271
#define SLASH 272
#define PERCENT 273
#define EQUAL 274
#define NOT_EQUAL 275
#define PLUS_PLUS 276
#define MINUS_MINUS 277
#define LESS 278
#define GREATER 279
#define GREATER_OR_EQUAL 280
#define LESS_OR_EQUAL 281
#define AND 282
#define OR 283
#define LEFT_CURLY_BRACKET 284
#define RIGHT_CURLY_BRACKET 285
#define LEFT_SQUARE_BRACKET 286
#define RIGHT_SQUARE_BRACKET 287
#define LEFT_PARENTHESES 288
#define RIGHT_PARENTHESES 289
#define SEMICOLON 290
#define COMMA 291
#define COLON 292
#define DOUBLE_COLON 293
#define DOT 294
#define DOUBLE_DOT 295
#define IF 296
#define ELSE 297
#define WHILE 298
#define FOR 299
#define FUNCTION 300
#define RETURN 301
#define BREAK 302
#define CONTINUE 303
#define NOT 304
#define LOCAL_KEYWORD 305
#define TRUE 306
#define FALSE 307
#define NIL 308




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #include "quad.h"   
    int yylex(void);
    void yyerror(char* yaccProvidedMessage); 

    void check_term ();
    expr* arithmetic_expr(expr* t, expr* t1, int t2, expr* t3);
    expr* compare_expr(expr* t, expr* t1, int t2, expr* t3);

    extern int yylineno;
    extern char* yytext;
    extern FILE* yyin;

    unsigned int scope = 0;
    unsigned int dollars_counter = 0;
    unsigned int is_member = 0;

    /* Checking for error continue, break and return */
    unsigned int continue_state = 0;
    unsigned int break_state = 0;
    unsigned int return_state = 0;

    unsigned int for_label = 0;
    unsigned int for_label_start = 0;

    int break_index = -1;
    int continue_index = -1;
    unsigned int loopcounter = 0;

    unsigned int whilelabel_true = 0;
    unsigned int iflabel_true = 0;
    unsigned int assignlabel_true = 0;
    unsigned int exprsemicolon_true = 0;
    unsigned int forlabel_true = 0;
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
#line 40 "parser.y"
{ 
    unsigned unsVal;
    int intVal; 
    double realVal; 
    char* strVal;
    struct expr* exprVal;
    struct SymbolTableEntry* symbVal;
    struct call_c* callVal;
    struct stmt_t* stmtVal;
}
/* Line 193 of yacc.c.  */
#line 250 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 263 "parser.c"

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
#define YYFINAL  81
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   807

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNRULES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    14,    16,    18,
      20,    22,    25,    28,    30,    32,    34,    36,    38,    40,
      42,    44,    48,    52,    56,    60,    64,    65,    70,    71,
      76,    77,    82,    83,    88,    89,    94,    95,   100,   101,
     107,   108,   114,   116,   120,   123,   126,   129,   132,   135,
     138,   140,   144,   146,   148,   150,   154,   156,   158,   161,
     164,   166,   170,   175,   179,   184,   189,   192,   199,   201,
     203,   207,   212,   219,   223,   229,   231,   235,   236,   240,
     244,   246,   250,   256,   257,   261,   262,   267,   269,   270,
     273,   274,   279,   281,   285,   287,   289,   291,   293,   295,
     297,   298,   302,   303,   307,   308,   313,   315,   318,   319,
     325,   327,   331,   335,   336,   337,   338,   339,   340,   354,
     358,   361,   363,   365,   367,   369,   371
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    -1,    57,    -1,    56,    57,
      -1,    58,    35,    -1,    95,    -1,    99,    -1,   101,    -1,
     106,    -1,    47,    35,    -1,    48,    35,    -1,    80,    -1,
      88,    -1,   108,    -1,   109,    -1,   107,    -1,    35,    -1,
       1,    -1,    68,    -1,    58,    14,    58,    -1,    58,    15,
      58,    -1,    58,    16,    58,    -1,    58,    18,    58,    -1,
      58,    17,    58,    -1,    -1,    58,    24,    59,    58,    -1,
      -1,    58,    25,    60,    58,    -1,    -1,    58,    23,    61,
      58,    -1,    -1,    58,    26,    62,    58,    -1,    -1,    58,
      19,    63,    58,    -1,    -1,    58,    20,    64,    58,    -1,
      -1,    58,    28,   100,    65,    58,    -1,    -1,    58,    27,
     100,    66,    58,    -1,    67,    -1,    33,    58,    34,    -1,
      15,    58,    -1,    49,    58,    -1,    21,    70,    -1,    70,
      21,    -1,    22,    70,    -1,    70,    22,    -1,    69,    -1,
      70,    13,    58,    -1,    70,    -1,    72,    -1,    77,    -1,
      33,    88,    34,    -1,    89,    -1,     5,    -1,    50,     5,
      -1,    38,     5,    -1,    71,    -1,    70,    39,     5,    -1,
      70,    31,    58,    32,    -1,    72,    39,     5,    -1,    72,
      31,    58,    32,    -1,    72,    33,    76,    34,    -1,    70,
      73,    -1,    33,    88,    34,    33,    76,    34,    -1,    74,
      -1,    75,    -1,    33,    76,    34,    -1,     5,    33,    58,
      34,    -1,     5,    33,    76,    36,    58,    34,    -1,     5,
      33,    34,    -1,    40,     5,    33,    76,    34,    -1,    58,
      -1,    76,    36,    58,    -1,    -1,    31,    76,    32,    -1,
      31,    78,    32,    -1,    79,    -1,    78,    36,    79,    -1,
      29,    58,    37,    58,    30,    -1,    -1,    29,    81,    30,
      -1,    -1,    29,    82,    56,    30,    -1,     5,    -1,    -1,
      45,    83,    -1,    -1,    33,    86,    90,    34,    -1,    80,
      -1,    84,    85,    87,    -1,     3,    -1,     4,    -1,     6,
      -1,    53,    -1,    51,    -1,    52,    -1,    -1,     5,    91,
      92,    -1,    -1,    92,    36,     5,    -1,    -1,    41,    33,
      58,    34,    -1,    42,    -1,    93,    57,    -1,    -1,    93,
      57,    94,    96,    57,    -1,    43,    -1,    33,    58,    34,
      -1,    97,    98,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    33,   102,    76,    35,   103,    58,    35,   104,    76,
      34,   105,    57,    -1,    46,    58,    35,    -1,    46,    35,
      -1,    12,    -1,     7,    -1,     9,    -1,    11,    -1,     8,
      -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    97,   100,   127,   155,   169,   173,   177,
     181,   185,   198,   210,   214,   218,   222,   226,   230,   234,
     240,   244,   248,   252,   256,   260,   264,   264,   270,   270,
     276,   276,   282,   282,   288,   288,   294,   294,   300,   300,
     322,   322,   344,   350,   354,   361,   375,   390,   406,   421,
     437,   443,   469,   473,   476,   480,   485,   491,   523,   541,
     551,   557,   561,   568,   571,   576,   580,   592,   600,   604,
     610,   617,   620,   623,   628,   637,   643,   649,   654,   669,
     682,   687,   694,   701,   701,   709,   709,   720,   724,   735,
     768,   768,   779,   786,   797,   801,   805,   809,   812,   816,
     822,   822,   831,   834,   847,   850,   866,   871,   876,   876,
     888,   897,   911,   927,   932,   932,   938,   946,   932,   968,
     976,   986,   989,   992,   997,  1002,  1005
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
  "LINE_COMMENT", "ASSIGNMENT", "ADD", "SUB", "SHARP", "SLASH", "PERCENT",
  "EQUAL", "NOT_EQUAL", "PLUS_PLUS", "MINUS_MINUS", "LESS", "GREATER",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "AND", "OR", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "SEMICOLON", "COMMA", "COLON",
  "DOUBLE_COLON", "DOT", "DOUBLE_DOT", "IF", "ELSE", "WHILE", "FOR",
  "FUNCTION", "RETURN", "BREAK", "CONTINUE", "NOT", "LOCAL_KEYWORD",
  "TRUE", "FALSE", "NIL", "$accept", "program", "stmtp", "stmt", "expr",
  "@1", "@2", "@3", "@4", "@5", "@6", "@7", "@8", "term", "assignexpr",
  "primary", "lvalue", "member", "call", "callsuffix", "normcall",
  "methodcall", "elist", "objectdef", "indexed", "indexedelem", "block",
  "@9", "@10", "funcname", "funcprefix", "funcargs", "@11", "funcbody",
  "funcdef", "const", "idlist", "@12", "idlist_case_commaid", "ifprefix",
  "elseprefix", "ifstmt", "@13", "whilestart", "whilecond", "whilestmt",
  "M", "forstmt", "@14", "@15", "@16", "@17", "returnstmt", "comment",
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      58,    58,    58,    58,    58,    58,    59,    58,    60,    58,
      61,    58,    62,    58,    63,    58,    64,    58,    65,    58,
      66,    58,    58,    67,    67,    67,    67,    67,    67,    67,
      67,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      70,    71,    71,    71,    71,    72,    72,    72,    73,    73,
      74,    74,    74,    74,    75,    76,    76,    76,    77,    77,
      78,    78,    79,    81,    80,    82,    80,    83,    83,    84,
      86,    85,    87,    88,    89,    89,    89,    89,    89,    89,
      91,    90,    90,    92,    92,    93,    94,    95,    96,    95,
      97,    98,    99,   100,   102,   103,   104,   105,   101,   106,
     106,   107,   107,   107,   108,   109,   109
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     5,
       0,     5,     1,     3,     2,     2,     2,     2,     2,     2,
       1,     3,     1,     1,     1,     3,     1,     1,     2,     2,
       1,     3,     4,     3,     4,     4,     2,     6,     1,     1,
       3,     4,     6,     3,     5,     1,     3,     0,     3,     3,
       1,     3,     5,     0,     3,     0,     4,     1,     0,     2,
       0,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     0,     4,     1,     2,     0,     5,
       1,     3,     3,     0,     0,     0,     0,     0,    13,     3,
       2,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    94,    95,    57,    96,   122,   125,   123,   126,
     124,   121,     0,     0,     0,    85,    77,     0,    18,     0,
       0,   110,     0,    88,     0,     0,     0,     0,     0,    98,
      99,    97,     0,     0,     4,     0,    42,    20,    50,    52,
      60,    53,    54,    13,     0,    14,    56,     0,     7,     0,
       8,     9,    10,    17,    15,    16,    44,     0,    46,     0,
      48,     0,     0,     0,    75,     0,     0,    80,     0,     0,
      59,     0,   114,    87,    89,   120,     0,    11,    12,    45,
      58,     1,     5,     0,     0,     0,     0,     0,    34,    36,
      30,    26,    28,    32,   113,   113,     6,     0,     0,    47,
      49,     0,    77,     0,     0,    66,    68,    69,     0,    77,
       0,    90,     0,   107,     0,     0,     0,    84,     0,     0,
      78,     0,    79,     0,    43,    55,     0,    77,   119,    21,
      22,    23,    25,    24,     0,     0,     0,     0,     0,     0,
      40,    38,    77,    51,     0,     0,    61,     0,     0,     0,
      63,   102,    92,    93,   106,   108,     0,   112,     0,    86,
       0,    76,    81,    77,   105,     0,    35,    37,    31,    27,
      29,    33,     0,     0,    73,    75,     0,    62,    70,    77,
      64,    65,   100,     0,     0,   111,     0,     0,   115,    41,
      39,    71,     0,     0,   104,    91,   109,    82,    67,     0,
      76,    74,   101,     0,    72,     0,   116,   103,    77,     0,
     117,     0,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,   137,   138,   136,   139,   134,
     135,   173,   172,    36,    37,    38,    39,    40,    41,   105,
     106,   107,    65,    42,    66,    67,    43,    61,    62,    74,
      44,   112,   151,   153,    45,    46,   183,   194,   202,    47,
     155,    48,   184,    49,   115,    50,   140,    51,   127,   199,
     208,   211,    52,    53,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
     194,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,   472,     2,     2,   -19,    15,   405,  -102,    23,
      17,  -102,    25,    55,   413,    26,    28,   472,    64,  -102,
    -102,  -102,    70,   248,  -102,   527,  -102,  -102,  -102,    79,
    -102,   -17,  -102,  -102,    44,  -102,  -102,   354,  -102,    46,
    -102,  -102,  -102,  -102,  -102,  -102,     7,    31,    98,   -17,
      98,    50,   354,   472,   753,   -26,   -23,  -102,   593,    47,
    -102,   472,  -102,  -102,  -102,  -102,   549,  -102,  -102,  -102,
    -102,  -102,  -102,   472,   472,   472,   472,   472,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,    49,   472,  -102,
    -102,   472,   472,    78,    82,  -102,  -102,  -102,   472,   472,
      86,  -102,    65,    51,   472,   354,    61,  -102,   301,   512,
    -102,   472,  -102,    69,  -102,    66,   614,   472,  -102,     7,
       7,  -102,  -102,  -102,   472,   472,   472,   472,   472,   472,
    -102,  -102,   464,   753,   698,    -7,  -102,    71,   717,    -3,
    -102,   100,  -102,  -102,  -102,  -102,   635,  -102,    66,  -102,
     472,   753,  -102,   472,  -102,     3,   768,   768,   118,   118,
     118,   118,   472,   472,  -102,   656,    72,  -102,  -102,   472,
    -102,  -102,  -102,    77,   354,  -102,   736,    -2,  -102,   781,
     159,  -102,   472,     9,  -102,  -102,  -102,  -102,  -102,   472,
     677,  -102,    80,   571,  -102,   101,  -102,  -102,   472,    13,
    -102,   354,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -102,  -102,    52,   -30,   -12,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,    41,  -102,    43,  -102,
    -102,  -102,  -101,  -102,  -102,   -10,     5,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,   -15,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,    33,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -84
static const yytype_int16 yytable[] =
{
      56,   145,    69,    82,    64,    68,   120,     4,   149,   122,
     121,   -83,    76,   123,   108,    79,   109,   113,     2,     3,
       4,     5,   110,    85,    86,    87,   165,   178,    70,   121,
      12,   181,   198,   121,   121,    57,    13,    14,   188,   121,
      19,   176,   116,   201,    63,   121,    16,   210,    17,   121,
      71,   119,    28,    19,    58,    60,    59,    59,    72,   126,
      73,    77,   187,    78,    27,    28,    29,    30,    31,    80,
      81,   129,   130,   131,   132,   133,    23,   111,   193,   114,
     117,   125,   142,   146,    97,   157,   143,   147,    82,   144,
      64,   150,    98,   154,    15,   158,   148,    64,    63,   163,
      99,   100,   156,    97,   179,   182,   207,   209,   192,   161,
     101,   195,   102,   162,   118,    64,   205,   152,   103,   104,
       0,     0,   166,   167,   168,   169,   170,   171,   141,   101,
     175,   102,    83,    84,    85,    86,    87,   103,   104,     0,
       0,   -84,   -84,   -84,   -84,     0,     0,     0,   186,     0,
       0,    64,     0,     0,   196,     0,     0,     0,     0,     0,
     189,   190,     0,     0,     0,     0,     0,    64,     0,     0,
       0,     0,     0,    83,    84,    85,    86,    87,    88,    89,
     200,   212,    90,    91,    92,    93,    94,   203,     0,     0,
       0,     0,     0,     0,    -3,     1,    64,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    12,
       0,     0,     0,     0,     0,    13,    14,     0,     0,     0,
       0,     0,     0,    15,     0,    16,     0,    17,     0,    18,
       0,     0,    19,     0,     0,    20,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -2,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     0,     0,    12,     0,     0,     0,     0,     0,    13,
      14,     0,     0,     0,     0,     0,     0,    15,     0,    16,
       0,    17,     0,    18,     0,     0,    19,     0,     0,    20,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     0,     0,    12,     0,     0,     0,
       0,     0,    13,    14,     0,     0,     0,     0,     0,     0,
      15,   159,    16,     0,    17,     0,    18,     0,     0,    19,
       0,     0,    20,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,     0,     0,    12,
       0,     0,     0,     0,     0,    13,    14,     0,     0,     0,
       0,     0,     0,    15,     0,    16,     0,    17,     0,    18,
       0,     0,    19,     0,     0,    20,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     2,     3,
       4,     5,     0,     0,     0,     0,     2,     3,     4,     5,
      12,     0,     0,     0,     0,     0,    13,    14,    12,     0,
       0,     0,     0,     0,    13,    14,    16,     0,    17,     0,
       0,     0,     0,    19,    16,     0,    17,     0,    75,     0,
      23,    19,     0,     0,    27,    28,    29,    30,    31,     0,
       0,     0,    27,    28,    29,    30,    31,     2,     3,     4,
       5,     0,     0,     0,     0,     2,     3,     4,     5,    12,
       0,     0,     0,     0,     0,    13,    14,    12,     0,     0,
       0,     0,     0,    13,    14,    16,     0,    17,   174,     0,
       0,     0,    19,    16,     0,    17,     0,     0,     0,     0,
      19,     0,     0,    27,    28,    29,    30,    31,     0,     0,
       0,    27,    28,    29,    30,    31,    83,    84,    85,    86,
      87,    88,    89,     0,     0,    90,    91,    92,    93,    94,
      95,    83,    84,    85,    86,    87,    88,    89,     0,   160,
      90,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       0,     0,    96,    83,    84,    85,    86,    87,    88,    89,
       0,     0,    90,    91,    92,    93,    94,    95,     0,     0,
       0,     0,     0,     0,   128,    83,    84,    85,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,     0,     0,   206,    83,    84,    85,
      86,    87,    88,    89,     0,     0,    90,    91,    92,    93,
      94,    95,     0,     0,     0,     0,     0,   124,    83,    84,
      85,    86,    87,    88,    89,     0,     0,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,   164,    83,
      84,    85,    86,    87,    88,    89,     0,     0,    90,    91,
      92,    93,    94,    95,     0,     0,     0,     0,     0,   185,
      83,    84,    85,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,    95,     0,     0,     0,     0,     0,
     191,    83,    84,    85,    86,    87,    88,    89,     0,     0,
      90,    91,    92,    93,    94,    95,     0,     0,     0,     0,
       0,   204,    83,    84,    85,    86,    87,    88,    89,     0,
       0,    90,    91,    92,    93,    94,    95,     0,     0,     0,
     177,    83,    84,    85,    86,    87,    88,    89,     0,     0,
      90,    91,    92,    93,    94,    95,     0,     0,     0,   180,
      83,    84,    85,    86,    87,    88,    89,     0,     0,    90,
      91,    92,    93,    94,    95,     0,   197,    83,    84,    85,
      86,    87,    88,    89,     0,     0,    90,    91,    92,    93,
      94,    95,    83,    84,    85,    86,    87,   -84,   -84,     0,
       0,    90,    91,    92,    93,    83,    84,    85,    86,    87,
      88,    89,     0,     0,    90,    91,    92,    93
};

static const yytype_int16 yycheck[] =
{
      12,   102,    17,    33,    16,    17,    32,     5,   109,    32,
      36,    30,    24,    36,    31,    27,    33,    47,     3,     4,
       5,     6,    39,    16,    17,    18,   127,    34,     5,    36,
      15,    34,    34,    36,    36,    33,    21,    22,    35,    36,
      38,   142,    57,    34,    29,    36,    31,    34,    33,    36,
      33,    63,    50,    38,    13,    14,    13,    14,    33,    71,
       5,    35,   163,    35,    49,    50,    51,    52,    53,     5,
       0,    83,    84,    85,    86,    87,    45,    33,   179,    33,
      30,    34,    33,     5,     5,   115,    98,     5,   118,   101,
     102,     5,    13,    42,    29,    34,   108,   109,    29,    33,
      21,    22,   114,     5,    33,     5,     5,   208,    36,   121,
      31,    34,    33,   123,    62,   127,    36,   112,    39,    40,
      -1,    -1,   134,   135,   136,   137,   138,   139,    95,    31,
     142,    33,    14,    15,    16,    17,    18,    39,    40,    -1,
      -1,    23,    24,    25,    26,    -1,    -1,    -1,   160,    -1,
      -1,   163,    -1,    -1,   184,    -1,    -1,    -1,    -1,    -1,
     172,   173,    -1,    -1,    -1,    -1,    -1,   179,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
     192,   211,    23,    24,    25,    26,    27,   199,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,   208,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    -1,    38,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      -1,    33,    -1,    35,    -1,    -1,    38,    -1,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    33,    -1,    35,    -1,    -1,    38,
      -1,    -1,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    -1,    -1,    15,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    -1,    33,    -1,    35,
      -1,    -1,    38,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      15,    -1,    -1,    -1,    -1,    -1,    21,    22,    15,    -1,
      -1,    -1,    -1,    -1,    21,    22,    31,    -1,    33,    -1,
      -1,    -1,    -1,    38,    31,    -1,    33,    -1,    35,    -1,
      45,    38,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    49,    50,    51,    52,    53,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    15,
      -1,    -1,    -1,    -1,    -1,    21,    22,    15,    -1,    -1,
      -1,    -1,    -1,    21,    22,    31,    -1,    33,    34,    -1,
      -1,    -1,    38,    31,    -1,    33,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      28,    14,    15,    16,    17,    18,    19,    20,    -1,    37,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    34,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      34,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    34,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      14,    15,    16,    17,    18,    19,    20,    -1,    -1,    23,
      24,    25,    26,    27,    28,    -1,    30,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    23,    24,    25,    26,
      27,    28,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    23,    24,    25,    26,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    23,    24,    25,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    15,    21,    22,    29,    31,    33,    35,    38,
      41,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    55,    56,    57,    58,    67,    68,    69,    70,
      71,    72,    77,    80,    84,    88,    89,    93,    95,    97,
      99,   101,   106,   107,   108,   109,    58,    33,    70,    72,
      70,    81,    82,    29,    58,    76,    78,    79,    58,    88,
       5,    33,    33,     5,    83,    35,    58,    35,    35,    58,
       5,     0,    57,    14,    15,    16,    17,    18,    19,    20,
      23,    24,    25,    26,    27,    28,    35,     5,    13,    21,
      22,    31,    33,    39,    40,    73,    74,    75,    31,    33,
      39,    33,    85,    57,    33,    98,    88,    30,    56,    58,
      32,    36,    32,    36,    34,    34,    58,   102,    35,    58,
      58,    58,    58,    58,    63,    64,    61,    59,    60,    62,
     100,   100,    33,    58,    58,    76,     5,     5,    58,    76,
       5,    86,    80,    87,    42,    94,    58,    57,    34,    30,
      37,    58,    79,    33,    34,    76,    58,    58,    58,    58,
      58,    58,    66,    65,    34,    58,    76,    32,    34,    33,
      32,    34,     5,    90,    96,    34,    58,    76,    35,    58,
      58,    34,    36,    76,    91,    34,    57,    30,    34,   103,
      58,    34,    92,    58,    34,    36,    35,     5,   104,    76,
      34,   105,    57
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
#line 94 "parser.y"
    {
        fprintf(stderr, "program -> stmtp\n");
    }
    break;

  case 4:
#line 100 "parser.y"
    {
        if ((yyvsp[(1) - (1)].stmtVal)){
            if (size_brcont((yyvsp[(1) - (1)].stmtVal)->contList) == 1){
                patchlabel_difzero(continue_index, (yyvsp[(1) - (1)].stmtVal)->contList->value);
            } else {
                patch_brcont_reversed((yyvsp[(1) - (1)].stmtVal)->contList, continue_index, loopcounter);
            }
            
            if (size_brcont((yyvsp[(1) - (1)].stmtVal)->breakList) == 1){
                patchlabel_difzero(break_index, (yyvsp[(1) - (1)].stmtVal)->breakList->value + 1);
            } else {
                patch_brcont((yyvsp[(1) - (1)].stmtVal)->breakList, break_index, loopcounter);
            }

            // case of some break and cont jumps not being patched
            if (check_orphan_jump_brcont(break_index) == 1) {
                patch_brcont_last((yyvsp[(1) - (1)].stmtVal)->breakList, break_index);
            }
            if (check_orphan_jump_brcont(continue_index) == 1) {
                patch_brcont_last_reversed((yyvsp[(1) - (1)].stmtVal)->contList, continue_index);
            }
            free((yyvsp[(1) - (1)].stmtVal));
        }
        
        reset_temp_var_scope();
        fprintf(stderr, "stmtp -> stmt\n");
    }
    break;

  case 5:
#line 127 "parser.y"
    {
        
        if ((yyvsp[(2) - (2)].stmtVal)){
            if (size_brcont((yyvsp[(2) - (2)].stmtVal)->contList) == 1){
                patchlabel_difzero(continue_index, (yyvsp[(2) - (2)].stmtVal)->contList->value);
            } else {
                patch_brcont_reversed((yyvsp[(2) - (2)].stmtVal)->contList, continue_index, loopcounter);
            }
            if (size_brcont((yyvsp[(2) - (2)].stmtVal)->breakList) == 1){
                patchlabel_difzero(break_index, (yyvsp[(2) - (2)].stmtVal)->breakList->value + 1);
            } else {
                patch_brcont((yyvsp[(2) - (2)].stmtVal)->breakList, break_index, loopcounter);
            }
            
            // case of some break and cont jumps not being patched
            if (check_orphan_jump_brcont(break_index) == 1) {
                patch_brcont_last((yyvsp[(2) - (2)].stmtVal)->breakList, break_index);
            }
            if (check_orphan_jump_brcont(continue_index) == 1) {
                patch_brcont_last_reversed((yyvsp[(2) - (2)].stmtVal)->contList, continue_index);
            }
            free((yyvsp[(2) - (2)].stmtVal));
        }
        reset_temp_var_scope();
        fprintf(stderr, "stmtp -> stmtp stmt\n");
    }
    break;

  case 6:
#line 155 "parser.y"
    {
        if ((yyvsp[(1) - (2)].exprVal)->type == 5){
            emit(assign, NULL, newexpr_constbool(1), (yyvsp[(1) - (2)].exprVal), 0, yylineno);
            emit(jump, NULL, NULL, NULL, nextquad() + 3, yylineno);
            emit(assign, NULL, newexpr_constbool(0), (yyvsp[(1) - (2)].exprVal), 0, yylineno);
            patch((yyvsp[(1) - (2)].exprVal)->trueList, (yyvsp[(1) - (2)].exprVal)->falseList, nextquad(), nextquad() - 2);
        } else {
            exprsemicolon_true = nextquad() + 1;
            patch((yyvsp[(1) - (2)].exprVal)->trueList, (yyvsp[(1) - (2)].exprVal)->falseList, nextquad() + 1, exprsemicolon_true);
        }
        
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> expr\n");
    }
    break;

  case 7:
#line 169 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        fprintf(stderr, "statement -> ifstmt\n");
    }
    break;

  case 8:
#line 173 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        fprintf(stderr, "statement -> whilestmt\n");
    }
    break;

  case 9:
#line 177 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        fprintf(stderr, "statement -> forstmt\n");
    }
    break;

  case 10:
#line 181 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> returnstmt\n");
    }
    break;

  case 11:
#line 185 "parser.y"
    {
        (yyvsp[(1) - (2)].stmtVal) = make_stmt();
        break_index = nextquad();

        if (!break_state) {
            yyerror("Break statement not in a function");
            exit(0);
        } else {
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        (yyval.stmtVal) = (yyvsp[(1) - (2)].stmtVal);
        fprintf(stderr, "statement -> break;\n");
    }
    break;

  case 12:
#line 198 "parser.y"
    {
        (yyvsp[(1) - (2)].stmtVal) = make_stmt();
        continue_index = nextquad();
        if (!continue_state) {
            yyerror("Continue statement not in a function");
            exit(0);
        } else {
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        (yyval.stmtVal) = (yyvsp[(1) - (2)].stmtVal);
        fprintf(stderr, "statement -> continue;\n");
    }
    break;

  case 13:
#line 210 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> block;\n");
    }
    break;

  case 14:
#line 214 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> funcdef;\n");
    }
    break;

  case 15:
#line 218 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> warning;\n");
    }
    break;

  case 16:
#line 222 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> string_comment_error;\n");
    }
    break;

  case 17:
#line 226 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> comment;\n");
    }
    break;

  case 18:
#line 230 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        fprintf(stderr, "statement -> ;\n");
    }
    break;

  case 19:
#line 234 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        yyerror("syntax error");
    }
    break;

  case 20:
#line 240 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "expression -> assignexpr\n");
    }
    break;

  case 21:
#line 244 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), add, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expression -> expr + expr\n");
    }
    break;

  case 22:
#line 248 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), sub, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expression -> expr - expr\n");
    }
    break;

  case 23:
#line 252 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), mul, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expression -> expr * expr\n");
    }
    break;

  case 24:
#line 256 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), mod, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expression -> expr %% expr\n");
    }
    break;

  case 25:
#line 260 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), divide, (yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "expression -> expr // expr\n");
    }
    break;

  case 26:
#line 264 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 27:
#line 266 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_greater, (yyvsp[(4) - (4)].exprVal));
        fprintf(stderr, "expression -> expr > expr\n");
    }
    break;

  case 28:
#line 270 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 29:
#line 272 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_greatereq, (yyvsp[(4) - (4)].exprVal));
        fprintf(stderr, "expression -> expr >= expr\n");
    }
    break;

  case 30:
#line 276 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 31:
#line 278 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_less, (yyvsp[(4) - (4)].exprVal));
        fprintf(stderr, "expression -> expr < expr\n");
    }
    break;

  case 32:
#line 282 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 33:
#line 284 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_lesseq, (yyvsp[(4) - (4)].exprVal));
        fprintf(stderr, "expression -> expr <= expr\n");
    }
    break;

  case 34:
#line 288 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 35:
#line 290 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_eq, (yyvsp[(4) - (4)].exprVal));
        fprintf(stderr, "expression -> expr == expr\n");
    }
    break;

  case 36:
#line 294 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 37:
#line 296 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_neq, (yyvsp[(4) - (4)].exprVal));
        fprintf(stderr, "expression -> expr != expr\n");
    }
    break;

  case 38:
#line 300 "parser.y"
    {
        fix_not((yyvsp[(1) - (3)].exprVal), or);
        if (fix_compare((yyvsp[(1) - (3)].exprVal), or) == 0 && (yyvsp[(1) - (3)].exprVal)->type != boolexpr_e){
            (yyvsp[(1) - (3)].exprVal)->trueList = append((yyvsp[(1) - (3)].exprVal)->trueList, (yyvsp[(3) - (3)].unsVal), or);
            (yyvsp[(1) - (3)].exprVal)->falseList = append((yyvsp[(1) - (3)].exprVal)->falseList, (yyvsp[(3) - (3)].unsVal)+1, or);
            emit(if_eq, (yyvsp[(1) - (3)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
    }
    break;

  case 39:
#line 308 "parser.y"
    {
        (yyval.exprVal) = newexpr(boolexpr_e);
        (yyval.exprVal)->sym = newtemp();
        fix_not((yyvsp[(5) - (5)].exprVal), or);
        if (fix_compare((yyvsp[(5) - (5)].exprVal), or) == 0 && (yyvsp[(5) - (5)].exprVal)->type != boolexpr_e){
            (yyvsp[(1) - (5)].exprVal)->trueList = append((yyvsp[(1) - (5)].exprVal)->trueList, nextquad(), or);
            (yyvsp[(1) - (5)].exprVal)->falseList = append((yyvsp[(1) - (5)].exprVal)->falseList, nextquad()+1, or);
            emit(if_eq, (yyvsp[(5) - (5)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        (yyval.exprVal)->trueList = merge((yyvsp[(1) - (5)].exprVal)->trueList, (yyvsp[(5) - (5)].exprVal)->trueList);
        (yyval.exprVal)->falseList = merge((yyvsp[(1) - (5)].exprVal)->falseList, (yyvsp[(5) - (5)].exprVal)->falseList);
        fprintf(stderr, "expression -> expr || expr\n");
    }
    break;

  case 40:
#line 322 "parser.y"
    {
        fix_not((yyvsp[(1) - (3)].exprVal), and);
        if (fix_compare((yyvsp[(1) - (3)].exprVal), and) == 0 && (yyvsp[(1) - (3)].exprVal)->type != boolexpr_e){
            (yyvsp[(1) - (3)].exprVal)->trueList = append((yyvsp[(1) - (3)].exprVal)->trueList, (yyvsp[(3) - (3)].unsVal), and);
            (yyvsp[(1) - (3)].exprVal)->falseList = append((yyvsp[(1) - (3)].exprVal)->falseList, (yyvsp[(3) - (3)].unsVal)+1, and);
            emit(if_eq, (yyvsp[(1) - (3)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
    }
    break;

  case 41:
#line 330 "parser.y"
    {
        (yyval.exprVal) = newexpr(boolexpr_e);
        (yyval.exprVal)->sym = newtemp();
        fix_not((yyvsp[(5) - (5)].exprVal), and);
        if (fix_compare((yyvsp[(5) - (5)].exprVal), and) == 0 && (yyvsp[(5) - (5)].exprVal)->type != boolexpr_e){
            (yyvsp[(1) - (5)].exprVal)->trueList = append((yyvsp[(1) - (5)].exprVal)->trueList, nextquad(), and);
            (yyvsp[(1) - (5)].exprVal)->falseList = append((yyvsp[(1) - (5)].exprVal)->falseList, nextquad()+1, and);
            emit(if_eq, (yyvsp[(5) - (5)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        (yyval.exprVal)->trueList = merge((yyvsp[(1) - (5)].exprVal)->trueList, (yyvsp[(5) - (5)].exprVal)->trueList);
        (yyval.exprVal)->falseList = merge((yyvsp[(1) - (5)].exprVal)->falseList, (yyvsp[(5) - (5)].exprVal)->falseList);
        fprintf(stderr, "expression -> expr && expr\n");
    }
    break;

  case 42:
#line 344 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "expression -> term\n");
    }
    break;

  case 43:
#line 350 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(2) - (3)].exprVal);
        fprintf(stderr, "term -> (expr)\n");
    }
    break;

  case 44:
#line 354 "parser.y"
    {
        compile_time_expression_error((yyvsp[(2) - (2)].exprVal));
        (yyval.exprVal) = newexpr(arithexpr_e);
        (yyval.exprVal)->sym = newtemp();
        emit(uminus, (yyvsp[(2) - (2)].exprVal), (yyval.exprVal), NULL, 0, yylineno);
        fprintf(stderr, "term -> -expr\n");
    }
    break;

  case 45:
#line 361 "parser.y"
    {
        (yyval.exprVal) = newexpr(boolexpr_e);
        (yyval.exprVal)->sym = newtemp();
        if ((yyvsp[(2) - (2)].exprVal)->type != boolexpr_e) {
            (yyvsp[(2) - (2)].exprVal)->trueList = append((yyvsp[(2) - (2)].exprVal)->trueList, nextquad(), not);
            (yyvsp[(2) - (2)].exprVal)->falseList = append((yyvsp[(2) - (2)].exprVal)->falseList, nextquad()+1, not);
            emit(if_eq, (yyvsp[(2) - (2)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        
        (yyval.exprVal)->trueList = (yyvsp[(2) - (2)].exprVal)->trueList;
        (yyval.exprVal)->falseList = (yyvsp[(2) - (2)].exprVal)->falseList;
        fprintf(stderr, "term -> not expr\n");
    }
    break;

  case 46:
#line 375 "parser.y"
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

  case 47:
#line 390 "parser.y"
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

  case 48:
#line 406 "parser.y"
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

  case 49:
#line 421 "parser.y"
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

  case 50:
#line 437 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "term -> primary\n");
    }
    break;

  case 51:
#line 443 "parser.y"
    {
        if ((yyvsp[(1) - (3)].exprVal)->type == tableitem_e){
            emit(tablesetelem, (yyvsp[(3) - (3)].exprVal), (yyvsp[(1) - (3)].exprVal)->index, (yyvsp[(1) - (3)].exprVal), 0, yylineno);
            (yyval.exprVal) = emit_iftableitem((yyvsp[(1) - (3)].exprVal), yylineno);
            (yyval.exprVal)->type = assignexpr_e;
        } else {
            (yyval.exprVal) = newexpr(assignexpr_e);
            (yyval.exprVal)->sym = newtemp();
            if ((yyvsp[(3) - (3)].exprVal)->type == 5){ // if is boolexpr_e
                emit(assign, NULL, newexpr_constbool(1), (yyvsp[(3) - (3)].exprVal), 0, yylineno);
                assignlabel_true = nextquad();
                emit(jump, NULL, NULL, NULL, nextquad() + 3, yylineno);
                emit(assign, NULL, newexpr_constbool(0), (yyvsp[(3) - (3)].exprVal), 0, yylineno);
                patch((yyvsp[(3) - (3)].exprVal)->trueList, (yyvsp[(3) - (3)].exprVal)->falseList, nextquad(), assignlabel_true);
                emit(assign, (yyvsp[(3) - (3)].exprVal), NULL, (yyvsp[(1) - (3)].exprVal), 0, yylineno);
                emit(assign, (yyvsp[(1) - (3)].exprVal), NULL, (yyval.exprVal), 0, yylineno);
            } else {
                emit(assign, (yyvsp[(3) - (3)].exprVal), NULL, (yyvsp[(1) - (3)].exprVal), 0, yylineno);
                emit(assign, (yyvsp[(1) - (3)].exprVal), NULL, (yyval.exprVal), 0, yylineno);  
            }
              
        }
        fprintf(stderr, "assignexpr -> lvalue = expr\n");
    }
    break;

  case 52:
#line 469 "parser.y"
    {
        (yyval.exprVal) = emit_iftableitem((yyvsp[(1) - (1)].exprVal), yylineno);
        fprintf(stderr, "primary -> lvalue\n");
    }
    break;

  case 53:
#line 473 "parser.y"
    {
        fprintf(stderr, "primary -> call\n");
    }
    break;

  case 54:
#line 476 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "primary -> objectdef\n");
    }
    break;

  case 55:
#line 480 "parser.y"
    {
        (yyval.exprVal) = newexpr(programfunc_e);
        (yyval.exprVal)->sym = (yyvsp[(2) - (3)].symbVal);
        fprintf(stderr, "primary -> (funcdef)\n");
    }
    break;

  case 56:
#line 485 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal); 
        fprintf(stderr, "primary -> const\n");
    }
    break;

  case 57:
#line 491 "parser.y"
    {
        int temp = scope;
        int accessibility_flag = 0;
        while (temp > 0){
            if (lookup_by_specific_scope ((yyvsp[(1) - (1)].strVal), temp)){
                if(lookup_last_type(temp) == 1){
                    accessibility_flag = 1;
                } else {
                    sym_temp = lookup_by_specific_scope_and_return((yyvsp[(1) - (1)].strVal), temp);
                    accessibility_flag = 1;
                }
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
            } else {
                sym_temp = insert_and_space_offset((yyvsp[(1) - (1)].strVal), scope, yylineno, LOCAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            }
        } 
        
        (yyval.exprVal) = lvalue_expr(sym_temp);
        is_member = 0;
        fprintf(stderr, "lvalue -> ID\n");
    }
    break;

  case 58:
#line 523 "parser.y"
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
            fprintf(stderr, "\nERROR -> collision  with LIBFUNC at line %d\n\n", yylineno);         
        }
        (yyval.exprVal) = lvalue_expr(sym_temp);
        is_member = 0;
        fprintf(stderr, "lvalue -> LOCAL_KEYWORD ID\n");
    }
    break;

  case 59:
#line 541 "parser.y"
    {  
        if (!lookup_by_specific_scope((yyvsp[(2) - (2)].strVal), 0)){
            fprintf(stderr, "\nERROR -> undeclared variable or function %s at line %d\n\n", (yyvsp[(2) - (2)].strVal), yylineno);
        } else {
            sym_temp = lookup_by_specific_scope_and_return((yyvsp[(2) - (2)].strVal), scope);
            (yyval.exprVal) = lvalue_expr(sym_temp);
        }
        is_member = 0;
        fprintf(stderr, "lvalue -> DOUBLE_COLON ID\n");
    }
    break;

  case 60:
#line 551 "parser.y"
    {
        is_member = 1;
        fprintf(stderr, "lvalue -> member\n");
    }
    break;

  case 61:
#line 557 "parser.y"
    {
        (yyval.exprVal) = member_item((yyvsp[(1) - (3)].exprVal), yylval.strVal, yylineno);
        fprintf(stderr, "member -> lvalue.id\n");
    }
    break;

  case 62:
#line 561 "parser.y"
    {
        (yyvsp[(1) - (4)].exprVal) = emit_iftableitem((yyvsp[(1) - (4)].exprVal), yylineno);
        (yyval.exprVal) = newexpr(tableitem_e);
        (yyval.exprVal)->sym = (yyvsp[(1) - (4)].exprVal)->sym;
        (yyval.exprVal)->index = (yyvsp[(3) - (4)].exprVal);
        fprintf(stderr, "member -> lvalue[expr]\n");
    }
    break;

  case 63:
#line 568 "parser.y"
    {
        fprintf(stderr, "member -> call.id\n");
    }
    break;

  case 64:
#line 571 "parser.y"
    {
        fprintf(stderr, "member -> call[expr]\n");
    }
    break;

  case 65:
#line 576 "parser.y"
    {
        (yyval.exprVal) = make_call((yyvsp[(1) - (4)].exprVal), (yyvsp[(3) - (4)].exprVal), yylineno);
        fprintf(stderr, "call -> call[elist]\n");
    }
    break;

  case 66:
#line 580 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = emit_iftableitem((yyvsp[(1) - (2)].exprVal), yylineno);
        if ((yyvsp[(2) - (2)].callVal)->method){
            expr *t = malloc(sizeof(struct expr));
            t = (yyvsp[(1) - (2)].exprVal);
            (yyvsp[(1) - (2)].exprVal) = emit_iftableitem(member_item(t, (yyvsp[(2) - (2)].callVal)->name, yylineno), yylineno);
            t->next = (yyvsp[(2) - (2)].callVal)->elist;
            (yyvsp[(2) - (2)].callVal)->elist = t;
        }
        (yyval.exprVal) = make_call((yyvsp[(1) - (2)].exprVal), (yyvsp[(2) - (2)].callVal)->elist, yylineno);
        fprintf(stderr, "call -> lvalue callsuffix\n");
    }
    break;

  case 67:
#line 592 "parser.y"
    {
        expr* func = newexpr(programfunc_e);
        func->sym = (yyvsp[(2) - (6)].symbVal);
        (yyval.exprVal) = make_call(func, (yyvsp[(5) - (6)].exprVal), yylineno);
        fprintf(stderr, "call -> (funcdef) (elist)\n");
    }
    break;

  case 68:
#line 600 "parser.y"
    {
        (yyval.callVal) = (yyvsp[(1) - (1)].callVal);
        fprintf(stderr, "callsuffix -> normcall\n");
    }
    break;

  case 69:
#line 604 "parser.y"
    {
        (yyval.callVal) = (yyvsp[(1) - (1)].callVal);
        fprintf(stderr, "callsuffix -> methodcall\n");
    }
    break;

  case 70:
#line 610 "parser.y"
    {
        (yyval.callVal) = malloc(sizeof(struct call_c));
        (yyval.callVal)->elist = (yyvsp[(2) - (3)].exprVal);
        (yyval.callVal)->method = 0;
        (yyval.callVal)->name = NULL;
        fprintf(stderr, "normcall -> (elist)\n");
    }
    break;

  case 71:
#line 617 "parser.y"
    {
        fprintf(stderr, "normcall -> id(elist)\n");
    }
    break;

  case 72:
#line 620 "parser.y"
    {
        fprintf(stderr, "normcall -> id(elist)\n");
    }
    break;

  case 73:
#line 623 "parser.y"
    {
        fprintf(stderr, "normcall -> id()\n");
    }
    break;

  case 74:
#line 628 "parser.y"
    {
        (yyval.callVal) = malloc(sizeof(struct call_c));
        (yyval.callVal)->elist = (yyvsp[(4) - (5)].exprVal);
        (yyval.callVal)->method = 1;
        (yyval.callVal)->name = (yyvsp[(2) - (5)].strVal);
        fprintf(stderr, "methodcall -> ..id(elist)\n");
    }
    break;

  case 75:
#line 637 "parser.y"
    {
        (yyvsp[(1) - (1)].exprVal)->next= NULL;
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        clear_labels((yyvsp[(1) - (1)].exprVal));
        fprintf(stderr, "elist -> expr\n");
    }
    break;

  case 76:
#line 643 "parser.y"
    {
        (yyvsp[(3) - (3)].exprVal)->next = (yyvsp[(1) - (3)].exprVal);
        (yyval.exprVal) = (yyvsp[(3) - (3)].exprVal);
        clear_labels((yyvsp[(3) - (3)].exprVal));
        fprintf(stderr, "elist -> elist, expr\n");
    }
    break;

  case 77:
#line 649 "parser.y"
    {
        (yyval.exprVal)=NULL;
    }
    break;

  case 78:
#line 654 "parser.y"
    {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        if ((yyvsp[(2) - (3)].exprVal) != NULL){
            expr* temp = (yyvsp[(2) - (3)].exprVal);
            int i = 0;
            while (temp){
                emit(tablesetelem, newexpr_constnum(i++), (yyvsp[(2) - (3)].exprVal), t, 0, yylineno);
                temp = temp->next;
            }
        }
        (yyval.exprVal)=t;
        fprintf(stderr, "objectdef -> [elist]\n");
    }
    break;

  case 79:
#line 669 "parser.y"
    {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        while ((yyvsp[(2) - (3)].exprVal)){
            emit(tablesetelem, t, (yyvsp[(2) - (3)].exprVal)->index, (yyvsp[(2) - (3)].exprVal), 0, yylineno);
            (yyvsp[(2) - (3)].exprVal) = (yyvsp[(2) - (3)].exprVal)->next;
        }
        (yyval.exprVal) = t;
        fprintf(stderr, "objectdef -> [indexed]\n");
    }
    break;

  case 80:
#line 682 "parser.y"
    {
        (yyvsp[(1) - (1)].exprVal)->next = NULL;
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        fprintf(stderr, "indexed -> indexedelem\n");
    }
    break;

  case 81:
#line 687 "parser.y"
    {
        (yyvsp[(3) - (3)].exprVal)->next = (yyvsp[(1) - (3)].exprVal);
        (yyval.exprVal) = (yyvsp[(3) - (3)].exprVal);
        fprintf(stderr, "indexed -> indexed, indexedelem\n");
    }
    break;

  case 82:
#line 694 "parser.y"
    {
        (yyvsp[(2) - (5)].exprVal)->index = (yyvsp[(4) - (5)].exprVal);
        (yyval.exprVal) = (yyvsp[(2) - (5)].exprVal);
        fprintf(stderr, "indexedelem -> {expr:expr}\n");
    }
    break;

  case 83:
#line 701 "parser.y"
    {
        scope++;
        enable(scope);
    }
    break;

  case 84:
#line 704 "parser.y"
    {
        hide(scope);
        scope--;
        fprintf(stderr, "block -> {}\n");
    }
    break;

  case 85:
#line 709 "parser.y"
    {
        scope++;
        enable(scope);
    }
    break;

  case 86:
#line 712 "parser.y"
    {
        hide(scope);
        scope--;
        (yyval.stmtVal) = (yyvsp[(3) - (4)].stmtVal);
        fprintf(stderr, "block -> {stmt*}\n");
    }
    break;

  case 87:
#line 720 "parser.y"
    { 
        (yyval.strVal) = yylval.strVal; 
        fprintf(stderr, "funcname -> ID\n");
    }
    break;

  case 88:
#line 724 "parser.y"
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

  case 89:
#line 735 "parser.y"
    {  
        if (check_library_collisions((yyvsp[(2) - (2)].strVal)) && !scope) {
            fprintf(stderr, "\nERROR -> Collision with library function: at line %d\n\n", yylineno);
        } else {
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

                if (user != -1) {
                    fprintf(stderr, "\nERROR at line %d -> Function %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), user);
                } else if (global != -1) {
                    fprintf(stderr, "\nERROR at line %d -> Global variable %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), global); 
                } else if (local != -1 ) { 
                    fprintf(stderr, "\nERROR at line %d -> Local variable %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), local); 
                } else if (formal != -1 ) {
                    fprintf(stderr, "\nERROR at line %d -> Formal variable %s already declared: at line %d\n\n", yylineno, (yyvsp[(2) - (2)].strVal), formal); 
                }  
            }
        }
        fprintf(stderr, "funcprefix -> FUNCTION funcname\n");
    }
    break;

  case 90:
#line 768 "parser.y"
    {
        ++scope;
        return_state++;
    }
    break;

  case 91:
#line 771 "parser.y"
    {
        enterscopespace();
        resetfunctionlocalsoffset();
        scope--;
        fprintf(stderr, "funcargs -> (idlist)\n");
    }
    break;

  case 92:
#line 779 "parser.y"
    {
        (yyval.unsVal) = currscopeoffset();
        exitscopespace();
        fprintf(stderr, "funcbody -> block\n");
    }
    break;

  case 93:
#line 786 "parser.y"
    {
        exitscopespace();
        (yyvsp[(1) - (3)].symbVal)->totalLocals = (yyvsp[(3) - (3)].unsVal);
        restorecurrscopeoffset(pop_and_top());
        (yyval.symbVal) = (yyvsp[(1) - (3)].symbVal);
        emit(funcend, NULL, NULL, lvalue_expr((yyvsp[(1) - (3)].symbVal)), 0, yylineno);
        return_state--; 
        fprintf(stderr, "funcdef -> funcprefix funcargs funcbody\n");
    }
    break;

  case 94:
#line 797 "parser.y"
    {
        (yyval.exprVal) = newexpr_constnum(yylval.intVal);
        fprintf(stderr, "const -> INTEGER\n");
    }
    break;

  case 95:
#line 801 "parser.y"
    {
        (yyval.exprVal) = newexpr_constnum(yylval.realVal);
        fprintf(stderr, "const -> REAL\n");
    }
    break;

  case 96:
#line 805 "parser.y"
    {
        (yyval.exprVal) = newexpr_conststring(strcat(yylval.strVal,"\""));
        fprintf(stderr, "const -> STRING\n");
    }
    break;

  case 97:
#line 809 "parser.y"
    {
        fprintf(stderr, "const -> NIL\n");
    }
    break;

  case 98:
#line 812 "parser.y"
    {
        (yyval.exprVal) = newexpr_constbool(1);
        fprintf(stderr, "const -> TRUE\n");
    }
    break;

  case 99:
#line 816 "parser.y"
    {
        (yyval.exprVal) = newexpr_constbool(0);
        fprintf(stderr, "const -> FALSE\n");
    }
    break;

  case 100:
#line 822 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) {
            fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        } else {
            sym_temp = insert_and_space_offset(yylval.strVal, scope, yylineno, FORMAL, currscopespace(), currscopeoffset());
            inccurrscopeoffset();
        } 
        fprintf(stderr, "idlist -> ID\n");
    }
    break;

  case 103:
#line 834 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) {
            fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        } else {
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

  case 105:
#line 850 "parser.y"
    {
        if (!(yyvsp[(3) - (4)].exprVal)->trueList){
            // e.g if (false)
            (yyvsp[(3) - (4)].exprVal)->trueList = append((yyvsp[(3) - (4)].exprVal)->trueList, nextquad(), or);
            (yyvsp[(3) - (4)].exprVal)->falseList = append((yyvsp[(3) - (4)].exprVal)->falseList, nextquad()+1, or);
            emit(if_eq, (yyvsp[(3) - (4)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        
        iflabel_true = nextquad() + 1;
        
        (yyval.exprVal) = (yyvsp[(3) - (4)].exprVal);
        fprintf(stderr, "ifprefix -> IF LEFT_PARENTHESES expr RIGHT_PARENTHESES\n");
    }
    break;

  case 106:
#line 866 "parser.y"
    { 
        (yyval.unsVal) = nextquad(); 
    }
    break;

  case 107:
#line 871 "parser.y"
    {
        patch((yyvsp[(1) - (2)].exprVal)->trueList, (yyvsp[(1) - (2)].exprVal)->falseList, nextquad() + 1, iflabel_true);
        fprintf(stderr, "ifstmt -> if (expr) stmt\n");
        (yyval.stmtVal) = (yyvsp[(2) - (2)].stmtVal);
    }
    break;

  case 108:
#line 876 "parser.y"
    {
        emit(jump, NULL, NULL, NULL, 0, yylineno);
        patch((yyvsp[(1) - (3)].exprVal)->trueList, (yyvsp[(1) - (3)].exprVal)->falseList, nextquad() + 1, iflabel_true);
        iflabel_true = nextquad() - 1;
    }
    break;

  case 109:
#line 880 "parser.y"
    {
        patch_orphan_ifelsejumps(nextquad()+1);
        patchlabel(iflabel_true, nextquad()+1);
        (yyval.stmtVal) = (yyvsp[(5) - (5)].stmtVal);
        fprintf(stderr, "ifstmt -> if (expr) stmt ELSE stmt\n");
    }
    break;

  case 110:
#line 888 "parser.y"
    {
        break_state++;
        continue_state++;
        loopcounter++;
        (yyval.unsVal) = nextquad() + 1;
        fprintf(stderr, "whilestart -> WHILE\n");
    }
    break;

  case 111:
#line 897 "parser.y"
    {
        if (!(yyvsp[(2) - (3)].exprVal)->trueList){
            // e.g while (false) or while(a) or while (true)
            (yyvsp[(2) - (3)].exprVal)->trueList = append((yyvsp[(2) - (3)].exprVal)->trueList, nextquad(), or);
            (yyvsp[(2) - (3)].exprVal)->falseList = append((yyvsp[(2) - (3)].exprVal)->falseList, nextquad()+1, or);
            emit(if_eq, (yyvsp[(2) - (3)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        (yyval.exprVal) = (yyvsp[(2) - (3)].exprVal);
        whilelabel_true = nextquad() + 1;
        fprintf(stderr, "whilecond -> (expr)\n");
    }
    break;

  case 112:
#line 911 "parser.y"
    {
        emit(jump, NULL, NULL, NULL, (yyvsp[(1) - (3)].unsVal), get_quad_line((yyvsp[(1) - (3)].unsVal)));
        
        patch((yyvsp[(2) - (3)].exprVal)->trueList, (yyvsp[(2) - (3)].exprVal)->falseList, nextquad() + 1, whilelabel_true);
        //if we found a break statement
        
        if (break_index >= 0) (yyvsp[(3) - (3)].stmtVal)->breakList = append_brcont((yyvsp[(3) - (3)].stmtVal)->breakList, nextquad());
        if (continue_index >= 0) (yyvsp[(3) - (3)].stmtVal)->contList = append_brcont((yyvsp[(3) - (3)].stmtVal)->contList, (yyvsp[(1) - (3)].unsVal));
        (yyval.stmtVal) = (yyvsp[(3) - (3)].stmtVal);
        break_state--;
        continue_state--;
        loopcounter--;
        fprintf(stderr, "whilestmt -> WHILE (expr) stmt\n");
    }
    break;

  case 113:
#line 927 "parser.y"
    {
        (yyval.unsVal) = nextquad();
    }
    break;

  case 114:
#line 932 "parser.y"
    {}
    break;

  case 115:
#line 932 "parser.y"
    {
        loopcounter++;
        break_state++;
        continue_state++;
        for_label_start = nextquad() + 1;
        fprintf(stderr, "forstmt -> for(elist; expr; elist)\n");
    }
    break;

  case 116:
#line 938 "parser.y"
    {
        if (!(yyvsp[(7) - (8)].exprVal)->trueList){
            (yyvsp[(7) - (8)].exprVal)->trueList = append((yyvsp[(7) - (8)].exprVal)->trueList, nextquad(), or);
            (yyvsp[(7) - (8)].exprVal)->falseList = append((yyvsp[(7) - (8)].exprVal)->falseList, nextquad()+1, or);
            emit(if_eq, NULL, newexpr_constbool(1), (yyvsp[(7) - (8)].exprVal), 0, yylineno); 
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        for_label = nextquad() + 1;
    }
    break;

  case 117:
#line 946 "parser.y"
    {
        emit(jump, NULL, NULL, NULL, for_label_start, yylineno);
        patchlabel(for_label_start - 1, nextquad() + 1);
        forlabel_true = nextquad() + 1;
    }
    break;

  case 118:
#line 950 "parser.y"
    {
        emit(jump, NULL, NULL, NULL, for_label, yylineno);
        patch((yyvsp[(7) - (13)].exprVal)->trueList, (yyvsp[(7) - (13)].exprVal)->falseList, nextquad() + 1, forlabel_true);
        patchlabel(for_label_start - 1, forlabel_true);

        if (break_index >= 0) (yyvsp[(13) - (13)].stmtVal)->breakList = append_brcont((yyvsp[(13) - (13)].stmtVal)->breakList, nextquad());
        if (continue_index >= 0) (yyvsp[(13) - (13)].stmtVal)->contList = append_brcont((yyvsp[(13) - (13)].stmtVal)->contList, for_label);
        (yyval.stmtVal) = (yyvsp[(13) - (13)].stmtVal);

        for_label = 0;
        for_label_start = 0;
        break_state--;
        continue_state--;
        loopcounter--;
        fprintf(stderr, "forstmt -> for(elist; expr; elist) stmt\n");
    }
    break;

  case 119:
#line 968 "parser.y"
    {
        if (!return_state) {
            yyerror("Return statement not in a function");
            exit(0);
        }
        else emit(ret, NULL, NULL, (yyvsp[(2) - (3)].exprVal), 0, yylineno);
        fprintf(stderr, "returnstmt -> RETURN expr SEMICOLON\n");
    }
    break;

  case 120:
#line 976 "parser.y"
    {
        if (!return_state) {
            yyerror("Return statement not in a function");
            exit(0);
        }
        else emit(ret, NULL, NULL, NULL, 0, yylineno);
        fprintf(stderr, "returnstmt -> RETURN SEMICOLON\n");
    }
    break;

  case 121:
#line 986 "parser.y"
    {
        fprintf(stderr, "comment -> Single line comment\n");
    }
    break;

  case 122:
#line 989 "parser.y"
    {
        fprintf(stderr, "comment -> Multiline comment\n");
    }
    break;

  case 123:
#line 992 "parser.y"
    {
        fprintf(stderr, "comment -> Multiline comment with nested comments\n");
    }
    break;

  case 124:
#line 997 "parser.y"
    {
        fprintf(stderr, "warning -> WARNING_STRING\n");
    }
    break;

  case 125:
#line 1002 "parser.y"
    {
        fprintf(stderr, "string_comment_error -> MULTI_COMMENT_NEVER_CLOSED\n");
    }
    break;

  case 126:
#line 1005 "parser.y"
    {
        fprintf(stderr, "string_comment_error -> STRING_NEVER_CLOSED\n");
    }
    break;


/* Line 1267 of yacc.c.  */
#line 3124 "parser.c"
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


#line 1009 "parser.y"


void check_term () {
    if (!is_member){
        if (lookup_by_specific_type(yylval.strVal, USERFUNC))   {
            fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
        }
        if (lookup_by_specific_type(yylval.strVal, LIBFUNC))    {
            fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
        }
     } else {
        if (lookup_by_specific_type(yytext, USERFUNC)) {
            fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
        }
        if (lookup_by_specific_type(yytext, LIBFUNC))  {
            fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
        }
     }
}

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
    t->type = boolexpr_e;
    t->trueList = append(t->trueList, nextquad(), temp);
    t->falseList = append(t->falseList, nextquad()+1, temp);
    emit(t2, t1, t3, NULL, 0, yylineno);
    emit(jump, NULL, NULL, NULL, 0, yylineno);
    return t;
}

void yyerror (char* yaccProvidedMessage){
	fprintf(stderr, "\nERROR -> %s: at line %d, before token %s\n\n", yaccProvidedMessage, yylineno, yytext);
}

int main(int argc, char** argv){
    if (argc > 1){
        if (!(yyin = fopen(argv[1], "r"))){
            fprintf(stderr,"Cannot read file: %s\n",argv[1]);
            return 1;
        }
    } else yyin = stdin;

    initialize_libraries();
    yyparse();  
    print_by_scopes();
    print_quads();

    return 0;   
}
