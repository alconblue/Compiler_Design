%{

%}
%%
\/\/.* {}
"/*"([^*]|\*+[^*/])*\*+"/"
%%
int main()
{
	yyin=fopen("abc.txt","r");
	yylex();
}
int yywrap()
{
	return(1);
}
