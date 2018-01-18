%{
	#include <stdio.h>
	#include <stdlib.h>
	#define size 20
	int globalIndex=0;
	struct symbolTable{
		int index;
		char *symbol;
		char *attribute;
		struct symbolTable *next;
	};
	struct symbolTable *hash[size];
	int i=0;
	for (;i<size;i++)
	{
		hash[i] = NULL;
	}
%}

keyword auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
singleLineComment \/\/.*
multilineComment "/*"([^*]|\*+[^*/])*\*+"/"
multilineCommentError "/*"([^*]|\*+[^*/])*
str \"[^\"]*\"
letter [a-zA-Z]
digit [0-9]
nonIdentifier ({digit})+(_|{letter})(_|{letter}|{digit})*
identifier (_|{letter})(_|{letter}|{digit})*
dataType int|float|double|short\ int|long\ int
argument {dataType}[\ ]*{identifier}
function {identifier}"("(([\ ]*{argument}[\ ]*\,[\ ]*)*[\ ]*{argument}[\ ]*)?")" 
integer ({digit})+
float ({digit})*\.({digit})+
assignmentOperator "="
arithmeticOperator "+"|"-"|"*"|"/"|"%"
operator "+="|"-="|"*="|"/="|"%="|">>="|"<<="|"&="|"^="|"|="|"++"|"--"|"=="|"!="|">"|"<"|">="|"<="|"||"|"&&"|"!"|"&"|"|"|"^"|"~"|"<<"|">>"|"?" 
headerFile "#include"[\ ]*"<"[\ ]*[^>]*[\ ]*">"
specialCharacters \;|\{|\}|\(|\)|\[|\]
whitespaces [\ ]|[\n]|[\t]
%%
{multilineCommentError} {printf("ERROR: Multiline comment is not closed\n");}
{singleLineComment} {}
{multilineComment} {}
{headerFile} {printf("Header file found\n");}
{str} {printf("%s - String constant\n", yytext);}
else" "if {printf("else if found\n"); /*return(ELSEIF);*/}
auto {printf("Keyword auto found\n"); /*return(AUTO);*/}
break {printf("Keyword break found\n"); /*return(BREAK);*/}
case {printf("Keyword case found\n"); /*return(CASE);*/}
char {printf("Keyword char found\n"); /*return(CHAR);*/}
const {printf("Keyword const found\n"); /*return(CONST);*/}
continue {printf("Keyword continue found\n"); /*return(CONTINUE);*/}
default {printf("Keyword default found\n"); /*return(DEFAULT);*/}
do {printf("Keyword do found\n"); /*return(DO);*/}
double {printf("Keyword double found\n"); /*return(DOUBLE);*/}
else {printf("Keyword else found\n"); /*return(ELSE);*/}
enum {printf("Keyword enum found\n"); /*return(ENUM);*/}
extern {printf("Keyword extern found\n"); /*return(EXTERN);*/}
float {printf("Keyword float found\n"); /*return(FLOAT);*/}
for {printf("Keyword for found\n"); /*return(FOR);*/}
goto {printf("Keyword goto found\n"); /*return(GOTO);*/}
if {printf("Keyword if found\n"); /*return(IF);*/}
int {printf("Keyword int found\n"); /*return(INT);*/}
long {printf("Keyword long found\n"); /*return(LONG);*/}
register {printf("Keyword register found\n"); /*return(REGISTER);*/}
return {printf("Keyword return found\n"); /*return(RETURN);*/}
short {printf("Keyword short found\n"); /*return(SHORT);*/}
signed {printf("Keyword signed found\n"); /*return(SIGNED);*/}
sizeof {printf("Keyword sizeof found\n"); /*return(SIZEOF);*/}
static {printf("Keyword static found\n"); /*return(STATIC);*/}
struct {printf("Keyword struct found\n"); /*return(STRUCT);*/}
switch {printf("Keyword switch found\n"); /*return(SWITCH);*/}
typedef {printf("Keyword typedef found\n"); /*return(TYPEDEF);*/}
union {printf("Keyword union found\n"); /*return(UNION);*/}
unsigned {printf("Keyword unsigned found\n"); /*return(UNSIGNED);*/}
void {printf("Keyword void found\n"); /*return(VOID);*/}
volatile {printf("Keyword volatile found\n"); /*return(VOLATILE);*/}
while {printf("Keyword while found\n"); /*return(WHILE);*/}
{keyword} {printf("%s is a Keyword\n",yytext);}
{function} {printf("%s is a Function\n",yytext);}
{identifier} {printf("%s is a Identifier\n", yytext);}
{integer} {printf("%s is an Integer constant\n", yytext);}
{float} {printf("%s is a floating point constant\n", yytext);}
{nonIdentifier} {printf("%s is an ill formed token\n", yytext);}
{operator} {printf("%s is an operator\n", yytext);}
{assignmentOperator} {printf("%s is an asssignment operator\n", yytext);}
{arithmeticOperator} {printf("%s is an arithmetic operator\n", yytext);}
{specialCharacters} {printf("%s is a special character\n",yytext);}
{whitespaces} {} 
. {printf("Error: %s is an Illegal characters\n",yytext);}
%%
int main()
{
	yyin=fopen("testcases/test4.c","r");
	yylex();
}
int yywrap()
{
	return(1);
}
