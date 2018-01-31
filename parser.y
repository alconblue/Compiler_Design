%token ID CONSTANT STR HEADERFILE

%token INC DEC LE GE EQ NE
%token AND OR MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN 

%token SHORT INT LONG FLOAT DOUBLE 

%token IF ELSE WHILE BREAK RETURN

%%

dataType : SHORT | INT | LONG | FLOAT | DOUBLE ;
declaration : dataType ID ;
declarationAndAssignment : dataType ID EQ CONSTANT | dataType ID EQ STR ;
headerFile : HEADERFILE ; 
argument : dataType ID | dataType ID EQ CONSTANT | dataType ID EQ STR ;
argumentList : argument ',' argument | argument
functionDefinition : ID "(" ")" 
				   | ID "(" argumentList ")" ;