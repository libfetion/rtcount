/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RW_CREATE = 258,
    RW_DROP = 259,
    RW_TABLE = 260,
    RW_INDEX = 261,
    RW_LOAD = 262,
    RW_SET = 263,
    RW_HELP = 264,
    RW_PRINT = 265,
    RW_EXIT = 266,
    RW_SELECT = 267,
    RW_FROM = 268,
    RW_WITH = 269,
    RW_WHERE = 270,
    RW_INSERT = 271,
    RW_DELETE = 272,
    RW_UPDATE = 273,
    RW_AND = 274,
    RW_INTO = 275,
    RW_VALUES = 276,
    T_EQ = 277,
    T_LT = 278,
    T_LE = 279,
    T_GT = 280,
    T_GE = 281,
    T_NE = 282,
    T_EOF = 283,
    NOTOKEN = 284,
    RW_RESET = 285,
    RW_IO = 286,
    RW_BUFFER = 287,
    RW_RESIZE = 288,
    RW_QUERY_PLAN = 289,
    RW_ON = 290,
    RW_OFF = 291,
    T_INT = 292,
    T_REAL = 293,
    T_STRING = 294,
    T_QSTRING = 295,
    T_SHELL_CMD = 296
  };
#endif
/* Tokens.  */
#define RW_CREATE 258
#define RW_DROP 259
#define RW_TABLE 260
#define RW_INDEX 261
#define RW_LOAD 262
#define RW_SET 263
#define RW_HELP 264
#define RW_PRINT 265
#define RW_EXIT 266
#define RW_SELECT 267
#define RW_FROM 268
#define RW_WITH 269
#define RW_WHERE 270
#define RW_INSERT 271
#define RW_DELETE 272
#define RW_UPDATE 273
#define RW_AND 274
#define RW_INTO 275
#define RW_VALUES 276
#define T_EQ 277
#define T_LT 278
#define T_LE 279
#define T_GT 280
#define T_GE 281
#define T_NE 282
#define T_EOF 283
#define NOTOKEN 284
#define RW_RESET 285
#define RW_IO 286
#define RW_BUFFER 287
#define RW_RESIZE 288
#define RW_QUERY_PLAN 289
#define RW_ON 290
#define RW_OFF 291
#define T_INT 292
#define T_REAL 293
#define T_STRING 294
#define T_QSTRING 295
#define T_SHELL_CMD 296

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 43 "parse.y" /* yacc.c:1909  */

    int ival;
    CompOp cval;
    float rval;
    char *sval;
    NODE *n;

#line 144 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
