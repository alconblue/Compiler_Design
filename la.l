%{

%}
keyword auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
singleLineComment \/\/.*
multilineComment "/*"([^*]|\*+[^*/])*\*+"/"
letter [a-zA-Z]
digit [0-9]
nonIdentifiers ({digit})(_|{letter}|{digit})*
identifier (_|{letter})(_|{letter}|{digit})*
%%

{singleLineComment} {}
{multilineComment} {}
{keyword} {printf("%s is a Keyword\n",yytext);}
{nonIdentifiers} {printf("%s is not an Identifier", yytext);}
{identifier} {printf("%s is a Identifier\n", yytext);}

%%
int main()
{
	yyin=fopen("test5.c","r");
	yylex();
}
int yywrap()
{
	return(1);
}
