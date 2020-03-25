/*********************************************************************
* Nested Loops
*********************************************************************/


#include <stdio.h>

int main()
{
	char alpha;
	int a;
	
	for (alpha = 'A'; alpha < 'Z'; alpha++)
	{
		for (a = 0; a < 10; a++)
		{
			printf("%c - %d \t",alpha,a);
		}
		puts("\n");
	}
	return 5;
}
