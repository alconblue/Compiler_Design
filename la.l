%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int size=20;
	int globalIndex=0;
	struct symbolTable{
		int index;
		char *symbol;
		char *attribute;
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

	void addToTable(int type, char *sym, char *attr)
	{
		int x = hashLocation(sym);
		if (searchHash(type, sym, x)==0)
			return;	
		struct symbolTable *newSymbol = (struct symbolTable *)malloc(sizeof(struct symbolTable));
		char *te = (char *)malloc(strlen(sym)+1);
		strcpy(te, sym);
		newSymbol->symbol = te;
		newSymbol->attribute = attr;
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
		printf("-------------------------------------------------------------------\n");
		printf("%*s\t|\t%*s\t|\t%*s\n", 10, "INDEX", 10, "SYMBOL", 10, "ATTRIBUTE");
		printf("-------------------------------------------------------------------\n");
		for(;k<size;k++)
		{
			struct symbolTable *temp = hash[0][k];
			while(temp!=NULL)
			{
				printf("%*d\t|\t%*s\t|\t%*s\n",10, temp->index, 10, temp->symbol, 10, temp->attribute);
				temp = temp->next;
			}
		}
		printf("-------------------------------------------------------------------\n");
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

keyword auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
singleLineComment \/\/.*
multilineComment "/*"([^*]|\*+[^*/])*\*+"/"
multilineCommentError "/*"([^*]|\*+[^*/])*
str \"[^\"]*\"
strError \"[^\"]*
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
specialCharacters \;|\{|\}|\(|\)|\[|\]|,
whitespaces [\ ]|[\n]|[\t]
%%
{multilineCommentError} {printf("ERROR: Multiline comment is not closed\n");}
{strError} {printf("ERROR: String is not closed\n");}
{singleLineComment} {}
{multilineComment} {}
{headerFile} {printf("Header file found\n");}
{str} {printf("%s - String constant\n", yytext); addToTable(1,yytext,"String");}
auto {printf("Keyword auto found\n"); addToTable(0,"auto","keyword");}
break {printf("Keyword break found\n"); addToTable(0,"break", "keyword");}
case {printf("Keyword case found\n"); addToTable(0,"case", "keyword");}
char {printf("Keyword char found\n"); addToTable(0,"char", "keyword");}
const {printf("Keyword const found\n"); addToTable(0,"const", "keyword");}
continue {printf("Keyword continue found\n"); addToTable(0,"continue", "keyword");}
default {printf("Keyword default found\n"); addToTable(0,"default", "keyword");}
do {printf("Keyword do found\n"); addToTable(0,"do","keyword");}
double {printf("Keyword double found\n"); addToTable(0,"double","keyword");}
else {printf("Keyword else found\n"); addToTable(0,"else","keyword");}
enum {printf("Keyword enum found\n"); addToTable(0,"enum","keyword");}
extern {printf("Keyword extern found\n"); addToTable(0,"extern","keyword");}
float {printf("Keyword float found\n"); addToTable(0,"float","keyword");}
for {printf("Keyword for found\n"); addToTable(0,"for","keyword");}
goto {printf("Keyword goto found\n"); addToTable(0,"goto","keyword");}
if {printf("Keyword if found\n"); addToTable(0,"if","keyword");}
int {printf("Keyword int found\n"); addToTable(0,"int","keyword");}
long {printf("Keyword long found\n"); addToTable(0,"long","keyword");}
register {printf("Keyword register found\n"); addToTable(0,"register","keyword");}
return {printf("Keyword return found\n"); addToTable(0,"return","keyword");}
short {printf("Keyword short found\n"); addToTable(0,"short","keyword");}
signed {printf("Keyword signed found\n"); addToTable(0,"signed","keyword");}
sizeof {printf("Keyword sizeof found\n"); addToTable(0,"sizeof","keyword");}
static {printf("Keyword static found\n"); addToTable(0,"static","keyword");}
struct {printf("Keyword struct found\n"); addToTable(0,"struct","keyword");}
switch {printf("Keyword switch found\n"); addToTable(0,"switch","keyword");}
typedef {printf("Keyword typedef found\n"); addToTable(0,"typedef","keyword");}
union {printf("Keyword union found\n"); addToTable(0,"union","keyword");}
unsigned {printf("Keyword unsigned found\n"); addToTable(0,"unsigned","keyword");}
void {printf("Keyword void found\n"); addToTable(0,"void","keyword");}
volatile {printf("Keyword volatile found\n"); addToTable(0,"volatile","keyword");}
while {printf("Keyword while found\n"); addToTable(0,"while","keyword");}
{keyword} {printf("%s is a Keyword\n",yytext);}
{function} {printf("%s is a Function\n",yytext); addToTable(0,yytext,"function");}
{identifier} {printf("%s is a Identifier\n", yytext); addToTable(0,yytext,"identifier");}
{integer} {printf("%s is an Integer constant\n", yytext); addToTable(1,yytext,"integer");}
{float} {printf("%s is a floating point constant\n", yytext); addToTable(1,yytext,"float");}
{nonIdentifier} {printf("%s is an ill formed token\n", yytext);}
{operator} {printf("%s is an operator\n", yytext); addToTable(0,yytext,"operator");}
{assignmentOperator} {printf("%s is an asssignment operator\n", yytext); addToTable(0,yytext,"assignment operator");}
{arithmeticOperator} {printf("%s is an arithmetic operator\n", yytext); addToTable(0,yytext,"arithmetic operator");}
{specialCharacters} {printf("%s is a special character\n",yytext);}
{whitespaces} {} 
. {printf("Error: %s is an Illegal characters\n",yytext);}
%%
int main()
{
	init();
	yyin=fopen("testcases/test4.c","r");
	yylex();
	display();
}
int yywrap()
{
	return(1);
}
