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
     LEFT_CURLY_BRACKET = 281,
     RIGHT_CURLY_BRACKET = 282,
     LEFT_SQUARE_BRACKET = 283,
     RIGHT_SQUARE_BRACKET = 284,
     LEFT_PARENTHESES = 285,
     RIGHT_PARENTHESES = 286,
     SEMICOLON = 287,
     COMMA = 288,
     COLON = 289,
     DOUBLE_COLON = 290,
     DOT = 291,
     DOUBLE_DOT = 292,
     IF = 293,
     ELSE = 294,
     WHILE = 295,
     FOR = 296,
     FUNCTION = 297,
     RETURN = 298,
     BREAK = 299,
     CONTINUE = 300,
     AND = 301,
     NOT = 302,
     OR = 303,
     LOCAL_KEYWORD = 304,
     TRUE = 305,
     FALSE = 306,
     NIL = 307,
     LINE_COMMENT = 308
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
#define LEFT_CURLY_BRACKET 281
#define RIGHT_CURLY_BRACKET 282
#define LEFT_SQUARE_BRACKET 283
#define RIGHT_SQUARE_BRACKET 284
#define LEFT_PARENTHESES 285
#define RIGHT_PARENTHESES 286
#define SEMICOLON 287
#define COMMA 288
#define COLON 289
#define DOUBLE_COLON 290
#define DOT 291
#define DOUBLE_DOT 292
#define IF 293
#define ELSE 294
#define WHILE 295
#define FOR 296
#define FUNCTION 297
#define RETURN 298
#define BREAK 299
#define CONTINUE 300
#define AND 301
#define NOT 302
#define OR 303
#define LOCAL_KEYWORD 304
#define TRUE 305
#define FALSE 306
#define NIL 307
#define LINE_COMMENT 308




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    #include "hash.h"   
    int yylex(void);
    void yyerror(char* yaccProvidedMessage); 
    void check_term ();
    void check_call (char* lvalue);

    extern int yylineno;
    extern char* yytext;
    extern FILE* yyin;

    unsigned int scope = 0;
    unsigned int dollars_counter = 0;
    unsigned int state = 0;
    unsigned int is_member = 0;
    unsigned int global_case = 0;
    unsigned int right_value_check = 0;
    unsigned int is_call = 0;


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
#line 23 "parser.y"
{ 
    int intVal; 
    double realVal; 
    char * strVal;
}
/* Line 193 of yacc.c.  */
#line 228 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 241 "parser.c"

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
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   830

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  207

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
       0,     0,     3,     5,     6,     8,    11,    13,    16,    18,
      20,    22,    24,    27,    30,    32,    34,    36,    38,    40,
      42,    43,    46,    50,    55,    59,    63,    67,    71,    75,
      79,    83,    87,    91,    95,    99,   103,   105,   109,   112,
     115,   118,   121,   124,   127,   129,   130,   135,   137,   139,
     141,   145,   147,   149,   152,   155,   157,   161,   162,   168,
     172,   177,   182,   183,   187,   194,   196,   198,   202,   207,
     214,   218,   224,   226,   230,   231,   235,   239,   241,   245,
     251,   252,   253,   258,   259,   260,   266,   267,   268,   276,
     277,   278,   279,   289,   291,   293,   295,   297,   299,   301,
     302,   306,   307,   311,   312,   318,   326,   332,   333,   344,
     348,   351,   353,   355,   357,   359,   361
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    -1,    57,    -1,    56,    57,
      -1,     1,    -1,    58,    32,    -1,    91,    -1,    92,    -1,
      93,    -1,    95,    -1,    44,    32,    -1,    45,    32,    -1,
      76,    -1,    81,    -1,    97,    -1,    98,    -1,    96,    -1,
      32,    -1,    -1,    61,    59,    -1,    58,    13,    58,    -1,
      58,    13,    12,    58,    -1,    58,    14,    58,    -1,    58,
      15,    58,    -1,    58,    17,    58,    -1,    58,    16,    58,
      -1,    58,    23,    58,    -1,    58,    24,    58,    -1,    58,
      22,    58,    -1,    58,    25,    58,    -1,    58,    18,    58,
      -1,    58,    19,    58,    -1,    58,    46,    58,    -1,    58,
      48,    58,    -1,    60,    -1,    30,    58,    31,    -1,    14,
      58,    -1,    47,    58,    -1,    20,    64,    -1,    64,    20,
      -1,    21,    64,    -1,    64,    21,    -1,    63,    -1,    -1,
      64,    62,    12,    58,    -1,    64,    -1,    67,    -1,    73,
      -1,    30,    81,    31,    -1,    87,    -1,     5,    -1,    49,
       5,    -1,    35,     5,    -1,    65,    -1,    64,    36,     5,
      -1,    -1,    64,    66,    28,    58,    29,    -1,    67,    36,
       5,    -1,    67,    28,    58,    29,    -1,    67,    30,    72,
      31,    -1,    -1,    64,    68,    69,    -1,    30,    81,    31,
      30,    72,    31,    -1,    70,    -1,    71,    -1,    30,    72,
      31,    -1,     5,    30,    58,    31,    -1,     5,    30,    72,
      33,    58,    31,    -1,     5,    30,    31,    -1,    37,     5,
      30,    72,    31,    -1,    58,    -1,    72,    33,    58,    -1,
      -1,    28,    72,    29,    -1,    28,    74,    29,    -1,    75,
      -1,    74,    33,    75,    -1,    26,    58,    34,    58,    27,
      -1,    -1,    -1,    26,    77,    27,    78,    -1,    -1,    -1,
      26,    79,    56,    27,    80,    -1,    -1,    -1,    42,    30,
      82,    88,    31,    83,    76,    -1,    -1,    -1,    -1,    42,
       5,    84,    30,    85,    88,    31,    86,    76,    -1,     3,
      -1,     4,    -1,     6,    -1,    52,    -1,    50,    -1,    51,
      -1,    -1,     5,    89,    90,    -1,    -1,    90,    33,     5,
      -1,    -1,    38,    30,    58,    31,    57,    -1,    38,    30,
      58,    31,    57,    39,    57,    -1,    40,    30,    58,    31,
      57,    -1,    -1,    41,    30,    72,    32,    58,    32,    72,
      31,    94,    57,    -1,    43,    58,    32,    -1,    43,    32,
      -1,    53,    -1,     7,    -1,     9,    -1,    11,    -1,     8,
      -1,    10,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    96,    96,    97,   100,   101,   102,   105,   106,   107,
     108,   109,   110,   114,   118,   119,   120,   121,   122,   123,
     126,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   144,   145,   146,
     147,   151,   155,   159,   163,   166,   166,   199,   200,   201,
     202,   203,   206,   218,   245,   254,   257,   258,   258,   261,
     262,   265,   266,   266,   293,   296,   297,   300,   301,   302,
     303,   306,   309,   310,   311,   314,   315,   318,   319,   322,
     325,   329,   325,   334,   338,   334,   345,   353,   345,   354,
     370,   370,   354,   373,   374,   375,   376,   377,   378,   381,
     381,   386,   389,   399,   402,   403,   406,   409,   409,   412,
     416,   422,   423,   424,   427,   430,   431
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
  "GREATER_OR_EQUAL", "LESS_OR_EQUAL", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "LEFT_SQUARE_BRACKET", "RIGHT_SQUARE_BRACKET",
  "LEFT_PARENTHESES", "RIGHT_PARENTHESES", "SEMICOLON", "COMMA", "COLON",
  "DOUBLE_COLON", "DOT", "DOUBLE_DOT", "IF", "ELSE", "WHILE", "FOR",
  "FUNCTION", "RETURN", "BREAK", "CONTINUE", "AND", "NOT", "OR",
  "LOCAL_KEYWORD", "TRUE", "FALSE", "NIL", "LINE_COMMENT", "$accept",
  "program", "stmtp", "stmt", "expr", "@1", "term", "assignexpr", "@2",
  "primary", "lvalue", "member", "@3", "call", "@4", "callsuffix",
  "normcall", "methodcall", "elist", "objectdef", "indexed", "indexedelem",
  "block", "@5", "@6", "@7", "@8", "funcdef", "@9", "@10", "@11", "@12",
  "@13", "const", "idlist", "@14", "idlist_case_commaid", "ifstmt",
  "whilestmt", "forstmt", "@15", "returnstmt", "comment", "warning",
  "string_comment_error", 0
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
       0,    54,    55,    55,    56,    56,    56,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      59,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    60,    60,    60,
      60,    60,    60,    60,    60,    62,    61,    63,    63,    63,
      63,    63,    64,    64,    64,    64,    65,    66,    65,    65,
      65,    67,    68,    67,    67,    69,    69,    70,    70,    70,
      70,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      77,    78,    76,    79,    80,    76,    82,    83,    81,    84,
      85,    86,    81,    87,    87,    87,    87,    87,    87,    89,
      88,    88,    90,    90,    91,    91,    92,    94,    93,    95,
      95,    96,    96,    96,    97,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     1,     1,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       0,     2,     3,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     2,     2,
       2,     2,     2,     2,     1,     0,     4,     1,     1,     1,
       3,     1,     1,     2,     2,     1,     3,     0,     5,     3,
       4,     4,     0,     3,     6,     1,     1,     3,     4,     6,
       3,     5,     1,     3,     0,     3,     3,     1,     3,     5,
       0,     0,     4,     0,     0,     5,     0,     0,     7,     0,
       0,     0,     9,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     3,     0,     5,     7,     5,     0,    10,     3,
       2,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     6,    93,    94,    52,    95,   112,   115,   113,   116,
     114,     0,     0,     0,    83,    74,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    98,
      96,   111,     0,     2,     4,     0,    36,    20,    44,    47,
      55,    48,    49,    14,    15,    51,     8,     9,    10,    11,
      18,    16,    17,    38,     0,    40,     0,    42,     0,     0,
       0,    72,     0,     0,    77,     0,     0,    54,     0,     0,
      74,    89,    86,   110,     0,    12,    13,    39,    53,     1,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,     0,     0,    21,    41,    43,     0,     0,
       0,     0,     0,    74,     0,     0,    81,     0,     0,    75,
       0,    76,     0,    37,    50,     0,     0,     0,     0,   101,
     109,     0,    22,    24,    25,    27,    26,    32,    33,    30,
      28,    29,    31,    34,    35,    56,     0,     0,     0,    74,
       0,    63,    65,    66,     0,     0,    59,     0,    82,    84,
       0,    73,    78,    74,     0,     0,     0,    90,    99,     0,
      23,    46,     0,    74,     0,     0,    60,    61,    85,     0,
       0,   104,   106,     0,   101,   103,    87,    58,    70,    72,
       0,    67,    74,    79,    64,     0,    74,     0,   100,     0,
      68,     0,     0,   105,     0,    91,     0,    88,    73,    71,
     107,     0,   102,    69,     0,    92,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    95,    36,    37,    99,    38,
      39,    40,   100,    41,   101,   141,   142,   143,    62,    42,
      63,    64,    43,    58,   148,    59,   168,    44,   119,   189,
     118,   174,   201,    45,   159,   175,   188,    46,    47,    48,
     204,    49,    50,    51,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -177
static const yytype_int16 yypact[] =
{
     182,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,   503,    -3,    -3,   -13,     3,   388,  -177,    17,     0,
       7,    33,    11,   401,    49,    53,   503,    39,  -177,  -177,
    -177,  -177,    97,   337,  -177,    90,  -177,  -177,  -177,   128,
    -177,    12,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,     4,    56,    -2,    12,    -2,    73,   235,
     503,   769,    27,    32,  -177,   543,    71,  -177,   503,   503,
     503,  -177,  -177,  -177,   562,  -177,  -177,  -177,  -177,  -177,
    -177,   451,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,  -177,   503,   503,  -177,  -177,  -177,   111,   105,
      91,     6,   503,   503,   113,    89,  -177,   286,   582,  -177,
     503,  -177,    95,  -177,    93,   618,   637,    57,    94,   122,
    -177,   503,     4,     4,  -177,  -177,  -177,   786,   786,   505,
     505,   505,   505,   805,   805,  -177,   503,   503,    99,   503,
     130,  -177,  -177,  -177,   657,    14,  -177,    93,  -177,  -177,
     503,   769,  -177,   503,   337,   337,   503,  -177,  -177,   106,
     769,   769,   675,   464,    31,   114,  -177,  -177,  -177,   693,
      35,   102,  -177,   711,   122,  -177,  -177,  -177,  -177,   731,
     110,  -177,   503,  -177,  -177,   337,   503,   115,   117,   121,
    -177,   503,    36,  -177,    55,  -177,   146,  -177,   750,  -177,
    -177,   121,  -177,  -177,   337,  -177,  -177
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,  -177,    96,   -23,   -11,  -177,  -177,  -177,  -177,  -177,
      81,  -177,  -177,    83,  -177,  -177,  -177,  -177,   -52,  -177,
    -177,    41,  -176,  -177,  -177,  -177,  -177,   -15,  -177,  -177,
    -177,  -177,  -177,  -177,   -20,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -81
static const yytype_int16 yytable[] =
{
      53,    66,     4,   -62,    61,    65,     2,     3,     4,     5,
      80,   138,    74,   197,   -80,    77,    71,    11,   117,    83,
      84,    85,    67,    12,    13,   205,   -57,    54,   -62,    60,
      68,    15,    18,    16,    98,   -62,   139,    69,    18,   105,
     102,    72,   103,   140,    78,   167,    27,   110,   104,   108,
      26,   145,    27,    28,    29,    30,   109,   115,   116,    61,
     110,   111,   181,    70,   110,   112,   184,   199,   110,   110,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    75,   133,   134,    80,    76,   200,   164,   110,   156,
     110,   144,    61,    55,    57,    56,    56,    79,    22,   151,
     106,   170,   114,    81,    82,    83,    84,    85,    86,    87,
     160,   180,    88,    89,    90,    91,   135,   136,   146,   137,
     147,    60,    92,   153,   157,   161,   162,   158,    61,   163,
     192,   171,   172,   -62,   194,   165,    93,   176,    94,   169,
     -45,   185,    61,   191,   182,   173,   195,    14,    96,    97,
     196,   202,   179,   152,   187,   107,   -57,     0,   -62,     0,
       0,     0,   193,     0,    98,   -62,     0,     0,     0,     0,
       0,    61,     0,     0,     0,    61,     0,     0,     0,     0,
     198,   206,    -3,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,    11,     0,     0,     0,
       0,     0,    12,    13,     0,     0,     0,     0,    14,     0,
      15,     0,    16,     0,    17,     0,     0,    18,     0,     0,
      19,     0,    20,    21,    22,    23,    24,    25,     0,    26,
       0,    27,    28,    29,    30,    31,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,    11,
       0,     0,     0,     0,     0,    12,    13,     0,     0,     0,
       0,    14,     0,    15,     0,    16,     0,    17,     0,     0,
      18,     0,     0,    19,     0,    20,    21,    22,    23,    24,
      25,     0,    26,     0,    27,    28,    29,    30,    31,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      11,     0,     0,     0,     0,     0,    12,    13,     0,     0,
       0,     0,    14,   149,    15,     0,    16,     0,    17,     0,
       0,    18,     0,     0,    19,     0,    20,    21,    22,    23,
      24,    25,     0,    26,     0,    27,    28,    29,    30,    31,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    11,     0,     0,     0,     0,     0,    12,    13,     0,
       0,     0,     0,    14,     0,    15,     0,    16,     0,    17,
       0,     0,    18,     0,     0,    19,     0,    20,    21,    22,
      23,    24,    25,     0,    26,     0,    27,    28,    29,    30,
      31,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     2,     3,     4,     5,    12,    13,
       0,     0,     0,     0,     0,    11,    15,     0,    16,     0,
       0,    12,    13,    18,     0,     0,     0,     0,     0,    15,
      22,    16,     0,    73,     0,    26,    18,    27,    28,    29,
      30,     0,     0,     0,     0,     0,     0,     0,    26,     0,
      27,    28,    29,    30,     2,     3,     4,     5,     0,     0,
       0,     0,     0,   121,     0,    11,     0,     2,     3,     4,
       5,    12,    13,     0,     0,     0,     0,     0,    11,    15,
       0,    16,     0,     0,    12,    13,    18,     0,     0,     0,
       0,     0,    15,     0,    16,   178,     0,     0,    26,    18,
      27,    28,    29,    30,     0,     0,     2,     3,     4,     5,
       0,    26,     0,    27,    28,    29,    30,    11,    81,    82,
      83,    84,    85,    12,    13,     0,     0,   -81,   -81,   -81,
     -81,    15,     0,    16,     0,     0,     0,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    27,    28,    29,    30,    81,    82,    83,    84,
      85,    86,    87,     0,     0,    88,    89,    90,    91,     0,
       0,     0,     0,     0,   113,    81,    82,    83,    84,    85,
      86,    87,     0,     0,    88,    89,    90,    91,     0,    93,
       0,    94,     0,     0,   120,    81,    82,    83,    84,    85,
      86,    87,     0,     0,    88,    89,    90,    91,    93,     0,
      94,     0,     0,     0,     0,     0,   150,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
      94,    81,    82,    83,    84,    85,    86,    87,     0,     0,
      88,    89,    90,    91,     0,     0,     0,     0,     0,   154,
      81,    82,    83,    84,    85,    86,    87,     0,     0,    88,
      89,    90,    91,     0,    93,     0,    94,     0,   155,     0,
      81,    82,    83,    84,    85,    86,    87,     0,     0,    88,
      89,    90,    91,    93,     0,    94,   166,     0,    81,    82,
      83,    84,    85,    86,    87,     0,     0,    88,    89,    90,
      91,     0,     0,    93,   177,    94,    81,    82,    83,    84,
      85,    86,    87,     0,     0,    88,    89,    90,    91,     0,
     183,    93,     0,    94,    81,    82,    83,    84,    85,    86,
      87,     0,     0,    88,    89,    90,    91,     0,     0,    93,
       0,    94,     0,   186,    81,    82,    83,    84,    85,    86,
      87,     0,     0,    88,    89,    90,    91,    93,     0,    94,
       0,     0,   190,    81,    82,    83,    84,    85,    86,    87,
       0,     0,    88,    89,    90,    91,     0,    93,     0,    94,
       0,   203,    81,    82,    83,    84,    85,    86,    87,     0,
       0,    88,    89,    90,    91,     0,    93,     0,    94,    81,
      82,    83,    84,    85,   -81,   -81,     0,     0,    88,    89,
      90,    91,     0,     0,     0,    93,     0,    94,    81,    82,
      83,    84,    85,    86,    87,     0,     0,    88,    89,    90,
      91
};

static const yytype_int16 yycheck[] =
{
      11,    16,     5,     5,    15,    16,     3,     4,     5,     6,
      33,     5,    23,   189,    27,    26,     5,    14,    70,    15,
      16,    17,     5,    20,    21,   201,    28,    30,    30,    26,
      30,    28,    35,    30,    36,    37,    30,    30,    35,    54,
      28,    30,    30,    37,     5,    31,    49,    33,    36,    60,
      47,   103,    49,    50,    51,    52,    29,    68,    69,    70,
      33,    29,    31,    30,    33,    33,    31,    31,    33,    33,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    32,    93,    94,   107,    32,    31,   139,    33,    32,
      33,   102,   103,    12,    13,    12,    13,     0,    42,   110,
      27,   153,    31,    13,    14,    15,    16,    17,    18,    19,
     121,   163,    22,    23,    24,    25,     5,    12,     5,    28,
      31,    26,    32,    30,    30,   136,   137,     5,   139,    30,
     182,   154,   155,     5,   186,     5,    46,    31,    48,   150,
      12,    39,   153,    33,    30,   156,    31,    26,    20,    21,
      33,     5,   163,   112,   174,    59,    28,    -1,    30,    -1,
      -1,    -1,   185,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,   182,    -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,
     191,   204,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    20,    21,    -1,    -1,    -1,    -1,    26,    -1,
      28,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    53,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,    -1,
      -1,    26,    -1,    28,    -1,    30,    -1,    32,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    49,    50,    51,    52,    53,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    -1,    26,    27,    28,    -1,    30,    -1,    32,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    49,    50,    51,    52,    53,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    21,    -1,
      -1,    -1,    -1,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    49,    50,    51,    52,
      53,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    -1,     3,     4,     5,     6,    20,    21,
      -1,    -1,    -1,    -1,    -1,    14,    28,    -1,    30,    -1,
      -1,    20,    21,    35,    -1,    -1,    -1,    -1,    -1,    28,
      42,    30,    -1,    32,    -1,    47,    35,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    -1,
      49,    50,    51,    52,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,     3,     4,     5,
       6,    20,    21,    -1,    -1,    -1,    -1,    -1,    14,    28,
      -1,    30,    -1,    -1,    20,    21,    35,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    30,    31,    -1,    -1,    47,    35,
      49,    50,    51,    52,    -1,    -1,     3,     4,     5,     6,
      -1,    47,    -1,    49,    50,    51,    52,    14,    13,    14,
      15,    16,    17,    20,    21,    -1,    -1,    22,    23,    24,
      25,    28,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    -1,    49,    50,    51,    52,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    31,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    -1,    46,
      -1,    48,    -1,    -1,    32,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    22,    23,    24,    25,    46,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      48,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    31,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    -1,    46,    -1,    48,    -1,    31,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    22,
      23,    24,    25,    46,    -1,    48,    29,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25,    -1,    -1,    46,    29,    48,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    25,    -1,
      27,    46,    -1,    48,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    -1,    -1,    46,
      -1,    48,    -1,    32,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    46,    -1,    48,
      -1,    -1,    31,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    25,    -1,    46,    -1,    48,
      -1,    31,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    -1,    46,    -1,    48,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    22,    23,
      24,    25,    -1,    -1,    -1,    46,    -1,    48,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    22,    23,    24,
      25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    14,    20,    21,    26,    28,    30,    32,    35,    38,
      40,    41,    42,    43,    44,    45,    47,    49,    50,    51,
      52,    53,    55,    56,    57,    58,    60,    61,    63,    64,
      65,    67,    73,    76,    81,    87,    91,    92,    93,    95,
      96,    97,    98,    58,    30,    64,    67,    64,    77,    79,
      26,    58,    72,    74,    75,    58,    81,     5,    30,    30,
      30,     5,    30,    32,    58,    32,    32,    58,     5,     0,
      57,    13,    14,    15,    16,    17,    18,    19,    22,    23,
      24,    25,    32,    46,    48,    59,    20,    21,    36,    62,
      66,    68,    28,    30,    36,    81,    27,    56,    58,    29,
      33,    29,    33,    31,    31,    58,    58,    72,    84,    82,
      32,    12,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,     5,    12,    28,     5,    30,
      37,    69,    70,    71,    58,    72,     5,    31,    78,    27,
      34,    58,    75,    30,    31,    31,    32,    30,     5,    88,
      58,    58,    58,    30,    72,     5,    29,    31,    80,    58,
      72,    57,    57,    58,    85,    89,    31,    29,    31,    58,
      72,    31,    30,    27,    31,    39,    32,    88,    90,    83,
      31,    33,    72,    57,    72,    31,    33,    76,    58,    31,
      31,    86,     5,    31,    94,    76,    57
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
#line 96 "parser.y"
    {fprintf(stderr, "program -> stmtp\n");}
    break;

  case 4:
#line 100 "parser.y"
    {right_value_check = 0;fprintf(stderr, "stmtp -> stmt\n");}
    break;

  case 5:
#line 101 "parser.y"
    {right_value_check = 0;fprintf(stderr, "stmtp -> stmtp stmt\n");}
    break;

  case 7:
#line 105 "parser.y"
    {fprintf(stderr, "statement -> expr;\n");}
    break;

  case 8:
#line 106 "parser.y"
    {fprintf(stderr, "statement -> ifstmt\n");}
    break;

  case 9:
#line 107 "parser.y"
    {fprintf(stderr, "statement -> whilestmt\n");}
    break;

  case 10:
#line 108 "parser.y"
    {fprintf(stderr, "statement -> forstmt\n");}
    break;

  case 11:
#line 109 "parser.y"
    {fprintf(stderr, "statement -> returnstmt\n");}
    break;

  case 12:
#line 110 "parser.y"
    {
        if (!state) yyerror("Break statement not in a function");
        fprintf(stderr, "statement -> break;\n");
    }
    break;

  case 13:
#line 114 "parser.y"
    {
        if (!state) yyerror("Continue statement not in a function");
        fprintf(stderr, "statement -> continue;\n");
    }
    break;

  case 14:
#line 118 "parser.y"
    {fprintf(stderr, "statement -> block;\n");}
    break;

  case 15:
#line 119 "parser.y"
    {fprintf(stderr, "statement -> funcdef;\n");}
    break;

  case 16:
#line 120 "parser.y"
    {fprintf(stderr, "statement -> warning;\n");}
    break;

  case 17:
#line 121 "parser.y"
    {fprintf(stderr, "statement -> string_comment_error;\n");}
    break;

  case 18:
#line 122 "parser.y"
    {fprintf(stderr, "statement -> comment;\n");}
    break;

  case 19:
#line 123 "parser.y"
    {fprintf(stderr, "statement -> ;\n");}
    break;

  case 20:
#line 126 "parser.y"
    {}
    break;

  case 21:
#line 126 "parser.y"
    {fprintf(stderr, "expression -> assignexpr;\n");}
    break;

  case 22:
#line 127 "parser.y"
    {fprintf(stderr, "expr + expr\n");}
    break;

  case 23:
#line 128 "parser.y"
    {fprintf(stderr, "expr += expr\n");}
    break;

  case 24:
#line 129 "parser.y"
    {fprintf(stderr, "expr - expr\n");}
    break;

  case 25:
#line 130 "parser.y"
    {fprintf(stderr, "expr * expr\n");}
    break;

  case 26:
#line 131 "parser.y"
    {fprintf(stderr, "expr %% expr\n");}
    break;

  case 27:
#line 132 "parser.y"
    {fprintf(stderr, "expr // expr\n");}
    break;

  case 28:
#line 133 "parser.y"
    {fprintf(stderr, "expr > expr\n");}
    break;

  case 29:
#line 134 "parser.y"
    {fprintf(stderr, "expr >= expr\n");}
    break;

  case 30:
#line 135 "parser.y"
    {fprintf(stderr, "expr < expr\n");}
    break;

  case 31:
#line 136 "parser.y"
    {fprintf(stderr, "expr <= expr\n");}
    break;

  case 32:
#line 137 "parser.y"
    {fprintf(stderr, "expr == expr\n");}
    break;

  case 33:
#line 138 "parser.y"
    {fprintf(stderr, "expr != expr\n");}
    break;

  case 34:
#line 139 "parser.y"
    {fprintf(stderr, "expr && expr\n");}
    break;

  case 35:
#line 140 "parser.y"
    {fprintf(stderr, "expr || expr\n");}
    break;

  case 36:
#line 141 "parser.y"
    {fprintf(stderr, "expression -> term;\n");}
    break;

  case 37:
#line 144 "parser.y"
    {fprintf(stderr, "term -> (expr)\n");}
    break;

  case 38:
#line 145 "parser.y"
    {fprintf(stderr, "term -> -expr\n");}
    break;

  case 39:
#line 146 "parser.y"
    {fprintf(stderr, "term -> not expr\n");}
    break;

  case 40:
#line 147 "parser.y"
    {
        check_term();
        fprintf(stderr, "term -> ++lvalue\n");
    }
    break;

  case 41:
#line 151 "parser.y"
    {
        check_term();
        fprintf(stderr, "term -> lvalue++\n");
    }
    break;

  case 42:
#line 155 "parser.y"
    {
        check_term();
        fprintf(stderr, "term -> --lvalue\n");
    }
    break;

  case 43:
#line 159 "parser.y"
    {
        check_term();
        fprintf(stderr, "term -> lvalue--\n");
    }
    break;

  case 44:
#line 163 "parser.y"
    {fprintf(stderr, "term -> primary\n");}
    break;

  case 45:
#line 166 "parser.y"
    {
        if (is_member == 0 && global_case == 0){
            if (!check_library_collisions(yylval.strVal)) {
                if (scope == 0){
                    if (lookup_by_specific_type_and_scope(yylval.strVal, GLOBAL, 0) == -1) {    
                        if (lookup_by_specific_type_and_scope(yylval.strVal, USERFUNC, 0) == -1) insert(yylval.strVal, 0, yylineno, GLOBAL);
                        else fprintf(stderr, "\nERROR -> Using ProgramFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
                    }
                } else if (scope > 0){
                    int i = 0;
                    int found = -1;
                    if (lookup_by_specific_type_and_scope(yylval.strVal, GLOBAL, 0) != -1) found = 0;
                    for (i; i<=scope; i++){
                        if (lookup_by_specific_type_and_scope(yylval.strVal, LOCAL, i) != -1) found = i;
                        if (lookup_by_specific_type_and_scope(yylval.strVal, FORMAL, i) != -1) found = i;
                    }              
                    if (found == -1) {
                        //if (scope == 1) insert(yylval.strVal, scope, yylineno, GLOBAL); 
                        //else 
                        insert(yylval.strVal, scope, yylineno, LOCAL);                              
                    } else {
                        if (found != scope){
                            if (scope == 1){
                                if (lookup_by_specific_type_and_scope(yylval.strVal, GLOBAL, 0) == -1) fprintf(stderr, "\nERROR -> Cannot access variable %s: at line %d\n\n", yylval.strVal, yylineno);
                            } else fprintf(stderr, "\nERROR -> Cannot access variable %s: at line %d\n\n", yylval.strVal, yylineno);
                        }
                    }
                }
            } else fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
        }      
    }
    break;

  case 46:
#line 196 "parser.y"
    {fprintf(stderr, "assignexpr -> lvalue = expr\n");}
    break;

  case 47:
#line 199 "parser.y"
    {fprintf(stderr, "primary -> lvalue\n");}
    break;

  case 48:
#line 200 "parser.y"
    {fprintf(stderr, "primary -> call\n");}
    break;

  case 49:
#line 201 "parser.y"
    {fprintf(stderr, "primary -> objectdef\n");}
    break;

  case 50:
#line 202 "parser.y"
    {fprintf(stderr, "primary -> (funcdef)\n");}
    break;

  case 51:
#line 203 "parser.y"
    {fprintf(stderr, "primary -> const\n");}
    break;

  case 52:
#line 206 "parser.y"
    {
        right_value_check++;
        if (is_call) check_call(yylval.strVal);
        if (right_value_check == 2){
            check_call(yylval.strVal);
            right_value_check = 0;
        }
        is_member = 0;
        global_case = 0;
        
        fprintf(stderr, "lvalue -> ID\n");
    }
    break;

  case 53:
#line 218 "parser.y"
    {
        right_value_check++;
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Collision with library function: at line %d\n\n", yylineno);
        else {
            while (1){
                if (lookup_by_specific_type_and_scope(yylval.strVal, USERFUNC, scope) != -1){
                    if (get_status(scope)) fprintf(stderr, "\nERROR -> Cannot declare %s with the name of its function: at line %d. \n\n", yylval.strVal, yylineno);
                    else insert(yylval.strVal, scope, yylineno, LOCAL);
                    break;
                } 
                if (lookup_by_specific_type_and_scope(yylval.strVal, FORMAL, scope) == -1) {
                    if (!scope) insert(yylval.strVal, scope, yylineno, GLOBAL);
                    else insert(yylval.strVal, scope, yylineno, LOCAL);
                    break;
                } 
                if (lookup_by_specific_type_and_scope(yylval.strVal, LOCAL, scope) == -1) {
                    if (!scope) insert(yylval.strVal, scope, yylineno, GLOBAL);
                    else insert(yylval.strVal, scope, yylineno, LOCAL);
                    break;
                } else fprintf(stderr, "\nERROR -> Cannot redeclare local %s : at line %d. \n\n", yylval.strVal, yylineno);
                break;
            }
        }
        global_case = 0;
        is_member = 0;
        fprintf(stderr, "lvalue -> LOCAL_KEYWORD ID\n");
    }
    break;

  case 54:
#line 245 "parser.y"
    {  
        right_value_check++;
        if (!lookup_by_specific_scope(yylval.strVal, 0)) {  
            fprintf(stderr, "\nERROR -> Reference to undefined global variable %s : at line %d. \n\n", yylval.strVal, yylineno);
        }
        global_case = 1;
        is_member = 0;
        fprintf(stderr, "lvalue -> DOUBLE_COLON ID\n");
    }
    break;

  case 55:
#line 254 "parser.y"
    {global_case = 0;is_member = 1;fprintf(stderr, "lvalue -> member\n");}
    break;

  case 56:
#line 257 "parser.y"
    {fprintf(stderr, "member -> lvalue.id\n");}
    break;

  case 57:
#line 258 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Using LibFunc %s as an lvalue: at line %d\n\n", yylval.strVal, yylineno);
    }
    break;

  case 58:
#line 260 "parser.y"
    {fprintf(stderr, "member -> lvalue[expr]\n");}
    break;

  case 59:
#line 261 "parser.y"
    {fprintf(stderr, "member -> call.id\n");}
    break;

  case 60:
#line 262 "parser.y"
    {fprintf(stderr, "member -> call[expr]\n");}
    break;

  case 61:
#line 265 "parser.y"
    {fprintf(stderr, "call -> call[elist]\n");}
    break;

  case 62:
#line 266 "parser.y"
    {
        is_call = 1;
        int i = 0;
        int found_formal = -1;
        int found_local = -1;
        int found_userfunc = -1;
        while (1) {
            for (i; i<=scope; i++){
                if (lookup_by_specific_type_and_scope(yylval.strVal, LOCAL, i) != -1) found_local = i;
                if (lookup_by_specific_type_and_scope(yylval.strVal, USERFUNC, i) != -1) found_userfunc = i;
                if (lookup_by_specific_type_and_scope(yylval.strVal, FORMAL, i) != -1) found_formal = i;
            }
            if (found_local >= found_userfunc) {
                if (lookup_by_specific_type_and_scope(yylval.strVal, LIBFUNC, 0) == -1){
                    fprintf(stderr, "\nERROR -> Cannot call %s: at line %d\n\n", yylval.strVal, yylineno);
                }
                break;
            } 
            if (found_formal >= found_userfunc) {
                if (lookup_by_specific_type_and_scope(yylval.strVal, LIBFUNC, 0) == -1){
                    fprintf(stderr, "\nERROR -> Cannot call %s: at line %d\n\n", yylval.strVal, yylineno);
                }
                break;
            } 
            break;
        }
    }
    break;

  case 63:
#line 292 "parser.y"
    {fprintf(stderr, "call -> lvalue callsuffix\n");}
    break;

  case 64:
#line 293 "parser.y"
    {fprintf(stderr, "call -> (funcdef) (elist)\n");}
    break;

  case 65:
#line 296 "parser.y"
    {fprintf(stderr, "callsuffix -> normcall\n");}
    break;

  case 66:
#line 297 "parser.y"
    {fprintf(stderr, "callsuffix -> methodcall\n");}
    break;

  case 67:
#line 300 "parser.y"
    {fprintf(stderr, "normcall -> (elist)\n");}
    break;

  case 68:
#line 301 "parser.y"
    {fprintf(stderr, "methodcall -> id(elist)\n");}
    break;

  case 69:
#line 302 "parser.y"
    {fprintf(stderr, "methodcall -> id(elist)\n");}
    break;

  case 70:
#line 303 "parser.y"
    {fprintf(stderr, "methodcall -> id()\n");}
    break;

  case 71:
#line 306 "parser.y"
    {fprintf(stderr, "methodcall -> ..id(elist)\n");}
    break;

  case 72:
#line 309 "parser.y"
    {fprintf(stderr, "elist -> expr\n");}
    break;

  case 73:
#line 310 "parser.y"
    {fprintf(stderr, "elist -> elist, expr\n");}
    break;

  case 75:
#line 314 "parser.y"
    {fprintf(stderr, "objectdef -> [elist]\n");}
    break;

  case 76:
#line 315 "parser.y"
    {fprintf(stderr, "objectdef -> [indexed]\n");}
    break;

  case 77:
#line 318 "parser.y"
    {fprintf(stderr, "indexed -> indexedelem\n");}
    break;

  case 78:
#line 319 "parser.y"
    {fprintf(stderr, "indexed -> indexed, indexedelem\n");}
    break;

  case 79:
#line 322 "parser.y"
    {fprintf(stderr, "indexedelem -> {expr:expr}\n");}
    break;

  case 80:
#line 325 "parser.y"
    {
            scope++;
            enable(scope);
            state++;
        }
    break;

  case 81:
#line 329 "parser.y"
    {
            hide(scope);
            scope--;
            state--;
        }
    break;

  case 82:
#line 333 "parser.y"
    {fprintf(stderr, "block -> {}\n");}
    break;

  case 83:
#line 334 "parser.y"
    {
        scope++;
        enable(scope);
        state++;
    }
    break;

  case 84:
#line 338 "parser.y"
    {
        hide(scope);
        scope--;
        state--;
    }
    break;

  case 85:
#line 342 "parser.y"
    {fprintf(stderr, "block -> {stmt*}\n");}
    break;

  case 86:
#line 345 "parser.y"
    { 
        char* a = malloc(sizeof(char*));
        char* b = malloc(sizeof(char*));
        strcat(b,strdup("$"));
        sprintf(a,"%d",dollars_counter);
        dollars_counter++;
        insert(strcat(b,a),scope,yylineno,USERFUNC); 
        ++scope;
    }
    break;

  case 87:
#line 353 "parser.y"
    {scope--;}
    break;

  case 88:
#line 353 "parser.y"
    {fprintf(stderr, "funcdef -> FUNCTION(idlist)\n");}
    break;

  case 89:
#line 354 "parser.y"
    {
        if (check_library_collisions(yylval.strVal) && !scope) fprintf(stderr, "\nERROR -> Collision with library function: at line %d\n\n", yylineno);
        else {
            if (!lookup_by_specific_scope(yylval.strVal, scope)) insert(yylval.strVal, scope, yylineno, USERFUNC);
            else {
                int user = lookup_by_specific_type_and_scope(yylval.strVal, USERFUNC, scope);
                int global = lookup_by_specific_type_and_scope(yylval.strVal, GLOBAL, scope);
                int local = lookup_by_specific_type_and_scope(yylval.strVal, LOCAL, scope);
                int formal = lookup_by_specific_type_and_scope(yylval.strVal, FORMAL, scope);

                if (user != -1) fprintf(stderr, "\nERROR in line %d -> Function %s already declared: at line %d\n\n", yylineno, yylval.strVal, user);
                else if (global != -1) fprintf(stderr, "\nERROR in line %d -> Global variable %s already declared: at line %d\n\n", yylineno, yylval.strVal, global); 
                else if (local != -1 ) fprintf(stderr, "\nERROR in line %d -> Local variable %s already declared: at line %d\n\n", yylineno, yylval.strVal, local); 
                else if (formal != -1 ) fprintf(stderr, "\nERROR in line %d -> Formal variable %s already declared: at line %d\n\n", yylineno, yylval.strVal, formal);   
            }       
        }
    }
    break;

  case 90:
#line 370 "parser.y"
    {++scope;}
    break;

  case 91:
#line 370 "parser.y"
    {scope--;}
    break;

  case 92:
#line 370 "parser.y"
    {fprintf(stderr, "funcdef -> FUNCTION ID(idlist)\n");}
    break;

  case 93:
#line 373 "parser.y"
    {fprintf(stderr, "const -> INTEGER\n");}
    break;

  case 94:
#line 374 "parser.y"
    {fprintf(stderr, "const -> REAL\n");}
    break;

  case 95:
#line 375 "parser.y"
    {fprintf(stderr, "const -> STRING\n");}
    break;

  case 96:
#line 376 "parser.y"
    {fprintf(stderr, "const -> NIL\n");}
    break;

  case 97:
#line 377 "parser.y"
    {fprintf(stderr, "const -> TRUE\n");}
    break;

  case 98:
#line 378 "parser.y"
    {fprintf(stderr, "const -> FALSE\n");}
    break;

  case 99:
#line 381 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        else insert(yylval.strVal, scope, yylineno, FORMAL);        
        fprintf(stderr, "idlist -> ID\n");
    }
    break;

  case 102:
#line 389 "parser.y"
    {
        if (check_library_collisions(yylval.strVal)) fprintf(stderr, "\nERROR -> Formal variable %s has the same name with Library function: at line %d\n\n", yylval.strVal, yylineno);
        else {
            if (!lookup_last(yylval.strVal, scope)) insert(yylval.strVal, scope, yylineno, FORMAL);
            else {
                fprintf(stderr, "\nERROR -> Formal Variable %s already defined: at line %d\n\n", yylval.strVal, yylineno); 
            }    
        }
        fprintf(stderr, "idlist -> idlist,ID\n");
    }
    break;

  case 104:
#line 402 "parser.y"
    {fprintf(stderr, "ifstmt -> if(expr) stmt\n");}
    break;

  case 105:
#line 403 "parser.y"
    {fprintf(stderr, "ifstmt -> if(expr) stmt ELSE stmt\n");}
    break;

  case 106:
#line 406 "parser.y"
    {fprintf(stderr, "whilestmt -> WHILE(expr) stmt\n");}
    break;

  case 107:
#line 409 "parser.y"
    {scope--;}
    break;

  case 108:
#line 409 "parser.y"
    {scope++;fprintf(stderr, "forstmt -> for(elist; expr; elist) stmt\n");}
    break;

  case 109:
#line 412 "parser.y"
    {
        if (!state) yyerror("Return statement not in a function");
        fprintf(stderr, "returnstmt -> RETURN expr SEMICOLON\n");
    }
    break;

  case 110:
#line 416 "parser.y"
    {
        if (!state) yyerror("Return statement not in a function");
        fprintf(stderr, "returnstmt -> RETURN SEMICOLON\n");
    }
    break;

  case 111:
#line 422 "parser.y"
    {fprintf(stderr, "comment -> Single line comment\n");}
    break;

  case 112:
#line 423 "parser.y"
    {fprintf(stderr, "comment -> Multiline comment\n");}
    break;

  case 113:
#line 424 "parser.y"
    {fprintf(stderr, "comment -> Multiline comment with nested comments\n");}
    break;

  case 114:
#line 427 "parser.y"
    {fprintf(stderr, "warning -> WARNING_STRING\n");}
    break;

  case 115:
#line 430 "parser.y"
    {fprintf(stderr, "string_comment_error -> MULTI_COMMENT_NEVER_CLOSED\n");}
    break;

  case 116:
#line 431 "parser.y"
    {fprintf(stderr, "string_comment_error -> STRING_NEVER_CLOSED\n");}
    break;


/* Line 1267 of yacc.c.  */
#line 2485 "parser.c"
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


#line 433 "parser.y"


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

void check_call (char* lvalue){
    if (!check_library_collisions(lvalue)) {
        if (scope == 0){
            if (lookup_by_specific_type_and_scope(lvalue, GLOBAL, 0) == -1) {    
                if (lookup_by_specific_type_and_scope(lvalue, USERFUNC, 0) == -1) insert(lvalue, 0, yylineno, GLOBAL);                     
            }
        } else if (scope > 0){
            int i = 0;
            int found = -1;
            if (lookup_by_specific_type_and_scope(lvalue, GLOBAL, 0) != -1) found = 0;
            for (i; i<=scope; i++){
                if (lookup_by_specific_type_and_scope(lvalue, LOCAL, i) != -1) found = i;
                if (lookup_by_specific_type_and_scope(lvalue, FORMAL, i) != -1) found = i;
            }              
            if (found == -1) {
                //if (scope == 1) insert(lvalue, scope, yylineno, GLOBAL); 
                //else 
                for (i=0; i<=scope; i++){
                    if (lookup_by_specific_type_and_scope(lvalue, USERFUNC, i) != -1) found = i;
                }  
                if (found == -1) insert(lvalue, scope, yylineno, LOCAL);                              
            } else {
                if (found != scope){
                    if (scope == 1){
                        if (lookup_by_specific_type_and_scope(lvalue, GLOBAL, 0) == -1) fprintf(stderr, "\nERROR -> Cannot access variable %s: at line %d\n\n", yylval.strVal, yylineno);
                    } else fprintf(stderr, "\nERROR -> Cannot access variable %s: at line %d\n\n", lvalue, yylineno);
                }
            }
        }
    }
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

    return 0;   
}
