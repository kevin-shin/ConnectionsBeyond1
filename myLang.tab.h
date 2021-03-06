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
     END = 258,
     IDENT = 259,
     EQUALS = 260,
     ASSIGN = 261,
     LESSTHAN = 262,
     GREATERTHAN = 263,
     INT = 264,
     FLOAT = 265,
     LPAREN = 266,
     RPAREN = 267,
     MINUS = 268,
     PLUS = 269,
     DIVIDE = 270,
     TIMES = 271,
     LCURLY = 272,
     RCURLY = 273,
     IF = 274,
     FOR = 275,
     ELSE = 276,
     ELIF = 277,
     WHILE = 278
   };
#endif
/* Tokens.  */
#define END 258
#define IDENT 259
#define EQUALS 260
#define ASSIGN 261
#define LESSTHAN 262
#define GREATERTHAN 263
#define INT 264
#define FLOAT 265
#define LPAREN 266
#define RPAREN 267
#define MINUS 268
#define PLUS 269
#define DIVIDE 270
#define TIMES 271
#define LCURLY 272
#define RCURLY 273
#define IF 274
#define FOR 275
#define ELSE 276
#define ELIF 277
#define WHILE 278




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

