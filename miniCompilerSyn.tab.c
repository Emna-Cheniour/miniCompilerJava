
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "miniCompilerSyn.y"


    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h> 

    #define YYSTYPE char*

    int yyparse(void);
    int yyerror(char const *msg);
    int yylex(void);

    extern int yylineno;

    int class_id = 0;
    int level = 0;
    bool isParam = false;
    int method_call_index = -1;
    int expression_level = 0;

    //other

    int address = 0;
    int code_index = -1;
    char* method_name = "";
    char* class_name = "";
    char* math_op = "";
    char* com_op = "";
    int retour = 0;

    #define YYERROR_VERBOSE 1




/* Line 189 of yacc.c  */
#line 110 "miniCompilerSyn.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _PUBLIC = 258,
     _STATIC = 259,
     _CLASS = 260,
     _VOID = 261,
     _MAIN = 262,
     _EXTENDS = 263,
     _RETURN = 264,
     _SOP = 265,
     _LENGTH = 266,
     _THIS = 267,
     _NEW = 268,
     _IF = 269,
     _ELSE = 270,
     _WHILE = 271,
     _INTEGER = 272,
     _STRING = 273,
     _DATATYPE = 274,
     _OPENPARENT = 275,
     _CLOSEPARENT = 276,
     _OPENSQRBRACK = 277,
     _CLOSESQRBRACK = 278,
     _OPENBRAC = 279,
     _CLOSEBRAC = 280,
     _AND = 281,
     _OR = 282,
     _DOT = 283,
     _SEMICOLON = 284,
     _COMMA = 285,
     _DOUBLEQUOTE = 286,
     _SINGLEQUOTE = 287,
     _PLUS = 288,
     _MINUS = 289,
     _MULTIPLY = 290,
     _NOT = 291,
     _EQUAL = 292,
     _DIV = 293,
     _COMPOP = 294,
     _BOOLVALUE = 295,
     _INTEGERVALUE = 296,
     _IDENT = 297,
     _ABSTRACT = 298,
     _BREAK = 299,
     _CONTINUE = 300,
     _NULL_LITERAL = 301,
     _COMMENT = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "miniCompilerSyn.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1431

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  427

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    11,    16,    21,    26,    31,    45,
      59,    73,    87,   101,   115,   129,   143,   157,   171,   185,
     199,   202,   205,   208,   209,   212,   215,   218,   226,   234,
     242,   250,   251,   254,   257,   260,   263,   266,   269,   272,
     275,   278,   281,   285,   286,   290,   294,   298,   299,   302,
     303,   317,   331,   345,   359,   373,   387,   401,   415,   416,
     421,   426,   431,   441,   449,   457,   465,   473,   479,   485,
     491,   497,   504,   511,   518,   525,   532,   538,   544,   550,
     556,   565,   574,   583,   592,   601,   610,   611,   615,   619,
     620,   622,   624,   626,   628,   630,   632,   635,   638,   641,
     644,   648,   652,   656,   661,   666,   671,   675,   679,   683,
     689,   695,   701,   703,   706,   708,   710,   712,   718,   724,
     730,   736,   742,   747,   752,   757,   762,   767,   770,   773,
     777,   781,   785
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    51,    54,    -1,    18,    22,    23,    42,
      -1,     1,    22,    23,    42,    -1,    18,     1,    23,    42,
      -1,    18,    22,     1,    42,    -1,    18,    22,    23,     1,
      -1,    53,    24,     3,     4,     6,     7,    20,    50,    21,
      24,    61,    25,    25,    -1,    53,     1,     3,     4,     6,
       7,    20,    50,    21,    24,    61,    25,    25,    -1,    53,
      24,     1,     4,     6,     7,    20,    50,    21,    24,    61,
      25,    25,    -1,    53,    24,     3,     1,     6,     7,    20,
      50,    21,    24,    61,    25,    25,    -1,    53,    24,     3,
       4,     1,     7,    20,    50,    21,    24,    61,    25,    25,
      -1,    53,    24,     3,     4,     6,     1,    20,    50,    21,
      24,    61,    25,    25,    -1,    53,    24,     3,     4,     6,
       7,     1,    50,    21,    24,    61,    25,    25,    -1,    53,
      24,     3,     4,     6,     7,    20,    50,     1,    24,    61,
      25,    25,    -1,    53,    24,     3,     4,     6,     7,    20,
      50,    21,     1,    61,    25,    25,    -1,    53,    24,     3,
       4,     6,     7,    20,    50,    21,    24,     1,    25,    25,
      -1,    53,    24,     3,     4,     6,     7,    20,    50,    21,
      24,    61,     1,    25,    -1,    53,    24,     3,     4,     6,
       7,    20,    50,    21,    24,    61,    25,     1,    -1,     8,
      42,    -1,     1,    42,    -1,     8,     1,    -1,    -1,     5,
      42,    -1,     1,    42,    -1,     5,     1,    -1,    53,    52,
      24,    57,    60,    25,    54,    -1,     1,    52,    24,    57,
      60,    25,    54,    -1,    53,    52,     1,    57,    60,    25,
      54,    -1,    53,    52,    24,    57,    60,     1,    54,    -1,
      -1,    19,    42,    -1,    17,    42,    -1,     1,    42,    -1,
      19,     1,    -1,    17,     1,    -1,    19,    42,    -1,    17,
      42,    -1,     1,    42,    -1,    19,     1,    -1,    17,     1,
      -1,    55,    29,    57,    -1,    -1,    55,     1,    57,    -1,
      30,    55,    58,    -1,     1,    55,    58,    -1,    -1,    55,
      58,    -1,    -1,     3,    56,    20,    59,    21,    24,    57,
      61,     9,    67,    29,    25,    60,    -1,     1,    56,    20,
      59,    21,    24,    57,    61,     9,    67,    29,    25,    60,
      -1,     3,     1,     1,    59,    21,    24,    57,    61,     9,
      67,    29,    25,    60,    -1,     3,    56,    20,    59,     1,
      24,    57,    61,     9,    67,    29,    25,    60,    -1,     3,
      56,    20,    59,    21,     1,    57,    61,     9,    67,    29,
      25,    60,    -1,     3,    56,    20,    59,    21,    24,    57,
      61,     1,    67,    29,    25,    60,    -1,     3,    56,    20,
      59,    21,    24,    57,    61,     9,    67,     1,    25,    60,
      -1,     3,    56,    20,    59,    21,    24,    57,    61,     9,
      67,    29,     1,    60,    -1,    -1,    24,    61,    61,    25,
      -1,     1,    61,    61,    25,    -1,    24,    61,    61,     1,
      -1,    14,    20,    67,    21,    61,    61,    15,    61,    61,
      -1,     1,    20,    67,    21,    61,    15,    61,    -1,    14,
       1,    67,    21,    61,    15,    61,    -1,    14,    20,    67,
       1,    61,    15,    61,    -1,    14,    20,    67,    21,    61,
       1,    61,    -1,    16,    20,    67,    21,    61,    -1,     1,
      20,    67,    21,    61,    -1,    16,     1,    67,    21,    61,
      -1,    16,    20,    67,     1,    61,    -1,    10,    20,    67,
      21,    29,    61,    -1,     1,    20,    67,    21,    29,    61,
      -1,    10,     1,    67,    21,    29,    61,    -1,    10,    20,
      67,     1,    29,    61,    -1,    10,    20,    67,    21,     1,
      61,    -1,    42,    37,    67,    29,    61,    -1,     1,    37,
      67,    29,    61,    -1,    42,     1,    67,    29,    61,    -1,
      42,    37,    67,     1,    61,    -1,    42,    22,    67,    23,
      37,    67,    29,    61,    -1,     1,    22,    67,    23,    37,
      67,    29,    61,    -1,    42,     1,    67,    23,    37,    67,
      29,    61,    -1,    42,    22,    67,     1,    37,    67,    29,
      61,    -1,    42,    22,    67,    23,     1,    67,    29,    61,
      -1,    42,    22,    67,    23,    37,    67,     1,    61,    -1,
      -1,    30,    67,    62,    -1,     1,    67,    62,    -1,    -1,
      26,    -1,    39,    -1,    33,    -1,    34,    -1,    35,    -1,
      38,    -1,    67,    62,    -1,    28,    42,    -1,     1,    42,
      -1,    28,     1,    -1,    67,    64,    67,    -1,    67,    63,
      67,    -1,    67,     1,    67,    -1,    67,    22,    67,    23,
      -1,    67,     1,    67,    23,    -1,    67,    22,    67,     1,
      -1,    67,    28,    11,    -1,    67,     1,    11,    -1,    67,
      28,     1,    -1,    67,    66,    20,    65,    21,    -1,    67,
      66,     1,    65,    21,    -1,    67,    66,    20,    65,     1,
      -1,    41,    -1,    34,    41,    -1,    40,    -1,    42,    -1,
      12,    -1,    13,    17,    22,    67,    25,    -1,     1,    17,
      22,    67,    25,    -1,    13,     1,    22,    67,    25,    -1,
      13,    17,     1,    67,    25,    -1,    13,    17,    22,    67,
       1,    -1,    13,    42,    20,    21,    -1,     1,    42,    20,
      21,    -1,    13,     1,    20,    21,    -1,    13,    42,     1,
      21,    -1,    13,    42,    20,     1,    -1,    36,    67,    -1,
       1,    67,    -1,    20,    67,    21,    -1,     1,    67,    21,
      -1,    20,    67,     1,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    90,    91,    92,    93,    94,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     111,   112,   113,   114,   117,   118,   119,   122,   124,   125,
     126,   127,   130,   131,   132,   134,   135,   138,   139,   140,
     142,   143,   146,   147,   148,   151,   152,   153,   156,   157,
     160,   162,   163,   164,   165,   166,   167,   168,   169,   172,
     173,   174,   175,   177,   178,   179,   180,   181,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   205,   206,   207,
     210,   211,   214,   215,   216,   217,   220,   223,   224,   225,
     228,   230,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_PUBLIC", "_STATIC", "_CLASS", "_VOID",
  "_MAIN", "_EXTENDS", "_RETURN", "_SOP", "_LENGTH", "_THIS", "_NEW",
  "_IF", "_ELSE", "_WHILE", "_INTEGER", "_STRING", "_DATATYPE",
  "_OPENPARENT", "_CLOSEPARENT", "_OPENSQRBRACK", "_CLOSESQRBRACK",
  "_OPENBRAC", "_CLOSEBRAC", "_AND", "_OR", "_DOT", "_SEMICOLON", "_COMMA",
  "_DOUBLEQUOTE", "_SINGLEQUOTE", "_PLUS", "_MINUS", "_MULTIPLY", "_NOT",
  "_EQUAL", "_DIV", "_COMPOP", "_BOOLVALUE", "_INTEGERVALUE", "_IDENT",
  "_ABSTRACT", "_BREAK", "_CONTINUE", "_NULL_LITERAL", "_COMMENT",
  "$accept", "program", "MainMethodParam", "MainClass", "SectionE_I",
  "ClassScope", "ClassDeclaration", "Type", "MethodType", "VarDeclaration",
  "SectionC_T", "SectionT_SCT", "MethodDeclaration", "Statement",
  "SectionC_E", "LogicOperator", "MathOperator", "SectionE_SCE",
  "UseFunction", "Expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    50,    50,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    53,    53,    53,    54,    54,    54,
      54,    54,    55,    55,    55,    55,    55,    56,    56,    56,
      56,    56,    57,    57,    57,    58,    58,    58,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    62,    62,
      63,    63,    64,    64,    64,    64,    65,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     4,     4,     4,     4,     4,    13,    13,
      13,    13,    13,    13,    13,    13,    13,    13,    13,    13,
       2,     2,     2,     0,     2,     2,     2,     7,     7,     7,
       7,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     0,     3,     3,     3,     0,     2,     0,
      13,    13,    13,    13,    13,    13,    13,    13,     0,     4,
       4,     4,     9,     7,     7,     7,     7,     5,     5,     5,
       5,     6,     6,     6,     6,     6,     5,     5,     5,     5,
       8,     8,     8,     8,     8,     8,     0,     3,     3,     0,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     3,     3,     4,     4,     4,     3,     3,     3,     5,
       5,     5,     1,     2,     1,     1,     1,     5,     5,     5,
       5,     5,     4,     4,     4,     4,     4,     2,     2,     3,
       3,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    25,    26,    24,     1,
       0,     0,     2,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    36,    33,    35,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    42,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    41,    38,    40,    37,     0,     0,     0,    28,
      29,    30,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   116,     0,     0,     0,     0,   114,   112,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     8,     0,     0,     0,
       0,     0,     0,     0,   115,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,    90,     0,    92,    93,    94,
      95,    91,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    61,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,     0,
       0,   129,   107,   115,     0,     0,    68,     0,   108,   106,
      97,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,    70,    67,     0,
      78,     0,     0,     0,    79,    76,     0,     0,     0,     0,
       0,     0,     0,     0,   123,   124,     0,     0,     0,   125,
     126,   122,   104,    72,     0,     0,   103,     0,     0,     0,
       0,    73,    74,    75,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   120,     0,   117,    63,   110,
       0,     0,    96,   111,   109,     0,    64,     0,    65,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
      55,    56,    57,    50,     0,     0,    81,     0,     0,    82,
      83,    84,    85,    80,    88,    87,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    95,     4,    17,    11,    12,    35,    67,    36,
     119,   103,    53,   175,   392,   262,   263,   357,   264,   304
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
      13,   -25,    30,    28,   421,    15,  -127,  -127,  -127,  -127,
     226,   174,  -127,    91,   118,    81,    47,   156,   183,   211,
     218,   177,  -127,  -127,  -127,   245,   245,   245,   199,   227,
     287,   266,   209,    49,    50,    11,    12,    12,    12,   290,
     319,   321,   352,   283,  -127,  -127,  -127,  -127,  -127,   187,
     187,   361,   397,   281,   312,    35,   359,   375,   395,   405,
     411,   243,  -127,  -127,   339,    74,    87,   414,   111,   419,
     421,   421,   421,   421,   171,   171,   171,   171,   171,   171,
     171,  -127,  -127,  -127,  -127,  -127,   308,   308,   308,  -127,
    -127,  -127,  -127,   428,   208,   396,   430,   434,   449,   452,
     453,   239,    92,   454,   459,   240,   460,   461,   212,   462,
     471,   472,   473,   475,   476,   477,   186,   437,   437,  -127,
     480,   481,   482,   201,   465,   466,   467,   113,   110,   110,
     110,   110,   110,   110,   110,   110,   672,    92,    92,   207,
     207,   207,   207,   207,  -127,  -127,  -127,  -127,  -127,   573,
     299,   329,   330,   110,   114,   485,   486,   490,   491,   492,
     496,   504,   506,   589,   131,  -127,  -127,   675,   675,   675,
     675,   675,    97,    97,    97,   110,    97,    97,    97,    97,
      97,    97,   110,    97,    97,    97,   508,   509,   510,   513,
     514,   518,   519,   522,   525,   526,   158,   528,   550,   551,
     552,    20,   282,  -127,    21,    97,   521,    97,  -127,  -127,
    -127,   931,   953,   967,   541,   982,   997,  1012,  1027,  1042,
    1057,   170,   889,  1071,  1085,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,    97,    97,    97,
      97,    97,    97,   545,   548,   718,   276,   231,   331,  1100,
    -127,   737,   605,   619,    97,  -127,    22,  -127,  -127,  -127,
    -127,  -127,    97,    97,   332,   535,   641,  -127,   546,   529,
      89,   691,   512,   691,   641,   478,   641,  -127,  -127,   536,
     641,   544,   104,   478,   641,  1114,  1128,  1143,  1157,  1172,
    1186,    97,   555,  -127,   556,    97,    97,    97,   558,   264,
     335,  -127,  -127,   333,   760,   641,   567,  1208,   334,  -127,
    -127,   779,   802,    97,    97,    97,  -127,   641,   641,   641,
     641,   576,    45,   825,   577,   708,  -127,  -127,  -127,    97,
    -127,    97,    97,    97,  -127,  -127,   563,   569,   571,   575,
     579,   246,   175,  1226,  -127,  -127,  1244,  1262,  1280,  -127,
    -127,  -127,  -127,  -127,   641,   371,  -127,   580,   912,   280,
    1298,  -127,  -127,  -127,  -127,   641,    97,   848,   641,    10,
     587,  1316,  1334,  1352,  1370,    12,    12,    12,    12,    12,
      12,    12,    12,  -127,  -127,  -127,   407,  -127,  -127,  -127,
     605,    97,  -127,  -127,  -127,   641,  -127,  1392,  -127,   653,
     641,   641,   641,   641,   478,   641,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,   871,   912,  -127,   443,   641,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,   310,  -127,   596,   608,   390,    56,   560,    27,
     229,   315,   -37,  -126,     9,  -127,  -127,   305,  -127,   -77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -133
static const yytype_int16 yytable[] =
{
      54,    55,   155,   156,   157,   158,   159,   160,   161,   162,
     164,   149,    49,    51,     1,    52,    13,     6,     2,   -86,
     150,   241,   246,   308,   151,   -86,   152,   182,     9,   242,
     172,     7,   173,   309,   153,   -86,    72,   -58,   247,    14,
      50,   197,   198,   199,   200,   201,   322,   174,    23,   214,
      45,    47,   154,    37,    38,   150,   221,   203,   204,   151,
      73,   152,   243,   248,   310,   366,  -132,   173,  -132,   153,
     -86,  -132,     8,  -132,  -132,    82,    62,    63,  -132,   206,
    -132,   207,   174,  -132,  -132,   208,   209,   367,    84,    24,
     319,    46,    48,   117,    19,   211,   212,   213,   202,   215,
     216,   217,   218,   219,   220,   332,   222,   223,   224,   203,
     204,   149,    87,   -47,   147,   183,    83,   205,   320,    20,
     150,    21,   118,    22,   151,   245,   152,   306,   249,    85,
     251,   206,   195,   207,   153,   -86,   184,   208,   209,   210,
     316,   333,   102,   102,   102,   321,   324,   325,   326,   327,
     328,   185,   154,    81,   330,   148,   196,   334,   335,   235,
     285,   286,   287,   288,   289,   290,   167,   168,   169,   170,
     171,   277,    93,   137,   138,    15,   381,   307,    30,   353,
      25,    31,    16,   236,    26,   311,   312,   135,    32,    94,
     -43,   361,   362,   363,   364,   278,   -43,   -43,   -23,   370,
     382,   -43,   142,   -43,    33,    39,    34,    27,    32,   107,
     136,   -43,   -43,   126,   343,    28,   -43,   -43,   346,   347,
     348,   -43,    29,   -43,    33,   143,    34,    15,   388,   -43,
     108,   -43,   296,    40,    16,   127,   358,   358,   360,   396,
     115,   122,   398,   399,    79,   245,    32,   202,   -43,   -43,
     -23,    44,   371,   297,   372,   373,   374,   302,   203,   204,
     116,   123,    33,    80,    34,   350,   205,    42,     6,   416,
     -43,   380,    43,   214,   418,   419,   420,   421,   422,   423,
     206,   393,   207,   202,    60,   351,   208,   209,   303,   397,
      61,   306,   426,    41,   203,   204,   294,    56,   295,   243,
     176,   394,   205,  -132,  -132,  -132,    70,  -132,  -132,    32,
    -132,  -132,  -132,   414,   415,  -132,   206,  -132,   207,   177,
    -132,  -132,   208,   209,   244,    33,    57,    34,    58,   -49,
     178,   180,   298,   313,   -98,   -99,   202,    71,   406,   407,
     408,   409,   410,   411,   412,   413,   302,   203,   204,   179,
     181,   299,   314,   -98,   -99,   205,  -131,  -131,  -131,    59,
    -131,  -131,    64,  -131,  -131,  -131,   165,   166,  -131,   206,
    -131,   207,   202,  -131,  -131,   208,   209,   303,    65,    74,
      66,    81,   302,   203,   204,    96,    97,    98,    99,   100,
     101,   205,  -105,  -105,  -105,    75,  -105,  -105,    68,  -105,
    -105,  -105,   104,   105,  -105,   206,  -105,   207,   202,  -105,
    -105,   208,   209,   303,    65,    76,    66,   109,   302,   203,
     204,   -31,    10,   424,   425,    77,     2,   205,  -121,  -121,
    -121,    78,  -121,  -121,    86,  -121,  -121,  -121,    32,    88,
    -121,   206,  -121,   207,   149,  -121,  -121,   208,   209,   303,
     106,   110,   -86,   150,    33,   111,    34,   151,   -86,   152,
      89,    90,    91,    92,  -129,  -129,  -129,   153,   -86,  -129,
     112,  -129,   305,   113,   114,   120,  -129,  -129,  -129,   322,
     121,  -129,  -129,   124,   125,   154,   128,   -86,   150,   302,
     203,   204,   151,   -86,   152,   129,   130,   131,   205,   132,
     133,   134,   153,   -86,   139,   140,   141,   144,   145,   146,
     186,   187,   206,   322,   207,   188,   189,   190,   208,   209,
     323,   191,   150,   302,   203,   204,   151,   -86,   152,   192,
     202,   193,   205,   225,   226,   227,   153,   237,   228,   229,
     302,   203,   204,   230,   231,   202,   206,   232,   207,   205,
     233,   234,   208,   209,   323,   302,   203,   204,   318,   238,
     239,   240,   250,   206,   205,   207,   267,   291,   292,   208,
     209,   303,   315,   329,   149,   317,   344,   345,   206,   349,
     207,   331,   354,   150,   208,   209,   303,   151,   375,   152,
     149,   365,   368,   172,   376,   173,   377,   153,   -86,   150,
     378,   389,   400,   151,   379,   152,   202,    18,     5,   172,
     174,   173,    69,   153,   194,   154,   302,   203,   204,   359,
     149,     0,     0,     0,     0,   205,   174,     0,   -86,   150,
       0,   154,     0,   151,   -86,   152,     0,     0,     0,   206,
       0,   207,   149,   153,   -86,   208,   209,   303,   305,     0,
     -86,   150,     0,     0,   149,   151,   -86,   152,     0,     0,
       0,   154,   -66,   150,     0,   153,   -86,   151,   -66,   152,
       0,     0,     0,   163,     0,     0,   149,   153,   -66,     0,
       0,     0,   150,   154,   -86,   150,   151,     0,   152,   151,
       0,   152,   149,     0,     0,   154,   153,   -86,     0,   153,
       0,   150,     0,     0,     0,   151,   -86,   152,     0,   369,
       0,     0,     0,     0,   154,   153,     0,   154,   150,   252,
       0,     0,   151,   -86,   152,     0,     0,     0,     0,     0,
       0,     0,   153,   154,     0,     0,     0,     0,   252,   293,
     254,  -128,     0,  -128,   255,     0,   256,  -128,  -128,     0,
     154,   257,   258,   259,     0,     0,   260,   261,  -127,   254,
    -127,   252,  -127,   255,     0,   256,  -127,  -127,     0,     0,
     257,   258,   259,     0,     0,   260,   261,     0,     0,     0,
     252,  -102,   254,   352,     0,  -102,   255,     0,   256,  -102,
    -102,     0,     0,   257,   258,   259,     0,     0,   260,   261,
    -101,   254,  -101,   252,  -101,   255,     0,   256,  -101,  -101,
       0,     0,   257,   258,   259,     0,     0,   260,   261,     0,
       0,     0,     0,  -100,   254,  -100,   183,  -100,   255,     0,
     256,  -100,  -100,     0,     0,   257,   258,   259,     0,     0,
     260,   261,     0,     0,     0,   -98,  -115,   184,  -115,   183,
       0,  -115,     0,  -115,  -115,     0,     0,     0,  -115,  -115,
    -115,     0,   185,  -115,  -115,     0,     0,     0,   292,  -115,
     184,  -115,   390,     0,  -115,     0,  -115,  -115,     0,     0,
       0,  -115,  -115,  -115,     0,   185,  -115,  -115,     0,     0,
     252,     0,   -89,   254,   352,     0,     0,   255,     0,   256,
       0,   391,     0,     0,   257,   258,   259,     0,     0,   260,
     261,   254,   279,   390,     0,   255,     0,   256,   280,     0,
       0,     0,   257,   258,   259,     0,     0,   260,   261,     0,
       0,     0,   252,   -89,   254,     0,     0,     0,   255,     0,
     256,     0,   391,     0,     0,   257,   258,   259,     0,     0,
     260,   261,   253,   254,   252,     0,     0,   255,     0,   256,
       0,     0,     0,     0,   257,   258,   259,     0,   252,   260,
     261,     0,     0,     0,     0,   254,   265,     0,     0,   255,
       0,   256,     0,   252,     0,     0,   257,   258,   259,   254,
       0,   260,   261,   255,     0,   256,   266,     0,   269,     0,
     257,   258,   259,   268,   254,   260,   261,     0,   255,     0,
     256,     0,     0,   252,     0,   257,   258,   259,   270,   254,
     260,   261,     0,   255,     0,   256,     0,     0,   272,     0,
     257,   258,   259,   271,   254,   260,   261,     0,   255,     0,
     256,     0,     0,   252,     0,   257,   258,   259,   273,   254,
     260,   261,     0,   255,     0,   256,     0,     0,   275,     0,
     257,   258,   259,   274,   254,   260,   261,     0,   255,     0,
     256,     0,   281,     0,     0,   257,   258,   259,   276,   254,
     260,   261,     0,   255,     0,   256,   283,     0,     0,     0,
     257,   258,   259,   254,   282,   260,   261,   255,     0,   256,
       0,   300,     0,     0,   257,   258,   259,   254,     0,   260,
     261,   255,     0,   256,   284,   252,     0,     0,   257,   258,
     259,   301,   254,   260,   261,     0,   255,     0,   256,   252,
       0,     0,     0,   257,   258,   259,   254,     0,   260,   261,
     255,     0,   256,   336,   252,     0,     0,   257,   258,   259,
     254,     0,   260,   261,   255,     0,   256,   337,   252,     0,
       0,   257,   258,   259,     0,   254,   260,   261,     0,   255,
       0,   256,   338,   252,     0,     0,   257,   258,   259,   254,
       0,   260,   261,   255,     0,   256,   339,   341,     0,     0,
     257,   258,   259,     0,   254,   260,   261,     0,   255,     0,
     256,   340,     0,     0,     0,   257,   258,   259,   254,   355,
     260,   261,   255,     0,   256,   342,     0,     0,     0,   257,
     258,   259,     0,     0,   260,   261,     0,   252,     0,     0,
     254,   356,     0,     0,   255,     0,   256,     0,     0,     0,
       0,   257,   258,   259,     0,   252,   260,   261,   254,     0,
       0,   383,   255,     0,   256,     0,     0,     0,     0,   257,
     258,   259,     0,   252,   260,   261,   254,     0,     0,   384,
     255,     0,   256,     0,     0,     0,     0,   257,   258,   259,
       0,   386,   260,   261,   254,     0,     0,   385,   255,     0,
     256,     0,     0,     0,     0,   257,   258,   259,     0,   252,
     260,   261,   254,     0,     0,   387,   255,     0,   256,     0,
       0,     0,     0,   257,   258,   259,     0,   252,   260,   261,
     254,     0,     0,     0,   255,     0,   256,   395,     0,     0,
       0,   257,   258,   259,     0,   252,   260,   261,   254,     0,
       0,     0,   255,     0,   256,   401,     0,     0,     0,   257,
     258,   259,     0,   252,   260,   261,   254,     0,     0,     0,
     255,     0,   256,   402,     0,     0,     0,   257,   258,   259,
       0,   404,   260,   261,   254,     0,     0,     0,   255,     0,
     256,   403,     0,     0,     0,   257,   258,   259,     0,     0,
     260,   261,   254,   300,     0,     0,   255,     0,   256,   405,
       0,     0,     0,   257,   258,   259,     0,     0,   260,   261,
       0,     0,     0,   417,   254,     0,     0,     0,   255,     0,
     256,     0,     0,     0,     0,   257,   258,   259,     0,     0,
     260,   261
};

static const yytype_int16 yycheck[] =
{
      37,    38,   128,   129,   130,   131,   132,   133,   134,   135,
     136,     1,     1,     1,     1,     3,     1,    42,     5,     9,
      10,     1,     1,     1,    14,    15,    16,   153,     0,     9,
      20,     1,    22,    11,    24,    25,     1,    25,    17,    24,
      29,   167,   168,   169,   170,   171,     1,    37,     1,   175,
       1,     1,    42,    26,    27,    10,   182,    12,    13,    14,
      25,    16,    17,    42,    42,    20,    21,    22,    23,    24,
      25,    26,    42,    28,    29,     1,    49,    50,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     1,    42,
       1,    42,    42,     1,     3,   172,   173,   174,     1,   176,
     177,   178,   179,   180,   181,     1,   183,   184,   185,    12,
      13,     1,     1,    21,     1,     1,    42,    20,    29,     1,
      10,     3,    30,    42,    14,   202,    16,   253,   205,    42,
     207,    34,     1,    36,    24,    25,    22,    40,    41,    42,
     266,    37,    86,    87,    88,   271,   272,   273,   274,   275,
     276,    37,    42,    42,   280,    42,    25,   283,   284,     1,
     237,   238,   239,   240,   241,   242,   139,   140,   141,   142,
     143,     1,     1,   117,   118,     1,     1,   254,     1,   305,
      24,     4,     8,    25,     1,   262,   263,     1,     1,    18,
       3,   317,   318,   319,   320,    25,     9,    10,    24,   325,
      25,    14,     1,    16,    17,     6,    19,    24,     1,     1,
      24,    24,    25,     1,   291,     4,     9,    10,   295,   296,
     297,    14,     4,    16,    17,    24,    19,     1,   354,    42,
      22,    24,     1,     6,     8,    23,   313,   314,   315,   365,
       1,     1,   368,   369,     1,   322,     1,     1,     3,    42,
      24,    42,   329,    22,   331,   332,   333,    11,    12,    13,
      21,    21,    17,    20,    19,     1,    20,     1,    42,   395,
      25,    25,     6,   399,   400,   401,   402,   403,   404,   405,
      34,     1,    36,     1,     1,    21,    40,    41,    42,   366,
       7,   417,   418,     6,    12,    13,    20,     7,    22,    17,
       1,    21,    20,    21,    22,    23,    25,    25,    26,     1,
      28,    29,    30,   390,   391,    33,    34,    35,    36,    20,
      38,    39,    40,    41,    42,    17,     7,    19,     7,    21,
       1,     1,     1,     1,     1,     1,     1,    25,   375,   376,
     377,   378,   379,   380,   381,   382,    11,    12,    13,    20,
      20,    20,    20,    20,    20,    20,    21,    22,    23,     7,
      25,    26,     1,    28,    29,    30,   137,   138,    33,    34,
      35,    36,     1,    38,    39,    40,    41,    42,    17,    20,
      19,    42,    11,    12,    13,    75,    76,    77,    78,    79,
      80,    20,    21,    22,    23,    20,    25,    26,     1,    28,
      29,    30,    87,    88,    33,    34,    35,    36,     1,    38,
      39,    40,    41,    42,    17,    20,    19,    21,    11,    12,
      13,     0,     1,   414,   415,    20,     5,    20,    21,    22,
      23,    20,    25,    26,    20,    28,    29,    30,     1,    20,
      33,    34,    35,    36,     1,    38,    39,    40,    41,    42,
      22,    21,     9,    10,    17,    21,    19,    14,    15,    16,
      70,    71,    72,    73,    21,    22,    23,    24,    25,    26,
      21,    28,    29,    21,    21,    21,    33,    34,    35,     1,
      21,    38,    39,    23,    23,    42,    24,     9,    10,    11,
      12,    13,    14,    15,    16,    24,    24,    24,    20,    24,
      24,    24,    24,    25,    24,    24,    24,    42,    42,    42,
      25,    25,    34,     1,    36,    25,    25,    25,    40,    41,
      42,    25,    10,    11,    12,    13,    14,    15,    16,    25,
       1,    25,    20,    25,    25,    25,    24,     9,    25,    25,
      11,    12,    13,    25,    25,     1,    34,    25,    36,    20,
      25,    25,    40,    41,    42,    11,    12,    13,    29,     9,
       9,     9,    41,    34,    20,    36,    25,    22,    20,    40,
      41,    42,    37,    37,     1,    29,    21,    21,    34,    21,
      36,    37,    15,    10,    40,    41,    42,    14,    25,    16,
       1,    15,    15,    20,    25,    22,    25,    24,    25,    10,
      25,    21,    15,    14,    25,    16,     1,    11,     0,    20,
      37,    22,    52,    24,    25,    42,    11,    12,    13,   314,
       1,    -1,    -1,    -1,    -1,    20,    37,    -1,     9,    10,
      -1,    42,    -1,    14,    15,    16,    -1,    -1,    -1,    34,
      -1,    36,     1,    24,    25,    40,    41,    42,    29,    -1,
       9,    10,    -1,    -1,     1,    14,    15,    16,    -1,    -1,
      -1,    42,     9,    10,    -1,    24,    25,    14,    15,    16,
      -1,    -1,    -1,     1,    -1,    -1,     1,    24,    25,    -1,
      -1,    -1,    10,    42,     9,    10,    14,    -1,    16,    14,
      -1,    16,     1,    -1,    -1,    42,    24,    25,    -1,    24,
      -1,    10,    -1,    -1,    -1,    14,    15,    16,    -1,     1,
      -1,    -1,    -1,    -1,    42,    24,    -1,    42,    10,     1,
      -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    42,    -1,    -1,    -1,    -1,     1,    21,
      22,    23,    -1,    25,    26,    -1,    28,    29,    30,    -1,
      42,    33,    34,    35,    -1,    -1,    38,    39,    21,    22,
      23,     1,    25,    26,    -1,    28,    29,    30,    -1,    -1,
      33,    34,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
       1,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      21,    22,    23,     1,    25,    26,    -1,    28,    29,    30,
      -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    21,    22,    23,     1,    25,    26,    -1,
      28,    29,    30,    -1,    -1,    33,    34,    35,    -1,    -1,
      38,    39,    -1,    -1,    -1,    20,    21,    22,    23,     1,
      -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    -1,    -1,    -1,    20,    21,
      22,    23,     1,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,    37,    38,    39,    -1,    -1,
       1,    -1,    21,    22,    23,    -1,    -1,    26,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,    35,    -1,    -1,    38,
      39,    22,    23,     1,    -1,    26,    -1,    28,    29,    -1,
      -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,    -1,
      -1,    -1,     1,    21,    22,    -1,    -1,    -1,    26,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,    35,    -1,    -1,
      38,    39,    21,    22,     1,    -1,    -1,    26,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,
      39,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    26,
      -1,    28,    -1,     1,    -1,    -1,    33,    34,    35,    22,
      -1,    38,    39,    26,    -1,    28,    29,    -1,     1,    -1,
      33,    34,    35,    21,    22,    38,    39,    -1,    26,    -1,
      28,    -1,    -1,     1,    -1,    33,    34,    35,    21,    22,
      38,    39,    -1,    26,    -1,    28,    -1,    -1,     1,    -1,
      33,    34,    35,    21,    22,    38,    39,    -1,    26,    -1,
      28,    -1,    -1,     1,    -1,    33,    34,    35,    21,    22,
      38,    39,    -1,    26,    -1,    28,    -1,    -1,     1,    -1,
      33,    34,    35,    21,    22,    38,    39,    -1,    26,    -1,
      28,    -1,     1,    -1,    -1,    33,    34,    35,    21,    22,
      38,    39,    -1,    26,    -1,    28,     1,    -1,    -1,    -1,
      33,    34,    35,    22,    23,    38,    39,    26,    -1,    28,
      -1,     1,    -1,    -1,    33,    34,    35,    22,    -1,    38,
      39,    26,    -1,    28,    29,     1,    -1,    -1,    33,    34,
      35,    21,    22,    38,    39,    -1,    26,    -1,    28,     1,
      -1,    -1,    -1,    33,    34,    35,    22,    -1,    38,    39,
      26,    -1,    28,    29,     1,    -1,    -1,    33,    34,    35,
      22,    -1,    38,    39,    26,    -1,    28,    29,     1,    -1,
      -1,    33,    34,    35,    -1,    22,    38,    39,    -1,    26,
      -1,    28,    29,     1,    -1,    -1,    33,    34,    35,    22,
      -1,    38,    39,    26,    -1,    28,    29,     1,    -1,    -1,
      33,    34,    35,    -1,    22,    38,    39,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    22,     1,
      38,    39,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    -1,    38,    39,    -1,     1,    -1,    -1,
      22,    23,    -1,    -1,    26,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    35,    -1,     1,    38,    39,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      34,    35,    -1,     1,    38,    39,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    35,
      -1,     1,    38,    39,    22,    -1,    -1,    25,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,     1,
      38,    39,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    35,    -1,     1,    38,    39,
      22,    -1,    -1,    -1,    26,    -1,    28,    29,    -1,    -1,
      -1,    33,    34,    35,    -1,     1,    38,    39,    22,    -1,
      -1,    -1,    26,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,     1,    38,    39,    22,    -1,    -1,    -1,
      26,    -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,
      -1,     1,    38,    39,    22,    -1,    -1,    -1,    26,    -1,
      28,    29,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      38,    39,    22,     1,    -1,    -1,    26,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    -1,    -1,    38,    39,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    26,    -1,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    -1,    -1,
      38,    39
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     5,    49,    51,    53,    42,     1,    42,     0,
       1,    53,    54,     1,    24,     1,     8,    52,    52,     3,
       1,     3,    42,     1,    42,    24,     1,    24,     4,     4,
       1,     4,     1,    17,    19,    55,    57,    57,    57,     6,
       6,     6,     1,     6,    42,     1,    42,     1,    42,     1,
      29,     1,     3,    60,    60,    60,     7,     7,     7,     7,
       1,     7,    57,    57,     1,    17,    19,    56,     1,    56,
      25,    25,     1,    25,    20,    20,    20,    20,    20,     1,
      20,    42,     1,    42,     1,    42,    20,     1,    20,    54,
      54,    54,    54,     1,    18,    50,    50,    50,    50,    50,
      50,    50,    55,    59,    59,    59,    22,     1,    22,    21,
      21,    21,    21,    21,    21,     1,    21,     1,    30,    58,
      21,    21,     1,    21,    23,    23,     1,    23,    24,    24,
      24,    24,    24,    24,    24,     1,    24,    55,    55,    24,
      24,    24,     1,    24,    42,    42,    42,     1,    42,     1,
      10,    14,    16,    24,    42,    61,    61,    61,    61,    61,
      61,    61,    61,     1,    61,    58,    58,    57,    57,    57,
      57,    57,    20,    22,    37,    61,     1,    20,     1,    20,
       1,    20,    61,     1,    22,    37,    25,    25,    25,    25,
      25,    25,    25,    25,    25,     1,    25,    61,    61,    61,
      61,    61,     1,    12,    13,    20,    34,    36,    40,    41,
      42,    67,    67,    67,    61,    67,    67,    67,    67,    67,
      67,    61,    67,    67,    67,    25,    25,    25,    25,    25,
      25,    25,    25,    25,    25,     1,    25,     9,     9,     9,
       9,     1,     9,    17,    42,    67,     1,    17,    42,    67,
      41,    67,     1,    21,    22,    26,    28,    33,    34,    35,
      38,    39,    63,    64,    66,    23,    29,    25,    21,     1,
      21,    21,     1,    21,    21,     1,    21,     1,    25,    23,
      29,     1,    23,     1,    29,    67,    67,    67,    67,    67,
      67,    22,    20,    21,    20,    22,     1,    22,     1,    20,
       1,    21,    11,    42,    67,    29,    61,    67,     1,    11,
      42,    67,    67,     1,    20,    37,    61,    29,    29,     1,
      29,    61,     1,    42,    61,    61,    61,    61,    61,    37,
      61,    37,     1,    37,    61,    61,    29,    29,    29,    29,
      29,     1,    29,    67,    21,    21,    67,    67,    67,    21,
       1,    21,    23,    61,    15,     1,    23,    65,    67,    65,
      67,    61,    61,    61,    61,    15,    20,    42,    15,     1,
      61,    67,    67,    67,    67,    25,    25,    25,    25,    25,
      25,     1,    25,    25,    25,    25,     1,    25,    61,    21,
       1,    30,    62,     1,    21,    29,    61,    67,    61,    61,
      15,    29,    29,    29,     1,    29,    60,    60,    60,    60,
      60,    60,    60,    60,    67,    67,    61,    21,    61,    61,
      61,    61,    61,    61,    62,    62,    61
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 87 "miniCompilerSyn.y"
    { printf("Analyze finished with success \n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 91 "miniCompilerSyn.y"
    { yyerror (" String is needed  "); YYABORT;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 92 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 93 "miniCompilerSyn.y"
    { yyerror (" CLose brackets is needed  "); YYABORT;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 94 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 98 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 99 "miniCompilerSyn.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 100 "miniCompilerSyn.y"
    { yyerror (" Static is needed  "); YYABORT;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 101 "miniCompilerSyn.y"
    { yyerror (" Void is needed  "); YYABORT;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 102 "miniCompilerSyn.y"
    { yyerror (" Main is needed  "); YYABORT;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 103 "miniCompilerSyn.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 104 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 105 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 106 "miniCompilerSyn.y"
    { yyerror (" Statement is needed  "); YYABORT;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 107 "miniCompilerSyn.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "miniCompilerSyn.y"
    { yyerror (" close brackets is needed  "); YYABORT;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 112 "miniCompilerSyn.y"
    { yyerror (" Extends is needed  "); YYABORT;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 113 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 114 "miniCompilerSyn.y"
    {level = 0;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 118 "miniCompilerSyn.y"
    { yyerror (" Class is needed  "); YYABORT;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 119 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 125 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 126 "miniCompilerSyn.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 132 "miniCompilerSyn.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 134 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 135 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 140 "miniCompilerSyn.y"
    { yyerror (" Valid Type is needed  "); YYABORT;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 142 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 143 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 148 "miniCompilerSyn.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 152 "miniCompilerSyn.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 156 "miniCompilerSyn.y"
    { isParam = false; level = 1;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 157 "miniCompilerSyn.y"
    { isParam = false; level = 1;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 162 "miniCompilerSyn.y"
    { yyerror (" Public is needed  "); YYABORT;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 163 "miniCompilerSyn.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 164 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 165 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 166 "miniCompilerSyn.y"
    { yyerror (" Return is needed  "); YYABORT;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 167 "miniCompilerSyn.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 168 "miniCompilerSyn.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 173 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 174 "miniCompilerSyn.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 177 "miniCompilerSyn.y"
    { yyerror (" If brackets is needed  "); YYABORT;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 178 "miniCompilerSyn.y"
    { yyerror (" Open parentheses brackets is needed  "); YYABORT;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 179 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 180 "miniCompilerSyn.y"
    { yyerror (" Else is needed  "); YYABORT;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 183 "miniCompilerSyn.y"
    { yyerror (" While is needed  "); YYABORT;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 184 "miniCompilerSyn.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 185 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 187 "miniCompilerSyn.y"
    { yyerror (" System.out.println is needed  "); YYABORT;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 188 "miniCompilerSyn.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 189 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 190 "miniCompilerSyn.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 193 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 194 "miniCompilerSyn.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 195 "miniCompilerSyn.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 197 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 198 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 199 "miniCompilerSyn.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 200 "miniCompilerSyn.y"
    { yyerror (" Equal operator is needed  "); YYABORT;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 201 "miniCompilerSyn.y"
    { yyerror (" Semi colon is needed  "); YYABORT;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 206 "miniCompilerSyn.y"
    { yyerror (" Comma is needed  "); YYABORT;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 210 "miniCompilerSyn.y"
    {com_op = "&&";;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 211 "miniCompilerSyn.y"
    {com_op = "$1";;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 214 "miniCompilerSyn.y"
    { math_op = "+";;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 215 "miniCompilerSyn.y"
    { math_op = "-";;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 216 "miniCompilerSyn.y"
    { math_op = "*";;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 217 "miniCompilerSyn.y"
    { math_op = "/";;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 224 "miniCompilerSyn.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 225 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 232 "miniCompilerSyn.y"
    { yyerror (" Comparison operator is needed  "); YYABORT;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 234 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 235 "miniCompilerSyn.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 237 "miniCompilerSyn.y"
    { yyerror (" Dot is needed  "); YYABORT;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 238 "miniCompilerSyn.y"
    { yyerror (" Length is needed  "); YYABORT;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 240 "miniCompilerSyn.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 241 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 248 "miniCompilerSyn.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 249 "miniCompilerSyn.y"
    { yyerror (" Integer type is needed  "); YYABORT;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 250 "miniCompilerSyn.y"
    { yyerror (" Open brackets is needed  "); YYABORT;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 251 "miniCompilerSyn.y"
    { yyerror (" Close brackets is needed  "); YYABORT;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 253 "miniCompilerSyn.y"
    { yyerror (" New is needed  "); YYABORT;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 254 "miniCompilerSyn.y"
    { yyerror (" Identifier is needed  "); YYABORT;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 255 "miniCompilerSyn.y"
    { yyerror (" Open parentheses is needed  "); YYABORT;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 256 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 258 "miniCompilerSyn.y"
    { yyerror (" Not operator is needed  "); YYABORT;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 260 "miniCompilerSyn.y"
    { yyerror (" open parentheses is needed  "); YYABORT;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 261 "miniCompilerSyn.y"
    { yyerror (" Close parentheses is needed  "); YYABORT;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 262 "miniCompilerSyn.y"
    { yyerror (" Integer Value or boolean value or identifier or this   is needed  "); YYABORT;}
    break;



/* Line 1455 of yacc.c  */
#line 2563 "miniCompilerSyn.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 265 "miniCompilerSyn.y"


    int yyerror(char const *msg) {

        fprintf(stderr, "%s hii%d\n", msg,yylineno);
        return 0;
    }

    extern FILE *yyin;

    int main()
    {
        yyparse();
    }
