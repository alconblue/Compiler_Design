%token ID CONSTANT STR HEADERFILE

%token INC DEC LE GE EQ NE
%token AND OR LEFT RIGHT MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN 

%token SHORT INT LONG FLOAT DOUBLE 

%token IF ELSE WHILE BREAK RETURN

%%

	/*The supported datatypes*/
dataType : SHORT 
		 | INT 
		 | LONG 
		 | FLOAT 
		 | DOUBLE 
		 ;


	/*List of all statements*/
statement : declarationStatement
		  | ifAndElseStatement
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
declarationStatement : declaration ';'
					 | declarationAndAssignment ';'
					 ;		 
declaration : dataType ID ;
declarationAndAssignment : dataType ID EQ CONSTANT 
					     | dataType ID EQ STR 
					     ;		   
declarationStatementError : declaration 
					 | declarationAndAssignment 
					 ;						     



	/*If and else statements.*/
	/*The dangling else problem is taken care by having two types of if and else statements: Matched and unmatched statements*/
ifAndElseStatement : ifAndElseMatched
				   | ifAndElseUnmatched
				   ;
ifAndElseMatched : if '(' expression ')' ifAndElseMatched else ifAndElseMatched 
				 | statement
				 ;
ifAndElseUnmatched : if '(' expression ')' ifAndElseMatched else ifAndElseUnmatched
				   | if	'(' expression ')' statement
				   ;		   				 
ifAndElseStatementError : if '(' expression ifAndElseMatched else ifAndElseMatched
						| if expression ')' ifAndElseMatched else ifAndElseMatched
						| if expression ')' ifAndElseMatched else ifAndElseUnmatched
						| if '(' expression ifAndElseMatched else ifAndElseUnmatched
						| if expression ')' statement
						| if '(' expression statement
						;



	/*While loop*/
whileLoopStatement : while '(' expression ')' statement
				   ;
whileLoopStatementError : while expression ')' statement
						| while '(' expression statement
						;


	/*Expressions are statements with operators. The expressions are defined taking care of the precedence of operators*/
expressionStatement : expression ';'
					;
expression : assignment_expression
		   | expression ',' assignment_expression
		   ;
primary_expression
	: ID
	| CONSTANT
	| STR
	| '(' expression ')'
	;
postfix_expression
	: primary_expression
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' ID
	| postfix_expression INC
	| postfix_expression DEC
	;			   
unary_expression
	: postfix_expression
	| INC unary_expression
	| DEC unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
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
	| '(' type_name ')' cast_expression
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
jumpStatementError : CONTINUE 
			       | BREAK 
			       | RETURN 
			       | RETURN expression
			       ;			  


	/*Compound statements are the statements enclosed within the curly braces*/
compoundStatement : '{' statements '}'
				  | '{' '}'
				  ;
compoundStatementError : '{'
					   | '}'
					   | '{' statements 
					   | statements '}'


	/*Function definition and arguments*/
argument : dataType ID 
		 | dataType ID EQ CONSTANT 
		 | dataType ID EQ STR 
		 ;
argumentList : argumentList ',' argument 
			 | argument
			 ;
functionDefinition : dataType ID "(" ")" compoundStatement
				   | dataType ID "(" argument ")" compoundStatement
				   | dataType ID "(" argumentList ")" compoundStatement
				   ;		



%%

int main()
{
	yyparse();
}

int yywrap()
{
	return 1;
}

void yyerror(char *msg)
{
	printf("Error: %s\n",msg);
}