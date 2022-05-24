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
/* Line 1529 of yacc.c.  */
#line 154 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

