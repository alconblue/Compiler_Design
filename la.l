%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "y.tab.h"
	int lineNo=1;
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
		printf("%s- String constant\n", te);  yylval.sym=te; return STR;}
auto {printf("Keyword auto found\n");  yylval.sym="auto"; return AUTO;}
break {printf("Keyword break found\n");  yylval.sym="break"; return BREAK;}
case {printf("Keyword case found\n");  yylval.sym="case"; return CASE;}
char {printf("Keyword char found\n");  yylval.sym="keyword"; return CHAR;}
const {printf("Keyword const found\n");  yylval.sym="const"; return CONST;}
continue {printf("Keyword continue found\n");  yylval.sym="continue"; yylval.sym=""; return CONTINUE;}
default {printf("Keyword default found\n");  yylval.sym="default"; return DEFAULT;}
do {printf("Keyword do found\n");  yylval.sym="do"; return DO;}
double {printf("Keyword double found\n");  yylval.sym="double"; return DOUBLE;}
else {printf("Keyword else found\n");  yylval.sym="else"; return ELSE;}
enum {printf("Keyword enum found\n");  yylval.sym="enum"; return ENUM;}
extern {printf("Keyword extern found\n");  yylval.sym="extern"; return EXTERN;}
float {printf("Keyword float found\n");  yylval.sym="float"; return FLOAT;}
for {printf("Keyword for found\n");  yylval.sym="for"; return FOR;}
goto {printf("Keyword goto found\n");  yylval.sym="goto"; return GOTO;}
if {printf("Keyword if found\n");  yylval.sym="if"; return IF;}
int {printf("Keyword int found\n"); yylval.sym="int"; return INT;}
long {printf("Keyword long found\n");  yylval.sym="long"; return LONG;}
register {printf("Keyword register found\n");  yylval.sym="register"; return REGISTER;}
return {printf("Keyword return found\n");  yylval.sym="return"; return RETURN;}
short {printf("Keyword short found\n");  yylval.sym="short"; return SHORT;}
signed {printf("Keyword signed found\n");  yylval.sym="signed"; return SIGNED;}
sizeof {printf("Keyword sizeof found\n");  yylval.sym="sizeof"; return SIZEOF;}
static {printf("Keyword static found\n");  yylval.sym="static"; return STATIC;}
struct {printf("Keyword struct found\n");  yylval.sym="struct"; return STRUCT;}
switch {printf("Keyword switch found\n");  yylval.sym="switch"; return SWITCH;}
typedef {printf("Keyword typedef found\n");  yylval.sym="typedef"; return TYPEDEF;}
union {printf("Keyword union found\n");  yylval.sym="union"; return UNION;}
unsigned {printf("Keyword unsigned found\n");  yylval.sym="unsigned"; return UNSIGNED;}
void {printf("Keyword void found\n");  yylval.sym="void"; return VOID;}
volatile {printf("Keyword volatile found\n");  yylval.sym=yytext; return VOLATILE;}
while {printf("Keyword while found\n");  yylval.sym="while"; return WHILE;}
{identifier} {printf("%s is a Identifier\n", yytext);  yylval.sym=yytext; return ID;}
{integer} {printf("%s is an Integer constant\n", yytext);  yylval.sym=yytext; return CONSTANT;}
{float} {printf("%s is a floating point constant\n", yytext);  yylval.sym=yytext; return CONSTANT;}
{nonIdentifier} {printf("ERROR: %s is an ill formed token\n", yytext);}

"+="  {printf("%s is addition assignment operator\n", yytext);  return ADD_ASSIGN;}
"-="  {printf("%s is subtraction assignment operator\n", yytext);  return SUB_ASSIGN;}
"*="  {printf("%s is multiplication assignment operator\n", yytext);  return MUL_ASSIGN;}
"/="  {printf("%s is division assignment operator\n", yytext);  return DIV_ASSIGN;}
"%="  {printf("%s is mod assignment operator\n", yytext);  return MOD_ASSIGN;}
">>=" {printf("%s is left shift assignment operator\n", yytext);  return LEFT_ASSIGN;} 
"<<=" {printf("%s is right shift assignment operator\n", yytext);  return RIGHT_ASSIGN;}
"&="  {printf("%s is bitwise And assignment operator\n", yytext);  return AND_ASSIGN;}
"^="  {printf("%s is bitwise Xor assignment operator\n", yytext);  return XOR_ASSIGN;}
"|="  {printf("%s is bitwise Or assignment operator\n", yytext);  return OR_ASSIGN;}
"++"  {printf("%s is increment operator\n",yytext);  return INC;}
"--"  {printf("%s is decrement operator\n", yytext);  return DEC;}
"=="  {printf("%s is equal comparator\n", yytext);  return EQ;}
"!="  {printf("%s is not equal comparator\n", yytext);  return NE;}
">"   {printf("%s is greater than comparator\n", yytext);  return '>';} 
"<"   {printf("%s is less than comparator\n", yytext);  return '<';}
">="  {printf("%s is greater than equal\n", yytext);  return GE;} 
"<="  {printf("%s is less than equal\n", yytext);  return LE;}
"||"  {printf("%s is logical or operator\n", yytext);  return OR;}
"&&"  {printf("%s is logical and operator\n", yytext);  return AND;} 
"!"   {printf("%s is not operator\n", yytext);  return '!';}
"&"	  {printf("%s is and operator\n", yytext);  return '&';}
"|"   {printf("%s is or operator\n", yytext);  return '|';} 
"^"   {printf("%s is xor operator\n", yytext);  return '^';}
"~"   {printf("%s is bitwise not\n", yytext);  return '~';}
"<<"  {printf("%s is left shift operator\n", yytext);  return LEFT;}
">>"  {printf("%s is right shift operator\n", yytext);  return RIGHT;}
"?"   {printf("%s is conditional operator\n", yytext);  return '?';}
{assignmentOperator} {printf("%s is an assignment operator\n", yytext);  return '=';}
"-"   {printf("%s is arithmetic operator\n", yytext);  return '-';}
"+"   {printf("%s is arithmetic operator\n", yytext);  return '+';}
"*"   {printf("%s is arithmetic operator\n", yytext);  return '*';}
"/"   {printf("%s is arithmetic operator\n", yytext);  return '/';}
"%"   {printf("%s is arithmetic operator\n", yytext);  return '%';}
";" {printf("%s is special character\n",yytext); return(';');}
"{"   {printf("%s is special character\n", yytext);  return '{';}
"}"   {printf("%s is special character\n", yytext);  return '}';}
"("   {printf("%s is special character\n", yytext); return '(';}
")"   {printf("%s is special character\n", yytext); return ')';}
"["   {printf("%s is special character\n", yytext);  return '[';}
"]"   {printf("%s is special character\n", yytext);  return ']';}
","   {printf("%s is special character\n", yytext);  return ',';}	
{whitespaces} {} 
. {printf("Error: %s is an Illegal characters\n",yytext);}
"\n" {lineNo++;}
%%

