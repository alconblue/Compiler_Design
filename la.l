%{

%}
keyword auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while
%%

\/\/.* {}
"/*"([^*]|\*+[^*/])*\*+"/"

{keyword} {printf("%s is a Keyword\n",yytext);}


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
