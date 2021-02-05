/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Void = 258,                    /* Void  */
    Int = 259,                     /* Int  */
    Double = 260,                  /* Double  */
    Bool = 261,                    /* Bool  */
    String = 262,                  /* String  */
    Class = 263,                   /* Class  */
    Interface = 264,               /* Interface  */
    Null = 265,                    /* Null  */
    This = 266,                    /* This  */
    Extends = 267,                 /* Extends  */
    Implements = 268,              /* Implements  */
    For = 269,                     /* For  */
    While = 270,                   /* While  */
    If = 271,                      /* If  */
    Else = 272,                    /* Else  */
    Return = 273,                  /* Return  */
    Break = 274,                   /* Break  */
    Continue = 275,                /* Continue  */
    New = 276,                     /* New  */
    NewArray = 277,                /* NewArray  */
    Print = 278,                   /* Print  */
    ReadInteger = 279,             /* ReadInteger  */
    ReadLine = 280,                /* ReadLine  */
    Dtoi = 281,                    /* Dtoi  */
    Itod = 282,                    /* Itod  */
    Btoi = 283,                    /* Btoi  */
    Itob = 284,                    /* Itob  */
    Private = 285,                 /* Private  */
    Protected = 286,               /* Protected  */
    Public = 287,                  /* Public  */
    Add = 288,                     /* Add  */
    Sub = 289,                     /* Sub  */
    Mult = 290,                    /* Mult  */
    Div = 291,                     /* Div  */
    Perc = 292,                    /* Perc  */
    Lt = 293,                      /* Lt  */
    Le = 294,                      /* Le  */
    Gt = 295,                      /* Gt  */
    Ge = 296,                      /* Ge  */
    Assign = 297,                  /* Assign  */
    Eq = 298,                      /* Eq  */
    Neq = 299,                     /* Neq  */
    Or = 300,                      /* Or  */
    And = 301,                     /* And  */
    Not = 302,                     /* Not  */
    Semicolon = 303,               /* Semicolon  */
    Comma = 304,                   /* Comma  */
    Dot = 305,                     /* Dot  */
    Obrac = 306,                   /* Obrac  */
    Cbrac = 307,                   /* Cbrac  */
    Opar = 308,                    /* Opar  */
    Cpar = 309,                    /* Cpar  */
    Ocurl = 310,                   /* Ocurl  */
    Ccurl = 311,                   /* Ccurl  */
    IntConst = 312,                /* IntConst  */
    DoubleConst = 313,             /* DoubleConst  */
    StringConst = 314,             /* StringConst  */
    BoolConst = 315,               /* BoolConst  */
    Ident = 316,                   /* Ident  */
    Usub = 317                     /* Usub  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "parser.y"
char id;

#line 129 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
