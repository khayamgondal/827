/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CR = 258,
    EQ = 259,
    INT = 260,
    FLOAT = 261,
    IDENT = 262,
    AMPEREQUAL = 263,
    AMPERSAND = 264,
    AND = 265,
    AS = 266,
    ASSERT = 267,
    AT = 268,
    BACKQUOTE = 269,
    BAR = 270,
    BREAK = 271,
    CIRCUMFLEX = 272,
    CIRCUMFLEXEQUAL = 273,
    CLASS = 274,
    COLON = 275,
    COMMA = 276,
    CONTINUE = 277,
    DEDENT = 278,
    DEF = 279,
    DEL = 280,
    DOT = 281,
    DOUBLESLASH = 282,
    DOUBLESLASHEQUAL = 283,
    DOUBLESTAR = 284,
    DOUBLESTAREQUAL = 285,
    ELIF = 286,
    ELSE = 287,
    ENDMARKER = 288,
    EQEQUAL = 289,
    EQUAL = 290,
    EXCEPT = 291,
    EXEC = 292,
    FINALLY = 293,
    FOR = 294,
    FROM = 295,
    GLOBAL = 296,
    GREATER = 297,
    GREATEREQUAL = 298,
    GRLT = 299,
    IF = 300,
    IMPORT = 301,
    IN = 302,
    INDENT = 303,
    IS = 304,
    LAMBDA = 305,
    LBRACE = 306,
    LEFTSHIFT = 307,
    LEFTSHIFTEQUAL = 308,
    LESS = 309,
    LESSEQUAL = 310,
    LPAR = 311,
    LSQB = 312,
    MINEQUAL = 313,
    MINUS = 314,
    NAME = 315,
    NEWLINE = 316,
    NOT = 317,
    NOTEQUAL = 318,
    NUMBER = 319,
    OR = 320,
    PASS = 321,
    PERCENT = 322,
    PERCENTEQUAL = 323,
    PLUS = 324,
    PLUSEQUAL = 325,
    PRINT = 326,
    RAISE = 327,
    RBRACE = 328,
    RETURN = 329,
    RIGHTSHIFT = 330,
    RIGHTSHIFTEQUAL = 331,
    RPAR = 332,
    RSQB = 333,
    SEMI = 334,
    SLASH = 335,
    SLASHEQUAL = 336,
    STAR = 337,
    STAREQUAL = 338,
    STRING = 339,
    TILDE = 340,
    TRY = 341,
    VBAREQUAL = 342,
    WHILE = 343,
    WITH = 344,
    YIELD = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "includes/parse.y" /* yacc.c:1915  */

  Node* node;
  int intNumber;
  float fltNumber;
  char *id;

#line 152 "parse.tab.h" /* yacc.c:1915  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
