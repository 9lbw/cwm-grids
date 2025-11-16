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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    BINDKEY = 258,                 /* BINDKEY  */
    UNBINDKEY = 259,               /* UNBINDKEY  */
    BINDMOUSE = 260,               /* BINDMOUSE  */
    UNBINDMOUSE = 261,             /* UNBINDMOUSE  */
    FONTNAME = 262,                /* FONTNAME  */
    STICKY = 263,                  /* STICKY  */
    GAP = 264,                     /* GAP  */
    AUTOGROUP = 265,               /* AUTOGROUP  */
    COMMAND = 266,                 /* COMMAND  */
    IGNORE = 267,                  /* IGNORE  */
    WM = 268,                      /* WM  */
    YES = 269,                     /* YES  */
    NO = 270,                      /* NO  */
    BORDERWIDTH = 271,             /* BORDERWIDTH  */
    MOVEAMOUNT = 272,              /* MOVEAMOUNT  */
    HTILE = 273,                   /* HTILE  */
    VTILE = 274,                   /* VTILE  */
    COLOR = 275,                   /* COLOR  */
    SNAPDIST = 276,                /* SNAPDIST  */
    GRIDSIZE = 277,                /* GRIDSIZE  */
    GRIDSNAP = 278,                /* GRIDSNAP  */
    ACTIVEBORDER = 279,            /* ACTIVEBORDER  */
    INACTIVEBORDER = 280,          /* INACTIVEBORDER  */
    URGENCYBORDER = 281,           /* URGENCYBORDER  */
    GROUPBORDER = 282,             /* GROUPBORDER  */
    UNGROUPBORDER = 283,           /* UNGROUPBORDER  */
    MENUBG = 284,                  /* MENUBG  */
    MENUFG = 285,                  /* MENUFG  */
    FONTCOLOR = 286,               /* FONTCOLOR  */
    FONTSELCOLOR = 287,            /* FONTSELCOLOR  */
    ERROR = 288,                   /* ERROR  */
    STRING = 289,                  /* STRING  */
    NUMBER = 290                   /* NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define BINDKEY 258
#define UNBINDKEY 259
#define BINDMOUSE 260
#define UNBINDMOUSE 261
#define FONTNAME 262
#define STICKY 263
#define GAP 264
#define AUTOGROUP 265
#define COMMAND 266
#define IGNORE 267
#define WM 268
#define YES 269
#define NO 270
#define BORDERWIDTH 271
#define MOVEAMOUNT 272
#define HTILE 273
#define VTILE 274
#define COLOR 275
#define SNAPDIST 276
#define GRIDSIZE 277
#define GRIDSNAP 278
#define ACTIVEBORDER 279
#define INACTIVEBORDER 280
#define URGENCYBORDER 281
#define GROUPBORDER 282
#define UNGROUPBORDER 283
#define MENUBG 284
#define MENUFG 285
#define FONTCOLOR 286
#define FONTSELCOLOR 287
#define ERROR 288
#define STRING 289
#define NUMBER 290

/* Value type.  */


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
