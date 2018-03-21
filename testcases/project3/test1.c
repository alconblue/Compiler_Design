#include <stdio.h>
#include <string.h>

int print(int x, int y)
{
	float i=0, j=0;

	while(i<x)
	{
		j=0;
		while(j<y)
		{
			if(i==j)
			{
				print("equal");
			}
			
			j++;
		}
		print("\n");
		i++;
	}
}

void main()
{
	print(5,10);
	return 0;
}
