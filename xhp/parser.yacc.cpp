/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         xhpparse
#define yylex           xhplex
#define yyerror         xhperror
#define yydebug         xhpdebug
#define yynerrs         xhpnerrs


/* Copy the first part of user declarations.  */
#line 18 "parser.y" /* yacc.c:339  */

#include "xhp.hpp"
// PHP's if/else rules use right reduction rather than left reduction which
// means while parsing nested if/else's the stack grows until it the last
// statement is read. This is annoying, particularly because of a quirk in
// bison.
// http://www.gnu.org/software/bison/manual/html_node/Memory-Management.html
// Apparently if you compile a bison parser with g++ it can no longer grow
// the stack. The work around is to just make your initial stack ridiculously
// large. Unfortunately that increases memory usage while parsing which is
// dumb. Anyway, putting a TODO here to fix PHP's if/else grammar.
#define YYINITDEPTH 500
#line 32 "parser.y" /* yacc.c:339  */

#undef yyextra
#define yyextra static_cast<yy_extra_type*>(xhpget_extra(yyscanner))
#undef yylineno
#define yylineno yyextra->first_lineno
#define cr(s) code_rope(s, yylineno)
#define push_state(s) xhp_new_push_state(s, (struct yyguts_t*) yyscanner)
#define pop_state() xhp_new_pop_state((struct yyguts_t*) yyscanner)
#define set_state(s) xhp_set_state(s, (struct yyguts_t*) yyscanner)
using namespace std;

static void yyerror(void* yyscanner, void* _, const char* error) {
  if (yyextra->terminated) {
    return;
  }
  yyextra->terminated = true;
  yyextra->error = error;
}

static void replacestr(string &source, const string &find, const string &rep) {
  size_t j;
  while ((j = source.find(find)) != std::string::npos) {
    source.replace(j, find.length(), rep);
  }
}


#line 113 "parser.yacc.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.yacc.hpp".  */
#ifndef YY_XHP_PARSER_YACC_HPP_INCLUDED
# define YY_XHP_PARSER_YACC_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int xhpdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_INCLUDE = 258,
    T_INCLUDE_ONCE = 259,
    T_EVAL = 260,
    T_REQUIRE = 261,
    T_REQUIRE_ONCE = 262,
    T_LOGICAL_OR = 263,
    T_LOGICAL_XOR = 264,
    T_LOGICAL_AND = 265,
    T_PRINT = 266,
    T_PLUS_EQUAL = 267,
    T_MINUS_EQUAL = 268,
    T_MUL_EQUAL = 269,
    T_DIV_EQUAL = 270,
    T_CONCAT_EQUAL = 271,
    T_MOD_EQUAL = 272,
    T_AND_EQUAL = 273,
    T_OR_EQUAL = 274,
    T_XOR_EQUAL = 275,
    T_SL_EQUAL = 276,
    T_SR_EQUAL = 277,
    T_BOOLEAN_OR = 278,
    T_BOOLEAN_AND = 279,
    T_IS_EQUAL = 280,
    T_IS_NOT_EQUAL = 281,
    T_IS_IDENTICAL = 282,
    T_IS_NOT_IDENTICAL = 283,
    T_IS_SMALLER_OR_EQUAL = 284,
    T_IS_GREATER_OR_EQUAL = 285,
    T_SL = 286,
    T_SR = 287,
    T_INSTANCEOF = 288,
    T_INC = 289,
    T_DEC = 290,
    T_INT_CAST = 291,
    T_DOUBLE_CAST = 292,
    T_STRING_CAST = 293,
    T_UNICODE_CAST = 294,
    T_BINARY_CAST = 295,
    T_ARRAY_CAST = 296,
    T_OBJECT_CAST = 297,
    T_BOOL_CAST = 298,
    T_UNSET_CAST = 299,
    T_NEW = 300,
    T_CLONE = 301,
    T_EXIT = 302,
    T_IF = 303,
    T_ELSEIF = 304,
    T_ELSE = 305,
    T_ENDIF = 306,
    T_LNUMBER = 307,
    T_DNUMBER = 308,
    T_STRING = 309,
    T_STRING_VARNAME = 310,
    T_VARIABLE = 311,
    T_NUM_STRING = 312,
    T_INLINE_HTML = 313,
    T_CHARACTER = 314,
    T_BAD_CHARACTER = 315,
    T_ENCAPSED_AND_WHITESPACE = 316,
    T_CONSTANT_ENCAPSED_STRING = 317,
    T_BACKTICKS_EXPR = 318,
    T_ECHO = 319,
    T_DO = 320,
    T_WHILE = 321,
    T_ENDWHILE = 322,
    T_FOR = 323,
    T_ENDFOR = 324,
    T_FOREACH = 325,
    T_ENDFOREACH = 326,
    T_DECLARE = 327,
    T_ENDDECLARE = 328,
    T_AS = 329,
    T_SWITCH = 330,
    T_ENDSWITCH = 331,
    T_CASE = 332,
    T_DEFAULT = 333,
    T_BREAK = 334,
    T_CONTINUE = 335,
    T_GOTO = 336,
    T_FUNCTION = 337,
    T_CONST = 338,
    T_RETURN = 339,
    T_TRY = 340,
    T_CATCH = 341,
    T_FINALLY = 342,
    T_THROW = 343,
    T_USE = 344,
    T_GLOBAL = 345,
    T_STATIC = 346,
    T_ABSTRACT = 347,
    T_FINAL = 348,
    T_PRIVATE = 349,
    T_PROTECTED = 350,
    T_PUBLIC = 351,
    T_VAR = 352,
    T_UNSET = 353,
    T_ISSET = 354,
    T_EMPTY = 355,
    T_HALT_COMPILER = 356,
    T_CLASS = 357,
    T_INTERFACE = 358,
    T_EXTENDS = 359,
    T_IMPLEMENTS = 360,
    T_OBJECT_OPERATOR = 361,
    T_DOUBLE_ARROW = 362,
    T_LIST = 363,
    T_ARRAY = 364,
    T_CLASS_C = 365,
    T_METHOD_C = 366,
    T_FUNC_C = 367,
    T_TRAIT_C = 368,
    T_LINE = 369,
    T_FILE = 370,
    T_COMMENT = 371,
    T_DOC_COMMENT = 372,
    T_OPEN_TAG = 373,
    T_OPEN_TAG_WITH_ECHO = 374,
    T_OPEN_TAG_FAKE = 375,
    T_CLOSE_TAG = 376,
    T_WHITESPACE = 377,
    T_START_HEREDOC = 378,
    T_END_HEREDOC = 379,
    T_HEREDOC = 380,
    T_DOLLAR_OPEN_CURLY_BRACES = 381,
    T_CURLY_OPEN = 382,
    T_PAAMAYIM_NEKUDOTAYIM = 383,
    T_BINARY_DOUBLE = 384,
    T_BINARY_HEREDOC = 385,
    T_NAMESPACE = 386,
    T_NS_C = 387,
    T_DIR = 388,
    T_NS_SEPARATOR = 389,
    T_TRAIT = 390,
    T_INSTEADOF = 391,
    T_YIELD = 392,
    T_VARIADIC_PARAMETER = 393,
    T_XHP_WHITESPACE = 394,
    T_XHP_TEXT = 395,
    T_XHP_LT_DIV = 396,
    T_XHP_LT_DIV_GT = 397,
    T_XHP_ATTRIBUTE = 398,
    T_XHP_CATEGORY = 399,
    T_XHP_CHILDREN = 400,
    T_XHP_ANY = 401,
    T_XHP_EMPTY = 402,
    T_XHP_PCDATA = 403,
    T_XHP_COLON = 404,
    T_XHP_HYPHEN = 405,
    T_XHP_BOOLEAN = 406,
    T_XHP_NUMBER = 407,
    T_XHP_ARRAY = 408,
    T_XHP_MIXED = 409,
    T_XHP_STRING = 410,
    T_XHP_ENUM = 411,
    T_XHP_FLOAT = 412,
    T_XHP_CALLABLE = 413,
    T_XHP_REQUIRED = 414
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int xhpparse (void* yyscanner, code_rope* root);

#endif /* !YY_XHP_PARSER_YACC_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 323 "parser.yacc.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  187
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  184
/* YYNRULES -- Number of rules.  */
#define YYNRULES  552
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1080

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   414

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   186,     2,   184,    47,    31,     2,
     179,   180,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   181,
      36,    13,    38,    25,    62,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,   185,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   182,    29,   183,    50,     2,     2,     2,
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
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    37,    39,    40,    41,    49,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   207,   207,   213,   216,   222,   223,   229,   230,   231,
     232,   235,   238,   241,   244,   247,   253,   256,   260,   261,
     264,   267,   273,   276,   282,   285,   291,   292,   293,   294,
     300,   301,   304,   305,   306,   312,   315,   318,   321,   324,
     327,   330,   333,   336,   339,   342,   345,   348,   351,   354,
     357,   360,   363,   364,   367,   370,   373,   376,   379,   380,
     383,   386,   389,   392,   398,   399,   405,   406,   412,   418,
     421,   427,   428,   434,   438,   442,   446,   449,   453,   459,
     462,   468,   469,   472,   473,   479,   482,   488,   492,   495,
     501,   504,   510,   511,   517,   520,   526,   527,   533,   534,
     540,   541,   547,   548,   554,   557,   563,   566,   569,   572,
     578,   581,   584,   590,   591,   595,   596,   602,   605,   611,
     614,   620,   623,   629,   632,   638,   639,   642,   648,   654,
     657,   660,   663,   666,   669,   672,   675,   681,   684,   687,
     693,   694,   697,   703,   704,   705,   708,   711,   714,   720,
     723,   727,   728,   731,   737,   740,   743,   744,   750,   753,
     759,   762,   765,   766,   766,   776,   782,   783,   789,   790,
     796,   799,   803,   804,   810,   813,   819,   825,   828,   834,
     835,   839,   845,   848,   854,   857,   861,   864,   870,   871,
     877,   878,   884,   887,   893,   894,   900,   901,   902,   903,
     904,   905,   909,   912,   915,   916,   922,   925,   931,   934,
     938,   941,   946,   949,   953,   956,   962,   965,   971,   974,
     977,   983,   986,   992,   998,  1001,  1004,  1007,  1010,  1013,
    1016,  1019,  1022,  1025,  1028,  1031,  1034,  1037,  1040,  1043,
    1046,  1049,  1052,  1055,  1058,  1061,  1064,  1067,  1070,  1073,
    1076,  1079,  1082,  1085,  1088,  1091,  1094,  1097,  1100,  1103,
    1106,  1109,  1112,  1115,  1118,  1121,  1124,  1127,  1130,  1133,
    1136,  1139,  1142,  1145,  1148,  1151,  1154,  1157,  1160,  1163,
    1166,  1167,  1170,  1173,  1176,  1179,  1182,  1185,  1188,  1191,
    1194,  1197,  1200,  1201,  1204,  1205,  1208,  1211,  1217,  1221,
    1224,  1230,  1233,  1236,  1237,  1243,  1246,  1249,  1252,  1255,
    1258,  1261,  1264,  1270,  1271,  1272,  1275,  1281,  1282,  1285,
    1291,  1292,  1296,  1299,  1303,  1306,  1312,  1318,  1321,  1324,
    1330,  1333,  1339,  1340,  1341,  1342,  1343,  1344,  1345,  1346,
    1347,  1348,  1349,  1350,  1354,  1355,  1356,  1359,  1362,  1365,
    1368,  1371,  1375,  1381,  1382,  1383,  1384,  1387,  1390,  1394,
    1397,  1401,  1404,  1408,  1411,  1414,  1417,  1421,  1422,  1426,
    1430,  1434,  1438,  1441,  1445,  1448,  1454,  1460,  1463,  1469,
    1475,  1478,  1481,  1487,  1488,  1494,  1497,  1503,  1507,  1510,
    1516,  1517,  1518,  1522,  1523,  1526,  1530,  1533,  1536,  1540,
    1541,  1547,  1550,  1554,  1555,  1559,  1562,  1565,  1569,  1570,
    1576,  1577,  1583,  1586,  1590,  1591,  1594,  1600,  1603,  1607,
    1610,  1613,  1616,  1617,  1620,  1623,  1626,  1632,  1635,  1638,
    1641,  1644,  1647,  1650,  1656,  1657,  1663,  1666,  1676,  1683,
    1684,  1696,  1709,  1718,  1736,  1748,  1755,  1759,  1766,  1769,
    1773,  1777,  1784,  1785,  1788,  1785,  1799,  1803,  1809,  1815,
    1815,  1818,  1818,  1818,  1824,  1827,  1835,  1835,  1842,  1842,
    1849,  1849,  1856,  1856,  1864,  1864,  1871,  1876,  1879,  1885,
    1890,  1893,  1899,  1900,  1905,  1910,  1905,  1933,  1933,  1942,
    1943,  1947,  1953,  1961,  1964,  1967,  1970,  1973,  1976,  1979,
    1982,  1982,  1982,  1985,  1988,  1994,  1997,  2000,  2006,  2009,
    2015,  2018,  2021,  2024,  2027,  2030,  2033,  2039,  2043,  2050,
    2054,  2058,  2064,  2067,  2074,  2074,  2086,  2089,  2096,  2096,
    2104,  2107,  2110,  2116,  2119,  2122,  2125,  2131,  2132,  2135,
    2138,  2141,  2144,  2147,  2153,  2156,  2159,  2162,  2169,  2178,
    2192,  2200,  2207
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INCLUDE", "T_INCLUDE_ONCE", "T_EVAL",
  "T_REQUIRE", "T_REQUIRE_ONCE", "','", "T_LOGICAL_OR", "T_LOGICAL_XOR",
  "T_LOGICAL_AND", "T_PRINT", "'='", "T_PLUS_EQUAL", "T_MINUS_EQUAL",
  "T_MUL_EQUAL", "T_DIV_EQUAL", "T_CONCAT_EQUAL", "T_MOD_EQUAL",
  "T_AND_EQUAL", "T_OR_EQUAL", "T_XOR_EQUAL", "T_SL_EQUAL", "T_SR_EQUAL",
  "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'", "'^'", "'&'",
  "T_IS_EQUAL", "T_IS_NOT_EQUAL", "T_IS_IDENTICAL", "T_IS_NOT_IDENTICAL",
  "'<'", "T_IS_SMALLER_OR_EQUAL", "'>'", "T_IS_GREATER_OR_EQUAL", "T_SL",
  "T_SR", "'+'", "'-'", "'.'", "'*'", "'/'", "'%'", "'!'", "T_INSTANCEOF",
  "'~'", "T_INC", "T_DEC", "T_INT_CAST", "T_DOUBLE_CAST", "T_STRING_CAST",
  "T_UNICODE_CAST", "T_BINARY_CAST", "T_ARRAY_CAST", "T_OBJECT_CAST",
  "T_BOOL_CAST", "T_UNSET_CAST", "'@'", "'['", "T_NEW", "T_CLONE",
  "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING",
  "T_BACKTICKS_EXPR", "T_ECHO", "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR",
  "T_ENDFOR", "T_FOREACH", "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE",
  "T_AS", "T_SWITCH", "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK",
  "T_CONTINUE", "T_GOTO", "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY",
  "T_CATCH", "T_FINALLY", "T_THROW", "T_USE", "T_GLOBAL", "T_STATIC",
  "T_ABSTRACT", "T_FINAL", "T_PRIVATE", "T_PROTECTED", "T_PUBLIC", "T_VAR",
  "T_UNSET", "T_ISSET", "T_EMPTY", "T_HALT_COMPILER", "T_CLASS",
  "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS", "T_OBJECT_OPERATOR",
  "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C", "T_METHOD_C",
  "T_FUNC_C", "T_TRAIT_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_OPEN_TAG_FAKE",
  "T_CLOSE_TAG", "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_HEREDOC", "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN",
  "T_PAAMAYIM_NEKUDOTAYIM", "T_BINARY_DOUBLE", "T_BINARY_HEREDOC",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR", "T_TRAIT",
  "T_INSTEADOF", "T_YIELD", "T_VARIADIC_PARAMETER", "T_XHP_WHITESPACE",
  "T_XHP_TEXT", "T_XHP_LT_DIV", "T_XHP_LT_DIV_GT", "T_XHP_ATTRIBUTE",
  "T_XHP_CATEGORY", "T_XHP_CHILDREN", "T_XHP_ANY", "T_XHP_EMPTY",
  "T_XHP_PCDATA", "T_XHP_COLON", "T_XHP_HYPHEN", "T_XHP_BOOLEAN",
  "T_XHP_NUMBER", "T_XHP_ARRAY", "T_XHP_MIXED", "T_XHP_STRING",
  "T_XHP_ENUM", "T_XHP_FLOAT", "T_XHP_CALLABLE", "T_XHP_REQUIRED", "'('",
  "')'", "';'", "'{'", "'}'", "'$'", "']'", "'\"'", "$accept", "start",
  "top_statement_list", "namespace_name", "top_statement",
  "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "inner_statement", "statement",
  "unticked_statement", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "additional_finally",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement",
  "unticked_class_declaration_statement", "class_entry_type",
  "extends_from", "interface_entry", "interface_extends_list",
  "implements_list", "interface_list", "foreach_optional_arg",
  "foreach_variable", "for_statement", "foreach_statement",
  "declare_statement", "declare_list", "switch_case_list", "case_list",
  "case_separator", "while_statement", "elseif_list", "new_elseif_list",
  "else_single", "new_else_single", "parameter_list", "variadic_parameter",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@1", "trait_use_statement",
  "trait_list", "trait_adaptions", "trait_adaption_list",
  "non_empty_trait_adaptation_list", "trait_adaptation_statement",
  "trait_precedence", "trait_reference_list", "trait_method_reference",
  "trait_method_reference_fully_qualified", "trait_alias",
  "trait_modifiers", "yield_with_variable", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "chaining_method_or_property",
  "chaining_dereference", "chaining_instance_call", "instance_call",
  "new_expr", "expr_without_variable", "function", "lexical_vars",
  "lexical_var_list", "function_call", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "ctor_arguments",
  "common_scalar", "static_scalar", "static_class_constant", "scalar",
  "static_array_pair_list", "possible_comma",
  "non_empty_static_array_pair_list", "expr", "r_variable", "w_variable",
  "rw_variable", "variable", "variable_properties", "variable_property",
  "array_method_dereference", "method", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "base_variable_with_function_calls",
  "base_variable", "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "array_pair_list",
  "non_empty_array_pair_list", "internal_functions_in_yacc",
  "isset_variables", "class_constant", "xhp_tag_expression",
  "xhp_singleton", "xhp_tag_open", "xhp_tag_close", "xhp_tag_start",
  "xhp_literal_text", "xhp_children", "xhp_child", "$@2", "$@3",
  "xhp_attributes", "xhp_attribute", "xhp_attribute_value", "$@4", "$@5",
  "$@6", "xhp_attribute_quoted_value", "xhp_label_immediate", "$@7",
  "xhp_label_no_space", "$@8", "xhp_label_pass", "$@9",
  "xhp_label_pass_immediate", "$@10", "xhp_label", "$@11", "xhp_label_",
  "xhp_label_pass_", "xhp_whitespace_hack", "$@12", "$@13", "$@14",
  "xhp_attribute_decls", "xhp_attribute_decl", "xhp_attribute_decl_type",
  "$@15", "$@16", "xhp_attribute_array_type",
  "xhp_attribute_array_key_type", "xhp_attribute_array_value_type",
  "xhp_attribute_enum", "xhp_attribute_default",
  "xhp_attribute_is_required", "$@17", "xhp_category_list", "$@18",
  "xhp_children_decl", "xhp_children_paren_expr", "xhp_children_decl_expr",
  "xhp_children_decl_tag", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,   284,    62,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,   299,    64,    91,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,    40,
      41,    59,   123,   125,    36,    93,    34
};
# endif

#define YYPACT_NINF -742

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-742)))

#define YYTABLE_NINF -550

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-550)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -742,    65,  2048,  -742,  7037,  7037,   -92,  7037,  7037,  7037,
    -742,  7037,  7037,  7037,  7037,   502,   502,  7037,  7037,  7037,
    7037,  7037,  7037,  7037,  7037,  7037,  7037,  5282,   566,  7037,
     -72,   -69,  -742,  -742,   123,  -742,  -742,  -742,  -742,  -742,
    7037,  5128,   -62,   -49,   -10,    55,    87,  5417,  5552,   111,
    -742,   129,  5687,    79,  7037,    18,   -17,    89,   150,   161,
     105,   107,   114,   121,  -742,  -742,   143,   163,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,    13,  -742,
    -742,   283,  -742,   452,  -742,  7037,  -742,  -742,   178,   202,
    -742,    16,  -742,  -742,  -742,  -742,  -742,  -742,    59,   291,
     188,  -742,  -742,   345,   321,   242,  -742,  -742,  7496,  -742,
     170,  5352,   212,  -742,   250,   332,   274,  -742,    -4,  -742,
     -14,  -742,  -742,  -742,  -742,   243,  -742,  -742,   305,   271,
     345,  8262,  8262,  7037,  8262,  8262,  8376,  -742,   356,   375,
     375,   131,   375,  -742,   292,   283,    96,   301,  -742,  -742,
     303,  -742,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   502,  8060,   267,   447,   310,   283,   311,   320,
     289,  -742,   323,   347,     3,   -14,  -742,  5822,  -742,  7037,
    -742,    22,  8262,   392,  7037,  7037,  7037,   401,  7037,  -742,
    7537,  -742,  7578,   297,   467,  -742,   304,  8262,  1139,  -742,
    7619,   283,   -18,    23,  -742,  -742,   509,    24,  -742,   473,
      25,   345,  -742,  -742,   502,   502,   502,   331,   670,  5282,
     283,  -742,    91,   230,  -742,   364,  -742,   336,  7660,  2202,
    7037,   418,  5957,   444,  -742,  -742,   395,   403,  -742,  -742,
      -6,  7037,    40,  7037,  7037,  7037,  6092,  7037,  7037,  7037,
    7037,  7037,  7037,  7037,  7037,  7037,  7037,  7037,  7037,  7037,
    7037,  7037,  7037,  7037,  7037,  7037,  7037,  7037,   566,  7037,
    -742,  -742,  -742,  6227,  7037,  7037,  7037,  7037,  7037,  7037,
    7037,  7037,  7037,  7037,  7037,  5957,    56,  7037,    -3,  7037,
    7037,   178,    64,  -742,   365,    38,   280,   352,  7701,  -742,
     278,   283,    99,    63,    69,  -742,  -742,  6362,  -742,  6497,
    -742,   283,   311,    -7,  5957,  -742,    -7,    -3,    51,  -742,
    7742,  7783,  7037,  -742,   355,  7824,   361,   528,  8262,   451,
    1397,   524,    37,  7865,  -742,  -742,  -742,  8001,  -742,  -742,
    2356,  -742,     1,   476,    18,  -742,  7037,  -742,  -742,   -17,
    -742,  8001,   475,  -742,   382,    39,  -742,  -742,  -742,    43,
     374,   383,   384,  -742,    45,  -742,   385,   239,  1739,  -742,
    -742,  5957,   502,    14,  -742,   394,  -742,  -742,  -742,  -742,
    -742,  1140,  -742,   502,   386,   560,    46,    82,   557,   395,
     195,   450,   195,   397,   402,   191,  8262,   398,   409,   410,
      51,   -14,  8302,  8339,  8376,  7037,  8203,  8449,  8484,  5470,
    5605,  5738,  5873,  5873,  5873,  5873,  5400,  5400,  5400,  5400,
     552,   552,   388,   388,   388,   131,   131,   131,  -742,   415,
     346,  6632,  8376,  8376,  8376,  8376,  8376,  8376,  8376,  8376,
    8376,  8376,  8376,  8376,   396,   424,   428,   423,  -742,  7037,
    -742,   430,    60,  -742,   425,  1430,  -742,  -742,  -742,  -742,
    -742,  -742,   243,  -742,   542,  -742,   601,   543,  -742,  -742,
     548,   553,  -742,   104,   409,   424,   502,  8262,   502,  8162,
     311,  -742,   448,  -742,  -742,  -742,  4358,  8262,  7037,  4512,
    7037,  7037,   502,   248,  8001,   554,  4666,    10,  8001,  8001,
    8001,   446,   478,   283,   -65,   487,  -742,  -742,  -742,   530,
     564,  -742,  -742,  1662,  -742,  -742,   627,   191,   502,   461,
     502,  -742,  -742,  -742,   670,   670,   630,  -742,  5957,  -742,
    1894,   464,  -742,  7037,    -3,   520,    21,  -742,  -742,  -742,
     470,  -742,  -742,  -742,  6767,  8001,   450,   494,   283,  -742,
     311,  -742,   195,   469,   645,  -742,  -742,   191,  -742,   480,
     653,    80,  -742,  -742,  5957,  5957,    51,  8413,  7037,  -742,
    -742,  -742,   502,   484,  -742,  5957,  5957,  -742,  7332,  5957,
     603,   606,  -742,  7037,  7037,  -742,  -742,   633,   356,  7037,
     365,  -742,   -45,  -742,   285,  -742,  -742,  -742,  -742,  6902,
    -742,   547,  -742,  -742,  7906,  -742,  -742,  -742,   492,  8262,
     555,   502,   555,  -742,  -742,   665,  -742,  -742,  -742,   498,
     499,  -742,  -742,  -742,   556,   500,   681,  8001,   283,     0,
     617,   515,  -742,  -742,  8001,   516,  -742,  -742,  -742,    48,
    -742,  7172,   517,  -742,  -742,   518,   430,  -742,  7037,   520,
     525,   502,   163,   559,   283,  -742,   101,  -742,   550,    49,
     827,  -742,   526,   283,   311,  -742,   645,  -742,   195,   830,
     534,   602,   254,   640,   704,   541,   544,  8413,  -742,   545,
     549,  -742,   551,  7037,  7037,   520,   537,  7373,  -742,   162,
    7414,  -742,  -742,  -742,   650,   655,  -742,   502,  8262,    -3,
    -742,  4204,   358,   561,  2510,  7037,   248,   558,  -742,   568,
    8001,  2664,  -742,   387,  -742,    62,  8001,  -742,  8001,  -742,
     569,   142,  -742,   195,  -742,   602,  -742,  6632,  8376,  -742,
    -742,  -742,   567,  -742,  -742,   283,   141,   575,   671,  -742,
     311,  1030,  -742,   667,   195,  -742,  -742,  -742,  -742,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,   678,   305,
     445,  -742,    27,   572,   576,   574,  -742,    50,   745,  8001,
    -742,  -742,  -742,  -742,  -742,   577,   578,  -742,  -742,  -742,
    -742,  7037,   243,  -742,  -742,  -742,  -742,   389,   580,  5128,
    -742,  -742,   579,   581,  -742,  4820,  4820,  -742,   584,   413,
     586,  7037,    12,    86,  -742,  -742,   642,  -742,   694,   588,
     593,  -742,   215,  -742,  -742,  -742,   762,     7,  -742,   890,
     729,   209,   764,    31,  -742,  -742,   705,  -742,  -742,    81,
    -742,   706,   771,  8001,  -742,  -742,  -742,  -742,  8262,   365,
     599,   608,   765,   722,  7037,  -742,  -742,  4974,  -742,  -742,
    -742,  -742,  -742,   612,  -742,  7455,  -742,  -742,  -742,  -742,
    8001,   614,  -742,  -742,  1109,  8001,   195,  -742,   197,  -742,
    -742,  -742,  -742,  -742,   766,  -742,  -742,   616,  -742,  -742,
    -742,    33,  -742,  -742,  -742,    35,  -742,  -742,    71,   620,
    -742,  8001,   733,  -742,   345,   791,  2818,   735,  -742,    52,
    2972,   799,  8001,  -742,   632,  -742,  7037,  -742,   636,  7947,
    -742,  -742,  -742,  3126,  -742,  -742,  4204,  -742,   631,  3280,
     635,  -742,  -742,   726,   638,   197,  -742,   641,   732,   672,
     648,   683,   758,   780,  -742,  -742,   890,  -742,   819,  -742,
     543,   786,  -742,  -742,  -742,  -742,  -742,  -742,    20,   103,
    -742,  -742,   821,   763,  8001,  -742,  -742,    85,  -742,  -742,
    8001,  -742,  -742,  7988,  4204,  -742,  5128,  3434,   656,  4204,
    -742,  -742,  -742,  -742,  -742,  -742,   391,   195,  -742,   779,
    -742,   818,   766,   826,  -742,  -742,  -742,   849,   829,  1429,
    -742,  1157,   687,   285,  -742,  -742,   356,  -742,    71,    71,
     378,  -742,  -742,  -742,  8001,   680,  -742,   794,  -742,  -742,
     844,  -742,   690,  -742,  3588,   800,   802,   864,  -742,  -742,
    -742,   811,  -742,  -742,   868,  -742,  -742,  -742,  -742,  -742,
    -742,   278,   848,  -742,  -742,  -742,  -742,  -742,   191,  -742,
    -742,  -742,   775,  -742,   195,  -742,  -742,   843,  1429,   699,
    -742,   707,  4204,   709,   783,   775,  -742,  -742,  -742,  -742,
    -742,   172,   195,   703,  -742,  -742,  -742,  -742,  -742,   816,
    -742,  3742,   712,  3896,  -742,   713,  -742,  -742,  4050,  -742
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
     466,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   417,     0,     0,
     327,     0,   332,   333,     5,   353,   399,    52,   334,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     298,     0,     0,     0,     0,     0,     0,   313,     0,     0,
       0,     0,     0,     0,    81,    87,     0,     0,   338,   340,
     341,   339,   335,   336,    32,    33,    34,   343,     0,   342,
     337,     0,    83,     0,   466,     0,    58,    25,   410,   355,
       3,     0,     7,    30,     8,     9,    74,    75,     0,     0,
       0,   230,   368,    76,   392,     0,   358,   292,     0,   367,
       0,   369,     0,   395,     0,   391,   373,   390,   393,   398,
       0,   280,   354,   438,   439,   448,   456,     5,   313,     0,
      76,   429,   430,     0,   432,   433,   295,   445,     0,   264,
     265,   266,   267,   313,     0,     0,   314,     0,   245,   371,
       0,   247,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   291,     0,   422,     0,   361,     0,     0,   314,   320,
     330,   321,     0,   323,   393,     0,   232,     0,   290,     0,
      31,     0,   209,     0,     0,   210,     0,     0,     0,    42,
       0,    44,     0,     0,     0,    46,   368,     0,   369,    25,
       0,     0,    18,     0,    17,   151,     0,     0,   150,   156,
       0,    76,    82,    84,     0,     0,     0,     0,   416,   417,
       0,     4,     0,   357,    62,   186,   548,   230,     0,     0,
       0,     0,   142,     0,    15,   466,    85,    88,    63,    77,
       0,   401,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
      53,   244,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,     0,   401,     0,   401,
       0,   411,   394,   446,   449,     0,   470,     0,     0,   476,
     483,     0,   316,     0,     0,   426,   370,     0,   551,   362,
     418,     0,   316,     0,   142,   223,     0,     0,   394,   328,
       0,     0,     0,    51,     0,     0,     0,   211,   213,   368,
     369,     0,     0,     0,    43,    45,    61,     0,    47,    48,
       0,    60,    20,     0,     0,    14,     0,   152,   369,     0,
      49,     0,     0,    50,     0,     0,    71,    73,   434,     0,
       0,     0,     0,   414,     0,   413,     0,   356,     0,    11,
       4,   142,     0,   221,   277,     0,    35,    24,    26,    27,
      28,     0,     6,     0,     0,   140,   368,   369,     0,    85,
       0,    90,     0,     0,     0,   137,   402,     0,   436,   385,
     383,     0,   250,   252,   251,     0,     0,   248,   249,   253,
     255,   254,   270,   271,   268,   269,   272,   273,   274,   275,
     262,   263,   257,   258,   256,   259,   260,   261,   276,     0,
       0,     0,   225,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,     0,   437,   386,     0,   408,     0,
     404,   382,   403,   407,     0,     0,   447,   468,   444,   453,
     452,   440,   450,   442,     0,   457,     0,     0,   431,   482,
       0,     0,   467,   315,     0,     0,     0,   421,     0,   420,
     315,   385,     0,   386,   325,   329,     0,   208,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     359,     0,     0,     0,   345,     0,   344,    23,   351,     0,
       0,    19,    16,     0,   149,   157,   154,   137,     0,     0,
       0,   427,   428,    10,   416,   416,     0,   293,   142,    13,
       0,     0,   187,   401,     0,   220,   219,   222,   231,   215,
       0,   400,   145,   305,   137,     0,    90,     0,     0,   466,
     317,    86,     0,     0,    89,    92,   159,   137,   139,     0,
     125,     0,   138,   389,   142,   142,   384,   279,     0,   550,
     227,   226,     0,     0,   312,   142,   142,   388,     0,   142,
     381,   380,   375,   401,     0,   396,   397,     0,     0,     0,
     451,   441,     0,   479,   483,   477,   478,   425,   424,     0,
     331,   322,    25,   117,     0,    25,   115,    38,     0,   212,
      94,     0,    94,    96,   104,     0,    25,   102,    57,   110,
     110,    41,   348,   349,   366,     0,   361,   359,     0,   347,
       0,     0,    21,   153,     0,     0,    72,    54,   435,     0,
     412,     0,     0,    12,   307,     0,   382,   214,   401,   218,
       0,     0,   139,     0,     0,   466,   355,   141,     0,   368,
     369,    22,     0,     0,   319,   549,    91,   159,     0,   192,
       0,   299,   137,     0,   129,     0,     0,   278,   229,     0,
       0,   409,     0,   401,   401,   372,     0,     0,   443,   469,
       0,   461,   459,   458,     0,     0,   471,     0,   419,     0,
     324,   119,   121,     0,     0,   210,     0,     0,    97,     0,
       0,     0,   110,     0,   110,     0,     0,   552,   362,   360,
       0,   346,   352,     0,   155,   299,   415,     0,   224,   306,
     217,   376,     0,    29,   148,     0,   357,   548,     0,   484,
     318,   192,    93,     0,     0,   199,   200,   201,   198,   197,
     196,   191,   487,   524,   528,    80,   158,   162,     0,     0,
     190,   194,     0,     0,     0,     0,   126,     0,   130,     0,
     308,   311,   309,   310,   379,     0,     0,   374,   405,   406,
     454,     0,   464,   480,   481,   423,   326,   123,     0,     0,
      36,    39,     0,     0,    95,     0,     0,   105,     0,     0,
       0,     0,     0,     0,   106,   365,   364,   350,     0,     0,
       0,   216,   356,   128,   159,    79,     0,     0,   166,     0,
       0,     0,   204,     0,   163,   195,     0,   161,    25,     0,
      25,     0,   133,     0,   132,   377,   378,   455,   462,   465,
       0,     0,     0,     0,     0,   122,   116,     0,    25,   100,
      56,    55,   103,     0,   108,     0,   113,   114,    25,   107,
       0,     0,    25,   228,   192,     0,     0,   168,   170,   165,
     498,   466,   494,   495,   507,   499,   493,     0,   503,   504,
     497,     0,   489,   470,   472,     0,   531,   532,     0,     0,
     530,     0,     0,   160,    76,     0,     0,     0,   303,     0,
       0,   134,     0,   131,     0,   460,     0,    25,     0,     0,
      25,    98,    40,     0,   109,    25,   112,   363,     0,     0,
       0,   207,   167,     5,     0,   171,   172,     0,     0,   180,
       0,     0,   492,     0,   496,   500,     0,   488,   521,   526,
       0,     0,   525,   474,   544,   545,   474,   537,     0,   538,
     529,   205,   202,     0,     0,    78,   304,     0,   300,   296,
       0,   136,   463,     0,   124,    37,     0,     0,     0,   111,
      25,   297,   486,   169,   173,   174,   184,     0,   175,     0,
     511,   509,   507,   508,   515,   516,   514,     0,     0,     0,
     490,     0,   523,   483,   472,   547,     0,   546,     0,     0,
     533,   540,   541,   539,     0,     0,   206,     0,   301,   135,
       0,   118,     0,   101,     0,     0,   183,   176,   177,   181,
     513,     0,   506,   517,   501,   520,   519,   522,   491,   473,
     527,   483,   542,   543,   535,   536,   534,   203,   137,   302,
      25,    99,    65,   182,     0,   512,   510,     0,     0,     0,
     475,     0,   120,     0,    70,    64,    66,   178,   505,   518,
     502,     0,     0,     0,    59,    67,   188,    25,   164,     0,
      25,     0,     0,     0,   189,     0,    69,    25,     0,    68
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -742,  -742,  -179,    -5,  -742,  -742,   562,  -742,  -174,  -742,
      11,  -742,  -742,  -742,  -156,  -742,  -742,   390,     2,     5,
    -128,  -742,  -742,  -742,   511,  -742,  -742,   359,   349,   290,
     198,  -742,   113,  -742,  -742,  -742,  -551,    58,  -742,  -742,
    -742,  -742,  -742,  -509,   235,  -742,  -504,  -251,  -742,  -742,
     570,  -742,  -596,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
     -15,  -742,  -742,  -742,  -742,  -742,  -742,  -410,  -742,  -742,
    -742,  -742,  -741,  -742,  -742,  -742,  -468,  -742,   379,  -742,
    -742,  -742,   -79,   207,    -2,   199,  -742,  -742,    93,  -387,
     654,  -742,  -742,  -742,  -742,  -742,  -165,   -86,  -742,  -742,
     296,   299,  -742,  1081,   710,  -354,   399,  1064,  -742,  -498,
    -742,  -742,   281,  -224,  -742,  1026,  -742,  -742,    -8,    -1,
    -742,  -243,  -303,  -742,  -742,   -12,   405,   411,   715,  -742,
    -742,  -742,  -742,   644,  -742,  -742,  -742,  -742,  -445,  -742,
    -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,  -742,
     -83,  -742,  -742,  -742,    54,  -742,   -59,  -742,    28,  -742,
    -579,    19,  -582,  -742,  -742,  -742,  -742,    30,  -742,  -742,
    -742,   -35,  -742,   -61,  -742,  -742,  -742,  -742,  -742,  -742,
    -742,   147,  -538,  -742
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    89,    90,   203,   204,    91,   229,   377,
     378,    93,  1054,  1055,  1056,  1064,   355,   356,   379,   380,
     240,    96,    97,    98,   391,    99,   393,   553,   554,   707,
     612,   912,   850,   618,   332,   621,   713,   858,   607,   702,
     787,   790,   843,   559,   657,   560,   561,   384,   385,   207,
     208,   210,   669,   756,   894,   757,   817,   869,   924,   925,
     926,   927,  1017,   928,   929,   930,  1015,   100,  1068,   758,
     759,   760,   761,   823,   762,   181,   326,   327,   535,   536,
     537,   538,   101,   102,   130,   765,   899,   104,   105,   562,
     170,   171,   601,   700,   178,   315,   106,   624,   508,   107,
     625,   310,   626,   108,   109,   305,   110,   111,   685,   539,
     580,   581,   582,   112,   113,   114,   115,   116,   117,   118,
     119,   397,   451,   452,   453,   120,   364,   365,   164,   165,
     121,   359,   122,   123,   124,   125,   461,   126,   294,   295,
     462,   589,   837,   296,   465,   693,   782,   781,   904,   840,
     137,   138,   587,   588,   466,   467,   939,   940,   995,   996,
     300,   594,   472,   814,   920,   819,   881,   882,   883,   989,
    1049,   934,   987,   988,  1024,   992,  1028,   820,   885,   821,
     889,   947,   948,   949
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   226,   297,   551,    94,   555,   227,    95,   635,   689,
     146,   146,   696,    92,   484,   866,   175,   590,   399,   825,
     173,   573,   608,   168,   233,   340,   429,   174,   998,   542,
     322,   344,   349,   352,   444,   826,   619,   647,   856,   892,
     658,   936,   368,   941,   447,   495,   454,   518,   670,   999,
     202,   520,   183,   525,  -143,   211,   525,  -146,   205,   289,
     957,    36,   446,   482,   450,     3,   289,   394,    36,   715,
     448,   741,    36,   222,    10,   343,   223,   533,   146,   399,
     446,   831,  -314,   354,   648,   235,   127,   133,   231,   481,
    -144,   127,   483,   450,   510,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   177,   147,   147,
     179,   673,   897,   398,   289,    36,  1007,   184,   943,   292,
     531,   169,   597,   583,   598,   832,   211,   289,  1001,   445,
     185,    36,   236,  -371,  -371,   231,   474,   691,    36,   534,
     302,   692,   475,  -387,    36,  1002,   534,  -316,  1003,   180,
    -387,   647,   389,   231,   231,   674,   898,   146,   801,   802,
    1008,   799,   312,   803,   209,   555,   220,   206,   767,   186,
     291,   201,   506,   395,   318,  -383,   147,    88,   290,   449,
     268,    88,   801,   802,   193,   290,   506,   777,   867,   868,
      50,   530,   620,   857,   269,   221,   342,   234,   457,   458,
    1000,   146,   194,   323,   345,   350,   353,   738,   827,   146,
     146,   146,   893,   146,   937,   367,   942,   496,   864,   519,
     459,   271,   272,   521,    88,   526,  -143,   103,   726,  -146,
     401,   646,   958,   290,   187,  1016,   944,   793,   945,   946,
      88,   400,   584,  -384,   231,   804,   290,    88,  -314,   231,
     888,   507,   231,    88,   231,   147,   175,   231,  -317,   196,
     173,   199,  -144,   168,   127,   515,   188,   174,   127,   859,
     923,   212,   369,   370,   401,   232,   401,   642,   371,   611,
     232,   742,   213,   528,   214,   400,   215,   400,  -316,  -315,
     645,   401,   401,   216,   231,   231,   473,   734,  -319,   147,
     217,   401,   400,   400,   401,   401,   480,   147,   147,   147,
     450,   147,   400,   675,   676,   400,   400,   810,   463,   558,
     371,   127,   218,    36,   679,   680,   464,   127,   682,   506,
     470,   471,   504,   506,   506,   506,   808,   839,   103,   202,
     686,   547,   219,   785,   548,   547,   504,   547,   548,  -314,
     548,   570,   227,  1066,  1067,   231,   127,   818,   143,   549,
     230,   169,  -315,   549,   237,   549,   103,   146,   231,   238,
      94,  -127,  -318,    95,   886,   887,   239,  -316,   146,    92,
     506,   232,   558,   231,   241,   550,  -315,   550,   888,   242,
     550,   285,   231,   329,   528,   287,   786,   286,   144,   288,
     566,   145,   293,  1034,   547,   732,    50,   548,   614,   371,
      28,  1029,   622,   623,   148,   151,    84,  1031,   528,   127,
    1035,    36,   549,  1036,   220,   146,   788,   789,   701,   299,
     505,   704,    88,   265,   266,   267,   469,   268,   269,   386,
     775,   776,   711,   469,   505,   301,   470,   471,   303,  1050,
     304,   269,   308,   694,   695,   309,   143,   841,   842,   661,
    1032,  1033,   506,   311,   231,   147,   665,   313,   314,   506,
     316,   146,   317,   146,   331,   450,   147,   324,   336,   922,
     337,   931,   800,   801,   802,   338,   351,   146,   146,   504,
     372,   382,   386,   504,   504,   504,   144,   603,   629,   145,
     606,   745,   746,   747,   748,   749,   750,   617,   853,   801,
     802,   361,   550,   146,    84,   146,   373,   388,   390,   146,
     146,   386,   401,   147,   456,   127,   392,    36,   103,  1051,
      88,   395,    94,   400,   488,    95,   491,   494,   931,   656,
     504,    92,   490,   664,   492,   506,  -193,   550,   724,   511,
     516,   506,   550,   506,   522,   745,   746,   747,   748,   749,
     750,   517,   143,   524,   523,   527,   543,   146,   544,   147,
     545,   147,   737,   540,   552,   127,   574,    36,   386,   556,
     591,   557,   127,   563,    36,   147,   147,   505,   564,   565,
    1018,   505,   505,   505,   262,   263,   264,   265,   266,   267,
     569,   268,   144,   575,   506,   145,   146,   576,   577,   579,
     585,   147,   143,   147,   592,   269,   593,   147,   147,   143,
      84,   595,   504,   721,   797,   627,   596,   615,   600,   504,
     805,   628,   806,   224,   630,   631,    88,   632,   505,   127,
     634,    36,   637,   641,   644,   534,   146,   663,   227,   736,
     650,   667,   144,   668,   896,   145,   900,  1057,   740,   144,
     671,   672,   145,   550,   678,   147,   683,   550,   506,   684,
      84,   688,   699,   705,   913,  1069,   143,    84,   710,   712,
     714,   706,   716,   834,   916,   717,    88,   401,   919,   718,
     722,   346,   146,    88,   723,   506,   725,   729,   400,   103,
     506,   146,   103,   730,   147,   504,   733,   738,   739,   103,
     764,   504,   735,   504,   763,   768,   166,   769,   550,   167,
     505,   770,   778,   783,   771,   772,   506,   505,   784,   773,
     812,   774,  -549,   964,    84,   386,   967,   506,   795,   550,
     816,   969,   791,   127,   147,    36,   813,   903,   796,   807,
      88,   659,   811,   822,   828,   829,   830,   824,   833,   844,
     846,   847,   835,   836,   504,   852,   953,   854,   860,   861,
     862,   386,   386,   863,   917,   865,   884,   891,   895,   921,
     143,   901,   386,   386,   902,   905,   386,   906,   932,   506,
     147,   907,   908,   914,   918,   506,  1014,   362,   935,   147,
     845,   950,   933,   505,   954,   951,   849,   849,   952,   505,
     956,   505,   960,   970,   168,   962,   961,   965,   972,  -179,
     144,   973,   975,   145,  1023,   976,  1026,   977,   504,   978,
     979,  -548,   991,   994,  1004,  -147,  1005,  1013,    84,   506,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,  1019,   127,    88,   504,  -512,  1021,   911,  1038,
     504,   550,   505,   550,  -510,  1027,  1052,  1022,  1006,  1039,
    1040,  1041,  1044,  1043,  1009,  -185,  1048,   999,  -371,  -371,
    1053,  1058,  1060,  1059,   127,  1070,   504,  1061,  1062,  1063,
     143,  1072,  1075,  1071,   103,  1077,  1073,   504,   103,  1065,
     546,   666,   709,  1078,   794,   662,   512,   766,   636,   851,
     974,   103,   880,   915,   103,   649,   347,   103,  1037,   514,
     550,   143,   428,   720,   809,   719,   505,   731,   168,   639,
     166,   168,   743,   167,   366,  1030,   640,   938,   744,   460,
     745,   746,   747,   748,   749,   750,   751,  1020,    84,   504,
     980,   981,   982,   505,   983,   504,   984,   985,   505,   993,
    1047,   166,   103,   127,   167,   103,   990,   103,   890,     0,
       0,     0,   550,     0,   997,     0,     0,  1011,     0,    84,
       0,   980,  1045,   982,   505,  1046,     0,   984,   985,     0,
       0,     0,   752,   753,   754,   505,     0,     0,     0,   504,
     143,     0,     0,     0,     0,     0,   870,  -147,     0,     0,
       0,     0,   103,   755,     0,     0,   168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,   880,
       0,     0,     0,   550,     0,     0,     0,     0,     0,   550,
     166,   150,   150,   167,     0,     0,     0,   505,     0,     0,
     103,     0,     0,   505,   172,     0,     0,   550,   871,     0,
     872,   873,   874,   875,   876,   877,   878,   879,     0,   103,
       0,   103,     0,     0,     0,     0,   103,     0,     0,   149,
     149,     0,     0,     0,     0,   131,   132,     0,   134,   135,
     136,     0,   139,   140,   141,   142,     0,   505,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   163,   150,
     176,     0,     0,     0,   986,     0,   198,     0,     0,     0,
       0,   182,     0,     0,     0,     0,     0,     0,   190,   192,
       0,     0,   743,   197,     0,   200,     0,     0,   744,     0,
     745,   746,   747,   748,   749,   750,   751,   225,     0,   243,
     244,   245,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,     0,   246,   228,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   150,   268,
    -371,  -371,   752,   753,   754,     0,     0,     0,     0,     0,
       0,     0,     0,   269,     0,     0,     0,     0,     0,     0,
       0,   743,     0,   815,   298,     0,     0,   744,     0,   745,
     746,   747,   748,   749,   750,   751,   306,     0,    32,    33,
    1025,     0,   150,     0,     0,     0,     0,     0,    38,     0,
     150,   150,   150,     0,   150,     0,     0,     0,     0,     0,
     330,     0,     0,     0,     0,     0,     0,     0,   320,     0,
     321,     0,     0,     0,     0,   325,   328,   197,     0,   333,
     348,   752,   753,   754,     0,     0,     0,     0,   357,   358,
     360,     0,   363,     0,     0,     0,    68,    69,    70,    71,
      72,    73,  -485,     0,   172,     0,   387,     0,     0,     0,
     163,    77,     0,     0,     0,     0,     0,     0,    79,    80,
       0,   381,     0,   197,     0,     0,     0,     0,     0,     0,
     339,     0,   396,   541,   402,   403,   404,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   387,
     396,     0,     0,     0,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   197,     0,   396,     0,
     396,   455,     0,     0,     0,     0,     0,     0,   387,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   477,     0,
     479,     0,     0,     0,     0,   197,     0,     0,   150,     0,
       0,     0,     0,   487,     0,     0,     0,     0,     0,   150,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,     0,     0,     0,     0,     0,   513,     0,     0,
       0,     0,     0,     0,     0,   387,   532,     0,     0,   243,
     244,   245,     0,     0,     0,     0,     0,   306,  -371,  -371,
       0,     0,   197,     0,     0,   246,   150,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,     0,   268,
       0,     0,     0,     0,     0,     0,   567,     0,     0,     0,
     493,     0,     0,   269,   571,     0,     0,     0,     0,     0,
      32,    33,   150,     0,   150,     0,     0,     0,     0,     0,
      38,     0,   228,     0,     0,     0,     0,     0,   150,   150,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     578,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     306,     0,   306,     0,   150,     0,   150,     0,     0,     0,
     150,   150,     0,     0,     0,     0,   610,   613,    68,    69,
      70,    71,    72,    73,     0,     0,     0,     0,     0,   604,
       0,   328,   609,    77,     0,     0,     0,     0,     0,     0,
      79,    80,   357,     0,   638,     0,     0,     0,   363,   363,
       0,     0,   387,     0,     0,     0,     0,     0,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   660,   197,
       0,     0,     0,   586,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,     0,     0,   387,   387,
       0,     0,     0,     0,     0,     0,   225,   150,     0,   387,
     387,     0,     0,   387,     0,   197,   197,     0,     0,   677,
       0,     0,     0,     0,     0,     0,   197,   197,     0,     0,
     197,     0,     0,     0,   396,   687,     0,     0,     0,     0,
     690,   243,   244,   245,     0,   708,     0,   150,     0,     0,
     698,     0,     0,     0,     0,     0,     0,   246,     0,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
       0,   268,     0,     0,     0,   306,     0,     0,     0,     0,
       0,     0,   728,   150,     0,   269,     0,     0,     0,   396,
       0,     0,   150,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,     0,     0,   396,   396,     0,     0,     0,     0,
     613,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,   328,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,   228,     0,
      32,    33,    34,    35,    36,     0,    37,     0,     0,     0,
      38,    39,    40,    41,    42,     0,    43,     0,    44,     0,
      45,     0,     0,    46,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,     0,   633,    54,    55,    56,    57,
      58,    59,     0,     0,     0,     0,    60,    61,    62,    63,
      64,    65,   838,     0,     0,     0,    66,    67,    68,    69,
      70,    71,    72,    73,     0,     0,    74,    75,    76,     0,
       0,     0,   855,    77,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,     0,    83,     0,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
      86,    87,   529,    88,     0,   909,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,   963,    46,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,    55,    56,    57,    58,    59,     0,     0,     0,
       0,    60,    61,    62,    63,    64,    65,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    74,    75,    76,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,     0,
      83,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,    86,    87,   643,    88,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,     0,     0,    54,    55,    56,    57,    58,
      59,     0,     0,     0,     0,    60,    61,    62,    63,    64,
      65,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,    74,    75,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,    78,    79,
      80,    81,    82,     0,    83,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
      87,     0,    88,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,    56,    57,    58,    59,     0,     0,     0,     0,    60,
      61,    62,   375,    64,    65,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,    74,
      75,    76,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,   129,    79,    80,    81,    82,     0,    83,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,    86,    87,   376,    88,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,    56,    57,    58,    59,     0,
       0,     0,     0,    60,    61,    62,   375,    64,    65,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    74,    75,    76,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,   129,    79,    80,    81,
      82,     0,    83,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    86,    87,   509,
      88,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
       0,    38,    39,    40,    41,    42,   792,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,    56,
      57,    58,    59,     0,     0,     0,     0,    60,    61,    62,
     375,    64,    65,     0,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,    74,    75,    76,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
     129,    79,    80,    81,    82,     0,    83,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,    86,    87,     0,    88,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,   798,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,    56,    57,    58,    59,     0,     0,     0,
       0,    60,    61,    62,   375,    64,    65,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    74,    75,    76,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,   129,    79,    80,    81,    82,     0,
      83,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,    86,    87,     0,    88,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,    56,    57,    58,
      59,     0,     0,     0,     0,    60,    61,    62,   375,    64,
      65,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,    74,    75,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,   129,    79,
      80,    81,    82,     0,    83,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
      87,   955,    88,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,    56,    57,    58,    59,     0,     0,     0,     0,    60,
      61,    62,   375,    64,    65,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,    74,
      75,    76,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,   129,    79,    80,    81,    82,     0,    83,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,    86,    87,   959,    88,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,   968,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,    56,    57,    58,    59,     0,
       0,     0,     0,    60,    61,    62,   375,    64,    65,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    74,    75,    76,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,   129,    79,    80,    81,
      82,     0,    83,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    86,    87,     0,
      88,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,    56,
      57,    58,    59,     0,     0,     0,     0,    60,    61,    62,
     375,    64,    65,     0,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,    74,    75,    76,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
     129,    79,    80,    81,    82,     0,    83,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,    86,    87,   971,    88,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,     0,    38,    39,    40,    41,    42,
       0,    43,  1012,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,    56,    57,    58,    59,     0,     0,     0,
       0,    60,    61,    62,   375,    64,    65,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    74,    75,    76,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,   129,    79,    80,    81,    82,     0,
      83,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,    86,    87,     0,    88,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,    56,    57,    58,
      59,     0,     0,     0,     0,    60,    61,    62,   375,    64,
      65,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,    74,    75,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,   129,    79,
      80,    81,    82,     0,    83,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
      87,  1042,    88,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,    56,    57,    58,    59,     0,     0,     0,     0,    60,
      61,    62,   375,    64,    65,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,    74,
      75,    76,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,   129,    79,    80,    81,    82,     0,    83,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,    86,    87,  1074,    88,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,    56,    57,    58,    59,     0,
       0,     0,     0,    60,    61,    62,   375,    64,    65,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    74,    75,    76,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,   129,    79,    80,    81,
      82,     0,    83,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    86,    87,  1076,
      88,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,    56,
      57,    58,    59,     0,     0,     0,     0,    60,    61,    62,
     375,    64,    65,     0,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,    74,    75,    76,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
     129,    79,    80,    81,    82,     0,    83,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
       0,    86,    87,  1079,    88,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,    56,    57,    58,    59,     0,     0,     0,
       0,    60,    61,    62,   375,    64,    65,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    74,    75,    76,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,   129,    79,    80,    81,    82,     0,
      83,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,   602,    86,    87,     0,    88,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,    56,    57,     0,
       0,     0,     0,     0,     0,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,    74,    75,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,   129,    79,
      80,    81,     0,     0,    83,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   605,    86,
      87,     0,    88,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,    37,
       0,     0,     0,    38,    39,    40,    41,    42,     0,    43,
       0,    44,     0,    45,     0,     0,    46,     0,     0,     0,
      47,    48,    49,    50,     0,    52,    53,     0,     0,    54,
       0,    56,    57,     0,     0,     0,     0,     0,     0,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,    74,
      75,    76,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,   129,    79,    80,    81,     0,     0,    83,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,   616,    86,    87,     0,    88,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,     0,     0,    32,    33,    34,
      35,    36,     0,    37,     0,     0,     0,    38,    39,    40,
      41,    42,     0,    43,     0,    44,     0,    45,     0,     0,
      46,     0,     0,     0,    47,    48,    49,    50,     0,    52,
      53,     0,     0,    54,     0,    56,    57,     0,     0,     0,
       0,     0,     0,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,    74,    75,    76,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,   129,    79,    80,    81,
       0,     0,    83,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,   848,    86,    87,     0,
      88,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,     0,
       0,    32,    33,    34,    35,    36,     0,    37,     0,     0,
       0,    38,    39,    40,    41,    42,     0,    43,     0,    44,
       0,    45,     0,     0,    46,     0,     0,     0,    47,    48,
      49,    50,     0,    52,    53,     0,     0,    54,     0,    56,
      57,     0,     0,     0,     0,     0,     0,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,    66,    67,    68,
      69,    70,    71,    72,    73,     0,     0,    74,    75,    76,
       0,     0,     0,     0,    77,     0,     0,     0,     0,     0,
     129,    79,    80,    81,     0,     0,    83,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
     910,    86,    87,     0,    88,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,    37,     0,     0,     0,    38,    39,    40,    41,    42,
       0,    43,     0,    44,     0,    45,     0,     0,    46,     0,
       0,     0,    47,    48,    49,    50,     0,    52,    53,     0,
       0,    54,     0,    56,    57,     0,     0,     0,     0,     0,
       0,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,    72,    73,     0,
       0,    74,    75,    76,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,   129,    79,    80,    81,     0,     0,
      83,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,     0,    86,    87,     0,    88,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,     0,     0,     0,    38,
      39,    40,    41,    42,     0,    43,     0,    44,     0,    45,
       0,     0,    46,     0,     0,     0,    47,    48,    49,    50,
       0,    52,    53,     0,     0,    54,     0,    56,    57,     0,
       0,     0,     0,     0,     0,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    66,    67,    68,    69,    70,
      71,    72,    73,     0,     0,    74,    75,    76,     0,     0,
       0,     0,    77,     0,     0,     0,     0,     0,   129,    79,
      80,    81,     0,     0,    83,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,     0,    86,
      87,     0,    88,   162,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,  -371,  -371,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       4,     5,     6,     7,     8,     0,    77,     0,     0,     9,
       0,     0,   129,    79,    80,    81,  -550,  -550,  -550,  -550,
     260,   261,   262,   263,   264,   265,   266,   267,     0,   268,
      84,     0,     0,    10,     0,     0,     0,     0,     0,    11,
      12,    85,     0,   269,     0,    13,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    32,    33,
     127,    35,    36,     0,     0,     0,     0,     0,    38,    39,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,    50,   268,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,   269,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     4,     5,     6,     7,     8,
       0,    77,     0,     0,     9,     0,     0,   129,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    85,     0,   189,     0,
      13,    88,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,     0,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,    50,   268,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,   269,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       4,     5,     6,     7,     8,     0,    77,     0,     0,     9,
       0,     0,   129,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,    10,     0,     0,     0,     0,     0,    11,
      12,    85,     0,   191,     0,    13,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    32,    33,
     127,    35,    36,     0,     0,     0,     0,     0,    38,    39,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,   269,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     4,     5,     6,     7,     8,
       0,    77,     0,     0,     9,     0,     0,   129,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    85,     0,   195,     0,
      13,    88,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,  -550,  -550,  -550,  -550,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,   269,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       4,     5,     6,     7,     8,     0,    77,     0,     0,     9,
       0,     0,   129,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   383,     0,
      84,     0,     0,    10,     0,     0,     0,     0,     0,    11,
      12,    85,   319,     0,     0,    13,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    32,    33,
     127,    35,    36,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     4,     5,     6,     7,     8,
       0,    77,     0,     0,     9,     0,     0,   129,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,   405,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    85,     0,     0,     0,
      13,    88,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       4,     5,     6,     7,     8,     0,    77,     0,     0,     9,
       0,     0,   129,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   430,     0,
      84,     0,     0,    10,     0,     0,     0,     0,     0,    11,
      12,    85,     0,     0,     0,    13,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    32,    33,
     127,    35,    36,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     4,     5,     6,     7,     8,
       0,    77,     0,     0,     9,     0,     0,   129,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   476,     0,    84,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,   431,     0,     0,     0,
      13,    88,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       4,     5,     6,     7,     8,     0,    77,     0,     0,     9,
       0,     0,   129,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   478,     0,
      84,     0,     0,    10,     0,     0,     0,     0,     0,    11,
      12,    85,     0,     0,     0,    13,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    32,    33,
     127,    35,    36,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     4,     5,     6,     7,     8,
       0,    77,     0,     0,     9,     0,     0,   129,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    85,     0,     0,     0,
      13,    88,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       4,     5,     6,     7,     8,     0,    77,     0,     0,     9,
       0,     0,   129,    79,    80,    81,     0,     0,   572,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,     0,
      84,     0,     0,    10,     0,     0,     0,     0,     0,    11,
      12,    85,     0,     0,     0,    13,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    32,    33,
     127,    35,    36,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    66,   652,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     4,     5,     6,     7,     8,
       0,    77,     0,     0,     9,     0,     0,   653,    79,    80,
     654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   697,     0,   655,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    85,     0,     0,     0,
      13,    88,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       4,     5,     6,     7,     8,     0,    77,     0,     0,     9,
       0,     0,   129,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,     0,     0,    10,     0,     0,     0,     0,     0,    11,
      12,    85,     0,     0,     0,    13,    88,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,     0,     0,     0,     0,    32,    33,
     127,    35,    36,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   128,     0,     0,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    66,    67,    68,    69,    70,    71,
      72,    73,     0,     0,     0,     4,     5,     6,     7,     8,
       0,    77,     0,     0,     9,     0,     0,   129,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,     0,     0,    10,     0,
       0,     0,     0,     0,    11,    12,    85,     0,     0,     0,
      13,    88,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,     0,
       0,     0,     0,    32,    33,   127,    35,    36,     0,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,   129,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      84,   243,   244,   245,     0,     0,     0,     0,     0,     0,
       0,   727,     0,     0,     0,     0,    88,   246,     0,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
       0,   268,   243,   244,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,     0,   246,     0,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   243,   244,   245,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,     0,     0,   246,
       0,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,   268,   243,   244,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,     0,     0,
     246,   856,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   243,   244,   245,     0,     0,
       0,     0,     0,     0,     0,   681,     0,     0,   269,     0,
       0,   246,     0,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,     0,   268,   243,   244,   245,     0,
       0,     0,     0,     0,     0,     0,   779,     0,     0,   269,
       0,     0,   246,     0,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   243,   244,   245,
       0,     0,     0,     0,     0,     0,     0,   780,     0,     0,
     269,     0,     0,   246,     0,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,   243,   244,
     245,     0,     0,     0,     0,     0,   857,     0,     0,     0,
       0,   269,     0,     0,   246,     0,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,   243,
     244,   245,     0,     0,     0,     0,     0,   270,     0,     0,
       0,     0,   269,     0,     0,   246,     0,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,     0,   268,
     243,   244,   245,     0,     0,     0,     0,     0,   334,     0,
       0,     0,     0,   269,     0,     0,   246,     0,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,     0,
     268,   243,   244,   245,     0,     0,     0,     0,     0,   335,
       0,     0,     0,     0,   269,     0,     0,   246,     0,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
       0,   268,   243,   244,   245,     0,     0,     0,     0,     0,
     341,     0,     0,     0,     0,   269,     0,     0,   246,     0,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,   243,   244,   245,     0,     0,     0,     0,
     374,     0,     0,     0,     0,     0,   269,     0,     0,   246,
       0,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,   268,   243,   244,   245,     0,     0,     0,
       0,   468,     0,     0,     0,     0,     0,   269,     0,     0,
     246,     0,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   268,   243,   244,   245,     0,     0,
       0,     0,   485,     0,     0,     0,     0,     0,   269,     0,
       0,   246,     0,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,     0,   268,   243,   244,   245,     0,
       0,     0,     0,   486,     0,     0,     0,     0,     0,   269,
       0,     0,   246,     0,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,     0,   268,   243,   244,   245,
       0,     0,     0,     0,   489,     0,     0,     0,     0,     0,
     269,     0,     0,   246,     0,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,     0,   268,     0,     0,
       0,     0,     0,   498,   499,   497,     0,     0,     0,     0,
       0,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   500,     0,     0,     0,     0,   243,
     244,   245,    32,    33,   127,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,   246,   703,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,     0,   268,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,     0,     0,     0,   966,     0,   501,
      68,    69,    70,    71,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    77,     0,     0,     0,     0,
       0,   502,    79,    80,   503,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1010,    84,
       0,   243,   244,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,   246,     0,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
       0,   268,   243,   244,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,     0,   246,   568,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,     0,     0,     0,
       0,   243,   244,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   246,   599,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
       0,   268,   244,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   269,     0,   246,     0,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     245,   268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   246,   269,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   269,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,     0,   268,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   269,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,     0,   268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,   268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269
};

static const yytype_int16 yycheck[] =
{
       2,    84,   130,   390,     2,   392,    85,     2,   517,   588,
      15,    16,   594,     2,   317,     8,    28,   462,   242,   760,
      28,   431,   490,    28,     8,   199,   269,    28,     8,   383,
       8,     8,     8,     8,   285,     8,    26,   535,    26,     8,
     544,     8,   221,     8,   287,     8,   289,     8,   557,    29,
      55,     8,    41,     8,     8,    57,     8,     8,    75,    63,
       8,    75,   286,   314,   288,     0,    63,    73,    75,   620,
      73,   667,    75,    78,    36,    93,    81,    63,    83,   303,
     304,    31,   147,   211,    63,    26,    73,   179,   153,   313,
       8,    73,   316,   317,    93,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   179,    15,    16,
     179,    31,    31,    73,    63,    75,    31,   179,    47,   120,
     371,    28,   476,    63,   478,    75,   128,    63,    25,    73,
     179,    75,    73,    51,    52,   153,    73,   182,    75,   125,
     145,   186,    73,   147,    75,    42,   125,   147,    45,    26,
     147,   649,   235,   153,   153,    75,    75,   162,    96,    97,
      75,   712,   167,   714,    75,   552,   153,   184,   672,   179,
     184,   153,   337,   179,   175,   179,    83,   184,   182,   182,
      49,   184,    96,    97,    73,   182,   351,   685,   181,   182,
     101,   370,   182,   181,    63,   182,   201,   181,   160,   161,
     180,   206,    73,   181,   181,   181,   181,   157,   181,   214,
     215,   216,   181,   218,   181,   220,   181,   180,   814,   180,
     182,    51,    52,   180,   184,   180,   180,   229,   180,   180,
     242,   534,   180,   182,   179,   976,   165,   705,   167,   168,
     184,   242,   182,   179,   153,   183,   182,   184,   147,   153,
     179,   337,   153,   184,   153,   162,   268,   153,   157,    52,
     268,   182,   180,   268,    73,   351,   179,   268,    73,   183,
      73,   121,   181,   182,   286,   179,   288,   528,   179,    31,
     179,   668,   121,   179,   179,   286,   179,   288,   147,   147,
     533,   303,   304,   179,   153,   153,   301,   651,   157,   206,
     179,   313,   303,   304,   316,   317,   311,   214,   215,   216,
     534,   218,   313,   564,   565,   316,   317,   727,    38,   128,
     179,    73,   179,    75,   575,   576,    46,    73,   579,   494,
     168,   169,   337,   498,   499,   500,   723,   782,   340,   344,
     583,   150,   179,   697,   153,   150,   351,   150,   153,   147,
     153,   430,   431,   181,   182,   153,    73,   744,   110,   168,
     182,   268,   147,   168,    73,   168,   368,   372,   153,   181,
     368,   180,   157,   368,   165,   166,    31,   147,   383,   368,
     545,   179,   128,   153,    63,   390,   147,   392,   179,   147,
     395,   179,   153,   186,   179,    63,   699,   147,   150,   125,
     401,   153,   159,    25,   150,   648,   101,   153,   494,   179,
      64,   993,   498,   499,    15,    16,   168,   996,   179,    73,
      42,    75,   168,    45,   153,   430,    68,    69,   602,    73,
     337,   605,   184,    45,    46,    47,   158,    49,    63,   232,
     683,   684,   616,   158,   351,   153,   168,   169,   147,  1031,
     147,    63,   185,   168,   169,     8,   110,    68,    69,   545,
     998,   999,   627,   153,   153,   372,   549,   147,   179,   634,
     147,   476,   125,   478,    73,   699,   383,    85,   181,   866,
      13,   868,    95,    96,    97,   181,    13,   492,   493,   494,
     126,    73,   285,   498,   499,   500,   150,   486,   503,   153,
     489,   110,   111,   112,   113,   114,   115,   496,    95,    96,
      97,   180,   517,   518,   168,   520,   180,    73,   123,   524,
     525,   314,   534,   430,   159,    73,   123,    75,   530,  1038,
     184,   179,   530,   534,   179,   530,     8,    13,   925,   544,
     545,   530,   181,   548,    93,   710,   101,   552,   634,    73,
      75,   716,   557,   718,   180,   110,   111,   112,   113,   114,
     115,   179,   110,   179,   181,   180,   180,   572,     8,   476,
      13,   478,   655,   179,   124,    73,   180,    75,   371,   182,
      38,   179,    73,   185,    75,   492,   493,   494,   179,   179,
     977,   498,   499,   500,    42,    43,    44,    45,    46,    47,
     185,    49,   150,   179,   769,   153,   611,   179,   185,   179,
     185,   518,   110,   520,    13,    63,    73,   524,   525,   110,
     168,    73,   627,   628,   710,   179,    73,    73,   180,   634,
     716,   153,   718,   181,   147,   105,   184,    73,   545,    73,
      13,    75,   181,    13,   180,   125,   651,   153,   727,   654,
     180,   182,   150,     8,   828,   153,   830,  1044,   663,   150,
     180,     8,   153,   668,   180,   572,    63,   672,   833,    63,
     168,    38,   125,   181,   848,  1062,   110,   168,    13,   181,
     181,   126,   126,   769,   858,   185,   184,   699,   862,     8,
      73,   182,   697,   184,   179,   860,   180,   180,   699,   701,
     865,   706,   704,   185,   611,   710,   181,   157,   182,   711,
     108,   716,   153,   718,   180,    75,   150,    13,   723,   153,
     627,   180,   185,    73,   180,   180,   891,   634,    73,   180,
     735,   180,   157,   907,   168,   528,   910,   902,   180,   744,
      73,   915,   181,    73,   651,    75,    75,   833,   180,   180,
     184,   544,   185,    75,   182,   179,   182,   759,    13,   179,
     181,   180,   185,   185,   769,   181,   894,   181,   126,    75,
     182,   564,   565,   180,   860,    13,    47,    13,    73,   865,
     110,    75,   575,   576,    13,   186,   579,   179,   871,   954,
     697,    26,    70,   181,   180,   960,   970,   127,   182,   706,
     789,   181,    36,   710,    13,   891,   795,   796,    75,   716,
      75,   718,    13,   182,   819,   183,   902,   181,   183,    93,
     150,   183,   181,   153,   989,    93,   991,   155,   833,   181,
     147,    73,    13,    47,    13,     8,    73,   181,   168,  1004,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    73,    73,   184,   860,    38,     8,   847,   179,
     865,   866,   769,   868,    38,   178,  1040,    38,   954,    75,
      26,   181,     8,    73,   960,    73,     8,    29,    51,    52,
     105,    38,   183,  1048,    73,   182,   891,   180,   179,   106,
     110,    75,   180,  1067,   896,   182,  1070,   902,   900,  1055,
     389,   552,   612,  1077,   706,   546,   344,   672,   518,   796,
     925,   913,   819,   855,   916,   536,   206,   919,  1004,   349,
     925,   110,   268,   627,   725,   626,   833,   646,   933,   524,
     150,   936,   102,   153,   219,   994,   525,   883,   108,   295,
     110,   111,   112,   113,   114,   115,   116,   982,   168,   954,
     170,   171,   172,   860,   174,   960,   176,   177,   865,   940,
    1021,   150,   964,    73,   153,   967,   936,   969,   821,    -1,
      -1,    -1,   977,    -1,   946,    -1,    -1,   966,    -1,   168,
      -1,   170,   171,   172,   891,   174,    -1,   176,   177,    -1,
      -1,    -1,   162,   163,   164,   902,    -1,    -1,    -1,  1004,
     110,    -1,    -1,    -1,    -1,    -1,   116,   180,    -1,    -1,
      -1,    -1,  1014,   183,    -1,    -1,  1021,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   933,    -1,    -1,   936,
      -1,    -1,    -1,  1038,    -1,    -1,    -1,    -1,    -1,  1044,
     150,    15,    16,   153,    -1,    -1,    -1,   954,    -1,    -1,
    1052,    -1,    -1,   960,    28,    -1,    -1,  1062,   168,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,    -1,  1071,
      -1,  1073,    -1,    -1,    -1,    -1,  1078,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,  1004,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    83,
      29,    -1,    -1,    -1,  1021,    -1,    52,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,
      -1,    -1,   102,    52,    -1,    54,    -1,    -1,   108,    -1,
     110,   111,   112,   113,   114,   115,   116,    83,    -1,     9,
      10,    11,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    25,    85,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   162,    49,
      51,    52,   162,   163,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,    -1,   183,   133,    -1,    -1,   108,    -1,   110,
     111,   112,   113,   114,   115,   116,   162,    -1,    71,    72,
      73,    -1,   206,    -1,    -1,    -1,    -1,    -1,    81,    -1,
     214,   215,   216,    -1,   218,    -1,    -1,    -1,    -1,    -1,
     186,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,
     179,    -1,    -1,    -1,    -1,   184,   185,   186,    -1,   188,
     206,   162,   163,   164,    -1,    -1,    -1,    -1,   214,   215,
     216,    -1,   218,    -1,    -1,    -1,   129,   130,   131,   132,
     133,   134,   183,    -1,   268,    -1,   232,    -1,    -1,    -1,
     219,   144,    -1,    -1,    -1,    -1,    -1,    -1,   151,   152,
      -1,   230,    -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,
     181,    -1,   241,   183,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   285,
     269,    -1,    -1,    -1,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,    -1,   287,    -1,
     289,   290,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,
     309,    -1,    -1,    -1,    -1,   314,    -1,    -1,   372,    -1,
      -1,    -1,    -1,   322,    -1,    -1,    -1,    -1,    -1,   383,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   371,   372,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   383,    51,    52,
      -1,    -1,   371,    -1,    -1,    25,   430,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,   405,    -1,    -1,    -1,
      93,    -1,    -1,    63,   430,    -1,    -1,    -1,    -1,    -1,
      71,    72,   476,    -1,   478,    -1,    -1,    -1,    -1,    -1,
      81,    -1,   431,    -1,    -1,    -1,    -1,    -1,   492,   493,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     449,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     476,    -1,   478,    -1,   518,    -1,   520,    -1,    -1,    -1,
     524,   525,    -1,    -1,    -1,    -1,   492,   493,   129,   130,
     131,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,   488,
      -1,   490,   491,   144,    -1,    -1,    -1,    -1,    -1,    -1,
     151,   152,   518,    -1,   520,    -1,    -1,    -1,   524,   525,
      -1,    -1,   528,    -1,    -1,    -1,    -1,    -1,   572,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   544,   528,
      -1,    -1,    -1,   183,   533,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   544,    -1,    -1,   564,   565,
      -1,    -1,    -1,    -1,    -1,    -1,   572,   611,    -1,   575,
     576,    -1,    -1,   579,    -1,   564,   565,    -1,    -1,   568,
      -1,    -1,    -1,    -1,    -1,    -1,   575,   576,    -1,    -1,
     579,    -1,    -1,    -1,   583,   584,    -1,    -1,    -1,    -1,
     589,     9,    10,    11,    -1,   611,    -1,   651,    -1,    -1,
     599,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,   651,    -1,    -1,    -1,    -1,
      -1,    -1,   641,   697,    -1,    63,    -1,    -1,    -1,   648,
      -1,    -1,   706,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   697,    -1,    -1,   683,   684,    -1,    -1,    -1,    -1,
     706,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,   705,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    -1,   727,    -1,
      71,    72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    -1,    87,    -1,    89,    -1,
      91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,    -1,   183,   107,   108,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     121,   122,   781,    -1,    -1,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,   137,   138,   139,    -1,
      -1,    -1,   801,   144,    -1,    -1,    -1,    -1,    -1,   150,
     151,   152,   153,   154,    -1,   156,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
     181,   182,   183,   184,    -1,   844,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,   906,    94,    -1,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,    -1,
      -1,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
     102,   103,   104,    -1,    -1,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,   103,   104,    -1,    -1,   107,
      -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,   103,
     104,    -1,    -1,   107,    -1,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    -1,    89,
      -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,    -1,   103,   104,    -1,    -1,   107,    -1,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,   181,   182,    -1,   184,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    92,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,   181,   182,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,   103,   104,    -1,    -1,   107,
      -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    89,    90,    91,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,   103,
     104,    -1,    -1,   107,    -1,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,    -1,
     184,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,    -1,   103,   104,    -1,    -1,   107,    -1,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    88,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,   181,   182,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,   117,   118,   119,   120,   121,
     122,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,   154,    -1,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,
     182,   183,   184,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,   103,   104,    -1,    -1,   107,
      -1,   109,   110,   111,   112,    -1,    -1,    -1,    -1,   117,
     118,   119,   120,   121,   122,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,   154,    -1,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,   181,   182,   183,   184,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,   103,
     104,    -1,    -1,   107,    -1,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   121,   122,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
     154,    -1,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,    -1,   181,   182,   183,
     184,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,    -1,   103,   104,    -1,    -1,   107,    -1,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,   117,   118,   119,
     120,   121,   122,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,   154,    -1,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      -1,   181,   182,   183,   184,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,   117,   118,   119,   120,   121,   122,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,   154,    -1,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    26,   181,   182,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,   109,   110,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,    -1,    -1,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    26,   181,
     182,    -1,   184,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    77,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    -1,    87,
      -1,    89,    -1,    91,    -1,    -1,    94,    -1,    -1,    -1,
      98,    99,   100,   101,    -1,   103,   104,    -1,    -1,   107,
      -1,   109,   110,    -1,    -1,    -1,    -1,    -1,    -1,   117,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,   137,
     138,   139,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    26,   181,   182,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    77,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    -1,    87,    -1,    89,    -1,    91,    -1,    -1,
      94,    -1,    -1,    -1,    98,    99,   100,   101,    -1,   103,
     104,    -1,    -1,   107,    -1,   109,   110,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,    -1,    -1,   137,   138,   139,    -1,    -1,    -1,    -1,
     144,    -1,    -1,    -1,    -1,    -1,   150,   151,   152,   153,
      -1,    -1,   156,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   179,    26,   181,   182,    -1,
     184,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    -1,    87,    -1,    89,
      -1,    91,    -1,    -1,    94,    -1,    -1,    -1,    98,    99,
     100,   101,    -1,   103,   104,    -1,    -1,   107,    -1,   109,
     110,    -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,    -1,   137,   138,   139,
      -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,
     150,   151,   152,   153,    -1,    -1,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,   168,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,
      26,   181,   182,    -1,   184,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      -1,    87,    -1,    89,    -1,    91,    -1,    -1,    94,    -1,
      -1,    -1,    98,    99,   100,   101,    -1,   103,   104,    -1,
      -1,   107,    -1,   109,   110,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   137,   138,   139,    -1,    -1,    -1,    -1,   144,    -1,
      -1,    -1,    -1,    -1,   150,   151,   152,   153,    -1,    -1,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   179,    -1,   181,   182,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    77,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    -1,    87,    -1,    89,    -1,    91,
      -1,    -1,    94,    -1,    -1,    -1,    98,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,    -1,   109,   110,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,    -1,   137,   138,   139,    -1,    -1,
      -1,    -1,   144,    -1,    -1,    -1,    -1,    -1,   150,   151,
     152,   153,    -1,    -1,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,   181,
     182,    -1,   184,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    51,    52,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      -1,    -1,   150,   151,   152,   153,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
     168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,   179,    -1,    63,    -1,    48,   184,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   101,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    63,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    -1,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,   179,    -1,   181,    -1,
      48,   184,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   101,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    63,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,   179,    -1,   181,    -1,    48,   184,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    63,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    -1,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,   179,    -1,   181,    -1,
      48,   184,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    63,    -1,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
     168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,   179,   180,    -1,    -1,    48,   184,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    -1,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,   179,    -1,    -1,    -1,
      48,   184,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
     168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,   179,    -1,    -1,    -1,    48,   184,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    -1,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,   168,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,   179,    -1,    -1,    -1,
      48,   184,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
     168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,   179,    -1,    -1,    -1,    48,   184,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    -1,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,   179,    -1,    -1,    -1,
      48,   184,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
     168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,   179,    -1,    -1,    -1,    48,   184,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    -1,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,   168,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,   179,    -1,    -1,    -1,
      48,   184,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   144,    -1,    -1,    12,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,
      43,   179,    -1,    -1,    -1,    48,   184,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,   119,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,   144,    -1,    -1,    12,    -1,    -1,   150,   151,   152,
     153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,   179,    -1,    -1,    -1,
      48,   184,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   179,    -1,    -1,    -1,    -1,   184,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    63,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    63,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      63,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,   181,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,   181,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,   181,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    63,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,   180,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    42,    43,   180,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,     9,
      10,    11,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    25,   180,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,   180,    -1,   128,
     129,   130,   131,   132,   133,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,    -1,
      -1,   150,   151,   152,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,   168,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   126,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   126,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      11,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    63,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    63,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   188,   189,     0,     3,     4,     5,     6,     7,    12,
      36,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    71,    72,    73,    74,    75,    77,    81,    82,
      83,    84,    85,    87,    89,    91,    94,    98,    99,   100,
     101,   102,   103,   104,   107,   108,   109,   110,   111,   112,
     117,   118,   119,   120,   121,   122,   127,   128,   129,   130,
     131,   132,   133,   134,   137,   138,   139,   144,   150,   151,
     152,   153,   154,   156,   168,   179,   181,   182,   184,   190,
     191,   194,   197,   198,   205,   206,   208,   209,   210,   212,
     254,   269,   270,   271,   274,   275,   283,   286,   290,   291,
     293,   294,   300,   301,   302,   303,   304,   305,   306,   307,
     312,   317,   319,   320,   321,   322,   324,    73,   110,   150,
     271,   290,   290,   179,   290,   290,   290,   337,   338,   290,
     290,   290,   290,   110,   150,   153,   190,   275,   293,   294,
     302,   293,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,    31,   290,   315,   316,   150,   153,   190,   275,
     277,   278,   302,   305,   306,   312,   290,   179,   281,   179,
      26,   262,   290,   197,   179,   179,   179,   179,   179,   181,
     290,   181,   290,    73,    73,   181,   270,   290,   294,   182,
     290,   153,   190,   192,   193,    75,   184,   236,   237,    75,
     238,   271,   121,   121,   179,   179,   179,   179,   179,   179,
     153,   182,   190,   190,   181,   294,   337,   269,   290,   195,
     182,   153,   179,     8,   181,    26,    73,    73,   181,    31,
     207,    63,   147,     9,    10,    11,    25,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    49,    63,
     181,    51,    52,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   179,   147,    63,   125,    63,
     182,   184,   306,   159,   325,   326,   330,   207,   290,    73,
     347,   153,   190,   147,   147,   292,   294,   126,   185,     8,
     288,   153,   190,   147,   179,   282,   147,   125,   306,   180,
     290,   290,     8,   181,    85,   290,   263,   264,   290,   270,
     294,    73,   221,   290,   181,   181,   181,    13,   181,   181,
     195,   181,   190,    93,     8,   181,   182,   291,   294,     8,
     181,    13,     8,   181,   207,   203,   204,   294,   294,   318,
     294,   180,   127,   294,   313,   314,   315,   190,   189,   181,
     182,   179,   126,   180,   180,   120,   183,   196,   197,   205,
     206,   290,    73,    31,   234,   235,   270,   294,    73,   337,
     123,   211,   123,   213,    73,   179,   290,   308,    73,   300,
     306,   312,   290,   290,   290,    26,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   277,   308,
      31,   179,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   234,    73,   300,   308,    73,   182,
     300,   309,   310,   311,   308,   290,   159,   160,   161,   182,
     320,   323,   327,    38,    46,   331,   341,   342,   180,   158,
     168,   169,   349,   190,    73,    73,    31,   290,    31,   290,
     190,   300,   234,   300,   309,   180,   180,   290,   179,   180,
     181,     8,    93,    93,    13,     8,   180,   180,    42,    43,
      63,   128,   150,   153,   190,   275,   283,   284,   285,   183,
      93,    73,   193,   290,   237,   284,    75,   179,     8,   180,
       8,   180,   180,   181,   179,     8,   180,   180,   179,   183,
     189,   234,   294,    63,   125,   265,   266,   267,   268,   296,
     179,   183,   292,   180,     8,    13,   211,   150,   153,   168,
     190,   276,   124,   214,   215,   276,   182,   179,   128,   230,
     232,   233,   276,   185,   179,   179,   306,   290,    26,   185,
     269,   294,   156,   254,   180,   179,   179,   185,   290,   179,
     297,   298,   299,    63,   182,   185,   183,   339,   340,   328,
     325,    38,    13,    73,   348,    73,    73,   292,   292,   126,
     180,   279,    26,   197,   290,    26,   197,   225,   263,   290,
     294,    31,   217,   294,   284,    73,    26,   197,   220,    26,
     182,   222,   284,   284,   284,   287,   289,   179,   153,   190,
     147,   105,    73,   183,    13,   230,   204,   181,   294,   313,
     314,    13,   234,   183,   180,   308,   309,   296,    63,   265,
     180,    31,   128,   150,   153,   168,   190,   231,   233,   270,
     294,   284,   214,   153,   190,   337,   215,   182,     8,   239,
     230,   180,     8,    31,    75,   234,   234,   290,   180,   234,
     234,   183,   234,    63,    63,   295,   308,   290,    38,   347,
     290,   182,   186,   332,   168,   169,   349,    31,   290,   125,
     280,   195,   226,   180,   195,   181,   126,   216,   294,   216,
      13,   195,   181,   223,   181,   223,   126,   185,     8,   288,
     287,   190,    73,   179,   284,   180,   180,   179,   290,   180,
     185,   299,   308,   181,   292,   153,   190,   337,   157,   182,
     190,   239,   276,   102,   108,   110,   111,   112,   113,   114,
     115,   116,   162,   163,   164,   183,   240,   242,   256,   257,
     258,   259,   261,   180,   108,   272,   231,   233,    75,    13,
     180,   180,   180,   180,   180,   308,   308,   296,   185,   183,
     183,   334,   333,    73,    73,   292,   309,   227,    68,    69,
     228,   181,    86,   263,   217,   180,   180,   284,    92,   223,
      95,    96,    97,   223,   183,   284,   284,   180,   276,   272,
     254,   185,   190,    75,   350,   183,    73,   243,   276,   352,
     364,   366,    75,   260,   271,   259,     8,   181,   182,   179,
     182,    31,    75,    13,   284,   185,   185,   329,   290,   325,
     336,    68,    69,   229,   179,   197,   181,   180,    26,   197,
     219,   219,   181,    95,   181,   290,    26,   181,   224,   183,
     126,    75,   182,   180,   239,    13,     8,   181,   182,   244,
     116,   168,   170,   171,   172,   173,   174,   175,   176,   177,
     275,   353,   354,   355,    47,   365,   165,   166,   179,   367,
     368,    13,     8,   181,   241,    73,   195,    31,    75,   273,
     195,    75,    13,   284,   335,   186,   179,    26,    70,   290,
      26,   197,   218,   195,   181,   224,   195,   284,   180,   195,
     351,   284,   276,    73,   245,   246,   247,   248,   250,   251,
     252,   276,   337,    36,   358,   182,     8,   181,   341,   343,
     344,     8,   181,    47,   165,   167,   168,   368,   369,   370,
     181,   284,    75,   207,    13,   183,    75,     8,   180,   183,
      13,   284,   183,   290,   195,   181,   180,   195,    90,   195,
     182,   183,   183,   183,   247,   181,    93,   155,   181,   147,
     170,   171,   172,   174,   176,   177,   275,   359,   360,   356,
     354,    13,   362,   348,    47,   345,   346,   345,     8,    29,
     180,    25,    42,    45,    13,    73,   284,    31,    75,   284,
     180,   197,    88,   181,   195,   253,   259,   249,   276,    73,
     358,     8,    38,   283,   361,    73,   283,   178,   363,   349,
     343,   347,   369,   369,    25,    42,    45,   284,   179,    75,
      26,   181,   183,    73,     8,   171,   174,   360,     8,   357,
     349,   230,   195,   105,   199,   200,   201,   276,    38,   283,
     183,   180,   179,   106,   202,   201,   181,   182,   255,   276,
     182,   195,    75,   195,   183,   180,   183,   182,   195,   183
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   187,   188,   189,   189,   190,   190,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   192,   192,   193,   193,
     193,   193,   194,   194,   195,   195,   196,   196,   196,   196,
     197,   197,   197,   197,   197,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   199,   199,   200,   200,   201,   202,
     202,   203,   203,   204,   205,   206,   207,   207,   208,   209,
     209,   210,   210,   210,   210,   211,   211,   212,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     219,   219,   220,   220,   221,   221,   222,   222,   222,   222,
     223,   223,   223,   224,   224,   225,   225,   226,   226,   227,
     227,   228,   228,   229,   229,   230,   230,   230,   231,   232,
     232,   232,   232,   232,   232,   232,   232,   233,   233,   233,
     234,   234,   234,   235,   235,   235,   235,   235,   235,   236,
     236,   237,   237,   237,   238,   238,   238,   238,   239,   239,
     240,   240,   240,   241,   240,   242,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   247,   248,   249,   249,   250,
     250,   251,   252,   252,   253,   253,   254,   254,   255,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   259,   259,
     259,   259,   260,   260,   260,   260,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   266,   266,   267,   267,
     267,   268,   268,   269,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   271,   272,
     272,   273,   273,   273,   273,   274,   274,   274,   274,   274,
     274,   274,   274,   275,   275,   275,   275,   276,   276,   276,
     277,   277,   278,   278,   279,   279,   280,   281,   281,   281,
     282,   282,   283,   283,   283,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   284,   284,   284,   284,   284,   284,
     284,   284,   285,   286,   286,   286,   286,   286,   286,   287,
     287,   288,   288,   289,   289,   289,   289,   290,   290,   291,
     292,   293,   294,   294,   295,   295,   296,   297,   297,   298,
     299,   299,   299,   300,   300,   301,   301,   302,   303,   303,
     304,   304,   304,   305,   305,   305,   306,   306,   306,   307,
     307,   308,   308,   309,   309,   310,   310,   310,   311,   311,
     312,   312,   313,   313,   314,   314,   314,   315,   315,   316,
     316,   316,   316,   316,   316,   316,   316,   317,   317,   317,
     317,   317,   317,   317,   318,   318,   319,   319,   270,   320,
     320,   321,   322,   323,   323,   324,   325,   325,   326,   326,
     326,   326,   327,   328,   329,   327,   330,   330,   331,   333,
     332,   334,   335,   332,   336,   336,   338,   337,   340,   339,
     342,   341,   344,   343,   346,   345,   347,   347,   347,   348,
     348,   348,   349,   349,   350,   351,   206,   352,   240,   353,
     353,   354,   354,   355,   355,   355,   355,   355,   355,   355,
     356,   357,   355,   355,   355,   358,   358,   358,   359,   359,
     360,   360,   360,   360,   360,   360,   360,   361,   361,   362,
     362,   362,   363,   363,   364,   240,   365,   365,   366,   240,
     367,   367,   367,   368,   368,   368,   368,   369,   369,   369,
     369,   369,   369,   369,   370,   370,   370,   370,   275,   276,
     270,   270,   284
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     5,     4,     3,     2,     3,     1,     1,     3,
       2,     4,     5,     4,     2,     0,     1,     1,     1,     4,
       1,     2,     1,     1,     1,     3,     7,    10,     5,     7,
       9,     5,     2,     3,     2,     3,     2,     3,     3,     3,
       3,     3,     1,     2,     5,     8,     8,     5,     1,    14,
       3,     3,     2,     2,     1,     0,     1,     2,     8,     4,
       0,     1,     3,     1,     1,     1,     0,     1,     9,     7,
       6,     1,     2,     1,     2,     0,     2,     1,     0,     2,
       0,     2,     1,     3,     0,     2,     1,     2,     1,     4,
       1,     4,     1,     4,     3,     5,     3,     4,     4,     5,
       0,     5,     4,     1,     1,     1,     4,     0,     6,     0,
       7,     0,     2,     0,     3,     1,     3,     0,     3,     2,
       3,     5,     4,     4,     5,     7,     6,     0,     1,     1,
       1,     3,     0,     1,     1,     2,     3,     3,     4,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       3,     2,     1,     0,     9,     3,     1,     3,     1,     3,
       0,     1,     1,     2,     2,     2,     3,     1,     3,     1,
       1,     3,     4,     3,     0,     1,     2,     4,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     3,     1,
       0,     1,     3,     1,     2,     1,     4,     3,     2,     1,
       1,     0,     1,     3,     6,     3,     4,     4,     8,     5,
       1,     4,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     4,     1,     2,     9,    10,     1,     0,
       4,     3,     4,     1,     2,     4,     6,     5,     6,     6,
       6,     6,     4,     1,     1,     3,     2,     1,     3,     2,
       1,     1,     4,     1,     2,     0,     2,     0,     2,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     2,
       4,     1,     3,     1,     1,     1,     3,     2,     1,     0,
       2,     0,     1,     5,     3,     3,     1,     1,     1,     1,
       1,     1,     5,     1,     2,     0,     3,     4,     4,     3,
       1,     1,     0,     1,     2,     3,     3,     1,     4,     4,
       1,     1,     1,     1,     2,     1,     4,     4,     1,     1,
       4,     0,     1,     1,     1,     4,     4,     1,     1,     3,
       1,     2,     3,     1,     1,     4,     0,     0,     2,     5,
       3,     3,     1,     6,     4,     4,     2,     4,     4,     2,
       2,     4,     2,     2,     1,     3,     3,     3,     1,     1,
       3,     4,     3,     3,     1,     2,     1,     2,     0,     1,
       2,     3,     1,     0,     0,     5,     0,     2,     3,     0,
       4,     0,     0,     5,     0,     1,     0,     3,     0,     2,
       0,     3,     0,     3,     0,     3,     1,     3,     3,     1,
       3,     3,     1,     0,     0,     0,    10,     0,     4,     1,
       3,     4,     2,     1,     1,     1,     2,     1,     1,     1,
       0,     0,     6,     1,     1,     5,     3,     0,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     3,     2,
       2,     0,     1,     0,     0,     4,     2,     4,     0,     4,
       1,     1,     1,     3,     4,     4,     4,     1,     1,     2,
       2,     2,     3,     3,     1,     1,     2,     2,     2,     2,
       4,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (yyscanner, root, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, yyscanner, root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void* yyscanner, code_rope* root)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yyscanner);
  YYUSE (root);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, void* yyscanner, code_rope* root)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yyscanner, root);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, void* yyscanner, code_rope* root)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , yyscanner, root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, yyscanner, root); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void* yyscanner, code_rope* root)
{
  YYUSE (yyvaluep);
  YYUSE (yyscanner);
  YYUSE (root);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void* yyscanner, code_rope* root)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, yyscanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
        case 2:
#line 207 "parser.y" /* yacc.c:1646  */
    {
    *root = (yyvsp[0]);
  }
#line 3759 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 213 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3767 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 216 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 3775 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 223 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3783 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 232 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3791 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 235 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3799 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 238 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + " " + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3807 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 241 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3815 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 244 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3823 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 247 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3831 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 253 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3839 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 261 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 3847 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 264 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3855 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 267 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 3863 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 273 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3871 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 276 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + " " + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3879 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 282 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3887 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 285 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 3895 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 294 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3903 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 301 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3911 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 306 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 3919 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 312 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3927 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 315 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3935 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 318 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-9]) + (yyvsp[-8]) + (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3943 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 321 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3951 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 324 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-6]) + " " + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3959 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 327 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-8]) + (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3967 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 330 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3975 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 333 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3983 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 336 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3991 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 339 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 3999 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 342 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4007 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 345 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4015 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 348 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4023 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 351 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4031 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 354 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4039 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 357 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4047 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 360 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4055 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 364 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4063 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 367 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4071 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 370 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + " " + (yyvsp[-4]) + " " + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4079 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 373 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + " " + (yyvsp[-4]) + " " + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4087 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 376 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4095 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 380 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-13]) + (yyvsp[-12]) + (yyvsp[-11]) + (yyvsp[-10]) + (yyvsp[-9]) + (yyvsp[-8]) + (yyvsp[-7]) + " " + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4103 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 383 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4111 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 386 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4119 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 389 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4127 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 392 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4135 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 399 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4143 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 406 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4151 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 412 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + " " + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4159 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 418 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4167 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 421 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4175 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 428 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4183 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 446 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4191 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 453 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-8]) + " " + (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4199 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 459 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-6]) + " " + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4207 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 462 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + " " + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4215 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 469 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4223 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 473 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4231 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 479 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4239 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 482 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4247 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 492 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4255 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 495 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4263 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 501 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4271 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 504 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4279 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 511 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4287 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 517 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4295 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 520 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4303 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 527 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4311 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 534 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4319 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 541 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4327 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 548 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4335 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 554 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4343 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 557 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4351 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 563 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4359 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 566 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4367 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 569 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4375 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 572 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4383 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 578 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4391 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 581 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + " " + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4399 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 584 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4407 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 596 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4415 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 602 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4423 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 605 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4431 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 611 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4439 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 614 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4447 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 620 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4455 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 623 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4463 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 629 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4471 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 632 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4479 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 639 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4487 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 642 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4495 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 648 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4503 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 654 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4511 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 657 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4519 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 660 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4527 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 663 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4535 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 666 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4543 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 669 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4551 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 672 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4559 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 675 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4567 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 681 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4575 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 684 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]) + " ";
  }
#line 4583 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 687 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]) + " ";
  }
#line 4591 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 694 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4599 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 697 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4607 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 705 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4615 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 708 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4623 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 711 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4631 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 714 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4639 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 720 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4647 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 728 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4655 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 731 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4663 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 737 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4671 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 740 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4679 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 744 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4687 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 750 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4695 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 753 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4703 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 759 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4711 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 762 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4719 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 766 "parser.y" /* yacc.c:1646  */
    {
    yyextra->old_expecting_xhp_class_statements = yyextra->expecting_xhp_class_statements;
    yyextra->expecting_xhp_class_statements = false;
  }
#line 4728 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 769 "parser.y" /* yacc.c:1646  */
    {
    yyextra->expecting_xhp_class_statements = yyextra->old_expecting_xhp_class_statements;
    (yyval) = (yyvsp[-8]) + (yyvsp[-7]) + " " + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4737 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 776 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4745 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 783 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4753 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 790 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4761 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 796 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4769 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 804 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4777 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 810 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4785 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 813 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4793 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 819 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4801 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 825 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 4809 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 828 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4817 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 839 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4825 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 845 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + " " + (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4833 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 848 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4841 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 854 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4849 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 861 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4857 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 864 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + " " + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4865 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 871 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4873 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 878 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]) + " ";
  }
#line 4881 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 884 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4889 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 887 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]) + " ";
  }
#line 4897 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 894 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 4905 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 909 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4913 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 912 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4921 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 916 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4929 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 922 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4937 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 925 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + " " + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4945 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 931 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4953 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 938 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 4961 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 946 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4969 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 953 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4977 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 956 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 4985 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 962 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 4993 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 965 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5001 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 971 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5009 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 974 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 5017 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 977 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 5025 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 983 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5033 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 986 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 5041 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 992 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5049 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 998 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5057 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1001 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5065 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1004 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5073 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1007 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5081 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1010 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5089 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1013 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5097 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1016 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 5105 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1019 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[0]);
  }
#line 5113 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1022 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 5121 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1025 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5129 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1028 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5137 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1031 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5145 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1034 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5153 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1037 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5161 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1040 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5169 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1043 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5177 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1046 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5185 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1049 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5193 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1052 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5201 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1055 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5209 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1058 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5217 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1061 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5225 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1064 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5233 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1067 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5241 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1070 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5249 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1073 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5257 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1076 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " +  (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 5265 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1079 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 5273 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1082 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 5281 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1085 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5289 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1088 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5297 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1091 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5305 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1094 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5313 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1097 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5321 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1100 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5329 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1103 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5337 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1106 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5345 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1109 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5353 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1112 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5361 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1115 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5369 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1118 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5377 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1121 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5385 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1124 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5393 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1127 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5401 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1130 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5409 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1133 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5417 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1136 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5425 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1139 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5433 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1142 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5441 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1145 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5449 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1148 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5457 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1151 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5465 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1154 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + " " + (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 5473 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1157 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5481 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1160 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5489 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1163 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5497 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1167 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5505 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1170 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5513 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1173 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5521 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1176 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5529 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1179 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5537 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1182 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5545 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1185 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5553 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1188 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5561 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1191 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5569 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1194 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5577 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1197 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5585 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1201 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5593 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1205 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 5601 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1208 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-8]) + (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5609 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1211 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-9]) + " " + (yyvsp[-8]) + (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5617 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1221 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5625 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1224 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5633 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1230 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5641 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1233 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5649 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1237 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5657 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1243 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5665 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1246 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5673 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1249 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5681 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1252 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5689 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1255 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5697 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1258 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5705 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1261 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5713 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1264 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5721 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1272 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5729 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1275 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5737 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1282 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5745 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1285 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5753 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1296 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5761 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1303 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5769 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1306 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5777 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1312 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5785 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1318 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5793 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1321 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5801 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1324 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5809 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1330 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5817 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1333 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5825 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1356 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5833 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1359 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5841 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1362 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5849 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1365 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5857 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1368 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5865 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1375 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5873 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1384 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5881 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1387 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5889 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1394 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5897 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1401 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5905 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1408 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5913 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1411 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5921 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1414 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5929 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 1438 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5937 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 1445 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5945 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 1448 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 5953 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 1454 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5961 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 1460 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5969 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 1463 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5977 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 1469 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 5985 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 1475 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 5993 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 1478 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 6001 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 1481 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 6009 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 1488 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6017 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 1494 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6025 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 1497 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6033 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 1507 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6041 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 1510 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6049 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 1523 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6057 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 1530 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6065 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 1533 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]);
  }
#line 6073 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 1541 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6081 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 1547 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 6089 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 1559 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6097 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 1562 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6105 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 1570 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6113 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 1577 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6121 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 1583 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6129 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 1591 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6137 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 1594 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 6145 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 1600 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 6153 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 1607 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6161 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 1610 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6169 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 1613 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6177 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 1617 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6185 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 1620 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6193 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 1623 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6201 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 1626 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6209 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 1632 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6217 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 1635 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6225 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 1638 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 6233 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 1641 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 6241 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 1644 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6249 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 1647 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 6257 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 1650 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + " " + (yyvsp[0]);
  }
#line 6265 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 1657 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6273 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 1663 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6281 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 1666 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6289 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 1676 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
    yyextra->used = true;
  }
#line 6298 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 1684 "parser.y" /* yacc.c:1646  */
    {
    if (yyextra->include_debug) {
      char line[16];
      sprintf(line, "%lu", (unsigned long)(yyvsp[-2]).lineno());
      (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + "), __FILE__, " + line +")";
    } else {
      (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + "))";
    }
  }
#line 6312 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 1696 "parser.y" /* yacc.c:1646  */
    {
    pop_state(); // XHP_ATTRS
    if (yyextra->include_debug) {
      char line[16];
      sprintf(line, "%lu", (unsigned long)(yyvsp[-3]).lineno());
      (yyval) = (yyextra->force_global_namespace ? "new \\xhp_" : "new xhp_") + (yyvsp[-3]) + "(array(" + (yyvsp[-2]) + "), array(), __FILE__, " + line + ")";
    } else {
      (yyval) = (yyextra->force_global_namespace ? "new \\xhp_" : "new xhp_") + (yyvsp[-3]) + "(array(" + (yyvsp[-2]) + "), array())";
    }
  }
#line 6327 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 1709 "parser.y" /* yacc.c:1646  */
    {
    pop_state(); // XHP_ATTRS
    push_state(XHP_CHILD_START);
    yyextra->pushTag((yyvsp[-2]).c_str());
    (yyval) = (yyextra->force_global_namespace ? "new \\xhp_" : "new xhp_") + (yyvsp[-2]) + "(array(" + (yyvsp[-1]) + "), array(";
  }
#line 6338 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 1718 "parser.y" /* yacc.c:1646  */
    {
    pop_state(); // XHP_CHILD_START
    if (yyextra->peekTag() != (yyvsp[-1]).c_str()) {
      string e1 = (yyvsp[-1]).c_str();
      string e2 = yyextra->peekTag();
      replacestr(e1, "__", ":");
      replacestr(e1, "_", "-");
      replacestr(e2, "__", ":");
      replacestr(e2, "_", "-");
      string e = "syntax error, mismatched tag </" + e1 + ">, expecting </" + e2 + ">";
      yyerror(yyscanner, NULL, e.c_str());
      yyextra->terminated = true;
    }
    yyextra->popTag();
    if (yyextra->haveTag()) {
      set_state(XHP_CHILD_START);
    }
  }
#line 6361 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 1736 "parser.y" /* yacc.c:1646  */
    {
    // empty end tag -- SGML SHORTTAG
    pop_state(); // XHP_CHILD_START
    yyextra->popTag();
    if (yyextra->haveTag()) {
      set_state(XHP_CHILD_START);
    }
    (yyval) = "))";
  }
#line 6375 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 1748 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
  }
#line 6383 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 1755 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[0]).strip_lines();
    (yyval) = (yyvsp[0]);
  }
#line 6392 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 1759 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[0]).strip_lines();
    (yyval) = (yyvsp[-1]) + (yyvsp[0]);
  }
#line 6401 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 1766 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
  }
#line 6409 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 1769 "parser.y" /* yacc.c:1646  */
    {
    set_state(XHP_CHILD_START);
    (yyval) = "'" + (yyvsp[0]) + "',";
  }
#line 6418 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 1773 "parser.y" /* yacc.c:1646  */
    {
    set_state(XHP_CHILD_START);
    (yyval) = (yyvsp[-1]) + (yyvsp[0]) + ",";
  }
#line 6427 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 1777 "parser.y" /* yacc.c:1646  */
    {
    set_state(XHP_CHILD_START);
    (yyval) = (yyvsp[-2]) + (yyvsp[-1]) + ",'" + (yyvsp[0]) + "',";
  }
#line 6436 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 1785 "parser.y" /* yacc.c:1646  */
    {
    push_state(PHP);
    yyextra->pushStack();
  }
#line 6445 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 1788 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    yyextra->popStack();
  }
#line 6454 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 1791 "parser.y" /* yacc.c:1646  */
    {
    set_state(XHP_CHILD_START);
    (yyval) = (yyvsp[-2]);
  }
#line 6463 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 1799 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "";
    push_state(XHP_ATTRS);
  }
#line 6472 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 1803 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]) + (yyvsp[0]) + ",";
  }
#line 6480 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 1809 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "'" + (yyvsp[-2]) + "' => " + (yyvsp[0]);
  }
#line 6488 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 1815 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_ATTR_VAL); }
#line 6494 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 1815 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-1]);
  }
#line 6502 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 1818 "parser.y" /* yacc.c:1646  */
    { push_state(PHP); }
#line 6508 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 1818 "parser.y" /* yacc.c:1646  */
    { pop_state(); }
#line 6514 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 1818 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]);
  }
#line 6522 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 1824 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "''";
  }
#line 6530 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 1827 "parser.y" /* yacc.c:1646  */
    {
    // XHP_ATTR_VAL is popped by the time this code runs
    (yyval) = "'" + (yyvsp[0]) + "'";
  }
#line 6539 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 1835 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_LABEL); }
#line 6545 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 1835 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    (yyval) = (yyvsp[-1]);
  }
#line 6554 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 1842 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_LABEL); }
#line 6560 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 1842 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    (yyval) = (yyvsp[0]);
  }
#line 6569 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 1849 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_LABEL_WHITESPACE); }
#line 6575 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 1849 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    (yyval) = (yyvsp[-1]);
  }
#line 6584 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 1856 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_LABEL); }
#line 6590 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 1856 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    (yyval) = (yyvsp[-1]);
  }
#line 6599 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 1864 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_LABEL_WHITESPACE); }
#line 6605 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 1864 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    (yyval) = (yyvsp[-1]);
  }
#line 6614 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 1871 "parser.y" /* yacc.c:1646  */
    {
    // XHP_LABEL is popped in the scanner on " ", ">", "/", or "="
    push_state(XHP_LABEL);
    (yyval) = (yyvsp[0]);
  }
#line 6624 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 1876 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + "__" + (yyvsp[0]);
  }
#line 6632 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 1879 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + "_" + (yyvsp[0]);
  }
#line 6640 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 1885 "parser.y" /* yacc.c:1646  */
    {
    // XHP_LABEL is popped in the scanner on " ", ">", "/", or "="
    push_state(XHP_LABEL);
    (yyval) = (yyvsp[0]);
  }
#line 6650 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 1890 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + ":" + (yyvsp[0]);
  }
#line 6658 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 1893 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-2]) + "-" + (yyvsp[0]);
  }
#line 6666 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 1905 "parser.y" /* yacc.c:1646  */
    {
    yyextra->expecting_xhp_class_statements = true;
    yyextra->attribute_decls = "";
    yyextra->attribute_inherit = "";
    yyextra->used_attributes = false;
  }
#line 6677 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 1910 "parser.y" /* yacc.c:1646  */
    {
    yyextra->expecting_xhp_class_statements = false;
  }
#line 6685 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 1912 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-9]) + " xhp_" + (yyvsp[-7]) + (yyvsp[-6]) + (yyvsp[-5]) + (yyvsp[-4]) + (yyvsp[-2]);
    if (yyextra->used_attributes) {
      (yyval) = (yyval) +
        "protected static function &__xhpAttributeDeclaration() {" +
          "static $_ = -1;" +
          "if ($_ === -1) {" +
            "$_ = array(" + yyextra->attribute_decls + ") + " +
              yyextra->attribute_inherit +
              "parent::__xhpAttributeDeclaration();" +
          "}" +
          "return $_;"
        "}";
    }
    (yyval) = (yyval) + (yyvsp[0]);
    yyextra->used = true;
  }
#line 6707 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 1933 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_ATTR_TYPE_DECL); }
#line 6713 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 1933 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    yyextra->used = true;
    yyextra->used_attributes = true;
    (yyval) = ""; // this will be injected when the class closes
  }
#line 6724 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 1942 "parser.y" /* yacc.c:1646  */
    {}
#line 6730 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 1943 "parser.y" /* yacc.c:1646  */
    {}
#line 6736 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 1947 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[-3]).strip_lines();
    (yyvsp[-2]).strip_lines();
    yyextra->attribute_decls = yyextra->attribute_decls +
      "'" + (yyvsp[-2]) + "'=>array(" + (yyvsp[-3]) + "," + (yyvsp[-1]) + ", " + (yyvsp[0]) + "),";
  }
#line 6747 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 1953 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[0]).strip_lines();
    yyextra->attribute_inherit = yyextra->attribute_inherit +
      (yyextra->force_global_namespace ? "\\xhp_" : "xhp_") + (yyvsp[0]) + "::__xhpAttributeDeclaration() + ";
  }
#line 6757 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 1961 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "1, null";
  }
#line 6765 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 1964 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "2, null";
  }
#line 6773 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 1967 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "3, null";
  }
#line 6781 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 1970 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "4, " + (yyvsp[0]);
  }
#line 6789 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 1973 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "5, '" + (yyvsp[0]) + "'";
  }
#line 6797 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 1976 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "6, null";
  }
#line 6805 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 1979 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "6, null";
  }
#line 6813 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 1982 "parser.y" /* yacc.c:1646  */
    { push_state(PHP); }
#line 6819 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 1982 "parser.y" /* yacc.c:1646  */
    { pop_state(); }
#line 6825 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 1982 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "7, array(" + (yyvsp[-2]) + ")";
  }
#line 6833 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 1985 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "8, null";
  }
#line 6841 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 1988 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "9, null";
  }
#line 6849 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 1994 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(" + (yyvsp[-3]) + "," + (yyvsp[-1]) + ")";
  }
#line 6857 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 1997 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(null," + (yyvsp[-1]) + ")";
  }
#line 6865 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 2000 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "null";
  }
#line 6873 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 2006 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "1";
  }
#line 6881 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 2009 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "3";
  }
#line 6889 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 2015 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "1";
  }
#line 6897 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 511:
#line 2018 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "2";
  }
#line 6905 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 512:
#line 2021 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "3";
  }
#line 6913 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 513:
#line 2024 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "4," + (yyvsp[0]);
  }
#line 6921 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 514:
#line 2027 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "5,'" + (yyvsp[0]) + "'";
  }
#line 6929 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 515:
#line 2030 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "8";
  }
#line 6937 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 516:
#line 2033 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "9";
  }
#line 6945 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 517:
#line 2039 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[0]).strip_lines();
    (yyval) = (yyvsp[0]);
  }
#line 6954 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 518:
#line 2043 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[0]).strip_lines();
    (yyval) = (yyvsp[-2]) + ", " + (yyvsp[0]);
  }
#line 6963 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 519:
#line 2050 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[0]).strip_lines();
    (yyval) = (yyvsp[0]);
  }
#line 6972 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 520:
#line 2054 "parser.y" /* yacc.c:1646  */
    {
    (yyvsp[0]).strip_lines();
    (yyval) = (yyvsp[0]);
  }
#line 6981 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 521:
#line 2058 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "null";
  }
#line 6989 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 522:
#line 2064 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "1";
  }
#line 6997 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 523:
#line 2067 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "0";
  }
#line 7005 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 524:
#line 2074 "parser.y" /* yacc.c:1646  */
    { push_state(PHP_NO_RESERVED_WORDS_PERSIST); }
#line 7011 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 525:
#line 2074 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    yyextra->used = true;
    (yyval) =
      "protected function &__xhpCategoryDeclaration() {" +
         code_rope("static $_ = array(") + (yyvsp[-1]) + ");" +
        "return $_;" +
      "}";
  }
#line 7025 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 526:
#line 2086 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "'" + (yyvsp[0]) + "' => 1";
  }
#line 7033 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 527:
#line 2089 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[-3]) + ",'" + (yyvsp[0]) + "' => 1";
  }
#line 7041 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 528:
#line 2096 "parser.y" /* yacc.c:1646  */
    { push_state(XHP_CHILDREN_DECL); }
#line 7047 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 529:
#line 2096 "parser.y" /* yacc.c:1646  */
    {
    // XHP_CHILDREN_DECL is popped in the scanner on ';'
    yyextra->used = true;
    (yyval) = "protected function &__xhpChildrenDeclaration() {" + (yyvsp[-1]) + "}";
  }
#line 7057 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 530:
#line 2104 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "static $_ = " + (yyvsp[0]) + "; return $_;";
  }
#line 7065 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 531:
#line 2107 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "static $_ = 1; return $_;";
  }
#line 7073 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 532:
#line 2110 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "static $_ = 0; return $_;";
  }
#line 7081 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 533:
#line 2116 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(0, 5, " + (yyvsp[-1]) + ")";
  }
#line 7089 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 534:
#line 2119 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(1, 5, " + (yyvsp[-2]) + ")";
  }
#line 7097 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 535:
#line 2122 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(2, 5, " + (yyvsp[-2]) + ")";
  }
#line 7105 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 536:
#line 2125 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(3, 5, " + (yyvsp[-2]) + ")";
  }
#line 7113 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 538:
#line 2132 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(0, " + (yyvsp[0]) + ")";
  }
#line 7121 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 539:
#line 2135 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(1, " + (yyvsp[-1]) + ")";
  }
#line 7129 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 540:
#line 2138 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(2, " + (yyvsp[-1]) + ")";
  }
#line 7137 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 541:
#line 2141 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(3, " + (yyvsp[-1]) + ")";
  }
#line 7145 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 542:
#line 2144 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(4, " + (yyvsp[-2]) + "," + (yyvsp[0]) + ")";
  }
#line 7153 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 543:
#line 2147 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "array(5, " + (yyvsp[-2]) + "," + (yyvsp[0]) + ")";
  }
#line 7161 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 544:
#line 2153 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "1, null";
  }
#line 7169 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 545:
#line 2156 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "2, null";
  }
#line 7177 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 546:
#line 2159 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = (yyextra->force_global_namespace ? "3, \'\\\\xhp_" + (yyvsp[0]) + "\'" : "3, \'xhp_" + (yyvsp[0]) + "\'");
  }
#line 7185 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 547:
#line 2162 "parser.y" /* yacc.c:1646  */
    {
    (yyval) = "4, \'" + (yyvsp[0]) + "\'";
  }
#line 7193 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 548:
#line 2169 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    push_state(PHP);
    yyextra->used = true;
    (yyval) = (yyextra->force_global_namespace ? "\\xhp_" : "xhp_") + (yyvsp[0]);
  }
#line 7204 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 549:
#line 2178 "parser.y" /* yacc.c:1646  */
    {
    pop_state();
    push_state(PHP);
    yyextra->used = true;
    (yyval) = (yyextra->force_global_namespace ? "\\xhp_" : "xhp_") + (yyvsp[0]);
  }
#line 7215 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 550:
#line 2192 "parser.y" /* yacc.c:1646  */
    {
    if (yyextra->idx_expr) {
      yyextra->used = true;
      (yyval) = (yyextra->force_global_namespace ? "\\__xhp_idx(" : "__xhp_idx(") + (yyvsp[-3]) + ", " + (yyvsp[-1]) + ")";
    } else {
      (yyval) = (yyvsp[-3]) + (yyvsp[-2]) + (yyvsp[-1]) + (yyvsp[0]);
    }
  }
#line 7228 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 551:
#line 2200 "parser.y" /* yacc.c:1646  */
    {
    yyextra->used = true;
    (yyval) = "array(" + (yyvsp[-1]) + ")";
  }
#line 7237 "parser.yacc.cpp" /* yacc.c:1646  */
    break;

  case 552:
#line 2207 "parser.y" /* yacc.c:1646  */
    {
    yyextra->used = true;
    (yyval) = "array(" + (yyvsp[-1]) + ")";
  }
#line 7246 "parser.yacc.cpp" /* yacc.c:1646  */
    break;


#line 7250 "parser.yacc.cpp" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (yyscanner, root, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yyscanner, root, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval, yyscanner, root);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp, yyscanner, root);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (yyscanner, root, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, yyscanner, root);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yyscanner, root);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2214 "parser.y" /* yacc.c:1906  */


const char* yytokname(int tok) {
  if (tok < 255) {
    return NULL;
  }
  return yytname[YYTRANSLATE(tok)];
}
