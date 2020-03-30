/********************************************************************
* Memory allocation
********************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr, x;
	
	ptr=malloc(sizeof(int)*4);

	if (ptr==NULL)
	{
		puts("Memory error.");
		return (1);
	}
	
	*(ptr+0)=18;
	*(ptr+1)=20;
	*(ptr+2)=36;
	*(ptr+3)=41;
	
	for (x = 0; x < 4; x++)
	{
		printf("The values were stored as follows: %d \t - %d  \n",x+1,*(ptr +x));
	}
	
	return (0);
}
