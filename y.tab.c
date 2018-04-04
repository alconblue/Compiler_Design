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
	int dec_flag=1;

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
		printf("\nPushing %s\n",icg_string);
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

	void while_start()
	{
		lnum++;
		label[++ltop]=lnum;
		printf(ANSI_COLOR_RED "$L%d:\n" ANSI_COLOR_RESET,lnum);
	}
	void while_rep()
	{
		lnum++;
	 	printf(ANSI_COLOR_RED "if( not %s)" ANSI_COLOR_RESET,icgstack[top_icg]);
	 	printf(ANSI_COLOR_RED "\tgoto $L%d\n" ANSI_COLOR_RESET,lnum);
	 	label[++ltop]=lnum;
	}
	void while_end()
	{
		int x,y;
		y=label[ltop--];
		x=label[ltop--];
		printf(ANSI_COLOR_RED "\t\tgoto $L%d\n" ANSI_COLOR_RESET,x);
		printf(ANSI_COLOR_RED "$L%d: \n" ANSI_COLOR_RESET,y);
		top_icg--;
	}

	void func_after()
	{
		strcpy(icg_string, "$ret_value");
		push_icg();
		printf(ANSI_COLOR_RED "label%d:\n" ANSI_COLOR_RESET, label[ltop--]);
	}

	void func_return() 
	{
		printf(ANSI_COLOR_RED "goto $ret_addr" ANSI_COLOR_RESET);
	}

	void func_return_v(char *ret_val)
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

#line 751 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   547

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  289

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    71,    64,     2,
      62,    63,    65,    66,    61,    67,     2,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    59,
      73,    60,    72,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    74,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    75,    80,    68,     2,     2,     2,
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
      55,    56,    57,    58,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   529,   529,   530,   531,   532,   533,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   548,   549,   550,   551,
     552,   553,   556,   557,   564,   565,   568,   589,   612,   623,
     643,   664,   665,   668,   669,   672,   673,   676,   679,   681,
     682,   692,   700,   703,   704,   710,   712,   714,   716,   717,
     719,   720,   726,   726,   726,   728,   729,   734,   736,   737,
     740,   757,   758,   759,   762,   763,   774,   789,   790,   797,
     804,   811,   812,   813,   816,   817,   818,   819,   820,   821,
     824,   825,   828,   829,   829,   830,   830,   831,   831,   834,
     835,   835,   836,   836,   839,   840,   840,   841,   841,   844,
     845,   845,   846,   846,   847,   847,   848,   848,   851,   852,
     855,   856,   856,   857,   857,   860,   861,   861,   864,   865,
     865,   868,   869,   869,   872,   873,   873,   876,   877,   877,
     880,   881,   884,   885,   885,   886,   886,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   899,   904,   905,
     906,   911,   911,   928,   928,   938,   939,   942,   946,   955,
     956,   960,   961,   962,   967,   969,   972,   973,   976,   977,
     978,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     990,   991,   992,   995,   996,  1007,  1011,  1044,  1065,  1085,
    1106,  1107,  1108
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
  "WHILE", "';'", "'='", "','", "'('", "')'", "'&'", "'*'", "'+'", "'-'",
  "'~'", "'!'", "'/'", "'%'", "'>'", "'<'", "'^'", "'|'", "'?'", "':'",
  "\"=\"", "'{'", "'}'", "$accept", "dataType", "statement", "statement1",
  "statements", "declarationStatement", "declaration", "declaration1",
  "declaration2", "declarationAndAssignment", "completeDeclaration",
  "argumentList", "declarationList", "identifierListAss", "x",
  "identifierList", "ifExpression", "ifStatement", "ifAndElseMatched",
  "ifAndElseMatched1", "ifAndElseUnmatched", "whileLoopStatement", "$@1",
  "$@2", "whileParanthesisStart", "whileParanthesisEnd",
  "expressionStatement", "expression", "primary_expression",
  "postfix_expression", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "$@3", "$@4", "$@5",
  "additive_expression", "$@6", "$@7", "shift_expression", "$@8", "$@9",
  "relational_expression", "$@10", "$@11", "$@12", "$@13", "gt", "lt",
  "equality_expression", "$@14", "$@15", "and_expression", "$@16",
  "exclusive_or_expression", "$@17", "inclusive_or_expression", "$@18",
  "logical_and_expression", "$@19", "logical_or_expression", "$@20",
  "conditional_expression", "assignment_expression", "$@21", "$@22",
  "assignment_operator", "jumpStatement", "$@23", "$@24",
  "compoundStatement", "startCompound", "endCompound", "startSymbol",
  "external_declaration", "functionCall1", "functionCall", "parameters",
  "functionDefinition", "functionDeclaration", "startParenthesis",
  "identi3", "identi", "identi1", "identi2", "consta", "stri", "void", YY_NULLPTR
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
      61,    44,    40,    41,    38,    42,    43,    45,   126,    33,
      47,    37,    62,    60,    94,   124,    63,    58,   314,   123,
     125
};
# endif

#define YYPACT_NINF -234

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-234)))

#define YYTABLE_NINF -189

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     243,  -234,  -234,  -234,  -234,  -234,  -234,  -234,    29,  -234,
     -27,    -5,     3,   491,  -234,  -234,  -234,    67,   -45,   174,
    -234,    15,    19,  -234,    21,   105,    32,   105,  -234,  -234,
    -234,  -234,    68,  -234,   434,   434,   455,   446,  -234,  -234,
    -234,  -234,  -234,  -234,    62,  -234,    97,   168,   174,  -234,
     -28,   108,   180,    30,   186,    78,    73,    75,   142,    -9,
    -234,  -234,  -234,   121,    -3,    12,   163,  -234,   122,   169,
     146,  -234,  -234,    14,   150,    61,   174,  -234,  -234,  -234,
    -234,   408,  -234,   148,    90,   174,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,  -234,
    -234,  -234,  -234,   174,    45,   159,  -234,  -234,  -234,   261,
    -234,   195,   105,   141,  -234,   165,   162,   164,   174,  -234,
    -234,   219,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   -32,  -234,  -234,  -234,    93,   166,  -234,  -234,   172,
     173,   182,    22,  -234,  -234,   232,  -234,   261,  -234,   361,
     212,  -234,  -234,  -234,   192,  -234,    99,  -234,  -234,  -234,
    -234,   189,   250,  -234,  -234,  -234,   261,  -234,  -234,  -234,
    -234,  -234,  -234,  -234,  -234,  -234,  -234,   -28,   -28,   108,
     108,   180,   180,   180,   180,    30,    30,   186,    78,    73,
      75,   142,   174,    48,  -234,    48,  -234,  -234,   174,  -234,
    -234,  -234,   102,  -234,  -234,   220,  -234,   361,   222,  -234,
    -234,  -234,  -234,  -234,  -234,   361,   197,  -234,    83,  -234,
     261,  -234,  -234,   200,  -234,  -234,  -234,  -234,  -234,   104,
     203,   207,  -234,   361,   231,  -234,  -234,  -234,   174,   211,
     107,  -234,    48,  -234,  -234,  -234,  -234,   361,   110,  -234,
     213,  -234,  -234,  -234,  -234,  -234,  -234,   311,  -234
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   163,     6,     5,     3,     4,     2,   192,     0,   162,
       0,     0,     0,     0,   159,   161,    25,     0,   189,     0,
      44,    37,     0,    39,   185,     0,   185,     0,    24,     1,
     160,    27,   187,   190,     0,     0,     0,     0,    74,    75,
      76,    77,    78,    79,    42,    64,    67,    80,     0,    82,
      89,    94,    99,   110,   115,   118,   121,   124,   127,   130,
     132,    58,    63,     0,    60,    61,     0,    38,     0,     0,
      34,    33,    36,     0,     0,     0,     0,    68,    60,    61,
      69,     0,    71,     0,     0,     0,    65,    66,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   137,   135,
     133,    80,    70,    83,    85,    87,    90,    92,    95,    97,
     104,   106,   108,   109,   100,   102,   111,   113,   116,   119,
     122,   125,   128,     0,     0,   189,    43,   157,   180,    52,
      28,     0,     0,     0,   183,     0,     0,     0,     0,    62,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,   191,   164,     0,   174,   178,   179,     0,
       0,     0,     0,    15,   158,     0,    23,    52,     7,    52,
       0,     8,     9,    10,     0,    11,     0,    13,    14,   156,
      12,     0,     0,    31,    32,    35,    52,   184,    73,    72,
      81,   186,   136,   134,    84,    86,    88,    91,    93,    96,
      98,   105,   107,   101,   103,   112,   114,   117,   120,   123,
     126,   129,     0,     0,   165,     0,   149,   148,     0,   151,
     150,   153,   189,    22,   155,    51,    16,    52,     0,    46,
      17,    18,    20,    21,    19,    52,     0,    57,     0,    30,
      52,   182,   131,   168,   172,   173,   177,   176,   175,     0,
       0,     0,    49,    52,     0,    47,    50,    55,     0,   164,
       0,   181,     0,    45,   152,   154,    48,    52,     0,   166,
     165,   171,   170,   169,    56,    53,   167,    52,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -234,     9,  -167,    94,    79,     0,  -234,  -234,  -234,  -234,
     144,   247,  -234,  -234,   214,  -234,  -171,  -165,  -234,  -233,
    -222,  -163,  -234,  -234,  -234,  -234,  -152,   -13,  -234,  -234,
     -16,  -234,   -10,    57,  -234,  -234,  -234,    65,  -234,  -234,
     -14,  -234,  -234,    63,  -234,  -234,  -234,  -234,  -234,  -234,
     123,  -234,  -234,   124,  -234,   125,  -234,   126,  -234,   128,
    -234,  -234,  -234,    69,   -21,  -234,  -234,  -234,  -148,  -234,
    -234,   -61,  -234,  -149,  -234,   271,   151,  -146,    46,  -234,
    -234,   284,  -118,   -18,  -234,  -234,   -15,  -129,    41
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   175,   176,   262,   177,   178,    10,    70,    11,    71,
      72,    73,    12,    19,    20,    21,   179,   180,   181,   239,
     182,   183,   184,   287,   268,   285,   185,   186,    45,    46,
     101,    48,    49,    50,   143,   144,   145,    51,   146,   147,
      52,   148,   149,    53,   152,   153,   150,   151,   114,   115,
      54,   154,   155,    55,   156,    56,   157,    57,   158,    58,
     159,    59,   160,    60,    61,   142,   141,   100,   187,   260,
     261,   188,   129,   189,    13,    14,    62,   190,   165,    15,
      16,    25,    63,    78,    22,    23,    79,   168,   192
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       9,    64,   194,    47,    65,   122,    44,   128,   237,     8,
     233,   191,   265,     9,   238,  -188,   240,   -26,    77,    80,
      82,    47,     8,   266,    84,   229,    33,   241,   234,    85,
     276,   242,    18,   244,    69,    24,    69,   103,   102,   110,
     111,    17,   104,   105,   276,   222,    83,   251,   162,    33,
     163,   162,    33,   163,    17,   266,   -41,    26,   -41,   191,
      47,   191,    28,    84,   140,    47,   237,   123,    84,    47,
      31,   -40,   238,   -40,   240,   132,    66,   133,   191,    67,
     264,   230,   240,   233,    68,   241,   162,    33,   163,   242,
     137,   244,   237,   241,   255,    74,   258,   242,   238,   244,
     240,   271,   112,   113,    86,    87,   166,    47,   164,   167,
     161,   241,   264,    47,   240,   242,   193,   244,   243,   191,
     288,   203,   132,    85,   135,   241,    47,   191,   200,   242,
    -186,   244,   191,   204,   205,   206,   211,   212,   213,   214,
       2,    69,   118,   283,     3,   191,   269,   119,     4,     5,
     120,    85,     6,   139,   223,   121,   224,   231,   247,   191,
      85,    47,  -188,    47,   -29,    85,   125,   273,   223,   191,
     280,    85,   130,   284,   106,   107,   243,    32,    33,   236,
      47,    34,    35,   124,   243,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   108,   109,   116,   117,    33,
     163,   127,   243,   207,   208,   253,   131,   256,   254,   134,
     257,   138,    47,   209,   210,   259,   243,   215,   216,  -188,
     196,    47,   201,    36,   197,   198,   225,   199,    98,    47,
     166,   226,   227,   167,    47,   232,    37,   236,    38,    39,
      40,    41,    42,    43,   228,   236,    99,    47,   245,     1,
     246,   248,    47,   249,   281,   278,   -49,   282,   263,   267,
     272,    47,   274,   236,    32,    33,   275,   277,    34,    35,
     279,    47,   286,   235,    75,   250,   195,   236,     2,   217,
     126,   218,     3,   219,    30,   220,     4,     5,   221,   169,
       6,   252,   202,   170,   270,    27,     2,     0,     0,     7,
       3,     0,     0,   171,     4,     5,     0,   172,     6,     0,
      36,     0,     0,     0,    32,    33,     0,     7,    34,    35,
     173,     0,     0,    37,     0,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     127,   174,     0,   170,     0,     0,     2,     0,     0,     0,
       3,     0,     0,   171,     4,     5,     0,   172,     6,     0,
      36,     0,     0,     0,    32,    33,     0,     7,    34,    35,
     173,     0,     0,    37,     0,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     127,     0,     0,   170,     0,     0,     2,     0,     0,     0,
       3,     0,     0,   171,     4,     5,     0,   172,     6,     0,
      36,    32,    33,     0,     0,    34,    35,     7,     0,     0,
       0,     0,     0,    37,     0,    38,    39,    40,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    32,    33,     0,
     127,    34,    35,     2,     0,     0,     0,     3,     0,    32,
      33,     4,     5,    34,    35,     6,     0,    36,    32,    33,
       0,     0,    34,    35,   136,     0,     0,     0,     0,     0,
      37,     0,    38,    39,    40,    41,    42,    43,     0,     0,
       0,     2,     0,    36,     0,     3,     0,     0,     0,     4,
       5,    29,     0,     6,     0,    36,    76,     1,    38,    39,
      40,    41,    42,    43,    36,     0,     0,     0,    37,     0,
      38,    39,    40,    41,    42,    43,     0,    81,     0,    38,
      39,    40,    41,    42,    43,     0,     2,     0,     0,     0,
       3,     0,     0,     0,     4,     5,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7
};

static const yytype_int16 yycheck[] =
{
       0,    19,   131,    19,    19,    14,    19,    68,   179,     0,
     177,   129,   245,    13,   179,    60,   179,    62,    34,    35,
      36,    37,    13,   245,    37,     3,     4,   179,   177,    61,
     263,   179,     3,   179,    25,    62,    27,    65,    48,     9,
      10,     0,    70,    71,   277,    77,    37,   196,     3,     4,
       5,     3,     4,     5,    13,   277,    59,    62,    61,   177,
      76,   179,    59,    76,    85,    81,   237,    76,    81,    85,
       3,    59,   237,    61,   237,    61,    61,    63,   196,    60,
     245,    59,   245,   250,    63,   237,     3,     4,     5,   237,
      81,   237,   263,   245,   223,    63,   225,   245,   263,   245,
     263,   250,    72,    73,     7,     8,   124,   123,    63,   124,
     123,   263,   277,   129,   277,   263,   131,   263,   179,   237,
     287,   142,    61,    61,    63,   277,   142,   245,   138,   277,
      62,   277,   250,   143,   144,   145,   150,   151,   152,   153,
      35,   132,    64,   272,    39,   263,    63,    74,    43,    44,
      75,    61,    47,    63,    61,    13,    63,   172,    59,   277,
      61,   177,    60,   179,    62,    61,     3,    63,    61,   287,
      63,    61,     3,    63,    66,    67,   237,     3,     4,   179,
     196,     7,     8,    62,   245,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    15,    16,    11,    12,     4,
       5,    79,   263,   146,   147,   223,    60,   225,   223,    59,
     225,    63,   228,   148,   149,   228,   277,   154,   155,    60,
      79,   237,     3,    49,    59,    63,    60,    63,    60,   245,
     248,    59,    59,   248,   250,     3,    62,   237,    64,    65,
      66,    67,    68,    69,    62,   245,    78,   263,    36,     6,
      58,    62,   268,     3,   272,   268,    36,   272,    36,    62,
      60,   277,    59,   263,     3,     4,    59,    36,     7,     8,
      59,   287,    59,   179,    27,   196,   132,   277,    35,   156,
      66,   157,    39,   158,    13,   159,    43,    44,   160,    28,
      47,   222,   141,    32,   248,    11,    35,    -1,    -1,    56,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    47,    -1,
      49,    -1,    -1,    -1,     3,     4,    -1,    56,     7,     8,
      59,    -1,    -1,    62,    -1,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      79,    80,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    47,    -1,
      49,    -1,    -1,    -1,     3,     4,    -1,    56,     7,     8,
      59,    -1,    -1,    62,    -1,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      79,    -1,    -1,    32,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    42,    43,    44,    -1,    46,    47,    -1,
      49,     3,     4,    -1,    -1,     7,     8,    56,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      79,     7,     8,    35,    -1,    -1,    -1,    39,    -1,     3,
       4,    43,    44,     7,     8,    47,    -1,    49,     3,     4,
      -1,    -1,     7,     8,    56,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    64,    65,    66,    67,    68,    69,    -1,    -1,
      -1,    35,    -1,    49,    -1,    39,    -1,    -1,    -1,    43,
      44,     0,    -1,    47,    -1,    49,    62,     6,    64,    65,
      66,    67,    68,    69,    49,    -1,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    69,    -1,    62,    -1,    64,
      65,    66,    67,    68,    69,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    35,    39,    43,    44,    47,    56,    82,    86,
      87,    89,    93,   155,   156,   160,   161,   169,     3,    94,
      95,    96,   165,   166,    62,   162,    62,   162,    59,     0,
     156,     3,     3,     4,     7,     8,    49,    62,    64,    65,
      66,    67,    68,    69,   108,   109,   110,   111,   112,   113,
     114,   118,   121,   124,   131,   134,   136,   138,   140,   142,
     144,   145,   157,   163,   164,   167,    61,    60,    63,    82,
      88,    90,    91,    92,    63,    92,    62,   111,   164,   167,
     111,    62,   111,    82,   108,    61,     7,     8,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    60,    78,
     148,   111,   113,    65,    70,    71,    66,    67,    15,    16,
       9,    10,    72,    73,   129,   130,    11,    12,    64,    74,
      75,    13,    14,    76,    62,     3,    95,    79,   152,   153,
       3,    60,    61,    63,    59,    63,    56,    82,    63,    63,
     145,   147,   146,   115,   116,   117,   119,   120,   122,   123,
     127,   128,   125,   126,   132,   133,   135,   137,   139,   141,
     143,   108,     3,     5,    63,   159,   164,   167,   168,    28,
      32,    42,    46,    59,    80,    82,    83,    85,    86,    97,
      98,    99,   101,   102,   103,   107,   108,   149,   152,   154,
     158,   163,   169,   167,   168,    91,    79,    59,    63,    63,
     113,     3,   157,   145,   113,   113,   113,   114,   114,   118,
     118,   121,   121,   121,   121,   124,   124,   131,   134,   136,
     138,   140,    77,    61,    63,    60,    59,    59,    62,     3,
      59,   167,     3,    83,   154,    84,    86,    97,    98,   100,
     102,   107,   149,   152,   158,    36,    58,    59,    62,     3,
      85,   154,   144,   164,   167,   168,   164,   167,   168,   108,
     150,   151,    84,    36,    98,   100,   101,    62,   105,    63,
     159,   154,    60,    63,    59,    59,   100,    36,   108,    59,
      63,   164,   167,   168,    63,   106,    59,   104,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    94,    95,
      95,    95,    95,    96,    96,    97,    98,    99,   100,   100,
     101,   101,   103,   104,   102,   105,   106,   107,   108,   108,
     109,   109,   109,   109,   110,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   115,   114,   116,   114,   117,   114,   118,
     119,   118,   120,   118,   121,   122,   121,   123,   121,   124,
     125,   124,   126,   124,   127,   124,   128,   124,   129,   130,
     131,   132,   131,   133,   131,   134,   135,   134,   136,   137,
     136,   138,   139,   138,   140,   141,   140,   142,   143,   142,
     144,   144,   145,   146,   145,   147,   145,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   149,   149,
     149,   150,   149,   151,   149,   152,   152,   153,   154,   155,
     155,   156,   156,   156,   157,   157,   158,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     160,   160,   160,   161,   161,   162,   163,   164,   165,   166,
     167,   168,   169
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       2,     3,     3,     1,     1,     3,     1,     2,     2,     1,
       2,     2,     2,     3,     1,     4,     2,     3,     3,     1,
       3,     2,     0,     0,     7,     1,     1,     2,     1,     3,
       1,     1,     3,     1,     1,     2,     2,     1,     2,     2,
       2,     2,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     0,     4,     0,     4,     0,     4,     1,
       0,     4,     0,     4,     1,     0,     4,     0,     4,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     1,     1,
       1,     0,     4,     0,     4,     1,     0,     4,     1,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     0,     4,
       1,     5,     1,     0,     4,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     0,     4,     0,     4,     3,     2,     1,     1,     1,
       2,     1,     1,     1,     3,     4,     4,     5,     3,     5,
       5,     5,     3,     3,     1,     3,     3,     3,     1,     1,
       4,     7,     6,     4,     5,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 529 "parser.y" /* yacc.c:1646  */
    {alc="short";}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 530 "parser.y" /* yacc.c:1646  */
    {alc="int";}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 531 "parser.y" /* yacc.c:1646  */
    {alc="long";}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 532 "parser.y" /* yacc.c:1646  */
    {alc="float";}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 533 "parser.y" /* yacc.c:1646  */
    {alc="double";}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 568 "parser.y" /* yacc.c:1646  */
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
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 589 "parser.y" /* yacc.c:1646  */
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
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 612 "parser.y" /* yacc.c:1646  */
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
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 623 "parser.y" /* yacc.c:1646  */
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
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 643 "parser.y" /* yacc.c:1646  */
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
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 679 "parser.y" /* yacc.c:1646  */
    {rhs=1; strcpy(icg_string,"="); push_icg();}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 682 "parser.y" /* yacc.c:1646  */
    {int len = strlen(yylval.sym); 
				char *buffer=(char *)malloc(len);
				int i;
				for (i=0;i<len;i++)
				{
				if ((yylval.sym[i]>='a' && yylval.sym[i]<='z') || (yylval.sym[i]>='A' && yylval.sym[i]<='Z') || (yylval.sym[i]>='0' && yylval.sym[i]<='9') || (yylval.sym[i]=='_'))
					buffer[i] = yylval.sym[i];
				}
				strcpy(icg_string,buffer); push_icg(); codegen_assign();
				}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 692 "parser.y" /* yacc.c:1646  */
    {int len = strlen(yylval.sym); 
				char *buffer=(char *)malloc(len);
				int i;
				for (i=0;i<len;i++)
				{
				if ((yylval.sym[i]>='a' && yylval.sym[i]<='z') || (yylval.sym[i]>='A' && yylval.sym[i]<='Z') || (yylval.sym[i]>='0' && yylval.sym[i]<='9') || (yylval.sym[i]=='_'))
					buffer[i] = yylval.sym[i];
				}strcpy(icg_string,buffer); push_icg(); codegen_assign();}
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 700 "parser.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 710 "parser.y" /* yacc.c:1646  */
    {if_label1();}
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 712 "parser.y" /* yacc.c:1646  */
    {if_label2();}
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 714 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 716 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 719 "parser.y" /* yacc.c:1646  */
    {if_label3();}
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 726 "parser.y" /* yacc.c:1646  */
    {while_start();}
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 726 "parser.y" /* yacc.c:1646  */
    {while_rep();}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 726 "parser.y" /* yacc.c:1646  */
    {while_end();}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 728 "parser.y" /* yacc.c:1646  */
    {whileStart=1;}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 729 "parser.y" /* yacc.c:1646  */
    {whileStart=0;}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 740 "parser.y" /* yacc.c:1646  */
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
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 757 "parser.y" /* yacc.c:1646  */
    {if(rhs==0) {printf(ANSI_COLOR_RED "\nERROR: Lvalue required to be identifier\n" ANSI_COLOR_RESET);} else {strcpy(icg_string,yytext); push_icg();}}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 763 "parser.y" /* yacc.c:1646  */
    {
			char temp2[10];
		 	sprintf(temp,"$t%d",i_icg);
		 	i_icg++;
		 	sprintf(temp2,"$t%d",i_icg);
		 	printf(ANSI_COLOR_RED"%s\t=\t%s\n"ANSI_COLOR_RESET,temp,icgstack[top_icg]);
		  	printf(ANSI_COLOR_RED"%s\t=\t%s\t%s\t%s\n"ANSI_COLOR_RESET,temp2,icgstack[top_icg],"+","1");
		 	printf(ANSI_COLOR_RED"%s\t=\t%s\n"ANSI_COLOR_RESET,icgstack[top_icg],temp2);
		 	strcpy(icgstack[top_icg],temp);
		 	i_icg++;
	}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 774 "parser.y" /* yacc.c:1646  */
    {
		 	char temp2[10];
		 	sprintf(temp,"$t%d",i_icg);
		 	i_icg++;
		 	sprintf(temp2,"$t%d",i_icg);
		 	printf(ANSI_COLOR_RED"%s\t=\t%s\n"ANSI_COLOR_RESET,temp,icgstack[top_icg]);
		  	printf(ANSI_COLOR_RED"%s\t=\t%s\t%s\t%s\n"ANSI_COLOR_RESET,temp2,icgstack[top_icg],"-","1");
		 	printf(ANSI_COLOR_RED"%s\t=\t%s\n"ANSI_COLOR_RESET,icgstack[top_icg],temp2);
		 	strcpy(icgstack[top_icg],temp);
		 	i_icg++;
	}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 790 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf(ANSI_COLOR_RED"%s\t=\t%s\t%s\t%s\n"ANSI_COLOR_RESET,temp,icgstack[top_icg],"+","1");
		 	printf(ANSI_COLOR_RED"%s\t=\t%s\n"ANSI_COLOR_RESET,icgstack[top_icg],temp);
		 	strcpy(icgstack[top_icg], temp);
		 	i_icg++;
	}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 797 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf(ANSI_COLOR_RED"%s\t=\t%s\t%s\t%s\n"ANSI_COLOR_RESET,temp,icgstack[top_icg],"-","1");
		 	printf(ANSI_COLOR_RED"%s\t=\t%s\n"ANSI_COLOR_RESET,icgstack[top_icg],temp);
		 	strcpy(icgstack[top_icg], temp);
		 	i_icg++;
	}
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 804 "parser.y" /* yacc.c:1646  */
    {
		 	sprintf(temp,"$t%d",i_icg);
		  	printf(ANSI_COLOR_RED "%s\t=\t%s\t%s\n" ANSI_COLOR_RESET,temp,icgstack[top_icg-1],icgstack[top_icg]);
		  	top_icg-=1;
		 	strcpy(icgstack[top_icg],temp);
		 	i_icg++;
	}
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 816 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 817 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 818 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 819 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 820 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 821 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 829 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 829 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 830 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 830 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 831 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 831 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 835 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 835 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 836 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 836 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 840 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 840 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2567 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 841 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 841 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 845 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 845 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 846 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 846 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 847 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 847 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 848 "parser.y" /* yacc.c:1646  */
    { rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 848 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 851 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 852 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 856 "parser.y" /* yacc.c:1646  */
    {rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 856 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 857 "parser.y" /* yacc.c:1646  */
    {rhs=1; strcpy(icg_string,yytext); push_icg();}
#line 2657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 857 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 861 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 861 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 865 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 865 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 869 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 869 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 873 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 873 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 877 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 877 "parser.y" /* yacc.c:1646  */
    {codegen();}
#line 2723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 885 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 885 "parser.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 886 "parser.y" /* yacc.c:1646  */
    {strcpy(icg_string,yytext); push_icg();}
#line 2741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 886 "parser.y" /* yacc.c:1646  */
    {codegen_assign();}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 889 "parser.y" /* yacc.c:1646  */
    {rhs=1;}
#line 2753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 890 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 891 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 892 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 893 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 894 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 895 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 896 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 897 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 898 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 899 "parser.y" /* yacc.c:1646  */
    {rhs=1; icg_flag=1;}
#line 2813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 906 "parser.y" /* yacc.c:1646  */
    {
			  if (alc1!=NULL && strcmp(alc1,"void")!=0) printf(ANSI_COLOR_RED "\nERROR: Function type is %s return void found\n" ANSI_COLOR_RESET, alc1);
			  else
			  func_return();
			  }
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 911 "parser.y" /* yacc.c:1646  */
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
#line 2845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 928 "parser.y" /* yacc.c:1646  */
    {
				if (strcmp(alc1, "void")==0)
					printf(ANSI_COLOR_RED "\nERROR: Function with return type void returning value\n" ANSI_COLOR_RESET);
				else
					func_return_v(yytext);	
				}
#line 2856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 942 "parser.y" /* yacc.c:1646  */
    {push(stack, newScope++); globalScope = newScope;
					push(stack1, currentScope++);
					}
#line 2864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 946 "parser.y" /* yacc.c:1646  */
    {pop(stack); globalScope =  stack->array[stack->top]+1;
					if (stack->top == -1) globalScope = 1;
					pop(stack1); currentScope =  stack1->array[stack1->top]+1;
					if (stack1->top == -1) currentScope = 1;
					}
#line 2874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 967 "parser.y" /* yacc.c:1646  */
    {func_after();}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 969 "parser.y" /* yacc.c:1646  */
    {if(flag2==0){ flag=1; checkParameterType(); flag=0; parameterNumber=0;} func_after();}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 972 "parser.y" /* yacc.c:1646  */
    {func_after();}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 973 "parser.y" /* yacc.c:1646  */
    {if(flag2==0){ flag=1; checkParameterType(); flag=0; parameterNumber=0;} func_after();}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 976 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 977 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 978 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 979 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 980 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 981 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 982 "parser.y" /* yacc.c:1646  */
    { parameterNumber++; checkParameterType();}
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 983 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 984 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 985 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 986 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 987 "parser.y" /* yacc.c:1646  */
    {parameterNumber++; checkParameterType();}
#line 2970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 991 "parser.y" /* yacc.c:1646  */
    {setDatatype = 0;}
#line 2976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 996 "parser.y" /* yacc.c:1646  */
    {pop(stack); 
					globalScope = stack->array[stack->top]+1;
					if (stack->top==-1)
					{
						globalScope = 1;
					}
					pop(stack1); currentScope = stack1->array[stack1->top]+1;
					if (stack1->top == -1) currentScope = 1;
					}
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1007 "parser.y" /* yacc.c:1646  */
    {push(stack,newScope++); globalScope = newScope;
						push(stack1,currentScope++);}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1011 "parser.y" /* yacc.c:1646  */
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
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1044 "parser.y" /* yacc.c:1646  */
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
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1065 "parser.y" /* yacc.c:1646  */
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
					strcpy(icg_string,buffer); push_icg();
				}
				else
				{
					printf(ANSI_COLOR_RED "ERROR: Variable is already declared\n" ANSI_COLOR_RESET);
				}
			}
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1085 "parser.y" /* yacc.c:1646  */
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
#line 3108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1106 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"constant", "");}
#line 3114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1107 "parser.y" /* yacc.c:1646  */
    {addToTable(1,yylval.sym,"string", "");}
#line 3120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1108 "parser.y" /* yacc.c:1646  */
    {alc="void";}
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3130 "y.tab.c" /* yacc.c:1646  */
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
#line 1109 "parser.y" /* yacc.c:1906  */


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
