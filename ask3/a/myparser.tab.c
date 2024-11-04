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
#include "funcs.h"
#include "mylexer.h"

#line 78 "myparser.tab.c"

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
  YYSYMBOL_class = 64,                     /* class  */
  YYSYMBOL_class_members = 65,             /* class_members  */
  YYSYMBOL_class_member = 66,              /* class_member  */
  YYSYMBOL_variable_declaration = 67,      /* variable_declaration  */
  YYSYMBOL_optional_assignment = 68,       /* optional_assignment  */
  YYSYMBOL_more_declarations = 69,         /* more_declarations  */
  YYSYMBOL_method_declaration = 70,        /* method_declaration  */
  YYSYMBOL_method_definition = 71,         /* method_definition  */
  YYSYMBOL_modifier = 72,                  /* modifier  */
  YYSYMBOL_vartype = 73,                   /* vartype  */
  YYSYMBOL_method_type = 74,               /* method_type  */
  YYSYMBOL_parameter_list = 75,            /* parameter_list  */
  YYSYMBOL_statements = 76,                /* statements  */
  YYSYMBOL_statement = 77,                 /* statement  */
  YYSYMBOL_assignment_statement = 78,      /* assignment_statement  */
  YYSYMBOL_expression = 79,                /* expression  */
  YYSYMBOL_operator = 80,                  /* operator  */
  YYSYMBOL_method_call_statement = 81,     /* method_call_statement  */
  YYSYMBOL_variable_call_statement = 82,   /* variable_call_statement  */
  YYSYMBOL_argument_list = 83,             /* argument_list  */
  YYSYMBOL_object_creation_statement = 84, /* object_creation_statement  */
  YYSYMBOL_loop_statement = 85,            /* loop_statement  */
  YYSYMBOL_do_while_loop = 86,             /* do_while_loop  */
  YYSYMBOL_for_loop = 87,                  /* for_loop  */
  YYSYMBOL_for_body = 88,                  /* for_body  */
  YYSYMBOL_for_exp_1 = 89,                 /* for_exp_1  */
  YYSYMBOL_for_exp_2 = 90,                 /* for_exp_2  */
  YYSYMBOL_prefix_op = 91,                 /* prefix_op  */
  YYSYMBOL_postfix_op = 92,                /* postfix_op  */
  YYSYMBOL_control_statement = 93,         /* control_statement  */
  YYSYMBOL_if_statement = 94,              /* if_statement  */
  YYSYMBOL_elseif_statement = 95,          /* elseif_statement  */
  YYSYMBOL_else_statement = 96,            /* else_statement  */
  YYSYMBOL_switch_statement = 97,          /* switch_statement  */
  YYSYMBOL_case_statement = 98,            /* case_statement  */
  YYSYMBOL_default_statement = 99,         /* default_statement  */
  YYSYMBOL_print_statement = 100,          /* print_statement  */
  YYSYMBOL_print_parameters = 101,         /* print_parameters  */
  YYSYMBOL_return_statement = 102,         /* return_statement  */
  YYSYMBOL_break_statement = 103,          /* break_statement  */
  YYSYMBOL_literal = 104,                  /* literal  */
  YYSYMBOL_intliteral = 105,               /* intliteral  */
  YYSYMBOL_doubleliteral = 106,            /* doubleliteral  */
  YYSYMBOL_booliteral = 107,               /* booliteral  */
  YYSYMBOL_charliteral = 108,              /* charliteral  */
  YYSYMBOL_stringliteral = 109,            /* stringliteral  */
  YYSYMBOL_condition = 110,                /* condition  */
  YYSYMBOL_comparison_operator = 111,      /* comparison_operator  */
  YYSYMBOL_logical_operator = 112          /* logical_operator  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

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
       0,    42,    42,    42,    45,    48,    49,    52,    53,    54,
      57,    58,    61,    62,    65,    66,    69,    70,    71,    72,
      75,    78,    79,    82,    83,    84,    85,    86,    87,    90,
      91,    94,    95,    96,    99,   100,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   114,   115,   118,   119,   120,
     121,   122,   123,   126,   127,   128,   129,   132,   135,   136,
     139,   140,   141,   144,   147,   148,   151,   154,   157,   160,
     161,   164,   165,   166,   169,   170,   171,   172,   175,   176,
     177,   178,   181,   182,   185,   188,   189,   192,   193,   196,
     199,   200,   201,   204,   207,   210,   211,   214,   215,   218,
     221,   222,   223,   224,   225,   228,   231,   234,   237,   240,
     243,   244,   245,   246,   250,   251,   252,   253,   256,   256
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
  "$accept", "program", "class", "class_members", "class_member",
  "variable_declaration", "optional_assignment", "more_declarations",
  "method_declaration", "method_definition", "modifier", "vartype",
  "method_type", "parameter_list", "statements", "statement",
  "assignment_statement", "expression", "operator",
  "method_call_statement", "variable_call_statement", "argument_list",
  "object_creation_statement", "loop_statement", "do_while_loop",
  "for_loop", "for_body", "for_exp_1", "for_exp_2", "prefix_op",
  "postfix_op", "control_statement", "if_statement", "elseif_statement",
  "else_statement", "switch_statement", "case_statement",
  "default_statement", "print_statement", "print_parameters",
  "return_statement", "break_statement", "literal", "intliteral",
  "doubleliteral", "booliteral", "charliteral", "stringliteral",
  "condition", "comparison_operator", "logical_operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-115)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,    23,    48,   -32,   -17,  -115,  -115,    43,    25,  -115,
    -115,    23,  -115,  -115,  -115,  -115,  -115,  -115,  -115,    67,
      25,    76,  -115,    14,    42,    51,  -115,  -115,  -115,    55,
      57,    77,   215,    77,   215,    29,    94,    63,    98,    94,
      99,    29,   114,   136,  -115,  -115,  -115,  -115,  -115,   258,
    -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,   101,  -115,
     131,   138,  -115,   141,   239,   -34,   104,  -115,  -115,  -115,
    -115,    29,    77,   215,   135,   187,  -115,    29,  -115,  -115,
     258,    94,  -115,   144,   119,   207,   153,    29,  -115,    29,
    -115,  -115,     5,   -12,   169,   165,   215,    42,  -115,   199,
     174,   179,   181,   180,  -115,  -115,  -115,  -115,  -115,  -115,
     189,   198,   210,  -115,   213,   195,   214,  -115,   183,   119,
     188,   122,   232,   -39,  -115,   241,   199,   244,   258,   259,
      29,  -115,  -115,    55,  -115,  -115,  -115,    29,  -115,  -115,
    -115,  -115,  -115,    29,  -115,   271,   265,    90,    -8,  -115,
    -115,  -115,  -115,    29,   269,  -115,  -115,   119,   242,   232,
    -115,   119,   270,   272,   284,   258,   258,  -115,   246,  -115,
      29,   119,   258,   199,    -8,    -1,   292,   291,   251,  -115,
     249,   132,   277,   -20,   119,   228,   278,   279,  -115,  -115,
     300,   280,   281,    72,  -115,   102,   282,  -115,  -115,   167,
     290,  -115,   285,   287,   304,    28,    37,   283,   286,   288,
     289,   293,   297,   199,  -115,   119,   295,  -115,   136,  -115,
     136,  -115,  -115,  -115,  -115,  -115,   199,  -115,   291,   193,
     199,  -115,   296,   310,   298,   299,  -115,   307,  -115,   199,
    -115,   199,   301,  -115,   300,  -115
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     3,     0,     5,    30,
      22,    21,    23,    24,    25,    26,    27,    28,     9,     0,
       5,     0,     8,     0,    29,     0,     4,     6,     7,    29,
       0,    12,    31,    12,    31,     0,    14,     0,     0,    14,
       0,     0,     0,    50,   105,   106,   107,   108,   109,    13,
      49,    48,    47,   100,   101,   102,   103,   104,     0,    10,
      32,     0,    11,     0,     0,     0,     0,    53,    54,    55,
      56,     0,    12,    31,     0,     0,    51,    60,    58,    59,
      52,    14,    33,     0,     0,     0,     0,     0,    99,    97,
      18,    21,     0,     0,     0,     0,     0,     0,    20,    34,
       0,     0,     0,     0,    40,    64,    65,    41,    82,    83,
       0,     0,     0,    19,     0,    61,     0,    15,     0,     0,
       0,     0,    28,     0,    70,     0,    34,     0,    98,     0,
       0,    36,    16,     0,    35,    37,    38,     0,    39,    42,
      43,    44,    17,    60,    57,    95,     0,     0,     0,   115,
     114,   116,   117,     0,     0,   119,   118,     0,     0,     0,
      69,     0,     0,     0,     0,    45,    46,    62,     0,    94,
       0,     0,   110,    34,   112,     0,     0,    90,     0,    96,
     110,     0,     0,     0,     0,     0,     0,     0,   111,   113,
      85,     0,     0,     0,    71,     0,     0,    72,    73,     0,
       0,    89,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    63,     0,     0,    84,    74,    76,
      75,    77,    78,    79,    80,    81,    34,    66,    90,     0,
      34,    68,     0,    92,     0,     0,    67,     0,    91,    34,
      88,    34,     0,    93,    85,    86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,   326,    15,   311,  -115,    33,   -26,   -30,  -115,   257,
      61,    22,   312,   -15,   -93,  -115,   -83,   -27,  -115,   -71,
     -74,   190,  -115,  -115,  -115,  -115,  -115,  -115,  -115,  -115,
    -115,  -115,  -115,    92,  -115,  -115,   106,  -115,  -115,  -115,
    -115,  -115,   152,  -115,  -115,  -115,  -115,  -115,  -114,   191,
     192
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    19,    20,    94,    36,    59,    22,    95,
      96,    97,    25,    38,    98,    99,   100,   120,    71,    50,
      51,   116,   103,   104,   105,   106,   232,   125,   196,   197,
     198,   107,   108,   204,   217,   109,   186,   238,   110,   146,
     111,   112,    52,    53,    54,    55,    56,    57,   121,   153,
     157
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     102,   102,   124,   101,   101,   148,   134,    39,    49,    62,
      66,   102,   191,   192,    64,   159,     1,    93,     9,    40,
     183,    77,    78,    18,   130,   102,     4,    65,   101,     9,
      24,   155,   156,   162,   159,    18,   193,     7,   155,   156,
     160,    21,    24,   174,    80,    29,    81,   175,     5,   102,
     115,   117,   102,    21,    37,   101,    37,   181,    82,    41,
     127,   129,   128,    12,    13,    14,    15,    16,    17,    23,
     199,     8,    10,    11,    12,    13,    14,    15,    16,    17,
     182,    23,   159,    42,   218,    43,    44,    45,    46,    47,
      48,   159,   147,   220,    66,    37,    26,    28,    31,   102,
     194,   229,   101,   165,   207,   208,    32,   123,   130,   195,
     166,    33,    34,    35,   149,   150,   115,    58,   133,    60,
     228,    76,    67,    68,    69,    70,   172,   151,   152,    61,
      63,   219,   221,   231,   209,   210,    65,   235,   137,   102,
      83,    84,   101,   180,    85,    86,   242,    87,   243,   119,
      88,    89,   102,   154,    73,   101,   102,    72,    66,   101,
      79,   155,   156,   189,    90,   102,    74,   102,   101,    75,
     101,   155,   156,    42,   118,    43,    44,    45,    46,    47,
      48,   126,    10,    91,    12,    13,    14,    15,    16,    92,
     131,    93,    83,    84,   132,   135,    85,    86,   212,    87,
     136,   138,    88,    89,    83,    84,   155,   156,    85,    86,
     139,    87,   149,   150,    88,    89,   113,   137,   143,   140,
      67,    68,    69,    70,   234,   151,   152,    67,    68,    69,
      70,   141,   155,   156,    10,    91,    12,    13,    14,    15,
      16,    92,   142,    93,   145,   144,    10,    91,    12,    13,
      14,    15,    16,    92,   158,    93,    12,    13,    14,    15,
      16,   122,   161,    93,    12,    13,    14,    15,    16,    17,
      76,    67,    68,    69,    70,   163,    67,    68,    69,    70,
     188,    67,    68,    69,    70,    44,    45,    46,    47,    48,
      67,    68,    69,    70,   168,   164,   169,   173,    78,   176,
     177,   178,   179,   184,   185,   187,   190,   201,   203,   202,
     213,   216,   205,   211,   206,   222,   214,   215,   227,   223,
     224,   226,   225,   230,   237,   236,   239,   241,   240,     6,
     244,    27,   114,   167,   233,    30,   245,   200,   170,     0,
     171
};

static const yytype_int16 yycheck[] =
{
      74,    75,    85,    74,    75,   119,    99,    33,    35,    39,
      22,    85,    32,    33,    41,    54,    48,    56,     4,    34,
      21,    55,    56,     8,    36,    99,     3,    22,    99,     4,
       8,    39,    40,   126,    54,    20,    56,    54,    39,    40,
     123,     8,    20,   157,    71,    23,    72,   161,     0,   123,
      77,    81,   126,    20,    32,   126,    34,   171,    73,    30,
      87,    56,    89,    49,    50,    51,    52,    53,    54,     8,
     184,    28,    47,    48,    49,    50,    51,    52,    53,    54,
     173,    20,    54,    54,    56,    56,    57,    58,    59,    60,
      61,    54,   119,    56,    22,    73,    29,    21,    56,   173,
     183,   215,   173,   130,    32,    33,    55,    85,    36,   183,
     137,    56,    55,    36,    24,    25,   143,    23,    96,    56,
     213,    31,    32,    33,    34,    35,   153,    37,    38,    31,
      31,   205,   206,   226,    32,    33,    22,   230,    36,   213,
       5,     6,   213,   170,     9,    10,   239,    12,   241,    30,
      15,    16,   226,    31,    23,   226,   230,    56,    22,   230,
      56,    39,    40,    31,    29,   239,    28,   241,   239,    28,
     241,    39,    40,    54,    30,    56,    57,    58,    59,    60,
      61,    28,    47,    48,    49,    50,    51,    52,    53,    54,
      21,    56,     5,     6,    29,    21,     9,    10,    31,    12,
      21,    21,    15,    16,     5,     6,    39,    40,     9,    10,
      21,    12,    24,    25,    15,    16,    29,    36,    23,    21,
      32,    33,    34,    35,    31,    37,    38,    32,    33,    34,
      35,    21,    39,    40,    47,    48,    49,    50,    51,    52,
      53,    54,    29,    56,    61,    31,    47,    48,    49,    50,
      51,    52,    53,    54,    22,    56,    49,    50,    51,    52,
      53,    54,    21,    56,    49,    50,    51,    52,    53,    54,
      31,    32,    33,    34,    35,    31,    32,    33,    34,    35,
      31,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      32,    33,    34,    35,    23,    36,    31,    28,    56,    29,
      28,    17,    56,    11,    13,    54,    29,    29,     8,    30,
      20,     7,    32,    31,    33,    32,    31,    30,    21,    33,
      32,    28,    33,    28,    14,    29,    28,    20,    29,     3,
      29,    20,    75,   143,   228,    23,   244,   185,   147,    -1,
     148
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    63,    64,     3,     0,    63,    54,    28,     4,
      47,    48,    49,    50,    51,    52,    53,    54,    64,    65,
      66,    67,    70,    72,    73,    74,    29,    65,    21,    73,
      74,    56,    55,    56,    55,    36,    68,    73,    75,    68,
      75,    30,    54,    56,    57,    58,    59,    60,    61,    79,
      81,    82,   104,   105,   106,   107,   108,   109,    23,    69,
      56,    31,    69,    31,    79,    22,    22,    32,    33,    34,
      35,    80,    56,    23,    28,    28,    31,    55,    56,    56,
      79,    68,    75,     5,     6,     9,    10,    12,    15,    16,
      29,    48,    54,    56,    67,    71,    72,    73,    76,    77,
      78,    81,    82,    84,    85,    86,    87,    93,    94,    97,
     100,   102,   103,    29,    71,    79,    83,    69,    30,    30,
      79,   110,    54,    73,    78,    89,    28,    79,    79,    56,
      36,    21,    29,    73,    76,    21,    21,    36,    21,    21,
      21,    21,    29,    23,    31,    61,   101,    79,   110,    24,
      25,    37,    38,   111,    31,    39,    40,   112,    22,    54,
      78,    21,    76,    31,    36,    79,    79,    83,    23,    31,
     111,   112,    79,    28,   110,   110,    29,    28,    17,    56,
      79,   110,    76,    21,    11,    13,    98,    54,    31,    31,
      29,    32,    33,    56,    78,    82,    90,    91,    92,   110,
     104,    29,    30,     8,    95,    32,    33,    32,    33,    32,
      33,    31,    31,    20,    31,    30,     7,    96,    56,    82,
      56,    82,    32,    33,    32,    33,    28,    21,    76,   110,
      28,    76,    88,    98,    31,    76,    29,    14,    99,    28,
      29,    20,    76,    76,    29,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    64,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    75,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    82,    82,
      83,    83,    83,    84,    85,    85,    86,    87,    88,    89,
      89,    90,    90,    90,    91,    91,    91,    91,    92,    92,
      92,    92,    93,    93,    94,    95,    95,    96,    96,    97,
      98,    98,    98,    99,   100,   101,   101,   102,   102,   103,
     104,   104,   104,   104,   104,   105,   106,   107,   108,   109,
     110,   110,   110,   110,   111,   111,   111,   111,   112,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     6,     0,     2,     2,     1,     1,
       4,     5,     0,     2,     0,     4,     7,     8,     6,     7,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     4,     0,     2,     2,     2,     2,     2,
       1,     1,     2,     2,     2,     3,     3,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     5,     3,     3,
       0,     1,     3,     7,     1,     1,     8,    10,     1,     2,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     8,     0,     8,     0,     4,     6,
       0,     6,     5,     3,     4,     1,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     5,     3,     5,     1,     1,     1,     1,     1,     1
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
  case 105: /* intliteral: INTEGER  */
#line 228 "myparser.y"
                    {(yyval.intval) = (yyvsp[0].intval); printf("Parsed integer: %d\n", (yyvsp[0].intval));}
#line 1489 "myparser.tab.c"
    break;

  case 106: /* doubleliteral: DOUBLE  */
#line 231 "myparser.y"
                      {(yyval.doubleval) = (yyvsp[0].doubleval); printf("Parsed double: %f\n", (yyvsp[0].doubleval));}
#line 1495 "myparser.tab.c"
    break;

  case 107: /* booliteral: BOOLEAN  */
#line 234 "myparser.y"
                    {(yyval.boolval) = (yyvsp[0].boolval); printf("Parsed boolean: %s\n", (yyvsp[0].boolval));}
#line 1501 "myparser.tab.c"
    break;

  case 108: /* charliteral: CHAR  */
#line 237 "myparser.y"
                  {(yyval.charval) = (yyvsp[0].charval); printf("Parsed character: %c\n", (yyvsp[0].charval));}
#line 1507 "myparser.tab.c"
    break;

  case 109: /* stringliteral: STRING  */
#line 240 "myparser.y"
                      {(yyval.stringval) = (yyvsp[0].stringval); printf("Parsed String: %s\n", (yyvsp[0].stringval));}
#line 1513 "myparser.tab.c"
    break;


#line 1517 "myparser.tab.c"

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

#line 260 "myparser.y"


int main(int argc, char **argv){

    // extern int yydebug; //debug
    // yydebug = 1;        //debug

    int parse_result;

    if(argc>1){
        if(argc==2 && isFile(argv[1])){
            yyin = fopen(argv[1], "r");
            //yylex();
            parse_result = yyparse(); //Returns 0 in success

            if(parse_result == 0){
                printf("Parsing completed succesfully.\n");
            }else{
                printf("Parsing failed.\n");
                fclose(yyin);  // Close the file after finding an error in parsing
                exit(EXIT_FAILURE);
            }
            fclose(yyin); //Close the file after parsing it

        }else{

            printf("Not a file\n");
            exit(EXIT_FAILURE);


            // for(int i=1; i<argc; i++){
            //     //Way for scanning the command line arguments as they were a file's words
            //     YY_BUFFER_STATE buffer = yy_scan_string(argv[i]); 
            //     yylex();
            //     yyparse();
            //     yy_delete_buffer(buffer); //Free the buffer
            // }
        }
    }

    return 0;
}


int yylex(void);
