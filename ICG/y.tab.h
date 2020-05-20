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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 37 "icg.y"
{	
	char sval[300];
}
/* Line 1529 of yacc.c.  */
#line 123 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

