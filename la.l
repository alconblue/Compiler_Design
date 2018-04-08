%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	//#include "y.tab.h"
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
{headerFile} {return HEADERFILE;}
{str} {
		char *te = (char *)malloc(strlen(yytext)-1);
		int l = strlen(yytext);
		strncpy(te, yytext + 1, l-2);
		  yylval.sym=te; return STR;}
auto {  yylval.sym="auto"; return AUTO;}
break {  yylval.sym="break"; return BREAK;}
case {  yylval.sym="case"; return CASE;}
char {  yylval.sym="keyword"; return CHAR;}
const {  yylval.sym="const"; return CONST;}
continue {  yylval.sym="continue"; yylval.sym=""; return CONTINUE;}
default {  yylval.sym="default"; return DEFAULT;}
do {  yylval.sym="do"; return DO;}
double {  yylval.sym="double"; return DOUBLE;}
else {  yylval.sym="else"; return ELSE;}
enum {  yylval.sym="enum"; return ENUM;}
extern {  yylval.sym="extern"; return EXTERN;}
float {  yylval.sym="float"; return FLOAT;}
for {  yylval.sym="for"; return FOR;}
goto {  yylval.sym="goto"; return GOTO;}
if {  yylval.sym="if"; return IF;}
int { yylval.sym="int"; return INT;}
long {  yylval.sym="long"; return LONG;}
register {  yylval.sym="register"; return REGISTER;}
return {  yylval.sym="return"; return RETURN;}
short {  yylval.sym="short"; return SHORT;}
signed {  yylval.sym="signed"; return SIGNED;}
sizeof {  yylval.sym="sizeof"; return SIZEOF;}
static {  yylval.sym="static"; return STATIC;}
struct {  yylval.sym="struct"; return STRUCT;}
switch {  yylval.sym="switch"; return SWITCH;}
typedef {  yylval.sym="typedef"; return TYPEDEF;}
union {  yylval.sym="union"; return UNION;}
unsigned {  yylval.sym="unsigned"; return UNSIGNED;}
void {  yylval.sym="void"; return VOID;}
volatile {  yylval.sym=yytext; return VOLATILE;}
while {  yylval.sym="while"; return WHILE;}
{identifier} {  yylval.sym=yytext; return ID;}
{integer} {  yylval.sym=yytext; return CONSTANT;}
{float} {  yylval.sym=yytext; return CONSTANT;}
{nonIdentifier} {printf("ERROR: %s is an ill formed token\n", yytext);}

"+="  {  return ADD_ASSIGN;}
"-="  {  return SUB_ASSIGN;}
"*="  {  return MUL_ASSIGN;}
"/="  {  return DIV_ASSIGN;}
"%="  {  return MOD_ASSIGN;}
">>=" {  return LEFT_ASSIGN;} 
"<<=" {  return RIGHT_ASSIGN;}
"&="  {  return AND_ASSIGN;}
"^="  {  return XOR_ASSIGN;}
"|="  {  return OR_ASSIGN;}
"++"  {  return INC;}
"--"  {  return DEC;}
"=="  {  return EQ;}
"!="  {  return NE;}
">"   {  return '>';} 
"<"   {  return '<';}
">="  {  return GE;} 
"<="  {  return LE;}
"||"  {  return OR;}
"&&"  {  return AND;} 
"!"   {  return '!';}
"&"	  {  return '&';}
"|"   {  return '|';} 
"^"   {  return '^';}
"~"   {  return '~';}
"<<"  {  return LEFT;}
">>"  {  return RIGHT;}
"?"   {  return '?';}
{assignmentOperator} {  return '=';}
"-"   {  return '-';}
"+"   {  return '+';}
"*"   {  return '*';}
"/"   {  return '/';}
"%"   {  return '%';}
";" {}
"{"   {  return '{';}
"}"   {  return '}';}
"("   { return '(';}
")"   { return ')';}
"["   {  return '[';}
"]"   {  return ']';}
","   {  return ',';}	
{whitespaces} {} 
. {printf("Error: %s is an Illegal characters\n",yytext);}
"\n" {lineNo++;}
%%

