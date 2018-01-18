#include <stdio.h>

//This is a test case with no errors
/*This includes various corner cases like 
having a multi line
comment*/

//It also detects loops and nested loops


void printMatrix(int x,int y)
{
	int i=0,j=0;

	while(i<x)
	{
		j=0;
		while(j<y)
		{
			if(i==j)
			{
				printf("equal");
			}
			else if (i>j)
			{
				printf("Greater");
			}
			else
			{
				printf("Smaller");
			}
			j++;
		}
		printf("\n");
		i++;
	}
}

//The main function calls the function printMatrix. The lex analyser detects functions with fixed arguments
/* It also takes care of the longest match problem occurring when using multi line comments*/

int main()
{
	printMatrix(5,10);
	return 0;
}
