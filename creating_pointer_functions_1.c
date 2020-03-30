/******************************************************
* Creating pointer functions
******************************************************/

#include <stdio.h>

void substraction(int *ptr);

int main()
{
	int myvalue=100;
	
	printf("The initial value is %d. \n",myvalue);
	substraction(&myvalue);
	printf("The value after the substraction is %d. \n", myvalue);
	return (0);
}

void substraction(int *ptr)
{
	*ptr=*ptr -10;
}
