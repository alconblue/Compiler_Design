#include <stdio.h>
#include <string.h>

int print(int x, int y)
{
	float i, j;

	while(i<x)
	{
		j=0;
		while(j<y)
		{
			if(i==j)
			{
				printf("equal");
			}
			
			j++;
		}
		printf("\n");
		i++;
	}
}

void main()
{
	//print(5,10);
	//return 0;
}
