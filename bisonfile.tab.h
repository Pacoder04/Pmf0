
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
     KW_IF = 258,
     KW_ELSE = 259,
     KW_WHILE = 260,
     KW_FOR = 261,
     KW_BREAK = 262,
     KW_CONTINUE = 263,
     KW_RETURN = 264,
     DOUBLE = 265,
     OCTAL = 266,
     HEXADECIMAL = 267,
     STRING = 268,
     EQUAL = 269,
     NOT_EQUAL = 270,
     LESS = 271,
     LESS_EQUAL = 272,
     GREATER = 273,
     GREATER_EQUAL = 274,
     AND = 275,
     OR = 276,
     NOT = 277,
     INTEGER = 278,
     T_SC = 279,
     KW_INT = 280,
     KW_DOUBLE = 281,
     KW_BOOL = 282,
     KW_STRING = 283,
     PLUS = 284,
     MINUS = 285,
     MULTIPLY = 286,
     DIVIDE = 287,
     T_LEFTP = 288,
     T_RIGHTP = 289,
     T_RIGHTB = 290,
     T_LEFTB = 291,
     IDENTIFIER = 292,
     ASSIGN = 293,
     T_TRUE = 294,
     T_FALSE = 295
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "bisonfile.y"


  int ival;
  char* sval;
  double dval;





/* Line 1676 of yacc.c  */
#line 103 "bisonfile.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


