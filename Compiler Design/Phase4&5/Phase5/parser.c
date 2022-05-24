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
     ASSIGNMENT = 262,
     ADD = 263,
     SUB = 264,
     SHARP = 265,
     SLASH = 266,
     PERCENT = 267,
     EQUAL = 268,
     NOT_EQUAL = 269,
     PLUS_PLUS = 270,
     MINUS_MINUS = 271,
     LESS = 272,
     GREATER = 273,
     GREATER_OR_EQUAL = 274,
     LESS_OR_EQUAL = 275,
     AND = 276,
     OR = 277,
     LEFT_CURLY_BRACKET = 278,
     RIGHT_CURLY_BRACKET = 279,
     LEFT_SQUARE_BRACKET = 280,
     RIGHT_SQUARE_BRACKET = 281,
     LEFT_PARENTHESES = 282,
     RIGHT_PARENTHESES = 283,
     SEMICOLON = 284,
     COMMA = 285,
     COLON = 286,
     DOUBLE_COLON = 287,
     DOT = 288,
     DOUBLE_DOT = 289,
     IF = 290,
     ELSE = 291,
     WHILE = 292,
     FOR = 293,
     FUNCTION = 294,
     RETURN = 295,
     BREAK = 296,
     CONTINUE = 297,
     NOT = 298,
     LOCAL_KEYWORD = 299,
     TRUE = 300,
     FALSE = 301,
     NIL = 302
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define ID 260
#define STRING 261
#define ASSIGNMENT 262
#define ADD 263
#define SUB 264
#define SHARP 265
#define SLASH 266
#define PERCENT 267
#define EQUAL 268
#define NOT_EQUAL 269
#define PLUS_PLUS 270
#define MINUS_MINUS 271
#define LESS 272
#define GREATER 273
#define GREATER_OR_EQUAL 274
#define LESS_OR_EQUAL 275
#define AND 276
#define OR 277
#define LEFT_CURLY_BRACKET 278
#define RIGHT_CURLY_BRACKET 279
#define LEFT_SQUARE_BRACKET 280
#define RIGHT_SQUARE_BRACKET 281
#define LEFT_PARENTHESES 282
#define RIGHT_PARENTHESES 283
#define SEMICOLON 284
#define COMMA 285
#define COLON 286
#define DOUBLE_COLON 287
#define DOT 288
#define DOUBLE_DOT 289
#define IF 290
#define ELSE 291
#define WHILE 292
#define FOR 293
#define FUNCTION 294
#define RETURN 295
#define BREAK 296
#define CONTINUE 297
#define NOT 298
#define LOCAL_KEYWORD 299
#define TRUE 300
#define FALSE 301
#define NIL 302




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #include "avm.h"   
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
    unsigned int for_label_help = 0;

    int break_index = -1;
    int continue_index = -1;
    unsigned int loopcounter = 0;

    unsigned int whilelabel_true = 0;
    unsigned int iflabel_true = 0;
    unsigned int assignlabel_true = 0;
    unsigned int exprsemicolon_true = 0;
    unsigned int forlabel_true = 0;
    unsigned int returnlabel = 0;
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
#line 42 "parser.y"
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
#line 240 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 253 "parser.c"

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
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   659

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    15,    17,    19,
      21,    24,    27,    29,    31,    33,    35,    39,    43,    47,
      51,    55,    56,    61,    62,    67,    68,    73,    74,    79,
      80,    85,    86,    91,    92,    98,    99,   105,   107,   111,
     114,   117,   120,   123,   126,   129,   131,   135,   137,   139,
     141,   145,   147,   149,   152,   155,   157,   161,   166,   170,
     175,   180,   183,   190,   192,   194,   198,   203,   210,   214,
     220,   222,   226,   227,   231,   235,   238,   242,   243,   249,
     250,   255,   256,   260,   262,   263,   266,   267,   272,   274,
     278,   280,   282,   284,   286,   288,   290,   291,   295,   296,
     297,   302,   303,   308,   310,   313,   314,   320,   322,   326,
     330,   331,   332,   333,   334,   335,   349,   353
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    51,    -1,    50,    51,    -1,
      52,    29,    -1,    91,    -1,    95,    -1,    97,    -1,   102,
      -1,    41,    29,    -1,    42,    29,    -1,    75,    -1,    83,
      -1,    29,    -1,    62,    -1,    52,     8,    52,    -1,    52,
       9,    52,    -1,    52,    10,    52,    -1,    52,    12,    52,
      -1,    52,    11,    52,    -1,    -1,    52,    18,    53,    52,
      -1,    -1,    52,    19,    54,    52,    -1,    -1,    52,    17,
      55,    52,    -1,    -1,    52,    20,    56,    52,    -1,    -1,
      52,    13,    57,    52,    -1,    -1,    52,    14,    58,    52,
      -1,    -1,    52,    22,    96,    59,    52,    -1,    -1,    52,
      21,    96,    60,    52,    -1,    61,    -1,    27,    52,    28,
      -1,     9,    52,    -1,    43,    52,    -1,    15,    64,    -1,
      64,    15,    -1,    16,    64,    -1,    64,    16,    -1,    63,
      -1,    64,     7,    52,    -1,    64,    -1,    66,    -1,    71,
      -1,    27,    83,    28,    -1,    84,    -1,     5,    -1,    44,
       5,    -1,    32,     5,    -1,    65,    -1,    64,    33,     5,
      -1,    64,    25,    52,    26,    -1,    66,    33,     5,    -1,
      66,    25,    52,    26,    -1,    66,    27,    70,    28,    -1,
      64,    67,    -1,    27,    83,    28,    27,    70,    28,    -1,
      68,    -1,    69,    -1,    27,    70,    28,    -1,     5,    27,
      52,    28,    -1,     5,    27,    70,    30,    52,    28,    -1,
       5,    27,    28,    -1,    34,     5,    27,    70,    28,    -1,
      52,    -1,    70,    30,    52,    -1,    -1,    25,    70,    26,
      -1,    25,    72,    26,    -1,    74,    73,    -1,    30,    74,
      73,    -1,    -1,    23,    52,    31,    52,    24,    -1,    -1,
      23,    76,    50,    24,    -1,    -1,    23,    77,    24,    -1,
       5,    -1,    -1,    39,    78,    -1,    -1,    27,    81,    85,
      28,    -1,    75,    -1,    79,    80,    82,    -1,     3,    -1,
       4,    -1,     6,    -1,    47,    -1,    45,    -1,    46,    -1,
      -1,     5,    86,    87,    -1,    -1,    -1,    30,     5,    88,
      87,    -1,    -1,    35,    27,    52,    28,    -1,    36,    -1,
      89,    51,    -1,    -1,    89,    51,    90,    92,    51,    -1,
      37,    -1,    27,    52,    28,    -1,    93,    94,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    27,    98,    70,    29,
      99,    52,    29,   100,    70,    28,   101,    51,    -1,    40,
      52,    29,    -1,    40,    29,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    93,    93,    99,   126,   155,   169,   173,   177,   181,
     185,   198,   210,   214,   218,   224,   228,   232,   236,   240,
     244,   248,   248,   254,   254,   260,   260,   266,   266,   272,
     272,   278,   278,   284,   284,   306,   306,   328,   334,   338,
     347,   360,   375,   391,   406,   422,   428,   456,   460,   463,
     467,   472,   478,   494,   509,   524,   531,   535,   542,   545,
     550,   554,   567,   575,   579,   585,   592,   595,   598,   603,
     612,   618,   626,   631,   647,   662,   668,   673,   679,   686,
     686,   695,   695,   705,   709,   720,   755,   755,   766,   773,
     789,   793,   797,   801,   804,   808,   814,   814,   825,   830,
     830,   844,   850,   868,   873,   878,   878,   890,   899,   915,
     931,   936,   936,   943,   955,   936,   980,   993
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "ID", "STRING",
  "ASSIGNMENT", "ADD", "SUB", "SHARP", "SLASH", "PERCENT", "EQUAL",
  "NOT_EQUAL", "PLUS_PLUS", "MINUS_MINUS", "LESS", "GREATER",
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "AND", "OR", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "SEMICOLON", "COMMA", "COLON",
  "DOUBLE_COLON", "DOT", "DOUBLE_DOT", "IF", "ELSE", "WHILE", "FOR",
  "FUNCTION", "RETURN", "BREAK", "CONTINUE", "NOT", "LOCAL_KEYWORD",
  "TRUE", "FALSE", "NIL", "$accept", "program", "stmtp", "stmt", "expr",
  "@1", "@2", "@3", "@4", "@5", "@6", "@7", "@8", "term", "assignexpr",
  "primary", "lvalue", "member", "call", "callsuffix", "normcall",
  "methodcall", "elist", "objectdef", "indexed", "clindexedelem",
  "indexedelem", "block", "@9", "@10", "funcname", "funcprefix",
  "funcargs", "@11", "funcbody", "funcdef", "const", "idlist", "@12",
  "idlist_case_commaid", "@13", "ifprefix", "elseprefix", "ifstmt", "@14",
  "whilestart", "whilecond", "whilestmt", "M", "forstmt", "@15", "@16",
  "@17", "@18", "returnstmt", 0
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    53,    52,    54,    52,    55,    52,    56,    52,    57,
      52,    58,    52,    59,    52,    60,    52,    52,    61,    61,
      61,    61,    61,    61,    61,    61,    62,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    65,    65,    65,    65,
      66,    66,    66,    67,    67,    68,    68,    68,    68,    69,
      70,    70,    70,    71,    71,    72,    73,    73,    74,    76,
      75,    77,    75,    78,    78,    79,    81,    80,    82,    83,
      84,    84,    84,    84,    84,    84,    86,    85,    85,    88,
      87,    87,    89,    90,    91,    92,    91,    93,    94,    95,
      96,    98,    99,   100,   101,    97,   102,   102
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     5,     0,     5,     1,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     1,     1,     1,
       3,     1,     1,     2,     2,     1,     3,     4,     3,     4,
       4,     2,     6,     1,     1,     3,     4,     6,     3,     5,
       1,     3,     0,     3,     3,     2,     3,     0,     5,     0,
       4,     0,     3,     1,     0,     2,     0,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     0,
       4,     0,     4,     1,     2,     0,     5,     1,     3,     3,
       0,     0,     0,     0,     0,    13,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    90,    91,    52,    92,     0,     0,     0,    79,    72,
       0,    14,     0,     0,   107,     0,    84,     0,     0,     0,
       0,     0,    94,    95,    93,     0,     2,     3,     0,    37,
      15,    45,    47,    55,    48,    49,    12,     0,    13,    51,
       0,     6,     0,     7,     8,     9,    39,     0,    41,     0,
      43,     0,     0,     0,    70,     0,     0,    77,     0,     0,
      54,     0,   111,    83,    85,   117,     0,    10,    11,    40,
      53,     1,     4,     0,     0,     0,     0,     0,    29,    31,
      25,    21,    23,    27,   110,   110,     5,     0,     0,    42,
      44,     0,    72,     0,     0,    61,    63,    64,     0,    72,
       0,    86,     0,   104,     0,     0,     0,     0,    82,     0,
      73,     0,    74,     0,    75,    38,    50,     0,    72,   116,
      16,    17,    18,    20,    19,     0,     0,     0,     0,     0,
       0,    35,    33,    72,    46,     0,     0,    56,     0,     0,
       0,    58,    98,    88,    89,   103,   105,     0,   109,     0,
      80,     0,    71,    77,    72,   102,     0,    30,    32,    26,
      22,    24,    28,     0,     0,    68,    70,     0,    57,    65,
      72,    59,    60,    96,     0,     0,   108,     0,    76,     0,
     112,    36,    34,    66,     0,     0,   101,    87,   106,    78,
      62,     0,    71,    69,     0,    97,     0,    67,    99,   113,
     101,    72,   100,     0,   114,     0,   115
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    27,    28,   128,   129,   127,   130,   125,
     126,   164,   163,    29,    30,    31,    32,    33,    34,    95,
      96,    97,    55,    35,    56,   114,    57,    36,    51,    52,
      64,    37,   102,   142,   144,    38,    39,   174,   186,   195,
     200,    40,   146,    41,   175,    42,   105,    43,   131,    44,
     118,   191,   201,   205,    45
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int16 yypact[] =
{
     210,   -92,   -92,   -92,   -92,   316,    -3,    -3,    -1,    30,
     255,   -92,    20,    13,   -92,    17,    46,   263,    38,    49,
     316,    60,   -92,   -92,   -92,    80,   210,   -92,   371,   -92,
     -92,   -92,   102,   -92,   -14,   -92,   -92,    27,   -92,   -92,
     210,   -92,    58,   -92,   -92,   -92,    10,    42,    25,   -14,
      25,   210,    64,   316,   597,   -16,    63,    61,   437,    62,
     -92,   316,   -92,   -92,   -92,   -92,   393,   -92,   -92,   -92,
     -92,   -92,   -92,   316,   316,   316,   316,   316,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,    65,   316,   -92,
     -92,   316,   316,    90,    91,   -92,   -92,   -92,   316,   316,
      92,   -92,    75,    66,   316,   210,    72,   165,   -92,   356,
     -92,   316,   -92,    78,   -92,   -92,    76,   458,   316,   -92,
      10,    10,   -92,   -92,   -92,   316,   316,   316,   316,   316,
     316,   -92,   -92,   308,   597,   542,   -21,   -92,    77,   561,
     -12,   -92,   100,   -92,   -92,   -92,   -92,   479,   -92,    76,
     -92,   316,   597,    61,   316,   -92,     2,   626,   626,   122,
     122,   122,   122,   316,   316,   -92,   500,    81,   -92,   -92,
     316,   -92,   -92,   -92,    84,   210,   -92,   580,   -92,    -2,
     -92,   639,   612,   -92,   316,    19,    85,   -92,   -92,   -92,
     -92,   316,   521,   -92,   103,   -92,   415,   -92,   -92,   -92,
      85,   316,   -92,    36,   -92,   210,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,    68,   -23,    -5,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,    31,   -92,    54,   -92,
     -92,   -92,   -91,   -92,   -92,   -39,     3,    24,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,    -4,   -92,   -92,   -92,   -63,
     -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,    53,   -92,
     -92,   -92,   -92,   -92,   -92
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -82
static const yytype_int16 yytable[] =
{
      46,   136,     3,    72,    54,    58,    59,   169,   140,   111,
     110,    98,    66,    99,   111,    69,   172,   103,   111,   100,
      75,    76,    77,   -81,    47,    60,   190,   156,   111,    12,
      87,   180,   111,     1,     2,     3,     4,    48,    50,     5,
      61,    21,   167,   106,    62,     6,     7,   193,   109,   111,
      91,    63,    92,    53,   101,     9,   117,    10,    93,    94,
      49,    49,    12,   179,   204,    70,   111,    67,   120,   121,
     122,   123,   124,    20,    21,    22,    23,    24,    68,   185,
      71,    16,   148,   134,    72,   104,   135,    54,   108,   112,
     116,   113,   133,   139,    54,   137,   138,   141,     8,   147,
     149,    53,   145,   154,   170,   173,   152,    87,   198,    88,
     203,   184,   187,    54,   178,   194,   153,    89,    90,   107,
     157,   158,   159,   160,   161,   162,   143,    91,   166,    92,
      73,    74,    75,    76,    77,    93,    94,   202,   132,   -82,
     -82,   -82,   -82,     0,     0,     0,   177,     0,     0,    54,
       0,     0,   188,     0,     0,     0,     0,     0,   181,   182,
       0,     0,     0,     0,     0,    54,     0,     0,     1,     2,
       3,     4,     0,     0,     5,     0,     0,     0,     0,   192,
       6,     7,   206,     0,     0,     0,   196,     0,     8,   150,
       9,     0,    10,     0,    11,     0,    54,    12,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     1,     2,     3,     4,     0,     0,     5,
       0,     0,     0,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,     8,     0,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     1,     2,
       3,     4,     0,     0,     5,     0,     1,     2,     3,     4,
       6,     7,     5,     0,     0,     0,     0,     0,     6,     7,
       9,     0,    10,     0,     0,     0,     0,    12,     9,     0,
      10,     0,    65,     0,    16,    12,     0,     0,    20,    21,
      22,    23,    24,     0,     0,     0,    20,    21,    22,    23,
      24,     1,     2,     3,     4,     0,     0,     5,     0,     1,
       2,     3,     4,     6,     7,     5,     0,     0,     0,     0,
       0,     6,     7,     9,     0,    10,   165,     0,     0,     0,
      12,     9,     0,    10,     0,     0,     0,     0,    12,     0,
       0,    20,    21,    22,    23,    24,     0,     0,     0,    20,
      21,    22,    23,    24,    73,    74,    75,    76,    77,    78,
      79,     0,     0,    80,    81,    82,    83,    84,    85,    73,
      74,    75,    76,    77,    78,    79,     0,   151,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
      86,    73,    74,    75,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,   119,    73,    74,    75,    76,    77,    78,    79,
       0,     0,    80,    81,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,   199,    73,    74,    75,    76,    77,
      78,    79,     0,     0,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,   115,    73,    74,    75,    76,
      77,    78,    79,     0,     0,    80,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,   155,    73,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,   176,    73,    74,
      75,    76,    77,    78,    79,     0,     0,    80,    81,    82,
      83,    84,    85,     0,     0,     0,     0,     0,   183,    73,
      74,    75,    76,    77,    78,    79,     0,     0,    80,    81,
      82,    83,    84,    85,     0,     0,     0,     0,     0,   197,
      73,    74,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,    83,    84,    85,     0,     0,     0,   168,    73,
      74,    75,    76,    77,    78,    79,     0,     0,    80,    81,
      82,    83,    84,    85,     0,     0,     0,   171,    73,    74,
      75,    76,    77,    78,    79,     0,     0,    80,    81,    82,
      83,    84,    85,     0,   189,    73,    74,    75,    76,    77,
      78,    79,     0,     0,    80,    81,    82,    83,    84,    85,
      73,    74,    75,    76,    77,    78,    79,     0,     0,    80,
      81,    82,    83,    84,    73,    74,    75,    76,    77,   -82,
     -82,     0,     0,    80,    81,    82,    83,    73,    74,    75,
      76,    77,    78,    79,     0,     0,    80,    81,    82,    83
};

static const yytype_int16 yycheck[] =
{
       5,    92,     5,    26,     9,    10,    10,    28,    99,    30,
      26,    25,    17,    27,    30,    20,    28,    40,    30,    33,
      10,    11,    12,    24,    27,     5,    28,   118,    30,    32,
       5,    29,    30,     3,     4,     5,     6,     6,     7,     9,
      27,    44,   133,    47,    27,    15,    16,    28,    53,    30,
      25,     5,    27,    23,    27,    25,    61,    27,    33,    34,
       6,     7,    32,   154,    28,     5,    30,    29,    73,    74,
      75,    76,    77,    43,    44,    45,    46,    47,    29,   170,
       0,    39,   105,    88,   107,    27,    91,    92,    24,    26,
      28,    30,    27,    98,    99,     5,     5,     5,    23,   104,
      28,    23,    36,    27,    27,     5,   111,     5,     5,     7,
     201,    30,    28,   118,   153,    30,   113,    15,    16,    51,
     125,   126,   127,   128,   129,   130,   102,    25,   133,    27,
       8,     9,    10,    11,    12,    33,    34,   200,    85,    17,
      18,    19,    20,    -1,    -1,    -1,   151,    -1,    -1,   154,
      -1,    -1,   175,    -1,    -1,    -1,    -1,    -1,   163,   164,
      -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    -1,    -1,    -1,    -1,   184,
      15,    16,   205,    -1,    -1,    -1,   191,    -1,    23,    24,
      25,    -1,    27,    -1,    29,    -1,   201,    32,    -1,    -1,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     3,     4,     5,     6,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     3,     4,
       5,     6,    -1,    -1,     9,    -1,     3,     4,     5,     6,
      15,    16,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      25,    -1,    27,    -1,    -1,    -1,    -1,    32,    25,    -1,
      27,    -1,    29,    -1,    39,    32,    -1,    -1,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    43,    44,    45,    46,
      47,     3,     4,     5,     6,    -1,    -1,     9,    -1,     3,
       4,     5,     6,    15,    16,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    25,    -1,    27,    28,    -1,    -1,    -1,
      32,    25,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    43,    44,    45,    46,    47,    -1,    -1,    -1,    43,
      44,    45,    46,    47,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,    21,    22,     8,
       9,    10,    11,    12,    13,    14,    -1,    31,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      29,     8,     9,    10,    11,    12,    13,    14,    -1,    -1,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    29,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    29,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,     8,     9,    10,    11,
      12,    13,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,     8,
       9,    10,    11,    12,    13,    14,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,     8,     9,
      10,    11,    12,    13,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    24,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    17,    18,    19,    20,    21,    22,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    20,    21,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    20,     8,     9,    10,
      11,    12,    13,    14,    -1,    -1,    17,    18,    19,    20
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    15,    16,    23,    25,
      27,    29,    32,    35,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    49,    50,    51,    52,    61,
      62,    63,    64,    65,    66,    71,    75,    79,    83,    84,
      89,    91,    93,    95,    97,   102,    52,    27,    64,    66,
      64,    76,    77,    23,    52,    70,    72,    74,    52,    83,
       5,    27,    27,     5,    78,    29,    52,    29,    29,    52,
       5,     0,    51,     8,     9,    10,    11,    12,    13,    14,
      17,    18,    19,    20,    21,    22,    29,     5,     7,    15,
      16,    25,    27,    33,    34,    67,    68,    69,    25,    27,
      33,    27,    80,    51,    27,    94,    83,    50,    24,    52,
      26,    30,    26,    30,    73,    28,    28,    52,    98,    29,
      52,    52,    52,    52,    52,    57,    58,    55,    53,    54,
      56,    96,    96,    27,    52,    52,    70,     5,     5,    52,
      70,     5,    81,    75,    82,    36,    90,    52,    51,    28,
      24,    31,    52,    74,    27,    28,    70,    52,    52,    52,
      52,    52,    52,    60,    59,    28,    52,    70,    26,    28,
      27,    26,    28,     5,    85,    92,    28,    52,    73,    70,
      29,    52,    52,    28,    30,    70,    86,    28,    51,    24,
      28,    99,    52,    28,    30,    87,    52,    28,     5,    29,
      88,   100,    87,    70,    28,   101,    51
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
#line 93 "parser.y"
    {
        clear_assign_labels();
        //fprintf(stderr, "program -> stmtp\n");
    }
    break;

  case 3:
#line 99 "parser.y"
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
        //fprintf(stderr, "stmtp -> stmt\n");
    }
    break;

  case 4:
#line 126 "parser.y"
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
        //fprintf(stderr, "stmtp -> stmtp stmt\n");
    }
    break;

  case 5:
#line 155 "parser.y"
    {
        if ((yyvsp[(1) - (2)].exprVal)->type == 5){
            emit(assign, newexpr_constbool(1), NULL, (yyvsp[(1) - (2)].exprVal), 0, yylineno);
            emit(jump, NULL, NULL, NULL, nextquad() + 3, yylineno);
            emit(assign, newexpr_constbool(0), NULL, (yyvsp[(1) - (2)].exprVal), 0, yylineno);
            patch((yyvsp[(1) - (2)].exprVal)->trueList, (yyvsp[(1) - (2)].exprVal)->falseList, nextquad(), nextquad() - 2);
        } else {
            exprsemicolon_true = nextquad() + 1;
            patch((yyvsp[(1) - (2)].exprVal)->trueList, (yyvsp[(1) - (2)].exprVal)->falseList, nextquad() + 1, exprsemicolon_true);
        }
        
        (yyval.stmtVal) = make_stmt();
        //fprintf(stderr, "statement -> expr\n");
    }
    break;

  case 6:
#line 169 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        //fprintf(stderr, "statement -> ifstmt\n");
    }
    break;

  case 7:
#line 173 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        //fprintf(stderr, "statement -> whilestmt\n");
    }
    break;

  case 8:
#line 177 "parser.y"
    {
        (yyval.stmtVal) = (yyvsp[(1) - (1)].stmtVal);
        //fprintf(stderr, "statement -> forstmt\n");
    }
    break;

  case 9:
#line 181 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        //fprintf(stderr, "statement -> returnstmt\n");
    }
    break;

  case 10:
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
        //fprintf(stderr, "statement -> break;\n");
    }
    break;

  case 11:
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
        //fprintf(stderr, "statement -> continue;\n");
    }
    break;

  case 12:
#line 210 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        //fprintf(stderr, "statement -> block;\n");
    }
    break;

  case 13:
#line 214 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        //fprintf(stderr, "statement -> funcdef;\n");
    }
    break;

  case 14:
#line 218 "parser.y"
    {
        (yyval.stmtVal) = make_stmt();
        //fprintf(stderr, "statement -> ;\n");
    }
    break;

  case 15:
#line 224 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        //fprintf(stderr, "expression -> assignexpr\n");
    }
    break;

  case 16:
#line 228 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), add, (yyvsp[(3) - (3)].exprVal));
        //fprintf(stderr, "expression -> expr + expr\n");
    }
    break;

  case 17:
#line 232 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), sub, (yyvsp[(3) - (3)].exprVal));
        //fprintf(stderr, "expression -> expr - expr\n");
    }
    break;

  case 18:
#line 236 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), mul, (yyvsp[(3) - (3)].exprVal));
        //fprintf(stderr, "expression -> expr * expr\n");
    }
    break;

  case 19:
#line 240 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), mod, (yyvsp[(3) - (3)].exprVal));
        //fprintf(stderr, "expression -> expr %% expr\n");
    }
    break;

  case 20:
#line 244 "parser.y"
    {
        (yyval.exprVal) = arithmetic_expr((yyval.exprVal), (yyvsp[(1) - (3)].exprVal), divide, (yyvsp[(3) - (3)].exprVal));
        //fprintf(stderr, "expression -> expr // expr\n");
    }
    break;

  case 21:
#line 248 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 22:
#line 250 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_greater, (yyvsp[(4) - (4)].exprVal));
        //fprintf(stderr, "expression -> expr > expr\n");
    }
    break;

  case 23:
#line 254 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 24:
#line 256 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_greatereq, (yyvsp[(4) - (4)].exprVal));
        //fprintf(stderr, "expression -> expr >= expr\n");
    }
    break;

  case 25:
#line 260 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 26:
#line 262 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_less, (yyvsp[(4) - (4)].exprVal));
        //fprintf(stderr, "expression -> expr < expr\n");
    }
    break;

  case 27:
#line 266 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 28:
#line 268 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_lesseq, (yyvsp[(4) - (4)].exprVal));
        //fprintf(stderr, "expression -> expr <= expr\n");
    }
    break;

  case 29:
#line 272 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 30:
#line 274 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_eq, (yyvsp[(4) - (4)].exprVal));
        //fprintf(stderr, "expression -> expr == expr\n");
    }
    break;

  case 31:
#line 278 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = get_last_expr_element((yyvsp[(1) - (2)].exprVal));
    }
    break;

  case 32:
#line 280 "parser.y"
    {
        (yyval.exprVal) = compare_expr((yyval.exprVal), (yyvsp[(1) - (4)].exprVal), if_neq, (yyvsp[(4) - (4)].exprVal));
        //fprintf(stderr, "expression -> expr != expr\n");
    }
    break;

  case 33:
#line 284 "parser.y"
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

  case 34:
#line 292 "parser.y"
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
        //fprintf(stderr, "expression -> expr || expr\n");
    }
    break;

  case 35:
#line 306 "parser.y"
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

  case 36:
#line 314 "parser.y"
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
        //fprintf(stderr, "expression -> expr && expr\n");
    }
    break;

  case 37:
#line 328 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        //fprintf(stderr, "expression -> term\n");
    }
    break;

  case 38:
#line 334 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(2) - (3)].exprVal);
        //fprintf(stderr, "term -> (expr)\n");
    }
    break;

  case 39:
#line 338 "parser.y"
    {
        compile_time_expression_error((yyvsp[(2) - (2)].exprVal));
        expr* t = newexpr(constnum_e);
        t->numConst = -1;
        (yyval.exprVal) = newexpr(arithexpr_e);
        (yyval.exprVal)->sym = newtemp();
        emit(mul, (yyvsp[(2) - (2)].exprVal), t, (yyval.exprVal), 0, yylineno);
        //fprintf(stderr, "term -> -expr\n");
    }
    break;

  case 40:
#line 347 "parser.y"
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
        //fprintf(stderr, "term -> not expr\n");
    }
    break;

  case 41:
#line 360 "parser.y"
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
        //fprintf(stderr, "term -> ++lvalue\n");
    }
    break;

  case 42:
#line 375 "parser.y"
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
        //fprintf(stderr, "term -> lvalue++\n");
    }
    break;

  case 43:
#line 391 "parser.y"
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
            emit(assign, NULL, (yyvsp[(2) - (2)].exprVal), (yyval.exprVal), 0, yylineno);      
        }
        //fprintf(stderr, "term -> --lvalue\n");
    }
    break;

  case 44:
#line 406 "parser.y"
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
        //fprintf(stderr, "term -> lvalue--\n");
    }
    break;

  case 45:
#line 422 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        //fprintf(stderr, "term -> primary\n");
    }
    break;

  case 46:
#line 428 "parser.y"
    {
        if ((yyvsp[(1) - (3)].exprVal)->type == tableitem_e){
            emit(tablesetelem, (yyvsp[(3) - (3)].exprVal), (yyvsp[(1) - (3)].exprVal)->index, (yyvsp[(1) - (3)].exprVal), 0, yylineno);
            //fprintf(stderr,"HEREEEEEEEEEEEEEEEEE");
            (yyval.exprVal) = emit_iftableitem((yyvsp[(1) - (3)].exprVal), yylineno);
            (yyval.exprVal)->type = assignexpr_e;
        } else {
            (yyval.exprVal) = newexpr(assignexpr_e);
            /* $$->sym = newtemp(); */ (yyval.exprVal)->sym = (yyvsp[(1) - (3)].exprVal)->sym;
            if ((yyvsp[(3) - (3)].exprVal)->type == 5){ // if is boolexpr_e
                emit(assign, NULL, newexpr_constbool(1), (yyvsp[(3) - (3)].exprVal), 0, yylineno);
                assignlabel_true = nextquad();
                emit(jump, NULL, NULL, NULL, nextquad() + 3, yylineno);
                emit(assign, NULL, newexpr_constbool(0), (yyvsp[(3) - (3)].exprVal), 0, yylineno);
                fix_temp((yyvsp[(3) - (3)].exprVal)->trueList);
                fix_temp((yyvsp[(3) - (3)].exprVal)->falseList);
                patch((yyvsp[(3) - (3)].exprVal)->trueList, (yyvsp[(3) - (3)].exprVal)->falseList, nextquad(), assignlabel_true);
                emit(assign, NULL, (yyvsp[(3) - (3)].exprVal), (yyvsp[(1) - (3)].exprVal), 0, yylineno);
            } else {
                emit(assign, NULL, (yyvsp[(3) - (3)].exprVal), (yyvsp[(1) - (3)].exprVal), 0, yylineno);
                
            }
              
        }
        //fprintf(stderr, "assignexpr -> lvalue = expr\n");
    }
    break;

  case 47:
#line 456 "parser.y"
    {
        (yyval.exprVal) = emit_iftableitem((yyvsp[(1) - (1)].exprVal), yylineno);
        //fprintf(stderr, "primary -> lvalue\n");
    }
    break;

  case 48:
#line 460 "parser.y"
    {
        //fprintf(stderr, "primary -> call\n");
    }
    break;

  case 49:
#line 463 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        //fprintf(stderr, "primary -> objectdef\n");
    }
    break;

  case 50:
#line 467 "parser.y"
    {
        (yyval.exprVal) = newexpr(programfunc_e);
        (yyval.exprVal)->sym = (yyvsp[(2) - (3)].symbVal);
        //fprintf(stderr, "primary -> (funcdef)\n");
    }
    break;

  case 51:
#line 472 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal); 
        //fprintf(stderr, "primary -> const\n");
    }
    break;

  case 52:
#line 478 "parser.y"
    {
        sym_temp = lookup_by_specific_scope_and_return((yyvsp[(1) - (1)].strVal), scope);
        if (!sym_temp){
            if (scope == 0){
                sym_temp = insert_and_space_offset((yyvsp[(1) - (1)].strVal), 0, yylineno, GLOBAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            } else {
                sym_temp = insert_and_space_offset((yyvsp[(1) - (1)].strVal), scope, yylineno, LOCAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            }
            
        }
        (yyval.exprVal) = lvalue_expr(sym_temp);
        is_member = 0;
        //fprintf(stderr, "lvalue -> ID\n");
    }
    break;

  case 53:
#line 494 "parser.y"
    {
        if (!check_library_collisions((yyvsp[(2) - (2)].strVal))){
            sym_temp = lookup_by_specific_scope_and_return((yyvsp[(2) - (2)].strVal), 0);
            if (!sym_temp){
                sym_temp = insert_and_space_offset((yyvsp[(2) - (2)].strVal), scope, yylineno, LOCAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            }
        } else {
            sym_temp = lookup_by_specific_scope_and_return((yyvsp[(2) - (2)].strVal), 0);
            //fprintf(stderr, "\nERROR -> collision  with LIBFUNC at line %d\n\n", yylineno);         
        }
        (yyval.exprVal) = lvalue_expr(sym_temp);
        is_member = 0;
        //fprintf(stderr, "lvalue -> LOCAL_KEYWORD ID\n");
    }
    break;

  case 54:
#line 509 "parser.y"
    {
        if (!lookup_by_specific_scope((yyvsp[(2) - (2)].strVal), 0)){
            (yyval.exprVal) = newexpr_conststring((yyvsp[(2) - (2)].strVal));
            //fprintf(stderr, "\nERROR -> undeclared variable or function %s at line %d\n\n", $2, yylineno);
        } else {
            sym_temp = lookup_by_specific_scope_and_return((yyvsp[(2) - (2)].strVal), scope);
            if (!sym_temp) {
                sym_temp = insert_and_space_offset((yyvsp[(2) - (2)].strVal), scope, yylineno, GLOBAL, currscopespace(), currscopeoffset());
            }
            (yyval.exprVal) = lvalue_expr(sym_temp);
        }
        
        is_member = 0;
        //fprintf(stderr, "lvalue -> DOUBLE_COLON ID\n");
    }
    break;

  case 55:
#line 524 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        is_member = 1;
        //fprintf(stderr, "lvalue -> member\n");
    }
    break;

  case 56:
#line 531 "parser.y"
    {
        (yyval.exprVal) = member_item((yyvsp[(1) - (3)].exprVal), yylval.strVal, yylineno);
        //fprintf(stderr, "member -> lvalue.id\n");
    }
    break;

  case 57:
#line 535 "parser.y"
    {
        (yyvsp[(1) - (4)].exprVal) = emit_iftableitem((yyvsp[(1) - (4)].exprVal), yylineno);
        (yyval.exprVal) = newexpr(tableitem_e);
        (yyval.exprVal)->sym = (yyvsp[(1) - (4)].exprVal)->sym;
        (yyval.exprVal)->index = (yyvsp[(3) - (4)].exprVal);
        //fprintf(stderr, "member -> lvalue[expr]\n");
    }
    break;

  case 58:
#line 542 "parser.y"
    {
        //fprintf(stderr, "member -> call.id\n");
    }
    break;

  case 59:
#line 545 "parser.y"
    {
        //fprintf(stderr, "member -> call[expr]\n");
    }
    break;

  case 60:
#line 550 "parser.y"
    {
        (yyval.exprVal) = make_call((yyvsp[(1) - (4)].exprVal), (yyvsp[(3) - (4)].exprVal), yylineno);
        //fprintf(stderr, "call -> call[elist]\n");
    }
    break;

  case 61:
#line 554 "parser.y"
    {
        (yyvsp[(1) - (2)].exprVal) = emit_iftableitem((yyvsp[(1) - (2)].exprVal), yylineno);
        if ((yyvsp[(2) - (2)].callVal)->method){
            expr *t = malloc(sizeof(struct expr));
            expr *last = malloc(sizeof(struct expr));
            t = (yyvsp[(1) - (2)].exprVal);
            (yyvsp[(1) - (2)].exprVal) = emit_iftableitem(member_item(t, (yyvsp[(2) - (2)].callVal)->name, yylineno), yylineno);
            t->next = (yyvsp[(2) - (2)].callVal)->elist;
            (yyvsp[(2) - (2)].callVal)->elist = t;
        }
        (yyval.exprVal) = make_call((yyvsp[(1) - (2)].exprVal), (yyvsp[(2) - (2)].callVal)->elist, yylineno);
        //fprintf(stderr, "call -> lvalue callsuffix\n");
    }
    break;

  case 62:
#line 567 "parser.y"
    {
        expr* func = newexpr(programfunc_e);
        func->sym = (yyvsp[(2) - (6)].symbVal);
        (yyval.exprVal) = make_call(func, (yyvsp[(5) - (6)].exprVal), yylineno);
        //fprintf(stderr, "call -> (funcdef) (elist)\n");
    }
    break;

  case 63:
#line 575 "parser.y"
    {
        (yyval.callVal) = (yyvsp[(1) - (1)].callVal);
        //fprintf(stderr, "callsuffix -> normcall\n");
    }
    break;

  case 64:
#line 579 "parser.y"
    {
        (yyval.callVal) = (yyvsp[(1) - (1)].callVal);
        //fprintf(stderr, "callsuffix -> methodcall\n");
    }
    break;

  case 65:
#line 585 "parser.y"
    {
        (yyval.callVal) = malloc(sizeof(struct call_c));
        (yyval.callVal)->elist = (yyvsp[(2) - (3)].exprVal);
        (yyval.callVal)->method = 0;
        (yyval.callVal)->name = NULL;
        //fprintf(stderr, "normcall -> (elist)\n");
    }
    break;

  case 66:
#line 592 "parser.y"
    {
        //fprintf(stderr, "normcall -> id(elist)\n");
    }
    break;

  case 67:
#line 595 "parser.y"
    {
        //fprintf(stderr, "normcall -> id(elist)\n");
    }
    break;

  case 68:
#line 598 "parser.y"
    {
        //fprintf(stderr, "normcall -> id()\n");
    }
    break;

  case 69:
#line 603 "parser.y"
    {
        (yyval.callVal) = malloc(sizeof(struct call_c));
        (yyval.callVal)->elist = (yyvsp[(4) - (5)].exprVal);
        (yyval.callVal)->method = 1;
        (yyval.callVal)->name = (yyvsp[(2) - (5)].strVal);
        //fprintf(stderr, "methodcall -> ..id(elist)\n");
    }
    break;

  case 70:
#line 612 "parser.y"
    {
        (yyvsp[(1) - (1)].exprVal)->next= NULL;
        (yyval.exprVal) = (yyvsp[(1) - (1)].exprVal);
        clear_labels((yyvsp[(1) - (1)].exprVal));
        //fprintf(stderr, "elist -> expr\n");
    }
    break;

  case 71:
#line 618 "parser.y"
    {
        expr* last = (yyvsp[(1) - (3)].exprVal);
        while(last->next != NULL) last = last->next;
        last->next = (yyvsp[(3) - (3)].exprVal);
        (yyval.exprVal) = (yyvsp[(1) - (3)].exprVal);
        clear_labels((yyvsp[(3) - (3)].exprVal));
        //fprintf(stderr, "elist -> elist, expr\n");
    }
    break;

  case 72:
#line 626 "parser.y"
    {
        (yyval.exprVal)=NULL;
    }
    break;

  case 73:
#line 631 "parser.y"
    {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        if ((yyvsp[(2) - (3)].exprVal) != NULL){
            expr* temp = (yyvsp[(2) - (3)].exprVal);
            int i = 0;
            while (temp){
                emit(tablesetelem, newexpr_constnum(i++), temp, t, 0, yylineno);
                temp = temp->next;
            }
            t->index = (yyvsp[(2) - (3)].exprVal);
        }
        (yyval.exprVal) = t;
        //fprintf(stderr, "objectdef -> [elist]\n");
    }
    break;

  case 74:
#line 647 "parser.y"
    {
        expr* t = newexpr(newtable_e);
        t->sym = newtemp();
        emit(tablecreate, NULL, NULL, t, 0, yylineno);
        expr* temp = (yyvsp[(2) - (3)].exprVal);
        if (temp) t->index = (yyvsp[(2) - (3)].exprVal);
        while (temp){
            emit(tablesetelem, temp, temp->index, t, 0, yylineno);
            temp = temp->next;
        }
        (yyval.exprVal) = t;
        //fprintf(stderr, "objectdef -> [indexed]\n");
    }
    break;

  case 75:
#line 662 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(1) - (2)].exprVal);
        (yyval.exprVal)->next = (yyvsp[(2) - (2)].exprVal);
        //fprintf(stderr,"indexed -> indexedelem clindexedelem\n");
    }
    break;

  case 76:
#line 668 "parser.y"
    {
        (yyval.exprVal) = (yyvsp[(2) - (3)].exprVal);    
        (yyval.exprVal)->next = (yyvsp[(3) - (3)].exprVal);  
        //fprintf(stderr,"clindexedelem -> , indexedelem clindexedelem\n");
    }
    break;

  case 77:
#line 673 "parser.y"
    {
        (yyval.exprVal) = NULL;
        //fprintf(stderr,"clindexedelem -> \n");
    }
    break;

  case 78:
#line 679 "parser.y"
    {
        (yyvsp[(2) - (5)].exprVal)->index = (yyvsp[(4) - (5)].exprVal);
        (yyval.exprVal) = (yyvsp[(2) - (5)].exprVal);
        //fprintf(stderr, "indexedelem -> {expr:expr}\n");
    }
    break;

  case 79:
#line 686 "parser.y"
    {
        scope++;
        enable(scope);
    }
    break;

  case 80:
#line 689 "parser.y"
    {
        hide(scope);
        scope--;
        (yyval.stmtVal) = (yyvsp[(3) - (4)].stmtVal);
        //fprintf(stderr, "block -> {stmt*}\n");
    }
    break;

  case 81:
#line 695 "parser.y"
    {
        scope++;
        enable(scope);
    }
    break;

  case 82:
#line 698 "parser.y"
    {
        hide(scope);
        scope--;
        //fprintf(stderr, "block -> {stmt*}\n");
    }
    break;

  case 83:
#line 705 "parser.y"
    { 
        (yyval.strVal) = yylval.strVal; 
        //fprintf(stderr, "funcname -> ID\n");
    }
    break;

  case 84:
#line 709 "parser.y"
    {
        char* a = malloc(sizeof(char*));
        char* b = malloc(sizeof(char*));
        strcat(b,strdup("$"));
        sprintf(a,"%d",dollars_counter);
        dollars_counter++;
        (yyval.strVal) = strcat(b,a);
        //fprintf(stderr, "funcname -> \n");
    }
    break;

  case 85:
#line 720 "parser.y"
    {
        if (check_library_collisions((yyvsp[(2) - (2)].strVal)) && !scope) {
            //fprintf(stderr, "\nERROR -> Collision with library function: at line %d\n\n", yylineno);
        } else {
            (yyval.symbVal) = lookup_by_specific_scope_and_return((yyvsp[(2) - (2)].strVal), scope);
            if (!(yyval.symbVal)) {
                emit(jump, NULL, NULL, NULL, 0, yylineno);
                (yyval.symbVal) = insert_and_space_offset((yyvsp[(2) - (2)].strVal), scope, yylineno, USERFUNC, currscopespace(), currscopeoffset());
                (yyval.symbVal)->iaddress = nextquad() + 1;
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
                    //fprintf(stderr, "\nERROR at line %d -> Function %s already declared: at line %d\n\n", yylineno, $2, user);
                } else if (global != -1) {
                    //fprintf(stderr, "\nERROR at line %d -> Global variable %s already declared: at line %d\n\n", yylineno, $2, global); 
                } else if (local != -1 ) { 
                    //fprintf(stderr, "\nERROR at line %d -> Local variable %s already declared: at line %d\n\n", yylineno, $2, local); 
                } else if (formal != -1 ) {
                    //fprintf(stderr, "\nERROR at line %d -> Formal variable %s already declared: at line %d\n\n", yylineno, $2, formal); 
                }  
            }
        }
        //fprintf(stderr, "funcprefix -> FUNCTION funcname\n");
    }
    break;

  case 86:
#line 755 "parser.y"
    {
        ++scope;
        return_state++;
    }
    break;

  case 87:
#line 758 "parser.y"
    {
        enterscopespace();
        resetfunctionlocalsoffset();
        scope--;
        //fprintf(stderr, "funcargs -> (idlist)\n");
    }
    break;

  case 88:
#line 766 "parser.y"
    {
        (yyval.unsVal) = currscopeoffset();
        exitscopespace();
        //fprintf(stderr, "funcbody -> block\n");
    }
    break;

  case 89:
#line 773 "parser.y"
    {
        exitscopespace();
        
        (yyvsp[(1) - (3)].symbVal)->totalLocals = (yyvsp[(3) - (3)].unsVal);
        restorecurrscopeoffset(pop_and_top());
        (yyval.symbVal) = (yyvsp[(1) - (3)].symbVal);
        if (returnlabel){
            patchlabel(returnlabel, nextquad() + 1);
        }
        emit(funcend, NULL, NULL, lvalue_expr((yyvsp[(1) - (3)].symbVal)), 0, yylineno);
        patchlabel((yyvsp[(1) - (3)].symbVal)->iaddress-2, nextquad() + 1);
        return_state--; 
        //fprintf(stderr, "funcdef -> funcprefix funcargs funcbody\n");
    }
    break;

  case 90:
#line 789 "parser.y"
    {
        (yyval.exprVal) = newexpr_constnum(yylval.intVal);
        //fprintf(stderr, "const -> INTEGER\n");
    }
    break;

  case 91:
#line 793 "parser.y"
    {
        (yyval.exprVal) = newexpr_constnum(yylval.realVal);
        //fprintf(stderr, "const -> REAL\n");
    }
    break;

  case 92:
#line 797 "parser.y"
    {
        (yyval.exprVal) = newexpr_conststring(strcat(yylval.strVal,"\""));
        //fprintf(stderr, "const -> STRING\n");
    }
    break;

  case 93:
#line 801 "parser.y"
    {
        //fprintf(stderr, "const -> NIL\n");
    }
    break;

  case 94:
#line 804 "parser.y"
    {
        (yyval.exprVal) = newexpr_constbool(1);
        //fprintf(stderr, "const -> TRUE\n");
    }
    break;

  case 95:
#line 808 "parser.y"
    {
        (yyval.exprVal) = newexpr_constbool(0);
        //fprintf(stderr, "const -> FALSE\n");
    }
    break;

  case 96:
#line 814 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) {
            //fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        } else {
            sym_temp = insert_and_space_offset(yylval.strVal, scope, yylineno, FORMAL, currscopespace(), currscopeoffset());
            inccurrscopeoffset();
        } 
        
    }
    break;

  case 97:
#line 822 "parser.y"
    {
        //fprintf(stderr, "idlist -> ID idlist_case_commaid\n");
    }
    break;

  case 98:
#line 825 "parser.y"
    {
        //fprintf(stderr, "idlist -> \n");
    }
    break;

  case 99:
#line 830 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) {
            //fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        } else {
            if (!lookup_last(yylval.strVal, scope)) {
                sym_temp = insert_and_space_offset(yylval.strVal, scope, yylineno, FORMAL, currscopespace(), currscopeoffset());
                inccurrscopeoffset();
            } else {
                //fprintf(stderr, "\nERROR -> Formal Variable %s already defined: at line %d\n\n", yylval.strVal, yylineno); 
            }    
        }
    }
    break;

  case 100:
#line 841 "parser.y"
    {
        //fprintf(stderr, "idlist_case_commaid -> ,ID idlist_case_commaid\n");
    }
    break;

  case 101:
#line 844 "parser.y"
    {
        //fprintf(stderr, "idlist -> \n");
    }
    break;

  case 102:
#line 850 "parser.y"
    {
        if (!(yyvsp[(3) - (4)].exprVal)->trueList){
            // e.g if (false)
            (yyvsp[(3) - (4)].exprVal)->trueList = append((yyvsp[(3) - (4)].exprVal)->trueList, nextquad(), or);
            (yyvsp[(3) - (4)].exprVal)->falseList = append((yyvsp[(3) - (4)].exprVal)->falseList, nextquad()+1, or);
            emit(if_eq, (yyvsp[(3) - (4)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        fix_temp((yyvsp[(3) - (4)].exprVal)->trueList);
        fix_temp((yyvsp[(3) - (4)].exprVal)->falseList);

        iflabel_true = nextquad() + 1;
        
        (yyval.exprVal) = (yyvsp[(3) - (4)].exprVal);
        //fprintf(stderr, "ifprefix -> IF LEFT_PARENTHESES expr RIGHT_PARENTHESES\n");
    }
    break;

  case 103:
#line 868 "parser.y"
    { 
        (yyval.unsVal) = nextquad(); 
    }
    break;

  case 104:
#line 873 "parser.y"
    {
        patch((yyvsp[(1) - (2)].exprVal)->trueList, (yyvsp[(1) - (2)].exprVal)->falseList, nextquad() + 1, iflabel_true);
        //fprintf(stderr, "ifstmt -> if (expr) stmt\n");
        (yyval.stmtVal) = (yyvsp[(2) - (2)].stmtVal);
    }
    break;

  case 105:
#line 878 "parser.y"
    {
        emit(jump, NULL, NULL, NULL, 0, yylineno);
        patch((yyvsp[(1) - (3)].exprVal)->trueList, (yyvsp[(1) - (3)].exprVal)->falseList, nextquad() + 1, iflabel_true);
        iflabel_true = nextquad() - 1;
    }
    break;

  case 106:
#line 882 "parser.y"
    {
        patch_orphan_ifelsejumps(nextquad()+1);
        patchlabel_difzero(iflabel_true - 1, nextquad()+1);
        (yyval.stmtVal) = (yyvsp[(5) - (5)].stmtVal);
        //fprintf(stderr, "ifstmt -> if (expr) stmt ELSE stmt\n");
    }
    break;

  case 107:
#line 890 "parser.y"
    {
        break_state++;
        continue_state++;
        loopcounter++;
        (yyval.unsVal) = nextquad() + 1;
        //fprintf(stderr, "whilestart -> WHILE\n");
    }
    break;

  case 108:
#line 899 "parser.y"
    {
        if (!(yyvsp[(2) - (3)].exprVal)->trueList){
            // e.g while (false) or while(a) or while (true)
            (yyvsp[(2) - (3)].exprVal)->trueList = append((yyvsp[(2) - (3)].exprVal)->trueList, nextquad(), or);
            (yyvsp[(2) - (3)].exprVal)->falseList = append((yyvsp[(2) - (3)].exprVal)->falseList, nextquad()+1, or);
            emit(if_eq, (yyvsp[(2) - (3)].exprVal), newexpr_constbool(1), NULL, 0, yylineno);
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        fix_temp((yyvsp[(2) - (3)].exprVal)->trueList);
        fix_temp((yyvsp[(2) - (3)].exprVal)->falseList);
        (yyval.exprVal) = (yyvsp[(2) - (3)].exprVal);
        whilelabel_true = nextquad() + 1;
        //fprintf(stderr, "whilecond -> (expr)\n");
    }
    break;

  case 109:
#line 915 "parser.y"
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
        //fprintf(stderr, "whilestmt -> WHILE (expr) stmt\n");
    }
    break;

  case 110:
#line 931 "parser.y"
    {
        (yyval.unsVal) = nextquad();
    }
    break;

  case 111:
#line 936 "parser.y"
    {}
    break;

  case 112:
#line 936 "parser.y"
    {
        loopcounter++;
        break_state++;
        continue_state++;
        for_label_help = nextquad() + 1;
        //fprintf(stderr, "forstmt -> for(elist; expr; elist)\n");
        //fprintf(stderr, "for_label_st: %d", for_label_help);
    }
    break;

  case 113:
#line 943 "parser.y"
    {
        for_label_start = nextquad()-1;
        //fprintf(stderr, "for_label_st: %d", for_label_start);
        if (!(yyvsp[(7) - (8)].exprVal)->trueList){
            (yyvsp[(7) - (8)].exprVal)->trueList = append((yyvsp[(7) - (8)].exprVal)->trueList, nextquad(), or);
            (yyvsp[(7) - (8)].exprVal)->falseList = append((yyvsp[(7) - (8)].exprVal)->falseList, nextquad()+1, or);
            emit(if_eq, NULL, newexpr_constbool(1), (yyvsp[(7) - (8)].exprVal), 0, yylineno); 
            emit(jump, NULL, NULL, NULL, 0, yylineno);
        }
        fix_temp((yyvsp[(7) - (8)].exprVal)->trueList);
        fix_temp((yyvsp[(7) - (8)].exprVal)->falseList);
        for_label = nextquad() + 1;
    }
    break;

  case 114:
#line 955 "parser.y"
    {
        if (for_label_help == for_label_start) emit(jump, NULL, NULL, NULL, for_label_start, yylineno);
        else emit(jump, NULL, NULL, NULL, for_label_help, yylineno);
        patchlabel(for_label_start - 1, nextquad() + 1);
        forlabel_true = nextquad() + 1;
    }
    break;

  case 115:
#line 960 "parser.y"
    {
        emit(jump, NULL, NULL, NULL, for_label, yylineno);
        patch((yyvsp[(7) - (13)].exprVal)->trueList, (yyvsp[(7) - (13)].exprVal)->falseList, nextquad() + 1, forlabel_true);
        patchlabel(for_label_start - 1, forlabel_true);
        //patchlabel(for_label_start, forlabel_true);
        //print_quads();
        //exit(0);
        if (break_index >= 0) (yyvsp[(13) - (13)].stmtVal)->breakList = append_brcont((yyvsp[(13) - (13)].stmtVal)->breakList, nextquad());
        if (continue_index >= 0) (yyvsp[(13) - (13)].stmtVal)->contList = append_brcont((yyvsp[(13) - (13)].stmtVal)->contList, for_label);
        (yyval.stmtVal) = (yyvsp[(13) - (13)].stmtVal);

        //for_label = 0;
        //for_label_start = 0;
        break_state--;
        continue_state--;
        loopcounter--;
        //fprintf(stderr, "forstmt -> for(elist; expr; elist) stmt\n");
    }
    break;

  case 116:
#line 980 "parser.y"
    {
        if (!return_state) {
            yyerror("Return statement not in a function");
            exit(0);
        }
        else {	
            emit(ret, (yyvsp[(2) - (3)].exprVal), NULL, NULL, 0, yylineno);	
            (yyval.stmtVal) = make_stmt();	
            returnlabel = nextquad();
            emit(jump, NULL, NULL, NULL, 0, yylineno);	
        }
        //fprintf(stderr, "returnstmt -> RETURN expr SEMICOLON\n");
    }
    break;

  case 117:
#line 993 "parser.y"
    {
        if (!return_state) {
            yyerror("Return statement not in a function");
            exit(0);
        }
        else {	
            emit(assign, NULL, NULL, NULL, 0, yylineno);	
            (yyval.stmtVal) = make_stmt();
            returnlabel = nextquad();
            emit(jump, NULL, NULL, NULL, 0, yylineno);	
        }
        //fprintf(stderr, "returnstmt -> RETURN SEMICOLON\n");
    }
    break;


/* Line 1267 of yacc.c.  */
#line 3059 "parser.c"
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
            //fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
        }
        if (lookup_by_specific_type(yylval.strVal, LIBFUNC))    {
            //fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
        }
     } else {
        if (lookup_by_specific_type(yytext, USERFUNC)) {
            //fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
        }
        if (lookup_by_specific_type(yytext, LIBFUNC))  {
            //fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yytext, yylineno);
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
        else if (t2 == 3) {
            
            result = (int)t1->numConst * (int)t3->numConst;
        }
        else if (t2 == 4) {
            if ((int)t3->numConst == 0) {
                //fprintf(stderr, "x DIV 0 NOT PERMITTED\n");
                exit(0);
            }
            result = t1->numConst / t3->numConst;
        }
        else if (t2 == 5) {
            if ((int)t3->numConst == 0) {
                //fprintf(stderr, "x MOD 0 NOT PERMITTED\n");
                exit(0);
            }
            result = (int)t1->numConst % (int)t3->numConst;
        }
        t = newexpr(arithexpr_e);
        t->sym = newtemp();
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
	//fprintf(stderr, "\nERROR -> %s: at line %d, before token %s\n\n", yaccProvidedMessage, yylineno, yytext);
}

int main (int argc, char** argv){
    if (argc > 1){
        if (!(yyin = fopen(argv[1], "r"))){
            //fprintf(stderr,"Cannot read file: %s\n",argv[1]);
            return 1;
        }
    } else yyin = stdin;

    initialize_libraries();
    yyparse();
    attach_formals();
    //print_by_scopes();    /* Phase 2 */
    print_quads();          /* Phase 3 */
    start_generate();       /* Phase 4 */
    read_bin();             /* Phase 5 */

    return 0;   
}
