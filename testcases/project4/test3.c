#include <stdio.h>

int main()
{
	int a=10,b=4,c=5;
	while(a)
	{
		b = a--;
		while(b>10)
		{
			c=++b;
		}
	}
	return 0;
}