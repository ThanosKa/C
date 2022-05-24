/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 166 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

