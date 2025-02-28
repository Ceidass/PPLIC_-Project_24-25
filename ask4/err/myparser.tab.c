/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myparser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcs.h"
#include "mylexer.h"

extern int yylineno;
extern char *yytext;

typedef struct {
    int line;
    char *text;
    char *message;
} SyntaxError;

#define MAX_ERRORS 100
SyntaxError errors[MAX_ERRORS];
int error_count = 0;


#line 93 "myparser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "myparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CLASS = 3,                      /* CLASS  */
  YYSYMBOL_VOID = 4,                       /* VOID  */
  YYSYMBOL_PRINT = 5,                      /* PRINT  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_ELIF = 8,                       /* ELIF  */
  YYSYMBOL_FOR = 9,                        /* FOR  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_SWITCH = 12,                    /* SWITCH  */
  YYSYMBOL_CASE = 13,                      /* CASE  */
  YYSYMBOL_DEFAULT = 14,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 15,                     /* BREAK  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_NEW = 17,                       /* NEW  */
  YYSYMBOL_BTRUE = 18,                     /* BTRUE  */
  YYSYMBOL_BFALSE = 19,                    /* BFALSE  */
  YYSYMBOL_COLON = 20,                     /* COLON  */
  YYSYMBOL_SCOLON = 21,                    /* SCOLON  */
  YYSYMBOL_DOT = 22,                       /* DOT  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_STHAN = 24,                     /* STHAN  */
  YYSYMBOL_BTHAN = 25,                     /* BTHAN  */
  YYSYMBOL_LBRACK = 26,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 27,                    /* RBRACK  */
  YYSYMBOL_LCURL = 28,                     /* LCURL  */
  YYSYMBOL_RCURL = 29,                     /* RCURL  */
  YYSYMBOL_LPAR = 30,                      /* LPAR  */
  YYSYMBOL_RPAR = 31,                      /* RPAR  */
  YYSYMBOL_PLUS = 32,                      /* PLUS  */
  YYSYMBOL_MINUS = 33,                     /* MINUS  */
  YYSYMBOL_MULT = 34,                      /* MULT  */
  YYSYMBOL_DIV = 35,                       /* DIV  */
  YYSYMBOL_ASSIGN = 36,                    /* ASSIGN  */
  YYSYMBOL_ISEQ = 37,                      /* ISEQ  */
  YYSYMBOL_ISNEQ = 38,                     /* ISNEQ  */
  YYSYMBOL_BOOLOR = 39,                    /* BOOLOR  */
  YYSYMBOL_BOOLAND = 40,                   /* BOOLAND  */
  YYSYMBOL_SPACE = 41,                     /* SPACE  */
  YYSYMBOL_NLINE = 42,                     /* NLINE  */
  YYSYMBOL_SQUOTE = 43,                    /* SQUOTE  */
  YYSYMBOL_DQUOTE = 44,                    /* DQUOTE  */
  YYSYMBOL_OLC = 45,                       /* OLC  */
  YYSYMBOL_MLC = 46,                       /* MLC  */
  YYSYMBOL_PRIVATE = 47,                   /* PRIVATE  */
  YYSYMBOL_PUBLIC = 48,                    /* PUBLIC  */
  YYSYMBOL_TYPE_INTEGER = 49,              /* TYPE_INTEGER  */
  YYSYMBOL_TYPE_DOUBLE = 50,               /* TYPE_DOUBLE  */
  YYSYMBOL_TYPE_BOOLEAN = 51,              /* TYPE_BOOLEAN  */
  YYSYMBOL_TYPE_CHAR = 52,                 /* TYPE_CHAR  */
  YYSYMBOL_TYPE_STRING = 53,               /* TYPE_STRING  */
  YYSYMBOL_CLASSID = 54,                   /* CLASSID  */
  YYSYMBOL_METHID = 55,                    /* METHID  */
  YYSYMBOL_VARID = 56,                     /* VARID  */
  YYSYMBOL_INTEGER = 57,                   /* INTEGER  */
  YYSYMBOL_DOUBLE = 58,                    /* DOUBLE  */
  YYSYMBOL_BOOLEAN = 59,                   /* BOOLEAN  */
  YYSYMBOL_CHAR = 60,                      /* CHAR  */
  YYSYMBOL_STRING = 61,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_64_1 = 64,                      /* $@1  */
  YYSYMBOL_class = 65,                     /* class  */
  YYSYMBOL_66_2 = 66,                      /* $@2  */
  YYSYMBOL_class_members = 67,             /* class_members  */
  YYSYMBOL_68_3 = 68,                      /* $@3  */
  YYSYMBOL_class_member = 69,              /* class_member  */
  YYSYMBOL_70_4 = 70,                      /* $@4  */
  YYSYMBOL_variable_declaration = 71,      /* variable_declaration  */
  YYSYMBOL_optional_assignment = 72,       /* optional_assignment  */
  YYSYMBOL_more_declarations = 73,         /* more_declarations  */
  YYSYMBOL_method_declaration = 74,        /* method_declaration  */
  YYSYMBOL_75_5 = 75,                      /* $@5  */
  YYSYMBOL_method_definition = 76,         /* method_definition  */
  YYSYMBOL_modifier = 77,                  /* modifier  */
  YYSYMBOL_vartype = 78,                   /* vartype  */
  YYSYMBOL_method_type = 79,               /* method_type  */
  YYSYMBOL_parameter_list = 80,            /* parameter_list  */
  YYSYMBOL_statements = 81,                /* statements  */
  YYSYMBOL_82_6 = 82,                      /* $@6  */
  YYSYMBOL_statement = 83,                 /* statement  */
  YYSYMBOL_84_7 = 84,                      /* $@7  */
  YYSYMBOL_assignment_statement = 85,      /* assignment_statement  */
  YYSYMBOL_expression = 86,                /* expression  */
  YYSYMBOL_operator = 87,                  /* operator  */
  YYSYMBOL_method_call_statement = 88,     /* method_call_statement  */
  YYSYMBOL_variable_call_statement = 89,   /* variable_call_statement  */
  YYSYMBOL_argument_list = 90,             /* argument_list  */
  YYSYMBOL_object_creation_statement = 91, /* object_creation_statement  */
  YYSYMBOL_loop_statement = 92,            /* loop_statement  */
  YYSYMBOL_do_while_loop = 93,             /* do_while_loop  */
  YYSYMBOL_for_loop = 94,                  /* for_loop  */
  YYSYMBOL_for_body = 95,                  /* for_body  */
  YYSYMBOL_for_exp_1 = 96,                 /* for_exp_1  */
  YYSYMBOL_for_exp_2 = 97,                 /* for_exp_2  */
  YYSYMBOL_prefix_op = 98,                 /* prefix_op  */
  YYSYMBOL_postfix_op = 99,                /* postfix_op  */
  YYSYMBOL_control_statement = 100,        /* control_statement  */
  YYSYMBOL_if_statement = 101,             /* if_statement  */
  YYSYMBOL_elseif_statement = 102,         /* elseif_statement  */
  YYSYMBOL_103_8 = 103,                    /* $@8  */
  YYSYMBOL_else_statement = 104,           /* else_statement  */
  YYSYMBOL_105_9 = 105,                    /* $@9  */
  YYSYMBOL_switch_statement = 106,         /* switch_statement  */
  YYSYMBOL_case_statement = 107,           /* case_statement  */
  YYSYMBOL_108_10 = 108,                   /* $@10  */
  YYSYMBOL_default_statement = 109,        /* default_statement  */
  YYSYMBOL_110_11 = 110,                   /* $@11  */
  YYSYMBOL_print_statement = 111,          /* print_statement  */
  YYSYMBOL_112_12 = 112,                   /* $@12  */
  YYSYMBOL_print_parameters = 113,         /* print_parameters  */
  YYSYMBOL_return_statement = 114,         /* return_statement  */
  YYSYMBOL_break_statement = 115,          /* break_statement  */
  YYSYMBOL_literal = 116,                  /* literal  */
  YYSYMBOL_intliteral = 117,               /* intliteral  */
  YYSYMBOL_doubleliteral = 118,            /* doubleliteral  */
  YYSYMBOL_booliteral = 119,               /* booliteral  */
  YYSYMBOL_charliteral = 120,              /* charliteral  */
  YYSYMBOL_stringliteral = 121,            /* stringliteral  */
  YYSYMBOL_condition = 122,                /* condition  */
  YYSYMBOL_comparison_operator = 123,      /* comparison_operator  */
  YYSYMBOL_logical_operator = 124          /* logical_operator  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   487

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  281

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    55,    55,    56,    57,    57,    60,    61,    61,    64,
      65,    66,    66,    69,    70,    71,    72,    72,    75,    76,
      79,    80,    83,    84,    87,    88,    89,    90,    91,    91,
      94,    97,    98,   101,   102,   103,   104,   105,   106,   109,
     110,   113,   114,   115,   118,   119,   120,   120,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   132,   135,
     136,   139,   140,   141,   142,   143,   144,   145,   148,   149,
     150,   151,   154,   157,   158,   161,   162,   163,   164,   167,
     170,   171,   172,   175,   178,   181,   184,   185,   188,   189,
     190,   193,   194,   195,   196,   199,   200,   201,   202,   205,
     206,   207,   210,   213,   214,   215,   215,   218,   219,   220,
     220,   223,   226,   227,   228,   229,   229,   232,   233,   233,
     236,   237,   237,   240,   241,   242,   245,   246,   249,   252,
     253,   254,   255,   256,   259,   262,   265,   268,   271,   274,
     275,   276,   277,   278,   281,   282,   283,   284,   287,   288
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CLASS", "VOID",
  "PRINT", "IF", "ELSE", "ELIF", "FOR", "DO", "WHILE", "SWITCH", "CASE",
  "DEFAULT", "BREAK", "RETURN", "NEW", "BTRUE", "BFALSE", "COLON",
  "SCOLON", "DOT", "COMMA", "STHAN", "BTHAN", "LBRACK", "RBRACK", "LCURL",
  "RCURL", "LPAR", "RPAR", "PLUS", "MINUS", "MULT", "DIV", "ASSIGN",
  "ISEQ", "ISNEQ", "BOOLOR", "BOOLAND", "SPACE", "NLINE", "SQUOTE",
  "DQUOTE", "OLC", "MLC", "PRIVATE", "PUBLIC", "TYPE_INTEGER",
  "TYPE_DOUBLE", "TYPE_BOOLEAN", "TYPE_CHAR", "TYPE_STRING", "CLASSID",
  "METHID", "VARID", "INTEGER", "DOUBLE", "BOOLEAN", "CHAR", "STRING",
  "$accept", "program", "$@1", "class", "$@2", "class_members", "$@3",
  "class_member", "$@4", "variable_declaration", "optional_assignment",
  "more_declarations", "method_declaration", "$@5", "method_definition",
  "modifier", "vartype", "method_type", "parameter_list", "statements",
  "$@6", "statement", "$@7", "assignment_statement", "expression",
  "operator", "method_call_statement", "variable_call_statement",
  "argument_list", "object_creation_statement", "loop_statement",
  "do_while_loop", "for_loop", "for_body", "for_exp_1", "for_exp_2",
  "prefix_op", "postfix_op", "control_statement", "if_statement",
  "elseif_statement", "$@8", "else_statement", "$@9", "switch_statement",
  "case_statement", "$@10", "default_statement", "$@11", "print_statement",
  "$@12", "print_parameters", "return_statement", "break_statement",
  "literal", "intliteral", "doubleliteral", "booliteral", "charliteral",
  "stringliteral", "condition", "comparison_operator", "logical_operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-129)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-144)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    13,    22,    33,    20,     6,    41,    24,  -129,  -129,
    -129,  -129,    47,   388,     9,  -129,  -129,    22,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,    56,   388,    75,  -129,   178,
      65,    53,   388,    91,   109,  -129,  -129,  -129,    77,    93,
     128,   396,  -129,  -129,  -129,   128,   396,    68,   150,   111,
     155,   150,   165,  -129,    68,   167,   182,  -129,  -129,  -129,
    -129,  -129,   159,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,   124,  -129,   190,   153,  -129,   193,   389,   104,   179,
    -129,  -129,  -129,  -129,    68,   128,   396,   322,   348,  -129,
     141,  -129,  -129,   159,   150,  -129,    -4,   206,   149,   409,
     212,    68,  -129,    46,  -129,  -129,   -13,    61,   217,   218,
     396,    65,  -129,   266,   247,   248,   234,   252,  -129,  -129,
    -129,  -129,  -129,  -129,   253,   256,   270,  -129,   265,  -129,
     221,   268,  -129,   266,   275,   269,     4,    42,   149,   419,
       1,   281,    32,  -129,   284,   378,   435,   159,   273,    68,
    -129,  -129,    77,  -129,  -129,  -129,    68,  -129,  -129,  -129,
    -129,  -129,   141,  -129,  -129,  -129,  -129,  -129,   287,   280,
     381,   194,  -129,  -129,  -129,  -129,    68,   296,  -129,  -129,
     149,   274,   281,  -129,   149,   283,   297,   309,   159,   159,
    -129,   277,  -129,    68,   149,   159,   378,   194,    52,   318,
      10,   282,  -129,   440,   101,   306,    39,   149,  -129,   420,
     321,   317,  -129,  -129,   210,   320,   323,   129,  -129,   103,
     324,  -129,  -129,   138,   339,   341,  -129,   331,  -129,   335,
     236,    62,   158,   334,   347,   336,   349,   353,   346,  -129,
     266,  -129,   356,   149,  -129,   358,  -129,   182,  -129,   182,
    -129,  -129,  -129,  -129,  -129,   378,  -129,    21,  -129,   144,
     362,   378,  -129,   374,    15,   380,  -129,   382,  -129,  -129,
     390,  -129,   378,  -129,   413,   292,   426,  -129,  -129,   210,
    -129
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     4,     0,     0,     0,     0,     0,     0,     1,     3,
       5,     8,     0,     0,    11,    40,    32,    31,    33,    34,
      35,    36,    37,    38,    15,     0,     0,     0,    14,     0,
      39,     0,     0,     0,     0,     6,    10,    13,    39,     0,
      20,    41,    12,    17,    29,    20,    41,     0,    22,     0,
       0,    22,     0,    67,     0,     0,    64,   134,   135,   136,
     137,   138,    21,    63,    62,    61,   129,   130,   131,   132,
     133,     0,    18,    42,     0,    19,     0,     0,     0,     0,
      68,    69,    70,    71,     0,    20,    41,     0,     0,    65,
       0,    73,    74,    66,    22,    43,    46,     0,     0,     0,
       0,     0,   128,     0,    26,    31,     0,     0,     0,     0,
       0,     0,    30,     0,     0,     0,     0,     0,    52,    80,
      81,    53,    99,   100,     0,     0,     0,    27,     0,    67,
      76,     0,    23,     0,     0,     0,     0,    67,     0,     0,
       0,    38,     0,    87,     0,     0,     0,   127,     0,     0,
      48,    24,     0,    45,    49,    50,     0,    51,    54,    55,
      56,    25,     0,    72,    47,    58,   122,   125,   123,     0,
       0,     0,   145,   144,   146,   147,     0,     0,   149,   148,
       0,     0,     0,    86,     0,     0,     0,     0,    59,    60,
      77,     0,   120,     0,     0,   139,     0,   141,     0,     0,
       0,     0,   124,   139,     0,     0,     0,     0,   115,     0,
       0,     0,   140,   142,     0,     0,     0,     0,    88,     0,
       0,    89,    90,     0,     0,     0,   111,     0,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   116,
       0,    79,     0,     0,   109,     0,   102,    91,    93,    92,
      94,    95,    96,    97,    98,     0,    83,     0,   106,     0,
       0,     0,    85,     0,     0,     0,   110,     0,    84,   118,
       0,   113,     0,   108,     0,     0,     0,   119,   117,     0,
     104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,   152,  -129,     5,  -129,    58,  -129,  -129,  -129,    88,
     -32,   -37,  -129,  -129,   376,   117,    48,   447,   -27,  -109,
    -129,  -129,  -129,   -93,   -39,  -129,   -85,   -87,   325,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
     130,  -129,  -129,  -129,  -129,   225,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,   276,  -129,  -129,  -129,  -129,  -129,
    -128,   313,   315
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     5,     4,     6,    25,    32,    26,    33,   108,
      48,    72,    28,    34,   109,   110,   111,    31,    50,   112,
     133,   113,   134,   114,   139,    84,    63,    64,   131,   117,
     118,   119,   120,   263,   144,   220,   221,   222,   121,   122,
     230,   242,   246,   260,   123,   210,   224,   271,   274,   124,
     135,   169,   125,   126,    65,    66,    67,    68,    69,    70,
     140,   176,   180
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     116,   116,   115,   115,   153,   167,   143,     1,    62,    78,
     171,   208,   116,    51,    75,    77,   269,   -57,    24,    52,
      -2,     1,   208,   209,   164,     7,   116,  -121,   115,   270,
     -16,    24,   177,     8,   209,  -112,   185,    24,    -7,  -112,
     178,   179,    -7,   148,  -114,    93,   116,    53,   115,   183,
    -112,   130,   197,    94,     2,   116,   198,   132,   116,    95,
     115,    30,   146,  -143,   147,   168,   204,  -126,     2,    53,
      11,   215,   216,   206,    30,    13,    54,    38,    12,   223,
      30,  -143,  -143,    79,    36,    35,   182,   205,   107,    49,
      42,   178,   179,   182,    49,   217,    37,   149,    54,   170,
      55,    27,    56,    57,    58,    59,    60,    61,    41,   116,
     188,   115,    43,   218,    27,   259,   182,   189,   247,   219,
      27,    40,    55,   130,    56,    57,    58,    59,    60,    61,
      29,   257,   213,    45,    49,   235,   236,   195,    44,   156,
     178,   179,   129,    29,   248,   250,   262,   142,    46,    29,
     137,    79,   267,   116,   203,   115,     9,    10,   152,    90,
      91,   233,   234,   276,    47,   149,   278,    73,   116,   238,
     115,    54,   -75,    71,   116,   265,   115,   178,   179,   138,
      85,    87,    15,   178,   179,   116,    74,   115,   116,    78,
     115,    80,    81,    82,    83,    55,    76,    56,    57,    58,
      59,    60,    61,    55,    79,    56,    57,    58,    59,    60,
      61,   228,   182,    86,   249,  -103,  -103,  -103,   229,  -103,
    -103,    88,  -103,  -103,  -103,  -103,  -103,    18,    19,    20,
      21,    22,    23,   178,   179,    92,   136,   244,   150,  -103,
     145,  -107,  -107,   245,   162,  -107,  -107,   151,  -107,  -107,
    -107,  -107,  -107,    80,    81,    82,    83,  -103,  -103,  -103,
    -103,  -103,  -103,  -103,  -103,  -107,  -103,    96,   154,   155,
     156,    97,    98,   157,   158,    99,   100,   159,   101,   -44,
     -44,   102,   103,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,   160,  -107,    96,   161,   -44,   165,    97,    98,   163,
     166,    99,   100,   181,   101,   184,   -44,   102,   103,   187,
     191,   192,   199,    16,   105,    18,    19,    20,    21,    22,
     106,   -44,   107,    96,   196,   200,   201,    97,    98,   207,
      91,    99,   100,   202,   101,   214,   211,   102,   103,    16,
     105,    18,    19,    20,    21,    22,   106,   227,   107,    96,
     226,   104,   231,    97,    98,   237,   232,    99,   100,   239,
     101,   240,   241,   102,   103,   243,   251,   256,   253,    16,
     105,    18,    19,    20,    21,    22,   106,   127,   107,    96,
     252,   255,   254,    97,    98,   258,   261,    99,   100,    14,
     101,   266,    15,   102,   103,    16,   105,    18,    19,    20,
      21,    22,   106,   268,   107,   172,   173,   -44,   272,   280,
     275,   273,    89,    80,    81,    82,    83,    -9,   174,   175,
      89,    80,    81,    82,    83,    16,   105,    18,    19,    20,
      21,    22,   106,   277,   107,    16,    17,    18,    19,    20,
      21,    22,    23,   172,   173,    18,    19,    20,    21,    22,
      23,    80,    81,    82,    83,   279,   174,   175,    18,    19,
      20,    21,    22,   141,   128,   107,   186,    80,    81,    82,
      83,   212,    80,    81,    82,    83,    39,    57,    58,    59,
      60,    61,   264,   193,     0,   225,   194,   190
};

static const yytype_int16 yycheck[] =
{
      87,    88,    87,    88,   113,     1,    99,     1,    47,    22,
     138,     1,    99,    45,    51,    54,     1,    21,    13,    46,
       0,     1,     1,    13,   133,     3,   113,    31,   113,    14,
      21,    26,    31,     0,    13,    14,   145,    32,    29,    29,
      39,    40,    29,    56,    29,    84,   133,     1,   133,   142,
      29,    90,   180,    85,    48,   142,   184,    94,   145,    86,
     145,    13,   101,    21,   103,    61,   194,    21,    48,     1,
      29,    32,    33,    21,    26,    28,    30,    29,    54,   207,
      32,    39,    40,    22,    26,    29,    54,   196,    56,    41,
      32,    39,    40,    54,    46,    56,    21,    36,    30,   138,
      54,    13,    56,    57,    58,    59,    60,    61,    55,   196,
     149,   196,    21,   206,    26,   243,    54,   156,    56,   206,
      32,    56,    54,   162,    56,    57,    58,    59,    60,    61,
      13,   240,    31,    56,    86,    32,    33,   176,    29,    36,
      39,    40,     1,    26,   231,   232,   255,    99,    55,    32,
       1,    22,   261,   240,   193,   240,     4,     5,   110,    55,
      56,    32,    33,   272,    36,    36,   275,    56,   255,    31,
     255,    30,    31,    23,   261,    31,   261,    39,    40,    30,
      56,    28,     4,    39,    40,   272,    31,   272,   275,    22,
     275,    32,    33,    34,    35,    54,    31,    56,    57,    58,
      59,    60,    61,    54,    22,    56,    57,    58,    59,    60,
      61,     1,    54,    23,    56,     5,     6,     7,     8,     9,
      10,    28,    12,    13,    14,    15,    16,    49,    50,    51,
      52,    53,    54,    39,    40,    56,    30,     1,    21,    29,
      28,     5,     6,     7,    23,     9,    10,    29,    12,    13,
      14,    15,    16,    32,    33,    34,    35,    47,    48,    49,
      50,    51,    52,    53,    54,    29,    56,     1,    21,    21,
      36,     5,     6,    21,    21,     9,    10,    21,    12,    13,
      14,    15,    16,    47,    48,    49,    50,    51,    52,    53,
      54,    21,    56,     1,    29,    29,    21,     5,     6,    31,
      31,     9,    10,    22,    12,    21,    14,    15,    16,    36,
      23,    31,    29,    47,    48,    49,    50,    51,    52,    53,
      54,    29,    56,     1,    28,    28,    17,     5,     6,    11,
      56,     9,    10,    56,    12,    29,    54,    15,    16,    47,
      48,    49,    50,    51,    52,    53,    54,    30,    56,     1,
      29,    29,    32,     5,     6,    31,    33,     9,    10,    20,
      12,    20,    31,    15,    16,    30,    32,    21,    32,    47,
      48,    49,    50,    51,    52,    53,    54,    29,    56,     1,
      33,    28,    33,     5,     6,    29,    28,     9,    10,     1,
      12,    29,     4,    15,    16,    47,    48,    49,    50,    51,
      52,    53,    54,    29,    56,    24,    25,    29,    28,   279,
      20,    29,    31,    32,    33,    34,    35,    29,    37,    38,
      31,    32,    33,    34,    35,    47,    48,    49,    50,    51,
      52,    53,    54,    20,    56,    47,    48,    49,    50,    51,
      52,    53,    54,    24,    25,    49,    50,    51,    52,    53,
      54,    32,    33,    34,    35,    29,    37,    38,    49,    50,
      51,    52,    53,    54,    88,    56,    31,    32,    33,    34,
      35,    31,    32,    33,    34,    35,    29,    57,    58,    59,
      60,    61,   257,   170,    -1,   209,   171,   162
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    48,    63,    65,    64,    66,     3,     0,    63,
      63,    29,    54,    28,     1,     4,    47,    48,    49,    50,
      51,    52,    53,    54,    65,    67,    69,    71,    74,    77,
      78,    79,    68,    70,    75,    29,    67,    21,    78,    79,
      56,    55,    67,    21,    29,    56,    55,    36,    72,    78,
      80,    72,    80,     1,    30,    54,    56,    57,    58,    59,
      60,    61,    86,    88,    89,   116,   117,   118,   119,   120,
     121,    23,    73,    56,    31,    73,    31,    86,    22,    22,
      32,    33,    34,    35,    87,    56,    23,    28,    28,    31,
      55,    56,    56,    86,    72,    80,     1,     5,     6,     9,
      10,    12,    15,    16,    29,    48,    54,    56,    71,    76,
      77,    78,    81,    83,    85,    88,    89,    91,    92,    93,
      94,   100,   101,   106,   111,   114,   115,    29,    76,     1,
      86,    90,    73,    82,    84,   112,    30,     1,    30,    86,
     122,    54,    78,    85,    96,    28,    86,    86,    56,    36,
      21,    29,    78,    81,    21,    21,    36,    21,    21,    21,
      21,    29,    23,    31,    81,    21,    31,     1,    61,   113,
      86,   122,    24,    25,    37,    38,   123,    31,    39,    40,
     124,    22,    54,    85,    21,    81,    31,    36,    86,    86,
      90,    23,    31,   123,   124,    86,    28,   122,   122,    29,
      28,    17,    56,    86,   122,    81,    21,    11,     1,    13,
     107,    54,    31,    31,    29,    32,    33,    56,    85,    89,
      97,    98,    99,   122,   108,   116,    29,    30,     1,     8,
     102,    32,    33,    32,    33,    32,    33,    31,    31,    20,
      20,    31,   103,    30,     1,     7,   104,    56,    89,    56,
      89,    32,    33,    32,    33,    28,    21,    81,    29,   122,
     105,    28,    81,    95,   107,    31,    29,    81,    29,     1,
      14,   109,    28,    29,   110,    20,    81,    20,    81,    29,
     102
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    64,    63,    65,    66,    65,    67,
      67,    68,    67,    69,    69,    69,    70,    69,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    74,    75,    74,
      76,    77,    77,    78,    78,    78,    78,    78,    78,    79,
      79,    80,    80,    80,    81,    81,    82,    81,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    83,    85,
      85,    86,    86,    86,    86,    86,    86,    86,    87,    87,
      87,    87,    88,    89,    89,    90,    90,    90,    90,    91,
      92,    92,    92,    93,    94,    95,    96,    96,    97,    97,
      97,    98,    98,    98,    98,    99,    99,    99,    99,   100,
     100,   100,   101,   102,   102,   103,   102,   104,   104,   105,
     104,   106,   107,   107,   107,   108,   107,   109,   110,   109,
     111,   112,   111,   113,   113,   113,   114,   114,   115,   116,
     116,   116,   116,   116,   117,   118,   119,   120,   121,   122,
     122,   122,   122,   122,   123,   123,   123,   123,   124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     6,     0,     3,     0,
       2,     0,     3,     2,     1,     1,     0,     3,     4,     5,
       0,     2,     0,     4,     7,     8,     6,     7,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     4,     0,     2,     0,     3,     2,     2,
       2,     2,     1,     1,     2,     2,     2,     0,     3,     3,
       3,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     5,     3,     3,     0,     1,     3,     1,     7,
       1,     1,     1,     8,    10,     1,     2,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     8,     0,     8,     0,     3,     0,     4,     0,
       3,     6,     0,     6,     5,     0,     3,     3,     0,     3,
       4,     0,     3,     1,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       5,     3,     5,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      yyerror_range[1] = yylloc;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4: /* $@1: %empty  */
#line 57 "myparser.y"
               { yyerror("Syntax error in program"); yyerrok; }
#line 1567 "myparser.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 61 "myparser.y"
             { yyerror("Syntax error in class declaration"); yyerrok; }
#line 1573 "myparser.tab.c"
    break;

  case 11: /* $@3: %empty  */
#line 66 "myparser.y"
                     { yyerror("Syntax error in class members"); yyerrok; }
#line 1579 "myparser.tab.c"
    break;

  case 16: /* $@4: %empty  */
#line 72 "myparser.y"
                    { yyerror("Syntax error in class member"); yyerrok; }
#line 1585 "myparser.tab.c"
    break;

  case 28: /* $@5: %empty  */
#line 91 "myparser.y"
                          { yyerror("Syntax error in method declaration"); yyerrok; }
#line 1591 "myparser.tab.c"
    break;

  case 46: /* $@6: %empty  */
#line 120 "myparser.y"
                  { yyerror("Syntax error in statements"); yyerrok; }
#line 1597 "myparser.tab.c"
    break;

  case 57: /* $@7: %empty  */
#line 132 "myparser.y"
                 { yyerror("Syntax error in statement"); yyerrok; }
#line 1603 "myparser.tab.c"
    break;

  case 67: /* expression: error  */
#line 145 "myparser.y"
                  { yyerror("Syntax error in expression"); yyerrok; }
#line 1609 "myparser.tab.c"
    break;

  case 78: /* argument_list: error  */
#line 164 "myparser.y"
                      { yyerror("Syntax error in argument list"); yyerrok; }
#line 1615 "myparser.tab.c"
    break;

  case 82: /* loop_statement: error  */
#line 172 "myparser.y"
                      { yyerror("Syntax error in loop statement"); yyerrok; }
#line 1621 "myparser.tab.c"
    break;

  case 101: /* control_statement: error  */
#line 207 "myparser.y"
                         { yyerror("Syntax error in control statement"); yyerrok; }
#line 1627 "myparser.tab.c"
    break;

  case 105: /* $@8: %empty  */
#line 215 "myparser.y"
                        { yyerror("Syntax error in elseif statement"); yyerrok; }
#line 1633 "myparser.tab.c"
    break;

  case 109: /* $@9: %empty  */
#line 220 "myparser.y"
                      { yyerror("Syntax error in else statement"); yyerrok; }
#line 1639 "myparser.tab.c"
    break;

  case 115: /* $@10: %empty  */
#line 229 "myparser.y"
                      { yyerror("Syntax error in case statement"); yyerrok; }
#line 1645 "myparser.tab.c"
    break;

  case 118: /* $@11: %empty  */
#line 233 "myparser.y"
                         { yyerror("Syntax error in default statement"); yyerrok; }
#line 1651 "myparser.tab.c"
    break;

  case 121: /* $@12: %empty  */
#line 237 "myparser.y"
                       { yyerror("Syntax error in print statement"); yyerrok; }
#line 1657 "myparser.tab.c"
    break;

  case 125: /* print_parameters: error  */
#line 242 "myparser.y"
                        { yyerror("Syntax error in print parameters"); yyerrok; }
#line 1663 "myparser.tab.c"
    break;

  case 134: /* intliteral: INTEGER  */
#line 259 "myparser.y"
                    { (yyval.intval) = (yyvsp[0].intval); printf("Parsed integer: %d\n", (yyvsp[0].intval)); }
#line 1669 "myparser.tab.c"
    break;

  case 135: /* doubleliteral: DOUBLE  */
#line 262 "myparser.y"
                      { (yyval.doubleval) = (yyvsp[0].doubleval); printf("Parsed double: %f\n", (yyvsp[0].doubleval)); }
#line 1675 "myparser.tab.c"
    break;

  case 136: /* booliteral: BOOLEAN  */
#line 265 "myparser.y"
                    { (yyval.boolval) = (yyvsp[0].boolval); printf("Parsed boolean: %s\n", (yyvsp[0].boolval)); }
#line 1681 "myparser.tab.c"
    break;

  case 137: /* charliteral: CHAR  */
#line 268 "myparser.y"
                  { (yyval.charval) = (yyvsp[0].charval); printf("Parsed character: %c\n", (yyvsp[0].charval)); }
#line 1687 "myparser.tab.c"
    break;

  case 138: /* stringliteral: STRING  */
#line 271 "myparser.y"
                      { (yyval.stringval) = (yyvsp[0].stringval); printf("Parsed String: %s\n", (yyvsp[0].stringval)); }
#line 1693 "myparser.tab.c"
    break;

  case 143: /* condition: error  */
#line 278 "myparser.y"
                 { yyerror("Syntax error in condition"); yyerrok; }
#line 1699 "myparser.tab.c"
    break;


#line 1703 "myparser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 291 "myparser.y"





int main(int argc, char **argv){
    int parse_result;

    if (argc > 1) {
        if (argc == 2 && isFile(argv[1])) {
            yyin = fopen(argv[1], "r");
            parse_result = yyparse(); //Returns 0 in success

            if (parse_result == 0) {
                printf("Parsing completed successfully.\n");
            } else {
                printf("Parsing failed.\n");
            }
            fclose(yyin); //Close the file after parsing it
        } else {
            printf("Not a file\n");
            exit(EXIT_FAILURE);
        }
    }

    print_errors();

    // Free allocated memory for error messages
    for (int i = 0; i < error_count; i++) {
        free(errors[i].text);
        free(errors[i].message);
    }

    return 0;
}

int yylex(void);
