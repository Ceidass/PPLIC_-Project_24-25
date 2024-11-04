/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_MYPARSER_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TAB_H_INCLUDED
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
    CLASS = 258,                   /* CLASS  */
    VOID = 259,                    /* VOID  */
    PRINT = 260,                   /* PRINT  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    ELIF = 263,                    /* ELIF  */
    FOR = 264,                     /* FOR  */
    DO = 265,                      /* DO  */
    WHILE = 266,                   /* WHILE  */
    SWITCH = 267,                  /* SWITCH  */
    CASE = 268,                    /* CASE  */
    DEFAULT = 269,                 /* DEFAULT  */
    BREAK = 270,                   /* BREAK  */
    RETURN = 271,                  /* RETURN  */
    NEW = 272,                     /* NEW  */
    BTRUE = 273,                   /* BTRUE  */
    BFALSE = 274,                  /* BFALSE  */
    COLON = 275,                   /* COLON  */
    SCOLON = 276,                  /* SCOLON  */
    DOT = 277,                     /* DOT  */
    COMMA = 278,                   /* COMMA  */
    STHAN = 279,                   /* STHAN  */
    BTHAN = 280,                   /* BTHAN  */
    LBRACK = 281,                  /* LBRACK  */
    RBRACK = 282,                  /* RBRACK  */
    LCURL = 283,                   /* LCURL  */
    RCURL = 284,                   /* RCURL  */
    LPAR = 285,                    /* LPAR  */
    RPAR = 286,                    /* RPAR  */
    PLUS = 287,                    /* PLUS  */
    MINUS = 288,                   /* MINUS  */
    MULT = 289,                    /* MULT  */
    DIV = 290,                     /* DIV  */
    ASSIGN = 291,                  /* ASSIGN  */
    ISEQ = 292,                    /* ISEQ  */
    ISNEQ = 293,                   /* ISNEQ  */
    BOOLOR = 294,                  /* BOOLOR  */
    BOOLAND = 295,                 /* BOOLAND  */
    SPACE = 296,                   /* SPACE  */
    NLINE = 297,                   /* NLINE  */
    SQUOTE = 298,                  /* SQUOTE  */
    DQUOTE = 299,                  /* DQUOTE  */
    OLC = 300,                     /* OLC  */
    MLC = 301,                     /* MLC  */
    PRIVATE = 302,                 /* PRIVATE  */
    PUBLIC = 303,                  /* PUBLIC  */
    TYPE_INTEGER = 304,            /* TYPE_INTEGER  */
    TYPE_DOUBLE = 305,             /* TYPE_DOUBLE  */
    TYPE_BOOLEAN = 306,            /* TYPE_BOOLEAN  */
    TYPE_CHAR = 307,               /* TYPE_CHAR  */
    TYPE_STRING = 308,             /* TYPE_STRING  */
    CLASSID = 309,                 /* CLASSID  */
    METHID = 310,                  /* METHID  */
    VARID = 311,                   /* VARID  */
    INTEGER = 312,                 /* INTEGER  */
    DOUBLE = 313,                  /* DOUBLE  */
    BOOLEAN = 314,                 /* BOOLEAN  */
    CHAR = 315,                    /* CHAR  */
    STRING = 316                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "myparser.y"

    int intval;
    double doubleval;
    char* boolval;
    char charval;
    char* stringval;

#line 133 "myparser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;

int yyparse (void);


#endif /* !YY_YY_MYPARSER_TAB_H_INCLUDED  */
