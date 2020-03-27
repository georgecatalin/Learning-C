/***************************************************************
* Understanding pointers and values
***************************************************************/

#include <stdio.h>

int main()
{
	int pokey=12;
	int *p;
	
	p=&pokey;
	
	printf("The address of 'pokey' is %p.\n",&pokey);
	printf("The address of 'p' is %p. \n",p);
	
	printf("The value of 'pokey' is %d.\n",pokey);
	printf("The value of *p is %d. \n",*p);
	
	return (0);  
}
