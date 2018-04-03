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
	int ret[200];
	int rnum=0;
	int rtop=0;
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

	while_start()
	{
		lnum++;
		label[++ltop]=lnum;
		printf(ANSI_COLOR_RED "$L%d:\n" ANSI_COLOR_RESET,lnum);
	}
	while_rep()
	{
		lnum++;
	 	printf(ANSI_COLOR_RED "if( not %s)" ANSI_COLOR_RESET,icgstack[top_icg]);
	 	printf(ANSI_COLOR_RED "\tgoto $L%d\n" ANSI_COLOR_RESET,lnum);
	 	label[++ltop]=lnum;
	}
	while_end()
	{
		int x,y;
		y=label[ltop--];
		x=label[ltop--];
		printf(ANSI_COLOR_RED "\t\tgoto $L%d\n" ANSI_COLOR_RESET,x);
		printf(ANSI_COLOR_RED "$L%d: \n" ANSI_COLOR_RESET,y);
		top_icg--;
	}

	func_after()
	{
		printf(ANSI_COLOR_RED "label%d:\n" ANSI_COLOR_RESET, label[ltop--]);
	}

	func_return() 
	{
		printf(ANSI_COLOR_RED "goto $ret_addr" ANSI_COLOR_RESET);
	}

	func_return_v(char *ret_val)
	{
		printf(ANSI_COLOR_RED "$ret_value = %s\n" ANSI_COLOR_RESET, ret_val);
		printf(ANSI_COLOR_RED "goto $ret_addr\n" ANSI_COLOR_RESET);
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

#line 746 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

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
       0,   524,   524,   525,   526,   527,   528,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   543,   544,   545,   546,
     547,   548,   551,   552,   559,   560,   563,   584,   607,   618,
     638,   659,   660,   663,   664,   667,   668,   671,   672,   673,
     674,   677,   678,   679,   680,   681,   682,   688,   690,   692,
     694,   695,   697,   698,   702,   702,   702,   704,   705,   708,
     710,   711,   714,   731,   732,   735,   736,   737,   738,   739,
     740,   748,   759,   760,   764,   765,   766,   767,   768,   769,
     770,   773,   774,   775,   776,   777,   778,   781,   782,   785,
     786,   786,   787,   787,   788,   788,   791,   792,   792,   793,
     793,   796,   797,   797,   798,   798,   801,   802,   802,   803,
     803,   804,   804,   805,   805,   808,   809,   812,   813,   813,
     814,   814,   817,   818,   818,   821,   822,   822,   825,   826,
     826,   829,   830,   830,   833,   834,   834,   837,   838,   841,
     842,   842,   845,   846,   847,   848,   849,   850,   851,   852,
     853,   854,   855,   860,   861,   862,   867,   867,   884,   884,
     898,   899,   902,   906,   922,   923,   927,   928,   929,   932,
     934,   937,   938,   939,   940,   941,   942,   943,   944,   945,
     946,   947,   948,   951,   952,   953,   956,   957,   968,   972,
    1005,  1026,  1048,  1049,  1050
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
  "ifAndElseMatched1", "ifAndElseUnmatched", "whileLoopStatement", "$@1",
  "$@2", "whileParanthesisStart", "whileParanthesisEnd",
  "expressionStatement", "expression", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression", "$@3",
  "$@4", "$@5", "additive_expression", "$@6", "$@7", "shift_expression",
  "$@8", "$@9", "relational_expression", "$@10", "$@11", "$@12", "$@13",
  "gt", "lt", "equality_expression", "$@14", "$@15", "and_expression",
  "$@16", "exclusive_or_expression", "$@17", "inclusive_or_expression",
  "$@18", "logical_and_expression", "$@19", "logical_or_expression",
  "$@20", "conditional_expression", "assignment_expression", "$@21",
  "assignment_operator", "jumpStatement", "$@22", "$@23",
  "compoundStatement", "startCompound", "endCompound", "startSymbol",
  "external_declaration", "functionCall", "parameters",
  "functionDefinition", "functionDeclaration", "startParenthesis",
  "identi3", "identi", "identi1", "consta", "stri", "void", YY_NULLPTR
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

#define YYPACT_NINF -183

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-183)))

#define YYTABLE_NINF -190

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     116,  -183,  -183,  -183,  -183,  -183,  -183,  -183,    34,  -183,
     -30,    13,    -4,   168,  -183,  -183,  -183,    49,    27,   -16,
       1,    18,    37,    18,  -183,  -183,  -183,  -183,    77,   107,
      44,   126,    89,  -183,  -183,    42,    84,    46,  -183,  -183,
    -183,  -183,  -183,    92,   104,  -183,  -183,   225,  -183,   153,
      18,    96,  -183,   114,   107,    77,   117,   452,   452,   151,
     157,   158,    32,   463,  -183,   414,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,   218,  -183,   225,  -183,   329,   189,  -183,
    -183,  -183,   164,  -183,    56,  -183,    40,   529,   496,  -183,
     -14,   100,   186,     9,   194,   159,   150,   152,   221,     8,
    -183,  -183,  -183,  -183,  -183,  -183,   169,  -183,  -183,   232,
    -183,  -183,  -183,  -183,   225,  -183,   176,  -183,  -183,   496,
    -183,  -183,  -183,  -183,   496,  -183,  -183,  -183,   376,  -183,
     174,    69,   177,  -183,  -183,   202,  -183,   329,   204,  -183,
    -183,  -183,  -183,  -183,  -183,   329,   180,  -183,   496,  -183,
    -183,   426,   496,   240,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,   496,    38,
    -183,   225,  -183,    77,    75,   185,   187,   182,   191,   496,
    -183,  -183,   329,   216,  -183,  -183,  -183,   496,  -183,  -183,
      83,  -183,    29,  -183,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   -22,   196,    87,   198,  -183,  -183,  -183,
    -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,  -183,   329,
      93,   496,  -183,  -183,  -183,  -183,  -183,  -183,   -14,   -14,
     100,   100,   186,   186,   186,   186,     9,     9,   194,   159,
     150,   152,   221,   496,  -183,   109,   197,   109,  -183,  -183,
    -183,  -183,   199,  -183,  -183,  -183,  -183,  -183,  -183,   282,
     109,  -183,  -183,  -183,  -183
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   168,     6,     5,     3,     4,     2,   194,     0,   167,
       0,     0,     0,     0,   164,   166,    25,     0,   191,    38,
     188,     0,   188,     0,    24,     1,   165,    27,     0,     0,
       0,     0,    34,    33,    36,     0,     0,     0,   190,   192,
      40,    39,   191,    37,    44,   162,   183,    54,    28,     0,
       0,     0,   186,     0,     0,     0,   190,     0,     0,     0,
       0,     0,     0,     0,    15,     0,    81,    82,    83,    84,
      85,    86,   163,     0,    23,    54,     7,    54,     0,     8,
       9,    10,     0,    11,     0,    65,    74,    87,     0,    89,
      96,   101,   106,   117,   122,   125,   128,   131,   134,   137,
     139,    60,    13,    14,   161,    12,     0,    62,    63,     0,
     193,    31,    32,    35,    54,   187,    41,    46,    45,     0,
      75,    76,   154,   153,     0,   156,   155,   158,     0,    78,
       0,     0,   191,    22,   160,    53,    16,    54,     0,    48,
      17,    18,    20,    21,    19,    54,     0,    59,     0,    70,
      71,     0,     0,     0,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   142,   140,    87,    77,    90,    92,
      94,    97,    99,   102,   104,   111,   113,   115,   116,   107,
     109,   118,   120,   123,   126,   129,   132,   135,     0,     0,
      30,    54,   185,     0,     0,     0,     0,     0,     0,     0,
      64,    51,    54,     0,    49,    52,    57,     0,    61,    67,
       0,    72,     0,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,   181,   182,   184,
      43,    42,    47,   157,   159,    80,    79,    88,    50,    54,
       0,     0,    68,    66,   141,    91,    93,    95,    98,   100,
     103,   105,   112,   114,   108,   110,   119,   121,   124,   127,
     130,   133,   136,     0,   169,     0,     0,     0,    58,    55,
      73,   138,   171,   175,   176,   170,   180,   179,   178,    54,
       0,    56,   174,   173,   172
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -183,    17,   -70,   184,   156,     2,  -183,  -183,  -183,  -183,
     215,   243,  -183,  -183,   -65,   -74,  -183,  -129,  -131,   -71,
    -183,  -183,  -183,  -183,   -69,   -36,  -183,  -183,  -183,   -32,
    -183,   -75,   -10,  -183,  -183,  -183,    -7,  -183,  -183,  -126,
    -183,  -183,    -9,  -183,  -183,  -183,  -183,  -183,  -183,    45,
    -183,  -183,    47,  -183,    48,  -183,    51,  -183,    43,  -183,
    -183,  -183,     4,  -128,  -183,  -183,   -68,  -183,  -183,   -26,
    -183,   -64,  -183,   266,   -67,  -183,  -183,  -183,   269,  -183,
     -27,    -5,   -28,  -182,    33
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    74,   201,    75,    76,    10,    32,    11,    33,
      34,    35,    12,    43,    77,    78,    79,   139,    80,    81,
      82,   289,   207,   279,    83,    84,    85,    86,   210,    87,
      88,    89,    90,   215,   216,   217,    91,   218,   219,    92,
     220,   221,    93,   224,   225,   222,   223,   179,   180,    94,
     226,   227,    95,   228,    96,   229,    97,   230,    98,   231,
      99,   232,   100,   101,   214,   165,   102,   195,   196,   103,
      47,   104,    13,    14,   105,   235,    15,    16,    21,   106,
     107,    19,   108,   112,   109
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    40,     9,   138,    46,   133,   140,   238,   141,   142,
     144,   134,   137,   167,   205,     9,   204,     8,   175,   176,
     208,   111,   187,   211,    44,   120,   121,   118,   117,   131,
       8,   129,    20,    17,   127,   125,    39,    18,    31,   148,
      31,    38,    39,   110,    28,    29,    17,   149,   150,   116,
     192,   143,    27,     2,   168,    24,   166,     3,   273,   169,
     170,     4,     5,   138,    30,     6,   140,    31,   141,   142,
     144,   203,   137,   248,   140,    22,   141,   142,   144,   136,
      38,    39,   130,   131,   177,   178,   254,   188,   194,   -26,
     148,   126,   131,   284,   253,   288,   262,   263,   264,   265,
      36,   234,   151,    50,   152,    51,   153,    50,   294,    53,
      42,   143,    38,    39,   110,   147,   212,   148,   205,   143,
     248,   133,     1,   280,   247,    45,   213,   239,   138,    48,
     148,   140,   200,   141,   142,   144,   148,   137,   242,   136,
     255,   256,   257,    52,   251,   198,   252,   136,   275,    49,
     276,     2,   233,    54,   148,     3,   278,    39,   110,     4,
       5,   237,   236,     6,    55,   241,   240,   166,    25,   171,
     172,   250,     7,   115,     1,   203,   143,   114,   140,  -189,
     141,   142,   144,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   173,   174,     2,   136,   181,   182,     3,   258,   259,
     122,     4,     5,   260,   261,     6,   123,   266,   267,   291,
     124,   132,   146,   143,     7,   145,   183,   184,    56,    39,
     185,   189,    57,    58,   186,   190,   193,   199,   -51,   -29,
     202,   166,   206,    38,   243,   245,   244,   283,   282,   287,
     286,   136,   249,    59,   246,   274,   285,    60,   277,   290,
       2,   135,   293,   292,     3,   113,    37,    61,     4,     5,
     191,    62,     6,   268,    63,   272,   269,   281,   270,    26,
      23,     7,   271,     0,    64,    56,    39,    65,     0,    57,
      58,     0,    66,    67,    68,    69,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,    45,    72,     0,     0,
      59,     0,     0,     0,    60,     0,     0,     2,     0,     0,
       0,     3,     0,     0,    61,     4,     5,     0,    62,     6,
       0,    63,    56,    39,     0,     0,    57,    58,     7,     0,
       0,    64,     0,     0,    65,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,     0,     0,    59,     0,     0,
       0,    60,     0,    45,     2,     0,     0,     0,     3,     0,
       0,    61,     4,     5,     0,    62,     6,     0,    63,    38,
      39,     0,     0,    57,    58,     7,     0,     0,     0,     0,
       0,    65,     0,     0,     0,     0,    66,    67,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     2,     0,     0,     0,     3,     0,    38,    39,     4,
       5,    57,    58,     6,     0,    63,     0,     0,     0,    38,
      39,     0,   197,    57,    58,     0,     0,     0,    65,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,     2,
       0,     0,     0,     3,     0,    38,    39,     4,     5,    57,
      58,     6,     0,    63,     0,     0,    38,    39,     0,     0,
      57,    58,     0,     0,     0,    63,    65,     0,     0,     0,
       0,    66,    67,    68,    69,    70,    71,     0,    65,   209,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    38,
      39,    63,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    63,     0,   119,     0,     0,     0,     0,    66,
      67,    68,    69,    70,    71,   128,     0,     0,     0,     0,
      66,    67,    68,    69,    70,    71,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,     0,     0,    65,     0,
       0,     0,     0,    66,    67,    68,    69,    70,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164
};

static const yytype_int16 yycheck[] =
{
      28,    28,     0,    77,    30,    75,    77,   189,    77,    77,
      77,    75,    77,    88,   145,    13,   145,     0,     9,    10,
     148,    49,    14,   151,    29,    57,    58,    55,    55,    65,
      13,    63,    62,     0,    62,     3,     4,     3,    21,    61,
      23,     3,     4,     5,    60,    61,    13,     7,     8,    54,
     114,    77,     3,    35,    68,    59,    88,    39,    80,    73,
      74,    43,    44,   137,    63,    47,   137,    50,   137,   137,
     137,   145,   137,   202,   145,    62,   145,   145,   145,    77,
       3,     4,    65,   119,    75,    76,   214,    79,   124,    62,
      61,    59,   128,   275,    65,   277,   222,   223,   224,   225,
      63,    63,    62,    61,    64,    63,    66,    61,   290,    63,
       3,   137,     3,     4,     5,    59,   152,    61,   249,   145,
     249,   191,     6,   251,   199,    81,   153,   191,   202,     3,
      61,   202,    63,   202,   202,   202,    61,   202,    63,   137,
     215,   216,   217,    59,    61,   128,    63,   145,    61,    60,
      63,    35,   188,    61,    61,    39,    63,     4,     5,    43,
      44,   189,   189,    47,    60,   193,   193,   199,     0,    69,
      70,   207,    56,    59,     6,   249,   202,    81,   249,    62,
     249,   249,   249,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,    15,    16,    35,   202,    11,    12,    39,   218,   219,
      59,    43,    44,   220,   221,    47,    59,   226,   227,   289,
      62,     3,    58,   249,    56,    36,    67,    77,     3,     4,
      78,    62,     7,     8,    13,     3,    60,    63,    36,    62,
      36,   273,    62,     3,    59,    63,    59,   275,   275,   277,
     277,   249,    36,    28,    63,    59,    59,    32,    60,    60,
      35,    77,   290,   290,    39,    50,    23,    42,    43,    44,
     114,    46,    47,   228,    49,   232,   229,   273,   230,    13,
      11,    56,   231,    -1,    59,     3,     4,    62,    -1,     7,
       8,    -1,    67,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      28,    -1,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,
      -1,    39,    -1,    -1,    42,    43,    44,    -1,    46,    47,
      -1,    49,     3,     4,    -1,    -1,     7,     8,    56,    -1,
      -1,    59,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    28,    -1,    -1,
      -1,    32,    -1,    81,    35,    -1,    -1,    -1,    39,    -1,
      -1,    42,    43,    44,    -1,    46,    47,    -1,    49,     3,
       4,    -1,    -1,     7,     8,    56,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    35,    -1,    -1,    -1,    39,    -1,     3,     4,    43,
      44,     7,     8,    47,    -1,    49,    -1,    -1,    -1,     3,
       4,    -1,    56,     7,     8,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    35,
      -1,    -1,    -1,    39,    -1,     3,     4,    43,    44,     7,
       8,    47,    -1,    49,    -1,    -1,     3,     4,    -1,    -1,
       7,     8,    -1,    -1,    -1,    49,    62,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    62,    63,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,     3,
       4,    49,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    62,    -1,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    62,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    68,    69,    70,    71,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    35,    39,    43,    44,    47,    56,    84,    88,
      89,    91,    95,   155,   156,   159,   160,   167,     3,   164,
      62,   161,    62,   161,    59,     0,   156,     3,    60,    61,
      63,    84,    90,    92,    93,    94,    63,    94,     3,     4,
     163,   165,     3,    96,   164,    81,   152,   153,     3,    60,
      61,    63,    59,    63,    61,    60,     3,     7,     8,    28,
      32,    42,    46,    49,    59,    62,    67,    68,    69,    70,
      71,    72,    82,    84,    85,    87,    88,    97,    98,    99,
     101,   102,   103,   107,   108,   109,   110,   112,   113,   114,
     115,   119,   122,   125,   132,   135,   137,   139,   141,   143,
     145,   146,   149,   152,   154,   157,   162,   163,   165,   167,
       5,   165,   166,    93,    81,    59,   164,   163,   165,    62,
     112,   112,    59,    59,    62,     3,    59,   165,    62,   112,
      84,   108,     3,    85,   154,    86,    88,    97,    98,   100,
     102,   107,   149,   152,   157,    36,    58,    59,    61,     7,
       8,    62,    64,    66,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    60,   148,   112,   114,    68,    73,
      74,    69,    70,    15,    16,     9,    10,    75,    76,   130,
     131,    11,    12,    67,    77,    78,    13,    14,    79,    62,
       3,    87,   154,    60,   108,   150,   151,    56,    84,    63,
      63,    86,    36,    98,   100,   101,    62,   105,   146,    63,
     111,   146,   108,   163,   147,   116,   117,   118,   120,   121,
     123,   124,   128,   129,   126,   127,   133,   134,   136,   138,
     140,   142,   144,   108,    63,   158,   163,   165,   166,   154,
     163,   165,    63,    59,    59,    63,    63,   114,   100,    36,
     108,    61,    63,    65,   146,   114,   114,   114,   115,   115,
     119,   119,   122,   122,   122,   122,   125,   125,   132,   135,
     137,   139,   141,    80,    59,    61,    63,    60,    63,   106,
     146,   145,   163,   165,   166,    59,   163,   165,   166,   104,
      60,    85,   163,   165,   166
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    89,    89,    90,    91,
      91,    92,    92,    93,    93,    94,    94,    95,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    97,    98,    99,
     100,   100,   101,   101,   103,   104,   102,   105,   106,   107,
     108,   108,   109,   109,   109,   110,   110,   110,   110,   110,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     116,   115,   117,   115,   118,   115,   119,   120,   119,   121,
     119,   122,   123,   122,   124,   122,   125,   126,   125,   127,
     125,   128,   125,   129,   125,   130,   131,   132,   133,   132,
     134,   132,   135,   136,   135,   137,   138,   137,   139,   140,
     139,   141,   142,   141,   143,   144,   143,   145,   145,   146,
     147,   146,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   149,   149,   149,   150,   149,   151,   149,
     152,   152,   153,   154,   155,   155,   156,   156,   156,   157,
     157,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   159,   159,   159,   160,   160,   161,   162,
     163,   164,   165,   166,   167
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       2,     3,     3,     1,     1,     3,     1,     4,     2,     4,
       4,     3,     5,     5,     1,     3,     3,     4,     2,     3,
       3,     1,     3,     2,     0,     0,     7,     1,     1,     2,
       1,     3,     1,     1,     3,     1,     4,     3,     4,     3,
       2,     2,     1,     3,     1,     2,     2,     2,     2,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       0,     4,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     1,     0,     4,     0,     4,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1,     0,     4,
       0,     4,     1,     0,     4,     1,     0,     4,     1,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     5,     1,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     0,     4,     0,     4,
       3,     2,     1,     1,     1,     2,     1,     1,     1,     4,
       5,     3,     5,     5,     5,     3,     3,     1,     3,     3,
       3,     1,     1,     4,     7,     6,     4,     5,     1,     1,
       1,     1,     1,     1,     1
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
#line 524 "parser.y" /* yacc.c:1646  */
    {alc="short";}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 525 "parser.y" /* yacc.c:1646  */
    {alc="int";}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 526 "parser.y" /* yacc.c:1646  */
    {alc="long";}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 527 "parser.y" /* yacc.c:1646  */
    {alc="float";}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 528 "parser.y" /* yacc.c:1646  */
    {alc="double";}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 563 "parser.y" /* yacc.c:1646  */
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
										printf(ANSI_COLOR_RED "%s:\n" ANSI_COLOR_RESET, buffer);
									}
									else
									{
										printf(ANSI_COLOR_RED "ERROR: Function is already declared\n" ANSI_COLOR_RESET);
									}
								alc1 = alc;	
								}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 584 "parser.y" /* yacc.c:1646  */
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
								printf(ANSI_COLOR_RED "%s:\n" ANSI_COLOR_RESET, alc2);
							}
							else
							{
								printf(ANSI_COLOR_RED "ERROR: Function is already declared\n" ANSI_COLOR_RESET);
							}
						alc1 = alc;
						}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 607 "parser.y" /* yacc.c:1646  */
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
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 618 "parser.y" /* yacc.c:1646  */
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
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 638 "parser.y" /* yacc.c:1646  */
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
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 688 "parser.y" /* yacc.c:1646  */
    {if_label1();}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 690 "parser.y" /* yacc.c:1646  */
    {if_label2();}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 692 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 694 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 695 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 697 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 698 "parser.y" /* yacc.c:1646  */
    {if_label2();}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 702 "parser.y" /* yacc.c:1646  */
    {while_start();}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 702 "parser.y" /* yacc.c:1646  */
    {while_rep();}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 702 "parser.y" /* yacc.c:1646  */
    {while_end();}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 704 "parser.y" /* yacc.c:1646  */
    {whileStart=1;}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 705 "parser.y" /* yacc.c:1646  */
    {whileStart=0;}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 714 "parser.y" /* yacc.c:1646  */
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
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 731 "parser.y" /* yacc.c:1646  */
    {if(rhs==0) {printf(ANSI_COLOR_RED "\nERROR: Lvalue required to be identifier\n" ANSI_COLOR_RESET);} else {push_icg();}}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 740 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf("%s\t=\t%s\t%s\t%s\n",temp,icgstack[top_icg],"+","1");
		 	strcpy(icgstack[top_icg+1],temp);
		 	i_icg++;
		 	printf("%s\t=\t%s\n",icgstack[top_icg],icgstack[top_icg+1]);
		 	top_icg-=3;
	}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 748 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf("%s\t=\t%s\t%s\t%s\n",temp,icgstack[top_icg],"-","1");
		 	strcpy(icgstack[top_icg+1],temp);
		 	i_icg++;
		 	printf("%s\t=\t%s\n",icgstack[top_icg],icgstack[top_icg+1]);
		 	top_icg-=3;
	}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 786 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 786 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 787 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 787 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 788 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 788 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 792 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 792 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 793 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 793 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 797 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 797 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 798 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 798 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 802 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 802 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 803 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 803 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 804 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 804 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 805 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 805 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 808 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 809 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 813 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 813 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 814 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 814 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 818 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 818 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 822 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 822 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 826 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 826 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 830 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 830 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 834 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 834 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 842 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 842 "parser.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 845 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 846 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 847 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 848 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 849 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 850 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 851 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 852 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 853 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 854 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 855 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 862 "parser.y" /* yacc.c:1646  */
    {
			  if (alc1!=NULL && strcmp(alc1,"void")!=0) printf(ANSI_COLOR_RED "\nERROR: Function type is %s return void found\n" ANSI_COLOR_RESET, alc1);
			  else
			  func_return();
			  }
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 867 "parser.y" /* yacc.c:1646  */
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
				else
					func_return_v(yytext);
				}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 884 "parser.y" /* yacc.c:1646  */
    {
				if (strcmp(alc1, "void")==0)
					printf(ANSI_COLOR_RED "\nERROR: Function with return type void returning value\n" ANSI_COLOR_RESET);
				else
					func_return_v(yytext);	
				}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 902 "parser.y" /* yacc.c:1646  */
    {push(stack, newScope++); globalScope = newScope;
					push(stack1, currentScope++);
					}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 906 "parser.y" /* yacc.c:1646  */
    {pop(stack); globalScope =  stack->array[stack->top]+1;
					if (stack->top == -1) globalScope = 1;
					pop(stack1); currentScope =  stack1->array[stack1->top]+1;
					if (stack1->top == -1) currentScope = 1;
					}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 932 "parser.y" /* yacc.c:1646  */
    {func_after();}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 934 "parser.y" /* yacc.c:1646  */
    {if(flag2==0){ flag=1; checkParameterType(); flag=0; parameterNumber=0;}}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 937 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 938 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 939 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 940 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 941 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 942 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 943 "parser.y" /* yacc.c:1646  */
    { parameterNumber++; checkParameterType();}
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 944 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 945 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 946 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 947 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 948 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 952 "parser.y" /* yacc.c:1646  */
    {setDatatype = 0;}
#line 2852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 957 "parser.y" /* yacc.c:1646  */
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

  case 188:
#line 968 "parser.y" /* yacc.c:1646  */
    {push(stack,newScope++); globalScope = newScope;
						push(stack1,currentScope++);}
#line 2873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 972 "parser.y" /* yacc.c:1646  */
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
						printf(ANSI_COLOR_RED "$ret_addr = label%d\ngoto %s\n" ANSI_COLOR_RESET, ++lnum, buffer);
						label[++ltop]=lnum;
					}
				}
				else
				{
					printf(ANSI_COLOR_RED "\nERROR: Function used is not declared\n" ANSI_COLOR_RESET);
					flag2=1;
				}
			}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1005 "parser.y" /* yacc.c:1646  */
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
#line 2935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1026 "parser.y" /* yacc.c:1646  */
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
#line 2959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1048 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"constant", "");}
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1049 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"string", "");}
#line 2971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1050 "parser.y" /* yacc.c:1646  */
    {alc="void";}
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2981 "y.tab.c" /* yacc.c:1646  */
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
#line 1051 "parser.y" /* yacc.c:1906  */


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
