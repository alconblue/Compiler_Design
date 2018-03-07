%token ID CONSTANT STR HEADERFILE

%token INC DEC LE GE EQ NE
%token AND OR LEFT RIGHT MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN 

%token AUTO BREAK CASE CHAR CONST CONTINUE DEFAULT DO DOUBLE ELSE ENUM EXTERN FLOAT FOR GOTO IF INT LONG 

%token REGISTER RETURN SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION UNSIGNED VOID VOLATILE WHILE

%union{
	int integer;
	float floating_point;
	char *sym;

}

%start startSymbol

%{	
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <limits.h>

	int size=20;
	char *alc=0;
	int globalIndex=0;
	int globalScope=0;
	
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

	struct symbolTable{
		int index;
		char *symbol;
		char *attribute;
		char *data;
		struct symbolTable *next;
		int scope;
	};
	
	struct symbolTable *hash[2][20];
	struct Stack* stack;
	int i=0;
	
	void init()
	{
	 	stack = createStack(100);
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
		printf("\nArgument passed: %s\n", sym);
		newSymbol->symbol = te;
		newSymbol->attribute = attr;
		newSymbol->data = dat;
		newSymbol->next = NULL;
		newSymbol->index = globalIndex + 1;
		newSymbol->scope = globalScope - 1;
		globalIndex++;
		struct symbolTable *temp = hash[type][x];
		hash[type][x] = newSymbol;
		hash[type][x]->next = temp;
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

	int checkDeclaration(char *sym)
	{
		int x = hashLocation(sym);
		if(searchHashScope(sym, x))
		return 1;
		else
		return 0;
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
%}

%%

/*The supported datatypes*/
dataType : SHORT {alc="short";}
		 | INT {alc="int";}
		 | LONG {alc="long";}
		 | FLOAT {alc="float";}
		 | DOUBLE {alc="double";}
		 | VOID {alc="void";}
		 ;


	/*List of all statements*/
statement : declarationStatement
		  | ifAndElseMatched
		  | ifAndElseUnmatched
		  | whileLoopStatement
		  | expressionStatement
		  | jumpStatement
		  | compoundStatement
		  ;

statement1 : declarationStatement
		  | whileLoopStatement
		  | expressionStatement
		  | jumpStatement
		  | compoundStatement
		  ;

statements : statements statement
		   | statement
		   ;


	/*defining each type of statements*/
	
	/*Declaration statements: Include declaration of identifiers, with or without initialisation*/
declarationStatement : declarationList ';'
					 ;	

declaration : dataType identi;

declarationAndAssignment : declaration '=' consta
					     | declaration '=' stri
					     ;		   

completeDeclaration : declarationAndAssignment 
					| declaration
					;

argumentList : argumentList ',' completeDeclaration
				| completeDeclaration
				;

declarationList : dataType identifierList
				;				

identifierList : identifierList ',' identi1 
				| identifierList ',' identi1 '=' stri
				| identifierList ',' identi1 '=' consta
				| identifierList ',' identi1 '=' identi 
				| identi1 
				| identi1 '=' stri
				| identi1 '=' consta
				| identi1 '=' identi1
				;

/*declarationStatementError : declaration { printf("Semicolon missing after statement %s\n",$1);}
					 	  | declarationAndAssignment { printf("Semicolon missing after statement %s\n",$1);}
					 	  ;*/



	/*If and else statements.*/
	/*The dangling else problem is taken care by having two types of if and else statements: Matched and unmatched statements*/
/*ifAndElseStatement : ifAndElseMatched
				   | ifAndElseUnmatched
				   ;*/
ifAndElseMatched : IF '(' expression ')' ifAndElseMatched1 ELSE ifAndElseMatched1 
				 ;
ifAndElseMatched1 : IF '(' expression ')' ifAndElseMatched1 ELSE ifAndElseMatched1 
				  | statement1
				  ;		 
ifAndElseUnmatched : IF '(' expression ')' ifAndElseMatched1 ELSE ifAndElseUnmatched
				   | IF	'(' expression ')' statement1
				   ;		   				 
/*ifAndElseStatementError : IF '(' expression ifAndElseMatched ELSE ifAndElseMatched 
						| IF expression ')' ifAndElseMatched ELSE ifAndElseMatched 
						| IF expression ')' ifAndElseMatched ELSE ifAndElseUnmatched
						| IF '(' expression ifAndElseMatched ELSE ifAndElseUnmatched
						| IF expression ')' statement
						| IF '(' expression statement
						;*/



	/*While loop*/
whileLoopStatement : WHILE '(' expression ')' statement
				   		;
/*whileLoopStatementError : WHILE expression ')' statement {addToTable(0,"while","keyword");}
						| WHILE '(' expression statement {addToTable(0,"while","keyword");}
						;*/


	/*Expressions are statements with operators. The expressions are defined taking care of the precedence of operators*/
expressionStatement : expression ';'
					;
expression : assignment_expression
		   | expression ',' assignment_expression
		   ;
primary_expression
	: identi
	| consta
	| stri
	| '(' expression ')'
	;
postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' identi
	| postfix_expression INC
	| postfix_expression DEC
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;
					   
unary_expression
	: postfix_expression
	| INC unary_expression
	| DEC unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' dataType ')'
	;
unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;
cast_expression
	: unary_expression
	| '(' dataType ')' cast_expression
	;
multiplicative_expression
	: cast_expression
	| multiplicative_expression '*' cast_expression
	| multiplicative_expression '/' cast_expression
	| multiplicative_expression '%' cast_expression
	;
additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression
	| additive_expression '-' multiplicative_expression
	;
shift_expression
	: additive_expression
	| shift_expression LEFT additive_expression
	| shift_expression RIGHT additive_expression
	;
relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE shift_expression
	| relational_expression GE shift_expression
	;
equality_expression
	: relational_expression
	| equality_expression EQ relational_expression
	| equality_expression NE relational_expression
	;
and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;
exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;
inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;
logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND inclusive_or_expression
	;
logical_or_expression
	: logical_and_expression
	| logical_or_expression OR logical_and_expression
	;
conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;
assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;
assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;


	/*Jump statements include continue,break and return statements*/
jumpStatement : CONTINUE ';'
			  | BREAK ';'
			  | RETURN ';'
			  | RETURN expression ';'
			  ;
/*			jumpStatementError : CONTINUE 
			       | BREAK 
			       | RETURN 
			       ;*/		  


	/*Compound statements are the statements enclosed within the curly braces*/
compoundStatement : startCompound statements endCompound
				  | startCompound endCompound 
				  ;

startCompound : '{' {push(stack,globalScope++);};
endCompound : '}' {pop(stack);}
			;

/*compoundStatementError : '{'
					   | '}'
					   | '{' statements 
					   | statements '}'
					   ;*/



startSymbol
	: external_declaration
	| startSymbol external_declaration
	;

external_declaration
	: functionDefinition
	| declarationStatement
	| HEADERFILE
	;



functionDefinition : declaration '(' ')' compoundStatement
				   | declaration '(' argumentList ')' compoundStatement
				   ;		

identi : ID {
			printf("\nArgument Passed : %s\n", yylval.sym);
			addToTable(0,yylval.sym,"identifier", alc);};						

identi1 : ID {if(checkDeclaration(yylval.sym))
							{
								printf("correct\n");
								addToTable(0,yylval.sym,"identifier", alc);
							}
							else
							printf("wrong\n");
							};

consta : CONSTANT {addToTable(1,yylval.sym,"constant", "");};
stri : STR {addToTable(1,yylval.sym,"string", "");};
%%

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