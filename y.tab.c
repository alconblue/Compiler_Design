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
	char *val;

#line 230 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 21 "parser.y" /* yacc.c:358  */
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <limits.h>
	#include"lex.yy.c"

	int size=20;
	char *alc=0;
	int globalIndex=0;
	int globalScope=1;
	int newScope=1;
	char *alc1=0;
	char *alc2=0;
	char *alc3=0;
	int setDatatype=1;
	int flag=0;
	int flag2=0;
	int procFlag=-1;
	int parameterNumber=0;
	int currentScope=1;
	int rhs=0;
	int whileStart=0;
	int label[200];
	int lnum=0;
	int ltop=0;
	int top_icg=0;
	char temp[2]="t";
	int i_icg=0;
	char f1[1000];
	char *icg_string;
	int icg_flag=0;
	char icgstack[1000][50];

	#define ANSI_COLOR_RED     "\x1b[31m"
	#define ANSI_COLOR_RESET   "\x1b[0m"

	int yyerror(char *msg);
	int yylex();
	
	struct Stack
	{
    	int top;
    	unsigned capacity;
    	int* array;
	};

	struct Stack* createStack(unsigned capacity)
	{
	    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack));
	    stack->capacity = capacity;
	    stack->top = -1;
	    stack->array = (int*) malloc(stack->capacity * sizeof(int));
	    return stack;
	}

	int isFull(struct Stack* stack)
	{   return stack->top == stack->capacity - 1; }
	 
	int isEmpty(struct Stack* stack)
	{   return stack->top == -1;  }
	 
	void push(struct Stack* stack, int item)
	{
	    if (isFull(stack))
	        return;
	    stack->array[++stack->top] = item;
	}
	 
	int pop(struct Stack* stack)
	{
	    if (isEmpty(stack))
	        return INT_MIN;
	    return stack->array[stack->top--];
	}

	void push_icg()
	{
		strcpy(icgstack[++top_icg],icg_string);
	}

	struct symbolTable{
		int index;
		char *symbol;
		char *attribute;
		char *data;
		struct symbolTable *next;
		int scope;
		int procedureDefinitionFlag;
		struct parameterChain *params;
		int nesting;
	};

	struct parameterChain{
		char *name;
		char *dataType;
		struct parameterChain *next;
	};
	
	struct symbolTable *hash[2][20];
	struct Stack* stack;
	struct Stack* stack1;
	int i=0;
	
	void init()
	{
	 	stack = createStack(100);
	 	alc2 = (char*)malloc(sizeof(char)*100);
	 	alc3 = (char*)malloc(sizeof(char)*100);
	 	icg_string = (char*)malloc(sizeof(char)*100);
	 	stack1 = createStack(100);
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
			if (strcmp(temp->symbol, sym)==0 && globalScope == temp->scope)
			{
				return 0;
			}
			temp=temp->next;
		}
		return 1;
	}

	int searchMain()
	{ 
		struct symbolTable *temp = hash[0][421%size];
		while(temp!=NULL)
		{
			if (strcmp(temp->symbol, "main")==0 && temp->scope==0)
			{
				return 1;
			}
			temp = temp->next;
		}
		return 0;
	}

	int getDatatype(char *sym)
	{
		int x = hashLocation(sym);
		int i=stack->top;
		for(;i>=0;i--)
		{
			struct symbolTable *temp = hash[0][x];
			while(temp!=NULL)
			{
			if(strcmp(temp->symbol, sym)==0 && temp->scope == stack->array[i])
			{
				if (strcmp(temp->data, "float")==0)
				return 2;
				else if (strcmp(temp->data, "int")==0)
				return 1;
				else if(strcmp(temp->data, "void")==0)
				return 0;
			}
			temp = temp->next;
			}
		}
		return -1;
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
		newSymbol->nesting = currentScope - 1;
		newSymbol->scope = globalScope - 1;
		newSymbol->params = NULL;
		newSymbol->procedureDefinitionFlag = procFlag;
		globalIndex++;
		struct symbolTable *temp = hash[type][x];
		hash[type][x] = newSymbol;
		hash[type][x]->next = temp;
	}

	void addParams(char *dataType, char *sym)
	{
		int x = hashLocation(alc2);
		struct symbolTable *temp = hash[0][x];
		while(strcmp(temp->symbol, alc2)!=0 )
		{
			temp=temp->next;			
			if(temp==NULL)
			{
				printf("\nTemp = null when searching for function name in symbol table\n");
				return;
			}
		}
		struct parameterChain *newParam = (struct parameterChain*)malloc(sizeof(struct parameterChain));
		char *te = (char *)malloc(strlen(sym)+1);
		strcpy(te, sym);
		newParam->name = te;
		newParam->dataType = dataType;
		newParam->next=NULL;
		struct parameterChain *temp1 = temp->params;
		if(temp1==NULL)
		{
			temp->params=newParam;
			return;
		}
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=newParam;
	}

	int searchHashScope(char *sym, int x)
	{
		struct symbolTable *temp = hash[0][x];
		while(temp!=NULL)
		{
			if (strcmp(temp->symbol, sym)==0 && globalScope -1 == temp->scope)
			{ return 0; }
			temp=temp->next;
		}
		return 1;
	}

	// This returns 0 if an identifier is already declared in the same scope
	int checkDeclaration(char *sym) 
	{
		int x = hashLocation(sym);
		if(searchHashScope(sym, x))
		return 1;
		else
		return 0;
	}

	char* getAttribute(char *sym)
	{
		char abc[20]="";
		char *ans = abc;
		int x = hashLocation(sym);
		struct symbolTable *temp = hash[0][x];
		while(temp!=NULL)
		{
			if (strcmp(temp->symbol, sym)==0 && 0 == temp->scope) //Need to check if comparing scope with 0 is fine
			{ 
				struct parameterChain *temp1 = temp->params;
				while(temp1!=NULL)
				{
					//printf("\nParams are %s  %s\n",temp1->name,temp1->dataType);
					temp1=temp1->next;
				}
				return temp->attribute; 
			}
			temp=temp->next;
		}
		return ans;
	}

	int searchHashScope1(char *sym, int x)
	{
		struct symbolTable *temp = hash[0][x];
		while(temp!=NULL)
		{
			int i=0;
			if (strcmp(temp->symbol, sym)==0 && 0 == temp->scope)
			{ return 0; }
			for (;i<=stack->top;i++)
			{
				if (strcmp(temp->symbol, sym)==0 && stack->array[i] == temp->scope)
				{ return 0; }
			}
			temp=temp->next;
		}
		return 1;
	}

	int checkDeclaration1(char *sym)
	{
		int x = hashLocation(sym);
		if (searchHashScope1(sym, x))
		return 1;
		else
		return 0;
	}

	void checkParameterType()
	{
		int x = hashLocation(alc2);
		struct symbolTable *temp = hash[0][x];
		if(temp==NULL)
		{
			return;
		}
		while(strcmp(temp->symbol, alc2)!=0 || temp->scope!=0)
		{
			temp=temp->next;			
			if(temp==NULL)
			{
				printf("\nTemp = null when searching for function name in symbol table\n");
				return;
			}
		}
		struct parameterChain *temp1;
		temp1 = temp->params;
		int i;
		for(i=0;i<parameterNumber-1;i++)
		{
			temp1=temp1->next;
			if(temp1==NULL)
			{
				if(flag==0)
				printf(ANSI_COLOR_RED "ERROR: Arguments passes is more than expected\n" ANSI_COLOR_RESET);
				return;
			}

		}

		if(flag)
		{
			if(temp1->next!=NULL)
			{
				printf(ANSI_COLOR_RED "ERROR: Arguments passes is less than expected\n" ANSI_COLOR_RESET);
			}
			return;
		}

		x = hashLocation(alc3);
		i=stack->top;
		struct symbolTable *temp2;
		for(;i>=0;i--)
		{
			temp2 = hash[0][x];
			while(temp2!=NULL)
			{
			if(strcmp(temp2->symbol, alc3)==0 && temp2->scope == stack->array[i])
			{
				i=-1;
				break;
			}
			temp2 = temp2->next;
			}
		}

		if(strcmp(temp1->dataType,temp2->data)!=0)
		{
			printf(ANSI_COLOR_RED "ERROR: Argument is not of the correct type\n" ANSI_COLOR_RESET);	
		}
	}

	void codegen()
	{
	 	sprintf(temp,"$t%d",i_icg);
	  	printf(ANSI_COLOR_RED "%s\t=\t%s\t%s\t%s\n" ANSI_COLOR_RESET,temp,icgstack[top_icg-2],icgstack[top_icg-1],icgstack[top_icg]);
	  	top_icg-=2;
	 	strcpy(icgstack[top_icg],temp);
	 	i_icg++;
	}

	void codegen_assign()
	{
		if(icg_flag==0)
		{
		 	printf(ANSI_COLOR_RED "%s\t%s\t%s\n" ANSI_COLOR_RESET,icgstack[top_icg-2],icgstack[top_icg-1],icgstack[top_icg]);
		 	top_icg-=3;
		}
		else
		{
			// for assignment operators like +=,-=,...
		 	printf(ANSI_COLOR_RED "%s\t%c\t%s\t%c\t%s\n" ANSI_COLOR_RESET,icgstack[top_icg-2],icgstack[top_icg-1][1],icgstack[top_icg-2],icgstack[top_icg-1][0],icgstack[top_icg]);
		 	top_icg-=3;			
		}
		icg_flag=0;
	}

	void if_label1()
	{
		lnum++;
		printf(ANSI_COLOR_RED "\tif( not %s)" ANSI_COLOR_RESET,icgstack[top_icg]);
	 	printf(ANSI_COLOR_RED "\tgoto $L%d\n" ANSI_COLOR_RESET,lnum);
	 	label[++ltop]=lnum;
	}

	void if_label2()
	{
		int x;
		lnum++;
		x=label[ltop--]; 
		printf(ANSI_COLOR_RED "\t\tgoto $L%d\n" ANSI_COLOR_RESET,lnum);
		printf(ANSI_COLOR_RED "$L%d: \n" ANSI_COLOR_RESET,x); 
		label[++ltop]=lnum;
	}

	void if_label3()
	{
		int y;
		y=label[ltop--];
		printf(ANSI_COLOR_RED "$L%d: \n" ANSI_COLOR_RESET,y);
		top_icg--;
	}

	void display()
	{
		int k=0;
		printf("\n\nSYMBOL TABLE:\n");
		printf("--------------------------------------------------------------------------------------------------------------------------------\n");
		printf("%*s\t|\t%*s\t|\t%*s\t|\t%*s\t|\t%*s\t|\t%*s\t|\t%*s\n", 10, "INDEX", 10, "SYMBOL", 10, "ATTRIBUTE", 10, "DATATYPE", 10, "SCOPE", 10, "ProcDefFlag", 10, "NESTING");
		printf("--------------------------------------------------------------------------------------------------------------------------------\n");
		for(;k<size;k++)
		{
			struct symbolTable *temp = hash[0][k];
			while(temp!=NULL)
			{
				printf("%*d\t|\t%*s\t|\t%*s\t|\t%*s\t|\t%*d\t|\t%*d\t|\t%*d\n",10, temp->index, 10, temp->symbol, 10, temp->attribute, 10, temp->data, 10, temp->scope, 10, temp->procedureDefinitionFlag,10,temp->nesting);
				temp = temp->next;
			}
		}
		printf("---------------------------------------------------------------------------------------------------------------------------------\n");
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

#line 705 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   618

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  195
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  300

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
      76,    60,    75,    79,     2,     2,     2,     2,     2,     2,
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
       0,   483,   483,   484,   485,   486,   487,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   502,   503,   504,   505,
     506,   507,   510,   511,   518,   519,   522,   542,   564,   575,
     595,   616,   617,   620,   621,   624,   625,   628,   629,   630,
     631,   632,   635,   636,   637,   638,   639,   640,   646,   648,
     650,   652,   653,   655,   656,   660,   662,   663,   666,   668,
     669,   672,   689,   690,   691,   694,   695,   696,   697,   698,
     699,   707,   718,   719,   723,   724,   732,   740,   747,   748,
     749,   752,   753,   754,   755,   756,   757,   760,   761,   764,
     765,   765,   766,   766,   767,   767,   770,   771,   771,   772,
     772,   775,   776,   776,   777,   777,   780,   781,   781,   782,
     782,   783,   783,   784,   784,   787,   788,   791,   792,   792,
     793,   793,   796,   797,   797,   800,   801,   801,   804,   805,
     805,   808,   809,   809,   812,   813,   813,   816,   817,   820,
     821,   821,   824,   825,   826,   827,   828,   829,   830,   831,
     832,   833,   834,   839,   840,   841,   843,   858,   862,   871,
     872,   875,   879,   895,   896,   900,   901,   902,   905,   907,
     910,   912,   915,   916,   917,   918,   919,   920,   921,   922,
     923,   924,   925,   926,   929,   930,   931,   934,   935,   946,
     950,   980,  1001,  1023,  1024,  1025
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
  "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'>'", "'<'", "'^'",
  "'|'", "'?'", "':'", "'{'", "'}'", "$accept", "dataType", "statement",
  "statement1", "statements", "declarationStatement", "declaration",
  "declaration1", "declaration2", "declarationAndAssignment",
  "completeDeclaration", "argumentList", "declarationList",
  "identifierList", "ifExpression", "ifStatement", "ifAndElseMatched",
  "ifAndElseMatched1", "ifAndElseUnmatched", "whileLoopStatement",
  "whileParanthesisStart", "whileParanthesisEnd", "expressionStatement",
  "expression", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "$@1", "$@2", "$@3",
  "additive_expression", "$@4", "$@5", "shift_expression", "$@6", "$@7",
  "relational_expression", "$@8", "$@9", "$@10", "$@11", "gt", "lt",
  "equality_expression", "$@12", "$@13", "and_expression", "$@14",
  "exclusive_or_expression", "$@15", "inclusive_or_expression", "$@16",
  "logical_and_expression", "$@17", "logical_or_expression", "$@18",
  "conditional_expression", "assignment_expression", "$@19",
  "assignment_operator", "jumpStatement", "compoundStatement",
  "startCompound", "endCompound", "startSymbol", "external_declaration",
  "functionCall1", "functionCall", "parameters", "functionDefinition",
  "functionDeclaration", "startParenthesis", "identi3", "identi",
  "identi1", "consta", "stri", "void", YY_NULLPTR
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
      45,   126,    33,    47,    37,    62,    60,    94,   124,    63,
      58,   123,   125
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -191

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     233,  -144,  -144,  -144,  -144,  -144,  -144,  -144,     9,  -144,
     -39,   -12,   -24,   217,  -144,  -144,  -144,    95,    -5,    80,
      56,   120,    61,   120,  -144,  -144,  -144,  -144,    98,   131,
      63,   166,   115,  -144,  -144,    20,   122,    54,   130,  -144,
    -144,   133,  -144,  -144,  -144,   154,   165,  -144,  -144,   239,
    -144,   149,   120,   150,  -144,   186,    37,   131,   162,   499,
     499,   191,   192,   193,   461,   510,   196,  -144,   428,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,   250,  -144,   239,  -144,
     343,   218,  -144,  -144,  -144,  -144,    50,  -144,    48,    45,
     546,  -144,    21,   160,   212,    16,   222,   195,   182,   185,
     256,    18,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   213,
    -144,  -144,   276,  -144,  -144,  -144,  -144,   239,  -144,  -144,
    -144,    59,   224,  -144,  -144,   227,  -144,  -144,   546,  -144,
    -144,  -144,  -144,   546,    34,  -144,    76,   231,   390,  -144,
    -144,   546,   228,   109,   230,  -144,  -144,   257,  -144,   343,
     258,  -144,  -144,  -144,  -144,  -144,  -144,   343,  -144,   546,
    -144,  -144,   475,   546,   293,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   546,
      41,  -144,   239,  -144,   157,  -144,   157,   162,   125,  -144,
    -144,  -144,   242,   249,   158,   546,  -144,  -144,   343,   266,
    -144,  -144,  -144,  -144,   159,  -144,   -44,  -144,   546,   546,
     546,   546,   546,   546,   546,   546,   546,   546,   546,   546,
     546,   546,   546,   546,   546,   546,   546,    -8,   254,   163,
    -144,   255,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,   296,  -144,  -144,   343,   546,  -144,  -144,
    -144,  -144,  -144,  -144,    21,    21,   160,   160,   212,   212,
     212,   212,    16,    16,   222,   195,   182,   185,   256,   546,
    -144,   259,   157,  -144,  -144,  -144,  -144,  -144,  -144,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   167,     6,     5,     3,     4,     2,   195,     0,   166,
       0,     0,     0,     0,   163,   165,    25,     0,   192,    38,
     189,     0,   189,     0,    24,     1,   164,    27,     0,     0,
       0,     0,    34,    33,    36,     0,     0,     0,   191,   193,
      41,     0,    40,    39,   192,    37,    45,   161,   184,     0,
      28,     0,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,     0,    81,
      82,    83,    84,    85,    86,   162,     0,    23,     0,     7,
       0,     0,     8,     9,    10,    11,     0,    65,    74,    87,
       0,    89,    96,   101,   106,   117,   122,   125,   128,   131,
     134,   137,   139,    59,    13,    14,   160,    64,    12,     0,
      61,    62,     0,   194,    31,    32,    35,     0,   188,   191,
     168,     0,   178,   182,   183,    42,    47,    46,     0,    75,
      76,   154,   153,     0,   191,   155,     0,    62,     0,    78,
      56,     0,     0,     0,   192,    22,   159,    54,    16,     0,
       0,    49,    17,    18,    20,    21,    19,     0,    58,     0,
      70,    71,     0,     0,     0,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   142,   140,    87,    77,    90,
      92,    94,    97,    99,   102,   104,   111,   113,   115,   116,
     107,   109,   118,   120,   123,   126,   129,   132,   135,     0,
       0,    30,     0,   186,     0,   169,     0,     0,     0,   156,
     158,   157,     0,     0,     0,     0,    63,    52,     0,     0,
      50,    53,    60,    67,     0,    72,     0,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,     0,
     185,   172,   176,   177,   181,   180,   179,    44,    43,    48,
      80,    79,    57,     0,    88,    51,     0,     0,    68,    66,
     141,    91,    93,    95,    98,   100,   103,   105,   112,   114,
     108,   110,   119,   121,   124,   127,   130,   133,   136,     0,
     170,   169,     0,    55,    73,   138,   171,   175,   174,   173
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,    38,   -74,   234,   199,     0,  -144,  -144,  -144,  -144,
     265,   299,  -144,  -144,   -71,   -75,  -144,  -143,  -141,   -73,
    -144,  -144,   -72,   -25,  -144,  -144,  -144,   -32,  -144,   -79,
       4,  -144,  -144,  -144,     6,  -144,  -144,  -106,  -144,  -144,
       8,  -144,  -144,  -144,  -144,  -144,  -144,    77,  -144,  -144,
      82,  -144,    79,  -144,    81,  -144,    83,  -144,  -144,  -144,
      43,  -140,  -144,  -144,   -70,   -28,  -144,   -63,  -144,   314,
     302,   -50,   134,  -144,  -144,   322,   -31,   -22,    -9,   -27,
     -48,    60
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    76,    77,   217,    78,    79,    10,    32,    11,    33,
      34,    35,    12,    45,    80,    81,    82,   151,    83,    84,
     141,   263,    85,    86,    87,    88,   224,    89,    90,    91,
      92,   229,   230,   231,    93,   232,   233,    94,   234,   235,
      95,   238,   239,   236,   237,   190,   191,    96,   240,   241,
      97,   242,    98,   243,    99,   244,   100,   245,   101,   246,
     102,   103,   228,   176,   104,   105,    49,   106,    13,    14,
     107,   108,   121,    15,    16,    21,    41,   110,    19,   111,
     124,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    43,    48,   115,   145,   150,    42,   152,   153,   149,
     154,   178,    18,     9,   220,   146,   221,   159,   109,   222,
      46,   269,   225,    20,   114,   186,   187,   129,   130,   123,
     156,   127,   198,   139,   122,    24,   126,   137,     8,   136,
     119,    39,   113,   143,   119,    39,   113,   109,   125,   109,
      22,     8,   155,   159,   203,   160,   161,   -26,   177,    31,
      17,    31,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   289,    17,   150,   265,   152,   153,   149,   154,
     148,    52,   219,    53,   152,   153,   109,   154,   270,   179,
      31,   188,   189,   209,   180,   181,  -190,   199,    27,   156,
     120,    38,    39,   143,   248,   175,   142,   156,   208,   158,
     162,   159,   163,   143,   164,    52,   214,    55,   109,    30,
     204,   155,   205,   265,    36,   221,   109,   294,   145,   155,
     278,   279,   280,   281,    44,   210,   264,   159,   226,   250,
      28,    29,   227,   150,    47,   152,   153,   149,   154,   148,
     271,   272,   273,    39,   113,     2,   253,   148,   256,     3,
     119,    39,   113,     4,     5,   119,    39,     6,   156,    50,
     159,   109,   216,   123,   247,    51,   213,   252,   122,   255,
     258,    54,   251,   177,   254,   257,   159,   109,   259,   293,
     155,   219,  -190,   152,   153,    56,   154,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,    57,   156,    25,   148,   159,
     267,   262,   268,     1,   204,    58,   291,   184,   185,   182,
     183,   117,   109,   192,   193,   109,   274,   275,   155,     1,
     276,   277,    38,    39,   299,   118,    59,    60,   282,   283,
     131,   132,     2,   144,   157,   133,     3,   177,   140,   195,
       4,     5,   194,   196,     6,   298,   148,    61,     2,   197,
     297,    62,     3,     7,     2,   200,     4,     5,     3,   201,
       6,    63,     4,     5,   206,    64,     6,   207,    65,     7,
     211,   215,   -29,   -52,   218,     7,   119,    66,    67,    38,
      39,    68,   266,    59,    60,   260,    69,    70,    71,    72,
      73,    74,   261,   290,   147,   292,   202,   116,   296,   284,
      47,    75,    37,   286,    61,   285,   287,    26,    62,   288,
      40,     2,   295,    23,   249,     3,     0,     0,    63,     4,
       5,     0,    64,     6,     0,    65,    38,    39,     0,     0,
      59,    60,     7,     0,    66,    67,     0,     0,    68,     0,
       0,     0,     0,    69,    70,    71,    72,    73,    74,     0,
       0,    61,     0,     0,     0,    62,     0,    47,     2,     0,
       0,     0,     3,     0,     0,    63,     4,     5,     0,    64,
       6,     0,    65,    38,    39,     0,     0,    59,    60,     7,
       0,    66,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,    47,     2,     0,     0,     0,     3,
       0,    38,    39,     4,     5,    59,    60,     6,     0,    65,
       0,     0,     0,     0,     0,     0,   212,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,     2,   134,    39,     0,     3,    59,    60,
       0,     4,     5,     0,     0,     6,     0,    65,    38,    39,
       0,     0,    59,    60,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,    70,    71,    72,    73,
      74,     0,    38,    39,     0,     0,    59,    60,     0,     0,
      65,     0,     0,    38,    39,     0,     0,    59,    60,     0,
     135,     0,     0,    68,    65,     0,     0,     0,    69,    70,
      71,    72,    73,    74,     0,     0,     0,    68,   223,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    65,    38,
      39,     0,     0,    59,    60,     0,     0,     0,     0,    65,
       0,   128,     0,     0,     0,     0,    69,    70,    71,    72,
      73,    74,   138,     0,     0,     0,     0,    69,    70,    71,
      72,    73,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,     0,
       0,     0,     0,    69,    70,    71,    72,    73,    74
};

static const yytype_int16 yycheck[] =
{
       0,    28,    30,    51,    78,    80,    28,    80,    80,    80,
      80,    90,     3,    13,   157,    78,   157,    61,    49,   159,
      29,    65,   162,    62,    51,     9,    10,    59,    60,    56,
      80,    58,    14,    65,    56,    59,    58,    64,     0,    64,
       3,     4,     5,    68,     3,     4,     5,    78,    57,    80,
      62,    13,    80,    61,   117,     7,     8,    62,    90,    21,
       0,    23,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    80,    13,   149,   218,   149,   149,   149,   149,
      80,    61,   157,    63,   157,   157,   117,   157,   228,    68,
      52,    75,    76,    59,    73,    74,    62,    79,     3,   149,
      63,     3,     4,   128,    63,    60,    68,   157,   133,    59,
      62,    61,    64,   138,    66,    61,   141,    63,   149,    63,
      61,   149,    63,   266,    63,   266,   157,   267,   202,   157,
     236,   237,   238,   239,     3,    59,   215,    61,   163,   202,
      60,    61,   164,   218,    81,   218,   218,   218,   218,   149,
     229,   230,   231,     4,     5,    35,   204,   157,   206,    39,
       3,     4,     5,    43,    44,     3,     4,    47,   218,     3,
      61,   202,    63,   200,   199,    60,   138,   204,   200,   206,
     207,    59,   204,   215,   206,   207,    61,   218,    63,   263,
     218,   266,    62,   266,   266,    62,   266,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,    61,   266,     0,   218,    61,
      61,    63,    63,     6,    61,    60,    63,    15,    16,    69,
      70,    81,   263,    11,    12,   266,   232,   233,   266,     6,
     234,   235,     3,     4,   292,    59,     7,     8,   240,   241,
      59,    59,    35,     3,    36,    62,    39,   289,    62,    77,
      43,    44,    67,    78,    47,   292,   266,    28,    35,    13,
     292,    32,    39,    56,    35,    62,    43,    44,    39,     3,
      47,    42,    43,    44,    60,    46,    47,    60,    49,    56,
      59,    63,    62,    36,    36,    56,     3,    58,    59,     3,
       4,    62,    36,     7,     8,    63,    67,    68,    69,    70,
      71,    72,    63,    59,    80,    60,   117,    52,    59,   242,
      81,    82,    23,   244,    28,   243,   245,    13,    32,   246,
      28,    35,   289,    11,   200,    39,    -1,    -1,    42,    43,
      44,    -1,    46,    47,    -1,    49,     3,     4,    -1,    -1,
       7,     8,    56,    -1,    58,    59,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    28,    -1,    -1,    -1,    32,    -1,    81,    35,    -1,
      -1,    -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,
      47,    -1,    49,     3,     4,    -1,    -1,     7,     8,    56,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    35,    -1,    -1,    -1,    39,
      -1,     3,     4,    43,    44,     7,     8,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    35,     3,     4,    -1,    39,     7,     8,
      -1,    43,    44,    -1,    -1,    47,    -1,    49,     3,     4,
      -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,    -1,     3,     4,    -1,    -1,     7,     8,    -1,    -1,
      49,    -1,    -1,     3,     4,    -1,    -1,     7,     8,    -1,
      59,    -1,    -1,    62,    49,    -1,    -1,    -1,    67,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    49,     3,
       4,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,    49,
      -1,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    62,    -1,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    35,    39,    43,    44,    47,    56,    84,    88,
      89,    91,    95,   151,   152,   156,   157,   164,     3,   161,
      62,   158,    62,   158,    59,     0,   152,     3,    60,    61,
      63,    84,    90,    92,    93,    94,    63,    94,     3,     4,
     153,   159,   160,   162,     3,    96,   161,    81,   148,   149,
       3,    60,    61,    63,    59,    63,    62,    61,    60,     7,
       8,    28,    32,    42,    46,    49,    58,    59,    62,    67,
      68,    69,    70,    71,    72,    82,    84,    85,    87,    88,
      97,    98,    99,   101,   102,   105,   106,   107,   108,   110,
     111,   112,   113,   117,   120,   123,   130,   133,   135,   137,
     139,   141,   143,   144,   147,   148,   150,   153,   154,   159,
     160,   162,   164,     5,   162,   163,    93,    81,    59,     3,
      63,   155,   160,   162,   163,   161,   160,   162,    62,   110,
     110,    59,    59,    62,     3,    59,   106,   162,    62,   110,
      62,   103,    84,   106,     3,    85,   150,    86,    88,    97,
      98,   100,   102,   105,   147,   148,   154,    36,    59,    61,
       7,     8,    62,    64,    66,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    60,   146,   110,   112,    68,
      73,    74,    69,    70,    15,    16,     9,    10,    75,    76,
     128,   129,    11,    12,    67,    77,    78,    13,    14,    79,
      62,     3,    87,   150,    61,    63,    60,    60,   106,    59,
      59,    59,    56,    84,   106,    63,    63,    86,    36,    98,
     100,   101,   144,    63,   109,   144,   106,   160,   145,   114,
     115,   116,   118,   119,   121,   122,   126,   127,   124,   125,
     131,   132,   134,   136,   138,   140,   142,   106,    63,   155,
     150,   160,   162,   163,   160,   162,   163,   160,   162,    63,
      63,    63,    63,   104,   112,   100,    36,    61,    63,    65,
     144,   112,   112,   112,   113,   113,   117,   117,   120,   120,
     120,   120,   123,   123,   130,   133,   135,   137,   139,    80,
      59,    63,    60,    85,   144,   143,    59,   160,   162,   163
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    97,    98,
      99,   100,   100,   101,   101,   102,   103,   104,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   110,
     110,   111,   111,   111,   111,   111,   111,   112,   112,   113,
     114,   113,   115,   113,   116,   113,   117,   118,   117,   119,
     117,   120,   121,   120,   122,   120,   123,   124,   123,   125,
     123,   126,   123,   127,   123,   128,   129,   130,   131,   130,
     132,   130,   133,   134,   133,   135,   136,   135,   137,   138,
     137,   139,   140,   139,   141,   142,   141,   143,   143,   144,
     145,   144,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   147,   147,   147,   147,   147,   147,   148,
     148,   149,   150,   151,   151,   152,   152,   152,   153,   153,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   156,   156,   156,   157,   157,   158,
     159,   160,   161,   162,   163,   164
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       2,     3,     3,     1,     1,     3,     1,     4,     2,     4,
       4,     4,     3,     5,     5,     1,     3,     3,     4,     2,
       3,     3,     1,     3,     2,     5,     1,     1,     2,     1,
       3,     1,     1,     3,     1,     1,     4,     3,     4,     3,
       2,     2,     1,     3,     1,     2,     2,     2,     2,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       0,     4,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1,     0,     4,
       0,     4,     1,     0,     4,     1,     0,     4,     1,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     5,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     3,     3,     3,
       2,     1,     1,     1,     2,     1,     1,     1,     3,     4,
       4,     5,     3,     5,     5,     5,     3,     3,     1,     3,
       3,     3,     1,     1,     4,     7,     6,     4,     5,     1,
       1,     1,     1,     1,     1,     1
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
#line 483 "parser.y" /* yacc.c:1646  */
    {alc="short";}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 484 "parser.y" /* yacc.c:1646  */
    {alc="int";}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 485 "parser.y" /* yacc.c:1646  */
    {alc="long";}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 486 "parser.y" /* yacc.c:1646  */
    {alc="float";}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 487 "parser.y" /* yacc.c:1646  */
    {alc="double";}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 522 "parser.y" /* yacc.c:1646  */
    { int len = strlen(yylval.sym); 
								char *buffer=(char *)malloc(len);
								int i;
								for (i=0;i<len-1;i++)
								{
									buffer[i] = yylval.sym[i];
									alc2[i]=buffer[i];
								}
								if(checkDeclaration(buffer))
									{
										procFlag = 1;
										addToTable(0,buffer,"function", alc);
										procFlag = -1;
									}
									else
									{
										printf(ANSI_COLOR_RED "ERROR: Function is already declared\n" ANSI_COLOR_RESET);
									}
								alc1 = alc;	
								}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 542 "parser.y" /* yacc.c:1646  */
    {	
								int len = strlen(yylval.sym); 
								int i;
								for (i=0;i<len;i++)
								{
									alc2[i]=yylval.sym[i];
								}
							if(checkDeclaration(alc2))
							{
								procFlag = 1;
								addToTable(0,yylval.sym,"function", alc);
								procFlag = -1;
							}
							else
							{
								printf(ANSI_COLOR_RED "ERROR: Function is already declared\n" ANSI_COLOR_RESET);
							}
						alc1 = alc;
						}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 564 "parser.y" /* yacc.c:1646  */
    {if(checkDeclaration(yylval.sym))
									{
										addToTable(0,yylval.sym,"identifier", alc);
										addParams(alc,yylval.sym);
									}
									else
									{
										printf(ANSI_COLOR_RED "ERROR: Variable is already declared\n" ANSI_COLOR_RESET);
									}
				 				}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 575 "parser.y" /* yacc.c:1646  */
    { int len = strlen(yylval.sym); 
								char *buffer=(char *)malloc(len);
								int i;
								for (i=0;i<len-1;i++)
								{
									buffer[i] = yylval.sym[i];
									alc2[i]=buffer[i];
								}
								if(checkDeclaration(buffer))
									{
										procFlag = 0;
										addToTable(0,buffer,"function", alc);
										printf("\nadding function to table\n");
										procFlag = -1;
									}
									else
									{
										printf(ANSI_COLOR_RED "ERROR: Function is already declared\n" ANSI_COLOR_RESET);
									}
								}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 595 "parser.y" /* yacc.c:1646  */
    {
							int len = strlen(yylval.sym); 
							int i;
							for (i=0;i<len;i++)
							{
								alc2[i]=yylval.sym[i];
							}
							if(checkDeclaration(yylval.sym))
							{
								procFlag = 0;
								addToTable(0,yylval.sym,"function", alc);
								procFlag = -1;
								alc2=yylval.sym;
							}
							else
							{
								printf(ANSI_COLOR_RED "ERROR: Function is already declared\n" ANSI_COLOR_RESET);
							}
						}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 646 "parser.y" /* yacc.c:1646  */
    {if_label1();}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 648 "parser.y" /* yacc.c:1646  */
    {if_label2();}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 650 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 652 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 655 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 662 "parser.y" /* yacc.c:1646  */
    {whileStart=1;}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 663 "parser.y" /* yacc.c:1646  */
    {whileStart=0;}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 672 "parser.y" /* yacc.c:1646  */
    {  int len = strlen(yylval.sym); 
				char *buffer=(char *)malloc(len);
				int i;
				for (i=0;i<len;i++)
				{
				if ((yylval.sym[i]>='a' && yylval.sym[i]<='z') || (yylval.sym[i]>='A' && yylval.sym[i]<='Z') || (yylval.sym[i]>='0' && yylval.sym[i]<='9') || (yylval.sym[i]=='_'))
					buffer[i] = yylval.sym[i];
				}
				if(whileStart==1 && getDatatype(buffer)!=1) 
				{
					printf(ANSI_COLOR_RED "\nERROR: Condition of while has to be int\n" ANSI_COLOR_RESET);
				}
				else
				{
					strcpy(icg_string,buffer); push_icg();
				}
			}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 689 "parser.y" /* yacc.c:1646  */
    {if(rhs==0) {printf(ANSI_COLOR_RED "\nERROR: Lvalue required to be identifier\n" ANSI_COLOR_RESET);} else {strcpy(icg_string,yytext); push_icg();}}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 699 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf("%s\t=\t%s\t%s\t%s\n",temp,icgstack[top_icg],"+","1");
		 	strcpy(icgstack[top_icg+1],temp);
		 	i_icg++;
		 	printf("%s\t=\t%s\n",icgstack[top_icg],icgstack[top_icg+1]);
		 	top_icg-=3;
	}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 707 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf("%s\t=\t%s\t%s\t%s\n",temp,icgstack[top_icg],"-","1");
		 	strcpy(icgstack[top_icg+1],temp);
		 	i_icg++;
		 	printf("%s\t=\t%s\n",icgstack[top_icg],icgstack[top_icg+1]);
		 	top_icg-=3;
	}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 724 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf("%s\t=\t%s\t%s\t%s\n",temp,icgstack[top_icg],"+","1");
		 	strcpy(icgstack[top_icg+1],temp);
		 	i_icg++;
		 	printf("%s\t=\t%s\n",icgstack[top_icg],icgstack[top_icg+1]);
		 	top_icg-=3;
	}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 732 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf("%s\t=\t%s\t%s\t%s\n",temp,icgstack[top_icg],"-","1");
		 	strcpy(icgstack[top_icg+1],temp);
		 	i_icg++;
		 	printf("%s\t=\t%s\n",icgstack[top_icg],icgstack[top_icg+1]);
		 	top_icg-=3;
	}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 740 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf(ANSI_COLOR_RED "%s\t=\t%s\t%s\n" ANSI_COLOR_RESET,temp,icgstack[top_icg-1],icgstack[top_icg]);
		  	top_icg-=1;
		 	strcpy(icgstack[top_icg],temp);
		 	i_icg++;
	}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 752 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 753 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 754 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 755 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 756 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 757 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 765 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 765 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 766 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 766 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 767 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 767 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 771 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 771 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 772 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 772 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 776 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 776 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 777 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 777 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 781 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 781 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 782 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 782 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 783 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 783 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 784 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 784 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 787 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 788 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 792 "parser.y" /* yacc.c:1646  */
    {rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 792 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 793 "parser.y" /* yacc.c:1646  */
    {rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 793 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 797 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 797 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 801 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 801 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 805 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 805 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 809 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 809 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 813 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 813 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 821 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 821 "parser.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 824 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 825 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 826 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 827 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 828 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 829 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 830 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 831 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 832 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 833 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 834 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 841 "parser.y" /* yacc.c:1646  */
    {
			  if (alc1!=NULL && strcmp(alc1,"void")!=0) printf(ANSI_COLOR_RED "\nERROR: Function type is %s return void found\n" ANSI_COLOR_RESET, alc1);}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 843 "parser.y" /* yacc.c:1646  */
    {
			  	int len = strlen(yylval.sym); 
				char *buffer=(char *)malloc(len);
				int i;
				for (i=0;i<len;i++)
				{
				if ((yylval.sym[i]>='a' && yylval.sym[i]<='z') || (yylval.sym[i]>='A' && yylval.sym[i]<='Z') || (yylval.sym[i]>='0' && yylval.sym[i]<='9') || (yylval.sym[i]=='_'))
					buffer[i] = yylval.sym[i];
				}
				setDatatype = getDatatype(buffer);
				if(setDatatype==1 && strcmp(alc1, "int"))
					printf(ANSI_COLOR_RED "\nERROR: Function with return type int returning void\n" ANSI_COLOR_RESET);
				else if (setDatatype==0 && strcmp(alc1, "void"))
					printf(ANSI_COLOR_RED "\nERROR: Function with return type void returning int\n" ANSI_COLOR_RESET);
				}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 858 "parser.y" /* yacc.c:1646  */
    {
				if (strcmp(alc1, "void")==0)
					printf(ANSI_COLOR_RED "\nERROR: Function with return type void returning value\n" ANSI_COLOR_RESET);
				}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 875 "parser.y" /* yacc.c:1646  */
    {push(stack, newScope++); globalScope = newScope;
					push(stack1, currentScope++);
					}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 879 "parser.y" /* yacc.c:1646  */
    {pop(stack); globalScope =  stack->array[stack->top]+1;
					if (stack->top == -1) globalScope = 1;
					pop(stack1); currentScope =  stack1->array[stack1->top]+1;
					if (stack1->top == -1) currentScope = 1;
					}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 907 "parser.y" /* yacc.c:1646  */
    {if(flag2==0){ flag=1; checkParameterType(); flag=0; parameterNumber=0;}}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 912 "parser.y" /* yacc.c:1646  */
    {if(flag2==0){ flag=1; checkParameterType(); flag=0; parameterNumber=0;}}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 915 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 916 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 917 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 918 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 919 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 920 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 921 "parser.y" /* yacc.c:1646  */
    { parameterNumber++; checkParameterType();}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 922 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 923 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 924 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 925 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 926 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 930 "parser.y" /* yacc.c:1646  */
    {setDatatype = 0;}
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 935 "parser.y" /* yacc.c:1646  */
    {pop(stack); 
					globalScope = stack->array[stack->top]+1;
					if (stack->top==-1)
					{
						globalScope = 1;
					}
					pop(stack1); currentScope = stack1->array[stack1->top]+1;
					if (stack1->top == -1) currentScope = 1;
					}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 946 "parser.y" /* yacc.c:1646  */
    {push(stack,newScope++); globalScope = newScope;
						push(stack1,currentScope++);}
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 950 "parser.y" /* yacc.c:1646  */
    {
				int len = strlen(yylval.sym); 
				char *buffer=(char *)malloc(len);
				int i;
				for (i=0;i<len-1;i++)
				{
					if ((yylval.sym[i]>='a' && yylval.sym[i]<='z') || (yylval.sym[i]>='A' && yylval.sym[i]<='Z') || (yylval.sym[i]>='0' && yylval.sym[i]<='9') || (yylval.sym[i]=='_'))
					{
						buffer[i] = yylval.sym[i];
						alc2[i]=buffer[i];
					}
				}
				alc2[i]='\0';
				if(checkDeclaration1(buffer)==0)
				{
					if(strcmp(getAttribute(buffer),"function")!=0)
					{
						printf(ANSI_COLOR_RED "\nERROR: %s is not a function\n" ANSI_COLOR_RESET, buffer);
					}
					else
					{	
					}
				}
				else
				{
					printf(ANSI_COLOR_RED "\nERROR: Function used is not declared\n" ANSI_COLOR_RESET);
					flag2=1;
				}
			}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 980 "parser.y" /* yacc.c:1646  */
    {
				int len = strlen(yylval.sym); 
				char *buffer=(char *)malloc(len);
				int i;
				for (i=0;i<len;i++)
				{
				if ((yylval.sym[i]>='a' && yylval.sym[i]<='z') || (yylval.sym[i]>='A' && yylval.sym[i]<='Z') || (yylval.sym[i]>='0' && yylval.sym[i]<='9') || (yylval.sym[i]=='_'))
				{
					buffer[i] = yylval.sym[i];
					alc3[i]=buffer[i];
				}
			}
			if(checkDeclaration1(buffer)==0)
				{
				}
			else
			{
				printf(ANSI_COLOR_RED "\nERROR: Variable used is not declared\n" ANSI_COLOR_RESET);
			}
		}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1001 "parser.y" /* yacc.c:1646  */
    {
				int len = strlen(yylval.sym); 
				char *buffer=(char *)malloc(len);
				int i;
				for (i=0;i<len;i++)
				{
				if ((yylval.sym[i]>='a' && yylval.sym[i]<='z') || (yylval.sym[i]>='A' && yylval.sym[i]<='Z') || (yylval.sym[i]>='0' && yylval.sym[i]<='9') || (yylval.sym[i]=='_'))
					buffer[i] = yylval.sym[i];
				}
	
				if(checkDeclaration(buffer))
				{
					addToTable(0,buffer,"identifier", alc);
				}
				else
				{
					printf(ANSI_COLOR_RED "ERROR: Variable is already declared\n" ANSI_COLOR_RESET);
				}
			}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1023 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"constant", "");}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1024 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"string", "");}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1025 "parser.y" /* yacc.c:1646  */
    {alc="void";}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2978 "y.tab.c" /* yacc.c:1646  */
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
#line 1026 "parser.y" /* yacc.c:1906  */


#include<stdio.h>
extern int lineNo;
//extern char* yytext;
int main()
{
	init();
	yyparse();
	if (searchMain()==0)
		printf(ANSI_COLOR_RED "ERROR: main function not present\n" ANSI_COLOR_RESET);
	display();
}

int yywrap()
{
	return 1;
}

int yyerror(char *msg)
{
	printf("Error: %s in line %d\n",msg, lineNo);
}
