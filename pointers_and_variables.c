/*********************************************************************
* Using pointers
*********************************************************************/

#include <stdio.h>

int main()
{
	int a,b;
	int *ptr;
	
	a=12;
	ptr=&a;
	b=*ptr;
	
	printf("The value of a is %d and the value of b is %d.\n",a,b);
	
	return (0);
}
