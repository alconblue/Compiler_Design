/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
    ID = 258,
    CONSTANT = 259,
    STR = 260,
    HEADERFILE = 261,
    INC = 262,
    DEC = 263,
    LE = 264,
    GE = 265,
    EQ = 266,
    NE = 267,
    AND = 268,
    OR = 269,
    LEFT = 270,
    RIGHT = 271,
    MUL_ASSIGN = 272,
    DIV_ASSIGN = 273,
    MOD_ASSIGN = 274,
    ADD_ASSIGN = 275,
    SUB_ASSIGN = 276,
    LEFT_ASSIGN = 277,
    RIGHT_ASSIGN = 278,
    AND_ASSIGN = 279,
    XOR_ASSIGN = 280,
    OR_ASSIGN = 281,
    AUTO = 282,
    BREAK = 283,
    CASE = 284,
    CHAR = 285,
    CONST = 286,
    CONTINUE = 287,
    DEFAULT = 288,
    DO = 289,
    DOUBLE = 290,
    ELSE = 291,
    ENUM = 292,
    EXTERN = 293,
    FLOAT = 294,
    FOR = 295,
    GOTO = 296,
    IF = 297,
    INT = 298,
    LONG = 299,
    REGISTER = 300,
    RETURN = 301,
    SHORT = 302,
    SIGNED = 303,
    SIZEOF = 304,
    STATIC = 305,
    STRUCT = 306,
    SWITCH = 307,
    TYPEDEF = 308,
    UNION = 309,
    UNSIGNED = 310,
    VOID = 311,
    VOLATILE = 312,
    WHILE = 313
  };
#endif
/* Tokens.  */
#define ID 258
#define CONSTANT 259
#define STR 260
#define HEADERFILE 261
#define INC 262
#define DEC 263
#define LE 264
#define GE 265
#define EQ 266
#define NE 267
#define AND 268
#define OR 269
#define LEFT 270
#define RIGHT 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define LEFT_ASSIGN 277
#define RIGHT_ASSIGN 278
#define AND_ASSIGN 279
#define XOR_ASSIGN 280
#define OR_ASSIGN 281
#define AUTO 282
#define BREAK 283
#define CASE 284
#define CHAR 285
#define CONST 286
#define CONTINUE 287
#define DEFAULT 288
#define DO 289
#define DOUBLE 290
#define ELSE 291
#define ENUM 292
#define EXTERN 293
#define FLOAT 294
#define FOR 295
#define GOTO 296
#define IF 297
#define INT 298
#define LONG 299
#define REGISTER 300
#define RETURN 301
#define SHORT 302
#define SIGNED 303
#define SIZEOF 304
#define STATIC 305
#define STRUCT 306
#define SWITCH 307
#define TYPEDEF 308
#define UNION 309
#define UNSIGNED 310
#define VOID 311
#define VOLATILE 312
#define WHILE 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "parser.y" /* yacc.c:355  */

	int integer;
	float floating_point;
	char *sym;

#line 229 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 20 "parser.y" /* yacc.c:358  */
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int size=20;
	char *alc=0;
	int globalIndex=0;
	struct symbolTable{
		int index;
		char *symbol;
		char *attribute;
		char *data;
		struct symbolTable *next;
	};
	struct symbolTable *hash[2][20];
	int i=0;
	void init()
	{
		for(;i<size;i++)
		{
			hash[0][i] = NULL;
			hash[1][i] = NULL;
		}
	}
	
	int hashLocation(char *sym)
	{
		int sum=0;
		size_t length = strlen(sym);
		int k=0;
		for(;k<length;k++)
		{
			sum = sum + (int)sym[k];
		}
		return sum%size;
	}

	int searchHash(int type, char *sym, int x)
	{
		struct symbolTable *temp = hash[type][x];
		while(temp!=NULL)
		{
			if (strcmp(temp->symbol, sym)==0)
			{
				return 0;
			}
			temp=temp->next;
		}
		return 1;
	}

	void addToTable(int type, char *sym, char *attr, char *dat)
	{
		int x = hashLocation(sym);
		if (searchHash(type, sym, x)==0)
			return;	
		struct symbolTable *newSymbol = (struct symbolTable *)malloc(sizeof(struct symbolTable));
		char *te = (char *)malloc(strlen(sym)+1);
		strcpy(te, sym);
		newSymbol->symbol = te;
		newSymbol->attribute = attr;
		newSymbol->data = dat;
		newSymbol->next = NULL;
		newSymbol->index = globalIndex + 1;
		globalIndex++;
		struct symbolTable *temp = hash[type][x];
		hash[type][x] = newSymbol;
		hash[type][x]->next = temp;
	}

	void display()
	{
		int k=0;
		printf("\n\nSYMBOL TABLE:\n");
		printf("------------------------------------------------------------------------------------\n");
		printf("%*s\t|\t%*s\t|\t%*s\t|\t%*s\n", 10, "INDEX", 10, "SYMBOL", 10, "ATTRIBUTE", 10, "DATATYPE");
		printf("------------------------------------------------------------------------------------\n");
		for(;k<size;k++)
		{
			struct symbolTable *temp = hash[0][k];
			while(temp!=NULL)
			{
				printf("%*d\t|\t%*s\t|\t%*s\t|\t%*s\n",10, temp->index, 10, temp->symbol, 10, temp->attribute, 10, temp->data);
				temp = temp->next;
			}
		}
		printf("-------------------------------------------------------------------------------------\n");
		k=0;
		printf("\n\nCONSTANT TABLE:\n");
		printf("-------------------------------------------------------------------\n");
		printf("%*s\t|\t%*s\t|\t%*s\n", 10, "INDEX", 10, "SYMBOL", 10, "ATTRIBUTE");
		printf("-------------------------------------------------------------------\n");
		for(;k<size;k++)
		{
			struct symbolTable *temp = hash[1][k];
			while(temp!=NULL)
			{
				printf("%*d\t|\t%*s\t|\t%*s\n",10, temp->index, 10, temp->symbol, 10, temp->attribute);
				temp = temp->next;
			}
		}
		printf("-------------------------------------------------------------------\n");
	}

#line 350 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   610

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      62,    63,    68,    69,    61,    70,    66,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    59,
      75,    60,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,    78,    82,    71,     2,     2,     2,
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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   129,   130,   131,   132,   133,   138,   139,
     140,   141,   142,   143,   144,   147,   148,   149,   150,   151,
     154,   155,   162,   165,   166,   167,   170,   171,   174,   175,
     178,   181,   182,   183,   184,   185,   186,   187,   188,   202,
     204,   205,   207,   208,   221,   229,   231,   232,   235,   236,
     237,   238,   241,   242,   243,   244,   245,   246,   247,   251,
     252,   256,   257,   258,   259,   260,   261,   264,   265,   266,
     267,   268,   269,   272,   273,   276,   277,   278,   279,   282,
     283,   284,   287,   288,   289,   292,   293,   294,   295,   296,
     299,   300,   301,   304,   305,   308,   309,   312,   313,   316,
     317,   320,   321,   324,   325,   328,   329,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   347,   348,
     349,   350,   359,   360,   371,   372,   376,   377,   378,   383,
     384,   387,   388,   389
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "CONSTANT", "STR", "HEADERFILE",
  "INC", "DEC", "LE", "GE", "EQ", "NE", "AND", "OR", "LEFT", "RIGHT",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "AUTO", "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO",
  "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT", "FOR", "GOTO", "IF", "INT",
  "LONG", "REGISTER", "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC",
  "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE",
  "WHILE", "';'", "'='", "','", "'('", "')'", "'['", "']'", "'.'", "'&'",
  "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "':'", "'{'", "'}'", "$accept", "dataType", "statement",
  "statement1", "statements", "declarationStatement", "declaration",
  "declarationAndAssignment", "completeDeclaration", "argumentList",
  "declarationList", "identifierList", "ifAndElseMatched",
  "ifAndElseMatched1", "ifAndElseUnmatched", "whileLoopStatement",
  "expressionStatement", "expression", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "jumpStatement",
  "compoundStatement", "startSymbol", "external_declaration",
  "functionDefinition", "identi", "consta", "stri", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    59,
      61,    44,    40,    41,    91,    93,    46,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,   123,   125
};
# endif

#define YYPACT_NINF -180

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-180)))

#define YYTABLE_NINF -42

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,  -180,  -180,  -180,  -180,  -180,  -180,  -180,    36,  -180,
     -28,   -15,    51,  -180,  -180,  -180,   -14,   -51,   192,  -180,
    -180,  -180,    36,   126,    -9,    36,    25,  -180,  -180,     6,
      40,  -180,  -180,  -180,  -180,  -180,   142,  -180,  -180,    87,
     116,    -9,   126,   469,   469,    -3,    44,    46,   419,   493,
      65,   395,  -180,  -180,  -180,  -180,  -180,  -180,  -180,    36,
    -180,   198,  -180,  -180,  -180,  -180,  -180,    22,  -180,    18,
     550,   517,  -180,    28,    99,   200,    12,   196,    66,    63,
      70,   131,    -4,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,   517,  -180,  -180,
    -180,  -180,   517,  -180,    45,   395,  -180,   517,    98,    80,
     113,  -180,  -180,  -180,   517,  -180,  -180,   445,   517,    36,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,   517,  -180,  -180,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,    91,  -180,   119,   101,   517,  -180,  -180,
    -180,   115,  -180,    32,  -180,  -180,  -180,  -180,  -180,    28,
      28,    99,    99,   200,   200,   200,   200,    12,    12,   196,
      66,    63,    70,   131,   -32,   254,  -180,   301,  -180,   517,
    -180,  -180,   517,   128,   161,  -180,   163,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,   517,   348,   132,   155,  -180,  -180,
    -180,   254,   517,   184,   133,   254,   254,  -180,   189,   348
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   128,     6,     5,     3,     4,     2,     7,     0,   127,
       0,     0,     0,   124,   126,   131,    30,    35,     0,    22,
       1,   125,     0,     0,     0,     0,    27,    26,    29,     0,
      31,   132,   133,    38,    37,    36,     0,   129,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,    70,    71,    72,   123,     0,
      21,     0,     8,     9,    10,    11,    12,     0,    52,    61,
      73,     0,    75,    79,    82,    85,    90,    93,    95,    97,
      99,   101,   103,   105,    46,    13,    14,    48,    49,    50,
      24,    25,    28,   130,    34,    33,    32,     0,    62,    63,
     119,   118,     0,   120,     0,     0,    65,     0,     0,     0,
      35,   122,    20,    45,     0,    57,    58,     0,     0,     0,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     107,     0,    73,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,    51,    47,
      54,     0,    59,     0,    56,   106,    76,    77,    78,    80,
      81,    83,    84,    88,    89,    86,    87,    91,    92,    94,
      96,    98,   100,   102,     0,     0,    66,     0,    74,     0,
      55,    53,     0,     0,    43,    15,     0,    16,    17,    18,
      19,    44,    60,   104,     0,     0,     0,     0,    41,    39,
      42,     0,     0,     0,     0,     0,     0,    40,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,    23,   -53,  -179,  -180,     0,    -2,  -180,   194,  -180,
    -180,  -180,  -180,  -152,  -153,   -34,   -31,   -47,  -180,  -180,
    -180,   -25,  -180,   -58,    81,    82,    -6,    83,    85,    90,
      94,    96,   100,  -180,    57,  -100,  -180,   -29,   -21,  -180,
     238,  -180,    20,    26,    31
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,    60,   208,    61,   195,    10,    27,    28,    29,
      11,    16,    63,   217,    64,   197,   198,    67,    68,    69,
     161,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   131,   199,   200,    12,
      13,    14,    87,    88,    89
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,   104,    65,    37,   109,    66,   194,    85,   112,    23,
     151,   -23,     9,   133,   159,    86,    26,   162,    98,    99,
      93,   141,   142,     8,   106,   115,   116,    65,    17,   114,
      66,   165,    85,   196,    18,     8,    62,   194,    26,    15,
      86,    25,    30,    33,    19,    38,   132,    22,   192,    34,
     109,    20,   210,   209,    35,   153,   100,     1,   109,   213,
     156,    62,    94,    25,   218,    90,   210,    40,    95,    41,
      91,   163,    36,    96,   108,   152,   166,   167,   168,   110,
     117,   113,   118,   114,   119,    39,     2,   143,   144,   202,
       3,    31,    32,   114,     4,     5,   134,   191,     6,   188,
      42,   135,   136,   101,   154,   184,   114,     7,   102,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   107,   155,    15,
      31,    32,   132,   147,   201,   173,   174,   175,   176,   164,
     148,   114,     1,   158,   150,    15,    31,    32,   149,    43,
      44,     2,   114,    65,   185,     3,    66,   206,    85,     4,
       5,   157,   114,     6,   187,   214,    86,   132,   137,   138,
      45,     2,     7,    23,    46,     3,   189,     2,   190,     4,
       5,     3,   186,     6,    47,     4,     5,    62,    48,     6,
     204,    49,     7,   114,   114,   211,   216,   -41,     7,   205,
      50,    15,    31,    32,    51,    43,    44,   145,   146,    52,
      53,    54,    55,    56,    57,   139,   140,   212,   169,   170,
     215,   171,   172,    36,    58,   219,    45,     2,   177,   178,
      46,     3,   179,     2,    92,     4,     5,     3,   180,     6,
      47,     4,     5,   181,    48,     6,   182,    49,     7,   203,
      21,   183,     0,     0,     7,    24,    50,    15,    31,    32,
      51,    43,    44,     0,     0,    52,    53,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,     0,    36,
     111,     0,    45,     0,     0,     0,    46,     0,     0,     2,
       0,     0,     0,     3,     0,     0,   193,     4,     5,     0,
      48,     6,     0,    49,    15,    31,    32,     0,    43,    44,
       7,     0,    50,     0,     0,     0,    51,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,     0,     0,    45,
       0,     0,     0,    46,     0,    36,     2,     0,     0,     0,
       3,     0,     0,    47,     4,     5,     0,    48,     6,     0,
      49,    15,    31,    32,     0,    43,    44,     7,     0,    50,
       0,     0,     0,    51,     0,     0,     0,     0,    52,    53,
      54,    55,    56,    57,     0,     0,    45,     0,     0,     0,
      46,     0,    36,     2,     0,     0,     0,     3,     0,     0,
     207,     4,     5,     0,    48,     6,     0,    49,    15,    31,
      32,     0,    43,    44,     7,     0,    50,     0,     0,     0,
      51,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,     0,    15,    31,    32,     0,    43,    44,     0,    36,
       2,     0,     0,     0,     3,     0,     0,     0,     4,     5,
       0,     0,     6,     0,    49,     0,     0,     0,    15,    31,
      32,     7,    43,    44,     0,     0,     0,    51,     0,     0,
       0,     0,    52,    53,    54,    55,    56,    57,    49,     0,
       0,     0,    15,    31,    32,     0,    43,    44,   103,     0,
       0,    51,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    57,     0,     0,    49,     0,    15,    31,    32,     0,
      43,    44,     0,     0,     0,     0,     0,    51,   160,     0,
       0,     0,    52,    53,    54,    55,    56,    57,    49,     0,
      15,    31,    32,     0,    43,    44,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,    52,    53,    54,    55,
      56,    57,    49,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,     0,     0,     0,     0,
      52,    53,    54,    55,    56,    57,    49,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,     0,     0,    51,
       0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130
};

static const yytype_int16 yycheck[] =
{
       0,    48,    36,    24,    51,    36,   185,    36,    61,    60,
      14,    62,    12,    71,   114,    36,    18,   117,    43,    44,
      41,     9,    10,     0,    49,     7,     8,    61,     8,    61,
      61,   131,    61,   185,    62,    12,    36,   216,    40,     3,
      61,    18,    22,    23,    59,    25,    71,    61,    80,    23,
      97,     0,   205,   205,    23,   102,    59,     6,   105,   211,
     107,    61,    42,    40,   216,    39,   219,    61,    42,    63,
      39,   118,    81,    42,    51,    79,   134,   135,   136,    59,
      62,    59,    64,    61,    66,    60,    35,    75,    76,   189,
      39,     4,     5,    61,    43,    44,    68,    65,    47,   157,
      60,    73,    74,    59,    59,   152,    61,    56,    62,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,    62,   105,     3,
       4,     5,   157,    67,   187,   141,   142,   143,   144,   119,
      77,    61,     6,    63,    13,     3,     4,     5,    78,     7,
       8,    35,    61,   187,    63,    39,   187,   204,   187,    43,
      44,    63,    61,    47,    63,   212,   187,   192,    69,    70,
      28,    35,    56,    60,    32,    39,    61,    35,    63,    43,
      44,    39,    63,    47,    42,    43,    44,   187,    46,    47,
      62,    49,    56,    61,    61,    63,    63,    36,    56,    36,
      58,     3,     4,     5,    62,     7,     8,    11,    12,    67,
      68,    69,    70,    71,    72,    15,    16,    62,   137,   138,
      36,   139,   140,    81,    82,    36,    28,    35,   145,   146,
      32,    39,   147,    35,    40,    43,    44,    39,   148,    47,
      42,    43,    44,   149,    46,    47,   150,    49,    56,   192,
      12,   151,    -1,    -1,    56,    63,    58,     3,     4,     5,
      62,     7,     8,    -1,    -1,    67,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    -1,    28,    -1,    -1,    -1,    32,    -1,    -1,    35,
      -1,    -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,
      46,    47,    -1,    49,     3,     4,     5,    -1,     7,     8,
      56,    -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,    28,
      -1,    -1,    -1,    32,    -1,    81,    35,    -1,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    47,    -1,
      49,     3,     4,     5,    -1,     7,     8,    56,    -1,    58,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    -1,    -1,    28,    -1,    -1,    -1,
      32,    -1,    81,    35,    -1,    -1,    -1,    39,    -1,    -1,
      42,    43,    44,    -1,    46,    47,    -1,    49,     3,     4,
       5,    -1,     7,     8,    56,    -1,    58,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    -1,     3,     4,     5,    -1,     7,     8,    -1,    81,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,    47,    -1,    49,    -1,    -1,    -1,     3,     4,
       5,    56,     7,     8,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    49,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,     8,    59,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    49,    -1,     3,     4,     5,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    49,    -1,
       3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    49,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    35,    39,    43,    44,    47,    56,    84,    88,
      89,    93,   122,   123,   124,     3,    94,   125,    62,    59,
       0,   123,    61,    60,    63,    84,    89,    90,    91,    92,
     125,     4,     5,   125,   126,   127,    81,   121,   125,    60,
      61,    63,    60,     7,     8,    28,    32,    42,    46,    49,
      58,    62,    67,    68,    69,    70,    71,    72,    82,    84,
      85,    87,    88,    95,    97,    98,    99,   100,   101,   102,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   120,   121,   125,   126,   127,
     126,   127,    91,   121,   125,   126,   127,    62,   104,   104,
      59,    59,    62,    59,   100,    62,   104,    62,    84,   100,
     125,    82,    85,    59,    61,     7,     8,    62,    64,    66,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      60,   119,   104,   106,    68,    73,    74,    69,    70,    15,
      16,     9,    10,    75,    76,    11,    12,    67,    77,    78,
      13,    14,    79,   100,    59,    84,   100,    63,    63,   118,
      63,   103,   118,   100,   125,   118,   106,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   109,   110,   110,   111,
     112,   113,   114,   115,   100,    63,    63,    63,   106,    61,
      63,    65,    80,    42,    86,    88,    96,    98,    99,   120,
     121,    85,   118,   117,    62,    36,   100,    42,    86,    96,
      97,    63,    62,    96,   100,    36,    63,    96,    96,    36
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      87,    87,    88,    89,    90,    90,    91,    91,    92,    92,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      96,    96,    97,    97,    98,    99,   100,   100,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   106,   106,   107,   107,   107,   107,   108,
     108,   108,   109,   109,   109,   110,   110,   110,   110,   110,
     111,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   120,   120,
     120,   120,   121,   121,   122,   122,   123,   123,   123,   124,
     124,   125,   126,   127
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     2,     3,     3,     1,     1,     3,     1,
       2,     3,     5,     5,     5,     1,     3,     3,     3,     7,
       7,     1,     7,     5,     5,     2,     1,     3,     1,     1,
       1,     3,     1,     4,     3,     4,     3,     2,     2,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     3,     3,     2,     1,     2,     1,     1,     1,     4,
       5,     1,     1,     1
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
#line 128 "parser.y" /* yacc.c:1646  */
    {alc="short";}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 129 "parser.y" /* yacc.c:1646  */
    {alc="int";}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 130 "parser.y" /* yacc.c:1646  */
    {alc="long";}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 131 "parser.y" /* yacc.c:1646  */
    {alc="float";}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 132 "parser.y" /* yacc.c:1646  */
    {alc="double";}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 133 "parser.y" /* yacc.c:1646  */
    {alc="void";}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 387 "parser.y" /* yacc.c:1646  */
    {addToTable(0,yylval.sym,"identifier", alc);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 388 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"constant", "");}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 389 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"string", "");}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1736 "y.tab.c" /* yacc.c:1646  */
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
#line 390 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
extern int lineNo;
int main()
{
	init();
	yyparse();
	display();
}

int yywrap()
{
	return 1;
}

void yyerror(char *msg)
{
	printf("Error: %s in line %d\n",msg, lineNo);
}
