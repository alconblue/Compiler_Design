%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "y.tab.h"
	extern yylval;
	int size=20;
	int lineNo=1;
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
integer ({digit})+
float ({digit})*\.({digit})+
assignmentOperator "="
arithmeticOperator "+"|"-"|"*"|"/"|"%"
operator "+="|"-="|"*="|"/="|"%="|">>="|"<<="|"&="|"^="|"|="|"++"|"--"|"=="|"!="|">"|"<"|">="|"<="|"||"|"&&"|"!"|"&"|"|"|"^"|"~"|"<<"|">>"|"?" 
headerFile "#include"[\ ]*"<"[\ ]*[^>]*[\ ]*">"
specialCharacters \;|\{|\}|\(|\)|\[|\]|,
whitespaces [\ ]|[\t]
%%
{multilineCommentError} {printf("ERROR: Multiline comment is not closed\n");}
{strError} {printf("ERROR: String is not closed\n");}
{singleLineComment} {}
{multilineComment} {}
{headerFile} {printf("Header file found\n"); return HEADERFILE;}
{str} {
		char *te = (char *)malloc(strlen(yytext)-1);
		int l = strlen(yytext);
		strncpy(te, yytext + 1, l-2);
		printf("%s- String constant\n", te); addToTable(1,te,"String"); return STR;}
auto {printf("Keyword auto found\n"); addToTable(0,"auto","keyword"); return AUTO;}
break {printf("Keyword break found\n"); addToTable(0,"break", "keyword"); return BREAK;}
case {printf("Keyword case found\n"); addToTable(0,"case", "keyword"); return CASE;}
char {printf("Keyword char found\n"); addToTable(0,"char", "keyword"); return CHAR;}
const {printf("Keyword const found\n"); addToTable(0,"const", "keyword"); return CONST;}
continue {printf("Keyword continue found\n"); addToTable(0,"continue", "keyword"); return CONTINUE;}
default {printf("Keyword default found\n"); addToTable(0,"default", "keyword");}
do {printf("Keyword do found\n"); addToTable(0,"do","keyword"); return DO;}
double {printf("Keyword double found\n"); addToTable(0,"double","keyword"); return DOUBLE;}
else {printf("Keyword else found\n"); addToTable(0,"else","keyword"); return ELSE;}
enum {printf("Keyword enum found\n"); addToTable(0,"enum","keyword"); return ENUM;}
extern {printf("Keyword extern found\n"); addToTable(0,"extern","keyword"); return EXTERN;}
float {printf("Keyword float found\n"); addToTable(0,"float","keyword"); return FLOAT;}
for {printf("Keyword for found\n"); addToTable(0,"for","keyword"); return FOR;}
goto {printf("Keyword goto found\n"); addToTable(0,"goto","keyword"); return GOTO;}
if {printf("Keyword if found\n"); addToTable(0,"if","keyword"); return IF;}
int {printf("Keyword int found\n"); addToTable(0,"int","keyword"); return INT;}
long {printf("Keyword long found\n"); addToTable(0,"long","keyword"); return LONG;}
register {printf("Keyword register found\n"); addToTable(0,"register","keyword"); return REGISTER;}
return {printf("Keyword return found\n"); addToTable(0,"return","keyword"); return RETURN;}
short {printf("Keyword short found\n"); addToTable(0,"short","keyword"); return SHORT;}
signed {printf("Keyword signed found\n"); addToTable(0,"signed","keyword"); return SIGNED;}
sizeof {printf("Keyword sizeof found\n"); addToTable(0,"sizeof","keyword"); return SIZEOF;}
static {printf("Keyword static found\n"); addToTable(0,"static","keyword"); return STATIC;}
struct {printf("Keyword struct found\n"); addToTable(0,"struct","keyword"); return STRUCT;}
switch {printf("Keyword switch found\n"); addToTable(0,"switch","keyword"); return SWITCH;}
typedef {printf("Keyword typedef found\n"); addToTable(0,"typedef","keyword"); return TYPEDEF;}
union {printf("Keyword union found\n"); addToTable(0,"union","keyword"); return UNION;}
unsigned {printf("Keyword unsigned found\n"); addToTable(0,"unsigned","keyword"); return UNSIGNED;}
void {printf("Keyword void found\n"); addToTable(0,"void","keyword"); return VOID;}
volatile {printf("Keyword volatile found\n"); addToTable(0,"volatile","keyword"); return VOLATILE;}
while {printf("Keyword while found\n"); addToTable(0,"while","keyword"); return WHILE;}
{keyword} {printf("%s is a Keyword\n",yytext);}
{identifier} {printf("%s is a Identifier\n", yytext); addToTable(0,yytext,"identifier"); return ID;}
{integer} {printf("%s is an Integer constant\n", yytext); addToTable(1,yytext,"integer"); return CONSTANT;}
{float} {printf("%s is a floating point constant\n", yytext); addToTable(1,yytext,"float"); return CONSTANT;}
{nonIdentifier} {printf("ERROR: %s is an ill formed token\n", yytext);}

"+="  {printf("%s is addition assignment operator\n", yytext); addToTable(0,yytext,"addition assignment operator"); return ADD_ASSIGN;}
"-="  {printf("%s is subtraction assignment operator\n", yytext); addToTable(0,yytext,"sub assignment operator"); return SUB_ASSIGN;}
"*="  {printf("%s is multiplication assignment operator\n", yytext); addToTable(0,yytext,"mul assignment operator"); return MUL_ASSIGN;}
"/="  {printf("%s is division assignment operator\n", yytext); addToTable(0,yytext,"div assignment operator"); return DIV_ASSIGN;}
"%="  {printf("%s is mod assignment operator\n", yytext); addToTable(0,yytext,"mod assignment operator"); return MOD_ASSIGN;}
">>=" {printf("%s is left shift assignment operator\n", yytext); addToTable(0,yytext,"left-shift assignment operator"); return LEFT_ASSIGN;} 
"<<=" {printf("%s is right shift assignment operator\n", yytext); addToTable(0,yytext,"right-shift assignment operator"); return RIGHT_ASSIGN;}
"&="  {printf("%s is bitwise And assignment operator\n", yytext); addToTable(0,yytext,"bit-and-assignment operator"); return AND_ASSIGN;}
"^="  {printf("%s is bitwise Xor assignment operator\n", yytext); addToTable(0,yytext,"bit-xor-assignment operator"); return XOR_ASSIGN;}
"|="  {printf("%s is bitwise Or assignment operator\n", yytext); addToTable(0,yytext,"bit-or-assignment operator"); return OR_ASSIGN;}
"++"  {printf("%s is increment operator\n",yytext); addToTable(0,yytext,"increment operator"); return INC;}
"--"  {printf("%s is decrement operator\n", yytext); addToTable(0,yytext,"decrement operator"); return DEC;}
"=="  {printf("%s is equal comparator\n", yytext); addToTable(0,yytext,"equal comparison operator"); return EQ;}
"!="  {printf("%s is not equal comparator\n", yytext); addToTable(0,yytext,"not equal operator"); return 'NE';}
">"   {printf("%s is greater than comparator\n", yytext); addToTable(0,yytext,"greater than operator"); return '>';} 
"<"   {printf("%s is less than comparator\n", yytext); addToTable(0,yytext,"less than operator"); return '<';}
">="  {printf("%s is greater than equal\n", yytext); addToTable(0,yytext,"greater or equal"); return GE;} 
"<="  {printf("%s is less than equal\n", yytext); addToTable(0,yytext,"less or equal"); return LE;}
"||"  {printf("%s is logical or operator\n", yytext); addToTable(0,yytext,"logical or"); return OR;}
"&&"  {printf("%s is logical and operator\n", yytext); addToTable(0,yytext,"logical and"); return AND;} 
"!"   {printf("%s is not operator\n", yytext); addToTable(0,yytext,"not operator"); return '!';}
"&"	  {printf("%s is and operator\n", yytext); addToTable(0,yytext,"and operator"); return '&';}
"|"   {printf("%s is or operator\n", yytext); addToTable(0,yytext,"or operator"); return '|';} 
"^"   {printf("%s is xor operator\n", yytext); addToTable(0,yytext,"xor operator"); return '^';}
"~"   {printf("%s is bitwise not\n", yytext); addToTable(0,yytext,"bit-not"); return '~';}
"<<"  {printf("%s is left shift operator\n", yytext); addToTable(0,yytext,"left shift operator"); return LEFT;}
">>"  {printf("%s is right shift operator\n", yytext); addToTable(0,yytext,"right shift operator"); return RIGHT;}
"?"   {printf("%s is conditional operator\n", yytext); addToTable(0,yytext,"conditional operator"); return '?';}
{assignmentOperator} {printf("%s is an assignment operator\n", yytext); addToTable(0,yytext,"assignment operator"); return '=';}
"-"   {printf("%s is arithmetic operator\n", yytext); addToTable(0,yytext,"arithmetic operator"); return '-';}
"+"   {printf("%s is arithmetic operator\n", yytext); addToTable(0,yytext,"arithmetic operator"); return '+';}
"*"   {printf("%s is arithmetic operator\n", yytext); addToTable(0,yytext,"arithmetic operator"); return '*';}
"/"   {printf("%s is arithmetic operator\n", yytext); addToTable(0,yytext,"arithmetic operator"); return '/';}
"%"   {printf("%s is arithmetic operator\n", yytext); addToTable(0,yytext,"arithmetic operator"); return '%';}
{arithmeticOperator} {printf("%s is an arithmetic operator\n", yytext); addToTable(0,yytext,"arithmetic operator");}
";" {return(';');}
"{"   {printf("%s is special character\n", yytext); addToTable(0,yytext, "special character"); return '{';}
"}"   {printf("%s is special character\n", yytext); addToTable(0,yytext, "special character"); return '}';}
"("   {printf("%s is special character\n", yytext); addToTable(0,yytext, "special character"); return('(');}
")"   {printf("%s is special character\n", yytext); addToTable(0,yytext, "special character"); return(')');}
"["   {printf("%s is special character\n", yytext); addToTable(0,yytext, "special character"); return '[';}
"]"   {printf("%s is special character\n", yytext); addToTable(0,yytext, "special character"); return ']';}
","   {printf("%s is special character\n", yytext); addToTable(0,yytext, "special character"); return ',';}	
{specialCharacters} {printf("%s is a special character\n",yytext); return yytext;}
{whitespaces} {} 
. {printf("Error: %s is an Illegal characters\n",yytext);}
"\n" {lineNo++;}
%%

