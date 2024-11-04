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
  YYSYMBOL_method_declaration = 69,        /* method_declaration  */
  YYSYMBOL_method_definition = 70,         /* method_definition  */
  YYSYMBOL_modifier = 71,                  /* modifier  */
  YYSYMBOL_vartype = 72,                   /* vartype  */
  YYSYMBOL_method_type = 73,               /* method_type  */
  YYSYMBOL_parameter_list = 74,            /* parameter_list  */
  YYSYMBOL_statements = 75,                /* statements  */
  YYSYMBOL_statement = 76,                 /* statement  */
  YYSYMBOL_assignment_statement = 77,      /* assignment_statement  */
  YYSYMBOL_expression = 78,                /* expression  */
  YYSYMBOL_operator = 79,                  /* operator  */
  YYSYMBOL_method_call_statement = 80,     /* method_call_statement  */
  YYSYMBOL_variable_call_statement = 81,   /* variable_call_statement  */
  YYSYMBOL_argument_list = 82,             /* argument_list  */
  YYSYMBOL_object_creation_statement = 83, /* object_creation_statement  */
  YYSYMBOL_loop_statement = 84,            /* loop_statement  */
  YYSYMBOL_do_while_loop = 85,             /* do_while_loop  */
  YYSYMBOL_for_loop = 86,                  /* for_loop  */
  YYSYMBOL_for_body = 87,                  /* for_body  */
  YYSYMBOL_for_exp_1 = 88,                 /* for_exp_1  */
  YYSYMBOL_for_exp_2 = 89,                 /* for_exp_2  */
  YYSYMBOL_prefix_op = 90,                 /* prefix_op  */
  YYSYMBOL_postfix_op = 91,                /* postfix_op  */
  YYSYMBOL_control_statement = 92,         /* control_statement  */
  YYSYMBOL_if_statement = 93,              /* if_statement  */
  YYSYMBOL_elseif_statement = 94,          /* elseif_statement  */
  YYSYMBOL_else_statement = 95,            /* else_statement  */
  YYSYMBOL_switch_statement = 96,          /* switch_statement  */
  YYSYMBOL_case_statement = 97,            /* case_statement  */
  YYSYMBOL_default_statement = 98,         /* default_statement  */
  YYSYMBOL_print_statement = 99,           /* print_statement  */
  YYSYMBOL_print_parameters = 100,         /* print_parameters  */
  YYSYMBOL_return_statement = 101,         /* return_statement  */
  YYSYMBOL_break_statement = 102,          /* break_statement  */
  YYSYMBOL_literal = 103,                  /* literal  */
  YYSYMBOL_intliteral = 104,               /* intliteral  */
  YYSYMBOL_doubleliteral = 105,            /* doubleliteral  */
  YYSYMBOL_booliteral = 106,               /* booliteral  */
  YYSYMBOL_charliteral = 107,              /* charliteral  */
  YYSYMBOL_stringliteral = 108,            /* stringliteral  */
  YYSYMBOL_condition = 109,                /* condition  */
  YYSYMBOL_comparison_operator = 110,      /* comparison_operator  */
  YYSYMBOL_logical_operator = 111          /* logical_operator  */
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  240

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
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    39,    42,    45,    46,    49,    50,    51,
      54,    55,    58,    59,    62,    63,    64,    65,    68,    71,
      72,    75,    76,    77,    78,    79,    80,    83,    84,    87,
      88,    89,    92,    93,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   107,   108,   111,   112,   113,   114,   115,
     116,   119,   120,   121,   122,   125,   128,   129,   132,   133,
     134,   137,   140,   141,   144,   147,   150,   153,   154,   157,
     158,   159,   162,   163,   164,   165,   168,   169,   170,   171,
     174,   175,   178,   181,   182,   185,   186,   189,   192,   193,
     194,   197,   200,   203,   204,   207,   208,   211,   214,   215,
     216,   217,   218,   221,   224,   227,   230,   233,   236,   237,
     238,   239,   243,   244,   245,   246,   249,   249
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
  "variable_declaration", "optional_assignment", "method_declaration",
  "method_definition", "modifier", "vartype", "method_type",
  "parameter_list", "statements", "statement", "assignment_statement",
  "expression", "operator", "method_call_statement",
  "variable_call_statement", "argument_list", "object_creation_statement",
  "loop_statement", "do_while_loop", "for_loop", "for_body", "for_exp_1",
  "for_exp_2", "prefix_op", "postfix_op", "control_statement",
  "if_statement", "elseif_statement", "else_statement", "switch_statement",
  "case_statement", "default_statement", "print_statement",
  "print_parameters", "return_statement", "break_statement", "literal",
  "intliteral", "doubleliteral", "booliteral", "charliteral",
  "stringliteral", "condition", "comparison_operator", "logical_operator", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,    19,    37,    -4,    22,   -97,   -97,    24,    73,   -97,
     -97,    19,   -97,   -97,   -97,   -97,   -97,   -97,   -97,    59,
      73,    78,   -97,    11,    42,    46,   -97,   -97,   -97,    48,
      50,    70,   223,    70,   223,    88,   -97,    54,    80,   -97,
      81,    88,    92,   109,   -97,   -97,   -97,   -97,   -97,   157,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   110,   106,
     107,   226,     2,    82,   -97,   -97,   -97,   -97,    88,   223,
     146,   172,   -97,    88,   -97,   -97,   157,   -97,   129,   175,
     188,   111,    88,   -97,    88,   -97,   -97,   -10,   -11,   139,
     138,   223,    42,   -97,   198,   148,   149,   135,   153,   -97,
     -97,   -97,   -97,   -97,   -97,   155,   158,   159,   -97,   154,
      58,   178,   124,   175,   246,    40,   164,   -23,   -97,   185,
     198,   254,   157,   176,    88,   -97,   -97,    48,   -97,   -97,
     -97,    88,   -97,   -97,   -97,   -97,   -97,    88,   -97,   192,
     180,   231,    34,   -97,   -97,   -97,   -97,    88,   189,   -97,
     -97,   175,   160,   164,   -97,   175,   201,   190,   210,   157,
     157,   -97,   187,   -97,    88,   175,   157,   198,    34,    -5,
     242,   269,   213,   -97,   259,    55,   271,    16,   175,   238,
     272,   273,   -97,   -97,   294,   274,   275,   -13,   -97,    51,
     276,   -97,   -97,    77,   284,   -97,   278,   280,   298,   -18,
      12,   279,   281,   283,   285,   288,   291,   198,   -97,   175,
     289,   -97,   109,   -97,   109,   -97,   -97,   -97,   -97,   -97,
     198,   -97,   269,   133,   198,   -97,   290,   299,   292,   293,
     -97,   301,   -97,   198,   -97,   198,   295,   -97,   294,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     0,     1,     3,     0,     5,    28,
      20,    19,    21,    22,    23,    24,    25,    26,     9,     0,
       5,     0,     8,     0,    27,     0,     4,     6,     7,    27,
       0,    12,    29,    12,    29,     0,    10,     0,     0,    11,
       0,     0,     0,    48,   103,   104,   105,   106,   107,    13,
      47,    46,    45,    98,    99,   100,   101,   102,    30,     0,
       0,     0,     0,     0,    51,    52,    53,    54,     0,    29,
       0,     0,    49,    58,    56,    57,    50,    31,     0,     0,
       0,     0,     0,    97,    95,    16,    19,     0,     0,     0,
       0,     0,     0,    18,    32,     0,     0,     0,     0,    38,
      62,    63,    39,    80,    81,     0,     0,     0,    17,     0,
      59,     0,     0,     0,     0,     0,    26,     0,    68,     0,
      32,     0,    96,     0,     0,    34,    14,     0,    33,    35,
      36,     0,    37,    40,    41,    42,    15,    58,    55,    93,
       0,     0,     0,   113,   112,   114,   115,     0,     0,   117,
     116,     0,     0,     0,    67,     0,     0,     0,     0,    43,
      44,    60,     0,    92,     0,     0,   108,    32,   110,     0,
       0,    88,     0,    94,   108,     0,     0,     0,     0,     0,
       0,     0,   109,   111,    83,     0,     0,     0,    69,     0,
       0,    70,    71,     0,     0,    87,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    61,     0,
       0,    82,    72,    74,    73,    75,    76,    77,    78,    79,
      32,    64,    88,     0,    32,    66,     0,    90,     0,     0,
      65,     0,    89,    32,    86,    32,     0,    91,    83,    84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   320,     6,   305,   -97,    21,   296,   -97,   255,    31,
      -2,   304,   -26,   -92,   -97,   -75,   -28,   -97,   -67,   -70,
     191,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,   -97,    93,   -97,   -97,   108,   -97,   -97,   -97,   -97,
     -97,   156,   -97,   -97,   -97,   -97,   -97,   -96,   193,   194
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    19,    20,    89,    36,    22,    90,    91,
      92,    25,    38,    93,    94,    95,   114,    68,    50,    51,
     111,    98,    99,   100,   101,   226,   119,   190,   191,   192,
     102,   103,   198,   211,   104,   180,   232,   105,   140,   106,
     107,    52,    53,    54,    55,    56,    57,   115,   147,   151
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      97,    97,   128,    96,    96,   118,    24,    49,    40,    63,
      97,    63,    62,    61,    18,     9,   177,   142,    24,   201,
     202,    29,     4,   124,    97,   124,    18,    96,   156,    21,
      37,   153,    37,    88,   149,   150,   153,     5,   212,    23,
      76,    21,   154,    77,     1,   110,   123,    97,   185,   186,
      97,    23,     8,    96,   121,   168,   122,    73,    74,   169,
      12,    13,    14,    15,    16,    17,   153,    37,   214,   175,
     153,   148,   187,   149,   150,   176,     7,     9,   117,   149,
     150,   137,   193,   203,   204,   141,   183,   131,    26,   127,
      64,    65,    66,    67,   149,   150,   159,    97,    31,    28,
      96,    32,   188,   160,    33,    34,    35,   189,   206,   110,
      58,    59,    60,   223,    62,   222,   149,   150,    41,   166,
      10,    11,    12,    13,    14,    15,    16,    17,   225,   213,
     215,    63,   229,    69,    70,    71,   174,    97,    75,   120,
      96,   236,    42,   237,    43,    44,    45,    46,    47,    48,
      97,    78,    79,    96,    97,    80,    81,    96,    82,   112,
     125,    83,    84,    97,   228,    97,    96,   126,    96,   129,
     130,   131,   149,   150,   132,    85,   133,    78,    79,   134,
     135,    80,    81,   136,    82,   139,   152,    83,    84,    64,
      65,    66,    67,    10,    86,    12,    13,    14,    15,    16,
      87,   108,    88,    78,    79,   113,   155,    80,    81,   138,
      82,   163,   158,    83,    84,   162,    74,   167,   171,    10,
      86,    12,    13,    14,    15,    16,    87,   172,    88,    42,
     170,    43,    44,    45,    46,    47,    48,    12,    13,    14,
      15,    16,   116,   173,    88,    10,    86,    12,    13,    14,
      15,    16,    87,   178,    88,   143,   144,    72,    64,    65,
      66,    67,    72,    64,    65,    66,    67,   181,   145,   146,
     143,   144,    12,    13,    14,    15,    16,    17,    64,    65,
      66,    67,   179,   145,   146,   157,    64,    65,    66,    67,
     182,    64,    65,    66,    67,    44,    45,    46,    47,    48,
     184,   195,   197,   196,   207,   210,   199,   205,   200,   208,
     209,   216,   221,   231,   217,   218,   220,   224,   219,   230,
     233,   235,   234,     6,   238,    27,   109,    30,   161,    39,
     227,   239,     0,     0,   164,   194,   165
};

static const yytype_int16 yycheck[] =
{
      70,    71,    94,    70,    71,    80,     8,    35,    34,    22,
      80,    22,    22,    41,     8,     4,    21,   113,    20,    32,
      33,    23,     3,    36,    94,    36,    20,    94,   120,     8,
      32,    54,    34,    56,    39,    40,    54,     0,    56,     8,
      68,    20,   117,    69,    48,    73,    56,   117,    32,    33,
     120,    20,    28,   120,    82,   151,    84,    55,    56,   155,
      49,    50,    51,    52,    53,    54,    54,    69,    56,   165,
      54,    31,    56,    39,    40,   167,    54,     4,    80,    39,
      40,    23,   178,    32,    33,   113,    31,    36,    29,    91,
      32,    33,    34,    35,    39,    40,   124,   167,    56,    21,
     167,    55,   177,   131,    56,    55,    36,   177,    31,   137,
      56,    31,    31,   209,    22,   207,    39,    40,    30,   147,
      47,    48,    49,    50,    51,    52,    53,    54,   220,   199,
     200,    22,   224,    23,    28,    28,   164,   207,    56,    28,
     207,   233,    54,   235,    56,    57,    58,    59,    60,    61,
     220,     5,     6,   220,   224,     9,    10,   224,    12,    30,
      21,    15,    16,   233,    31,   235,   233,    29,   235,    21,
      21,    36,    39,    40,    21,    29,    21,     5,     6,    21,
      21,     9,    10,    29,    12,    61,    22,    15,    16,    32,
      33,    34,    35,    47,    48,    49,    50,    51,    52,    53,
      54,    29,    56,     5,     6,    30,    21,     9,    10,    31,
      12,    31,    36,    15,    16,    23,    56,    28,    28,    47,
      48,    49,    50,    51,    52,    53,    54,    17,    56,    54,
      29,    56,    57,    58,    59,    60,    61,    49,    50,    51,
      52,    53,    54,    56,    56,    47,    48,    49,    50,    51,
      52,    53,    54,    11,    56,    24,    25,    31,    32,    33,
      34,    35,    31,    32,    33,    34,    35,    54,    37,    38,
      24,    25,    49,    50,    51,    52,    53,    54,    32,    33,
      34,    35,    13,    37,    38,    31,    32,    33,    34,    35,
      31,    32,    33,    34,    35,    57,    58,    59,    60,    61,
      29,    29,     8,    30,    20,     7,    32,    31,    33,    31,
      30,    32,    21,    14,    33,    32,    28,    28,    33,    29,
      28,    20,    29,     3,    29,    20,    71,    23,   137,    33,
     222,   238,    -1,    -1,   141,   179,   142
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    63,    64,     3,     0,    63,    54,    28,     4,
      47,    48,    49,    50,    51,    52,    53,    54,    64,    65,
      66,    67,    69,    71,    72,    73,    29,    65,    21,    72,
      73,    56,    55,    56,    55,    36,    68,    72,    74,    68,
      74,    30,    54,    56,    57,    58,    59,    60,    61,    78,
      80,    81,   103,   104,   105,   106,   107,   108,    56,    31,
      31,    78,    22,    22,    32,    33,    34,    35,    79,    23,
      28,    28,    31,    55,    56,    56,    78,    74,     5,     6,
       9,    10,    12,    15,    16,    29,    48,    54,    56,    67,
      70,    71,    72,    75,    76,    77,    80,    81,    83,    84,
      85,    86,    92,    93,    96,    99,   101,   102,    29,    70,
      78,    82,    30,    30,    78,   109,    54,    72,    77,    88,
      28,    78,    78,    56,    36,    21,    29,    72,    75,    21,
      21,    36,    21,    21,    21,    21,    29,    23,    31,    61,
     100,    78,   109,    24,    25,    37,    38,   110,    31,    39,
      40,   111,    22,    54,    77,    21,    75,    31,    36,    78,
      78,    82,    23,    31,   110,   111,    78,    28,   109,   109,
      29,    28,    17,    56,    78,   109,    75,    21,    11,    13,
      97,    54,    31,    31,    29,    32,    33,    56,    77,    81,
      89,    90,    91,   109,   103,    29,    30,     8,    94,    32,
      33,    32,    33,    32,    33,    31,    31,    20,    31,    30,
       7,    95,    56,    81,    56,    81,    32,    33,    32,    33,
      28,    21,    75,   109,    28,    75,    87,    97,    31,    75,
      29,    14,    98,    28,    29,    20,    75,    75,    29,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    63,    64,    65,    65,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    73,    73,    74,
      74,    74,    75,    75,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    80,    81,    81,    82,    82,
      82,    83,    84,    84,    85,    86,    87,    88,    88,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      92,    92,    93,    94,    94,    95,    95,    96,    97,    97,
      97,    98,    99,   100,   100,   101,   101,   102,   103,   103,
     103,   103,   103,   104,   105,   106,   107,   108,   109,   109,
     109,   109,   110,   110,   110,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     6,     0,     2,     2,     1,     1,
       3,     4,     0,     2,     7,     8,     6,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     4,     0,     2,     2,     2,     2,     2,     1,     1,
       2,     2,     2,     3,     3,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     5,     3,     3,     0,     1,
       3,     7,     1,     1,     8,    10,     1,     2,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     8,     0,     8,     0,     4,     6,     0,     6,
       5,     3,     4,     1,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       3,     5,     1,     1,     1,     1,     1,     1
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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
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

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 103: /* intliteral: INTEGER  */
#line 221 "myparser.y"
                    {(yyval.intval) = (yyvsp[0].intval); printf("Parsed integer: %d\n", (yyvsp[0].intval));}
#line 1364 "myparser.tab.c"
    break;

  case 104: /* doubleliteral: DOUBLE  */
#line 224 "myparser.y"
                      {(yyval.doubleval) = (yyvsp[0].doubleval); printf("Parsed double: %f\n", (yyvsp[0].doubleval));}
#line 1370 "myparser.tab.c"
    break;

  case 105: /* booliteral: BOOLEAN  */
#line 227 "myparser.y"
                    {(yyval.boolval) = (yyvsp[0].boolval); printf("Parsed boolean: %s\n", (yyvsp[0].boolval));}
#line 1376 "myparser.tab.c"
    break;

  case 106: /* charliteral: CHAR  */
#line 230 "myparser.y"
                  {(yyval.charval) = (yyvsp[0].charval); printf("Parsed character: %c\n", (yyvsp[0].charval));}
#line 1382 "myparser.tab.c"
    break;

  case 107: /* stringliteral: STRING  */
#line 233 "myparser.y"
                      {(yyval.stringval) = (yyvsp[0].stringval); printf("Parsed String: %s\n", (yyvsp[0].stringval));}
#line 1388 "myparser.tab.c"
    break;


#line 1392 "myparser.tab.c"

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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 253 "myparser.y"


int main(int argc, char **argv){

    // extern int yydebug; //debug
    // yydebug = 1;        //debug

    int parse_result;

    if(argc>1){
        if(argc==2 && isFile(argv[1])){
            //printf("Is File\n"); //debug
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
