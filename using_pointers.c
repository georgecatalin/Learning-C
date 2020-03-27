/*********************************************************************
* Understanding pointers
**********************************************************************/


#include <stdio.h>

int main()
{
	int pokey;
	int *p;
	
	p=&pokey;
	
	printf("The location of variable 'pokey' in memory is %p . \n",&pokey);
	printf("The location of variable p is %p .\n",p);
	
	return (0);
}
