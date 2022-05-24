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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 23 "parser.y"
{ 
    int intVal; 
    double realVal; 
    char * strVal;
}
/* Line 1529 of yacc.c.  */
#line 161 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

