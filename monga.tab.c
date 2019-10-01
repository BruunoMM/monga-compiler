/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 15 "monga.y"

#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

typedef struct word {
   char *str;
   int len;
} Word;

void yyerror(const char *s);
int yywrap(void);
int yylex();

Def *AST_tree;


#line 88 "monga.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MONGA_TAB_H_INCLUDED
# define YY_YY_MONGA_TAB_H_INCLUDED
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
    TK_CHAR = 258,
    TK_INT = 259,
    TK_FLOAT = 260,
    TK_BOOL = 261,
    TK_RETURN = 262,
    TK_IF = 263,
    TK_ELSE = 264,
    TK_AS = 265,
    TK_NEW = 266,
    TK_WHILE = 267,
    TK_TRUE = 268,
    TK_FALSE = 269,
    TK_PLUS = 270,
    TK_MINUS = 271,
    TK_MULTIPLY = 272,
    TK_DIVISION = 273,
    TK_ATTRIBUITION = 274,
    TK_EQUALS = 275,
    TK_NOTEQUALS = 276,
    TK_GEQUALS = 277,
    TK_LEQUALS = 278,
    TK_GREATER = 279,
    TK_LESSER = 280,
    TK_NOT = 281,
    TK_AND = 282,
    TK_OR = 283,
    TK_LITERAL = 284,
    TK_LITERALVALUE = 285,
    TK_ID = 286,
    TK_STRING = 287,
    TK_INTVALUE = 288,
    TK_FLOATVALUE = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 33 "monga.y"

    Type *type;
    Statement *stat;
    Def *def;
    int intvalue;
    float floatvalue;
    Word word;
    VarRef *varRef;
    Call *call;
    Exp *exp;

#line 178 "monga.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MONGA_TAB_H_INCLUDED  */



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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

#define YYUNDEFTOK  2
#define YYMAXUTOK   289

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      39,    40,     2,     2,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    36,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    37,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    58,    61,    64,    65,    68,    69,    72,
      73,    74,    75,    78,    81,    82,    85,    86,    89,    90,
      92,    93,    95,    98,   101,   102,   105,   106,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   120,   123,   126,
     127,   130,   131,   134,   135,   136,   139,   140,   141,   142,
     143,   146,   147,   148,   151,   152,   153,   156,   157,   158,
     161,   162,   163,   166,   169,   170,   173,   174,   175,   177,
     179,   180,   182,   183,   184,   185,   186,   187,   189,   192,
     193,   195,   196
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_CHAR", "TK_INT", "TK_FLOAT",
  "TK_BOOL", "TK_RETURN", "TK_IF", "TK_ELSE", "TK_AS", "TK_NEW",
  "TK_WHILE", "TK_TRUE", "TK_FALSE", "TK_PLUS", "TK_MINUS", "TK_MULTIPLY",
  "TK_DIVISION", "TK_ATTRIBUITION", "TK_EQUALS", "TK_NOTEQUALS",
  "TK_GEQUALS", "TK_LEQUALS", "TK_GREATER", "TK_LESSER", "TK_NOT",
  "TK_AND", "TK_OR", "TK_LITERAL", "TK_LITERALVALUE", "TK_ID", "TK_STRING",
  "TK_INTVALUE", "TK_FLOATVALUE", "':'", "';'", "'['", "']'", "'('", "')'",
  "','", "'{'", "'}'", "'@'", "$accept", "programa", "definicao",
  "def_var", "def_vars", "tipo", "tipo_primario", "def_funcao",
  "def_funcoes", "tipo_retorno", "parametros", "parametrosAlt",
  "parametro", "bloco", "var", "comandos", "comando", "else", "exp",
  "exp_or", "exp_and", "exp_equals", "exp_comparacao", "exp_somasub",
  "exp_multdiv", "exp_prefixada", "exp_posfixada", "exp_new",
  "exp_generica", "numero", "string", "boolean", "generico", "chamada",
  "lista_exp", "exp_opcional", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    58,    59,    91,    93,    40,
      41,    44,   123,   125,    64
};
# endif

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -77,    15,   -77,   -13,   -77,    29,   -77,     9,   -77,     2,
      31,    37,   -77,   -77,   -77,   -77,   -77,     2,   -12,   -77,
      43,    42,    48,    52,   -77,     2,    59,    31,   -77,   -77,
     -77,     2,    61,    48,   -77,   -77,   -77,   -77,    19,   102,
     115,   115,   -77,   -77,   -77,   -77,    32,   -77,   -77,   -77,
     115,   115,   -77,    89,    71,    67,    73,   -77,   -77,   -77,
     -77,    76,     2,    79,   -77,   -77,   -11,    92,   -77,    49,
     135,   -77,    55,   -77,    -7,   -77,    61,    99,    61,   115,
      97,   103,   115,   -77,   -77,   115,   -77,   105,   115,   -77,
     115,   115,   115,   115,   115,   115,   115,   115,   115,    91,
      91,     2,   131,   -77,    -5,   112,   -77,   -77,   107,    27,
     115,    92,   -77,   -77,   -77,   -77,   -77,    69,    69,    69,
      69,    91,    91,   -77,   -77,   -77,   -77,    61,   -77,   115,
     -77,   -77,   -77,   -77,    39,   -77,   -77,   -77,   -77,   -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     2,    15,     1,     0,     5,    15,     3,     0,
      19,     0,    14,     9,    10,    11,    12,     0,     0,     7,
       0,     0,    21,     0,     4,     0,    17,     0,    18,     8,
      22,     0,     0,    21,    16,     6,    13,    20,    27,     0,
       0,     0,    70,    71,    77,    68,    24,    69,    66,    67,
       0,     0,    36,    73,     0,    27,     0,    72,    74,    76,
      64,    65,     0,    24,    33,    73,     0,    39,    41,    45,
      50,    53,    56,    62,    60,    65,     0,    38,     0,    80,
       0,     0,     0,    23,    26,     0,    34,     0,     0,    32,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,    30,    81,     0,    75,    35,     0,     0,
       0,    40,    42,    43,    44,    52,    51,    47,    46,    49,
      48,     0,     0,    54,    59,    55,    61,     0,    29,    80,
      79,    78,    31,    25,     0,    58,    57,    37,    82,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -77,   -77,   -77,   -77,   118,   -15,   -77,   -77,   148,   -77,
     -77,   123,   134,   -32,   -27,   108,   -77,   -77,   -37,   -38,
      74,    75,    -4,   -76,    -1,   -65,   -62,   -77,   -26,   -77,
     -77,   -77,   -77,    28,    35,   -77
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     6,     3,    18,    19,     7,     8,    32,
      21,    28,    22,    52,    65,    54,    55,   128,    76,    77,
      67,    68,    69,    70,    71,   123,    72,    73,    74,    57,
      58,    59,    60,    75,   105,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      36,    66,    23,   101,    78,    13,    14,    15,    16,   109,
      30,    53,    56,    80,    81,     4,    34,    88,     5,   117,
     118,   119,   120,    88,    24,    89,    39,    40,    53,    56,
      85,    41,    42,    43,   134,   125,   129,   124,   124,    17,
      11,   104,    93,    94,   102,   108,   103,    87,    44,    45,
      46,    47,    48,    49,    93,    94,   135,   136,    50,   124,
     124,    35,    20,    51,     9,   133,    61,     9,    10,    91,
      92,    79,    99,   100,    39,    40,    10,   139,    25,    41,
      42,    43,    26,    61,    93,    94,   126,   113,   114,    27,
      29,   104,   115,   116,    31,   137,    44,    45,    63,    47,
      48,    49,    62,    35,    42,    43,    50,   121,    82,    35,
      85,    51,    86,    62,    83,    42,    43,   122,    79,    90,
      44,    45,    63,    47,    48,    49,    62,    88,    42,    43,
      50,    44,    45,    63,    47,    48,    49,   106,    64,   107,
     127,    50,   110,   132,    44,    45,    63,    47,    48,    49,
      93,    94,   131,    38,    50,    12,    37,    95,    96,    97,
      98,    33,   111,    84,   138,   112
};

static const yytype_uint8 yycheck[] =
{
      32,    39,    17,    10,    41,     3,     4,     5,     6,    85,
      25,    38,    38,    50,    51,     0,    31,    28,    31,    95,
      96,    97,    98,    28,    36,    36,     7,     8,    55,    55,
      37,    12,    13,    14,   110,   100,    41,    99,   100,    37,
      31,    79,    15,    16,    76,    82,    78,    62,    29,    30,
      31,    32,    33,    34,    15,    16,   121,   122,    39,   121,
     122,    42,    31,    44,    35,    38,    38,    35,    39,    20,
      21,    39,    17,    18,     7,     8,    39,    38,    35,    12,
      13,    14,    40,    55,    15,    16,   101,    91,    92,    41,
      38,   129,    93,    94,    35,   127,    29,    30,    31,    32,
      33,    34,    11,    42,    13,    14,    39,    16,    19,    42,
      37,    44,    36,    11,    43,    13,    14,    26,    39,    27,
      29,    30,    31,    32,    33,    34,    11,    28,    13,    14,
      39,    29,    30,    31,    32,    33,    34,    40,    36,    36,
       9,    39,    37,    36,    29,    30,    31,    32,    33,    34,
      15,    16,    40,    35,    39,     7,    33,    22,    23,    24,
      25,    27,    88,    55,   129,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    47,    49,     0,    31,    48,    52,    53,    35,
      39,    31,    53,     3,     4,     5,     6,    37,    50,    51,
      31,    55,    57,    50,    36,    35,    40,    41,    56,    38,
      50,    35,    54,    57,    50,    42,    58,    56,    49,     7,
       8,    12,    13,    14,    29,    30,    31,    32,    33,    34,
      39,    44,    58,    59,    60,    61,    73,    74,    75,    76,
      77,    78,    11,    31,    36,    59,    64,    65,    66,    67,
      68,    69,    71,    72,    73,    78,    63,    64,    63,    39,
      63,    63,    19,    43,    60,    37,    36,    50,    28,    36,
      27,    20,    21,    15,    16,    22,    23,    24,    25,    17,
      18,    10,    58,    58,    64,    79,    40,    36,    63,    68,
      37,    65,    66,    67,    67,    69,    69,    68,    68,    68,
      68,    16,    26,    70,    71,    70,    50,     9,    62,    41,
      80,    40,    36,    38,    68,    70,    70,    58,    79,    38
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    49,    49,    50,    50,    51,
      51,    51,    51,    52,    53,    53,    54,    54,    55,    55,
      56,    56,    57,    58,    59,    59,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    63,    64,
      64,    65,    65,    66,    66,    66,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    69,    69,    70,    70,    70,
      71,    71,    71,    72,    73,    73,    74,    74,    74,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    78,    79,
      79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     4,     2,     0,     1,     3,     1,
       1,     1,     1,     6,     2,     0,     2,     0,     2,     0,
       3,     0,     3,     4,     1,     4,     2,     0,     3,     4,
       3,     4,     3,     2,     2,     3,     1,     2,     1,     1,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     2,     2,     1,
       1,     3,     1,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     4,     2,
       0,     0,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 3:
#line 58 "monga.y"
    { (yyval.def) = definitionsNode((yyvsp[-1].def), (yyvsp[0].def)); }
#line 1382 "monga.tab.c"
    break;

  case 4:
#line 61 "monga.y"
    { (yyval.def) = varDefinitionNode((yyvsp[-3].word).str, (yyvsp[-1].type)); }
#line 1388 "monga.tab.c"
    break;

  case 5:
#line 64 "monga.y"
    { (yyval.def) = definitionsNode((yyvsp[-1].def), (yyvsp[0].def)); }
#line 1394 "monga.tab.c"
    break;

  case 6:
#line 65 "monga.y"
    { (yyval.def) = NULL;}
#line 1400 "monga.tab.c"
    break;

  case 7:
#line 68 "monga.y"
    { (yyval.type) = (yyvsp[0].type); }
#line 1406 "monga.tab.c"
    break;

  case 8:
#line 69 "monga.y"
    { (yyval.type) = sequenceTypeNode(MULTIPLE,(yyvsp[-1].type)); }
#line 1412 "monga.tab.c"
    break;

  case 9:
#line 72 "monga.y"
    { (yyval.type) = typeNode(CHAR); }
#line 1418 "monga.tab.c"
    break;

  case 10:
#line 73 "monga.y"
    { (yyval.type) = typeNode(INT); }
#line 1424 "monga.tab.c"
    break;

  case 11:
#line 74 "monga.y"
    { (yyval.type) = typeNode(FLOAT); }
#line 1430 "monga.tab.c"
    break;

  case 12:
#line 75 "monga.y"
    { (yyval.type) = typeNode(BOOL); }
#line 1436 "monga.tab.c"
    break;

  case 13:
#line 78 "monga.y"
    { (yyval.def) = funcDefNode(varDefinitionNode((yyvsp[-5].word).str, (yyvsp[-1].type)), (yyvsp[-3].def), (yyvsp[0].stat)); }
#line 1442 "monga.tab.c"
    break;

  case 14:
#line 81 "monga.y"
    { (yyval.def) = definitionsNode((yyvsp[-1].def), (yyvsp[0].def)); }
#line 1448 "monga.tab.c"
    break;

  case 15:
#line 82 "monga.y"
    { (yyval.def) = NULL; }
#line 1454 "monga.tab.c"
    break;

  case 16:
#line 85 "monga.y"
    { (yyval.type) = (yyvsp[0].type) }
#line 1460 "monga.tab.c"
    break;

  case 17:
#line 86 "monga.y"
    { (yyval.type) = NULL; }
#line 1466 "monga.tab.c"
    break;

  case 18:
#line 89 "monga.y"
    { (yyval.def) = definitionsNode((yyvsp[-1].def), (yyvsp[0].def)); }
#line 1472 "monga.tab.c"
    break;

  case 19:
#line 90 "monga.y"
    { (yyval.def) = NULL }
#line 1478 "monga.tab.c"
    break;

  case 20:
#line 92 "monga.y"
    { (yyval.def) = definitionsNode((yyvsp[-1].def), (yyvsp[0].def)); }
#line 1484 "monga.tab.c"
    break;

  case 21:
#line 93 "monga.y"
    { (yyval.def) = NULL }
#line 1490 "monga.tab.c"
    break;

  case 22:
#line 95 "monga.y"
    { (yyval.def) = varDefinitionNode((yyvsp[-2].word), (yyvsp[0].type)); }
#line 1496 "monga.tab.c"
    break;

  case 23:
#line 98 "monga.y"
    { (yyval.stat) = blockNode((yyvsp[-2].def), (yyvsp[-1].stat)); }
#line 1502 "monga.tab.c"
    break;

  case 26:
#line 105 "monga.y"
    { (yyval.stat) = statementsNode((yyvsp[-1].stat), (yyvsp[0].stat)); }
#line 1508 "monga.tab.c"
    break;

  case 27:
#line 106 "monga.y"
    { (yyval.stat) = NULL; }
#line 1514 "monga.tab.c"
    break;

  case 28:
#line 109 "monga.y"
    { (yyval.stat) = ifNode((yyvsp[-1].exp), (yyvsp[0].stat), NULL); }
#line 1520 "monga.tab.c"
    break;

  case 29:
#line 110 "monga.y"
    { (yyval.stat) = ifNode((yyvsp[-2].exp), (yyvsp[-1].stat), (yyvsp[0].stat)); }
#line 1526 "monga.tab.c"
    break;

  case 30:
#line 111 "monga.y"
    { (yyval.stat) = whileNode((yyvsp[-1].exp), (yyvsp[0].stat)); }
#line 1532 "monga.tab.c"
    break;

  case 31:
#line 112 "monga.y"
    { (yyval.stat) = attrNode((yyvsp[-3].varRef), (yyvsp[-1].exp)); }
#line 1538 "monga.tab.c"
    break;

  case 32:
#line 113 "monga.y"
    { (yyval.stat) = returnNode((yyvsp[-1].exp)); }
#line 1544 "monga.tab.c"
    break;

  case 33:
#line 114 "monga.y"
    { (yyval.stat) = returnNode(NULL); }
#line 1550 "monga.tab.c"
    break;

  case 34:
#line 115 "monga.y"
    { (yyval.stat) = callStatNode((yyvsp[-1].call)); }
#line 1556 "monga.tab.c"
    break;

  case 35:
#line 116 "monga.y"
    { (yyval.stat) = printNode((yyvsp[-1].exp)); }
#line 1562 "monga.tab.c"
    break;

  case 36:
#line 117 "monga.y"
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1568 "monga.tab.c"
    break;

  case 37:
#line 120 "monga.y"
    { (yyval.stat) = (yyvsp[0].stat); }
#line 1574 "monga.tab.c"
    break;

  case 38:
#line 123 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1580 "monga.tab.c"
    break;

  case 39:
#line 126 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1586 "monga.tab.c"
    break;

  case 40:
#line 127 "monga.y"
    { (yyval.exp) = expNode(EXP_OR, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1592 "monga.tab.c"
    break;

  case 41:
#line 130 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1598 "monga.tab.c"
    break;

  case 42:
#line 131 "monga.y"
    { (yyval.exp) = expNode(EXP_AND, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1604 "monga.tab.c"
    break;

  case 43:
#line 134 "monga.y"
    { (yyval.exp) = expNode(EXP_EQUALS, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1610 "monga.tab.c"
    break;

  case 44:
#line 135 "monga.y"
    { (yyval.exp) = expNode(EXP_NOTEQUALS, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1616 "monga.tab.c"
    break;

  case 45:
#line 136 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1622 "monga.tab.c"
    break;

  case 46:
#line 139 "monga.y"
    { (yyval.exp) = expNode(EXP_LEQUALS, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1628 "monga.tab.c"
    break;

  case 47:
#line 140 "monga.y"
    { (yyval.exp) = expNode(EXP_GEQUALS, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1634 "monga.tab.c"
    break;

  case 48:
#line 141 "monga.y"
    { (yyval.exp) = expNode(EXP_LESSER, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1640 "monga.tab.c"
    break;

  case 49:
#line 142 "monga.y"
    { (yyval.exp) = expNode(EXP_GREATER, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1646 "monga.tab.c"
    break;

  case 50:
#line 143 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1652 "monga.tab.c"
    break;

  case 51:
#line 146 "monga.y"
    { (yyval.exp) = expNode(EXP_MINUS, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1658 "monga.tab.c"
    break;

  case 52:
#line 147 "monga.y"
    { (yyval.exp) = expNode(EXP_PLUS, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1664 "monga.tab.c"
    break;

  case 53:
#line 148 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1670 "monga.tab.c"
    break;

  case 54:
#line 151 "monga.y"
    { (yyval.exp) = expNode(EXP_MULTIPLY, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1676 "monga.tab.c"
    break;

  case 55:
#line 152 "monga.y"
    { (yyval.exp) = expNode(EXP_DIVISION, (yyvsp[-2].exp), (yyvsp[0].exp)); }
#line 1682 "monga.tab.c"
    break;

  case 56:
#line 153 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1688 "monga.tab.c"
    break;

  case 57:
#line 156 "monga.y"
    { (yyval.exp) = unaryExpNode(EXP_NOT, (yyvsp[0].exp)); }
#line 1694 "monga.tab.c"
    break;

  case 58:
#line 157 "monga.y"
    { (yyval.exp) = unaryExpNode(EXP_UNMINUS, (yyvsp[0].exp)); }
#line 1700 "monga.tab.c"
    break;

  case 59:
#line 158 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1706 "monga.tab.c"
    break;

  case 60:
#line 161 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1712 "monga.tab.c"
    break;

  case 61:
#line 162 "monga.y"
    { (yyval.exp) = castExpNode(EXP_CAST, (yyvsp[-2].exp), (yyvsp[0].type)); }
#line 1718 "monga.tab.c"
    break;

  case 62:
#line 163 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1724 "monga.tab.c"
    break;

  case 63:
#line 166 "monga.y"
    { (yyval.exp) = newExpNode(EXP_NEW, (yyvsp[-3].type), (yyvsp[-1].exp)); }
#line 1730 "monga.tab.c"
    break;

  case 64:
#line 169 "monga.y"
    { (yyval.exp) = (yyvsp[0].exp); }
#line 1736 "monga.tab.c"
    break;

  case 65:
#line 170 "monga.y"
    { (yyval.exp) = callExpNode((yyvsp[0].call)); }
#line 1742 "monga.tab.c"
    break;

  case 78:
#line 189 "monga.y"
    { (yyval.call) = callNode((yyvsp[-3].word).str, (yyvsp[-1].exp)); }
#line 1748 "monga.tab.c"
    break;


#line 1752 "monga.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[*yyssp], yyvsp);
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
#line 197 "monga.y"


void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}

int yywrap(void) {
    return 1;
}

int main(int argc, char** argv) { 

    char* fileName;
    int file;

    AST_tree = safeAlloc(sizeof(Def));

    if (argc < 2) {
        puts("No input");
        return -1;
    }

    fileName = argv[1];
    file = fopen(fileName, "r");
    if (file == -1) {
        puts("Error opening the input file. \n");
        return -1;
    }

    yyrestart(fdopen(file, "r"));

    if (yyparse()) {
        exit(-1);
    }

    printf("\n");
    close(1);
    return yyparse();
}
