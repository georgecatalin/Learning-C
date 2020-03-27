/**************************************
* Accessing arrays with pointers
**************************************/

#include <stdio.h>

int main()
{
	int array[]={18,20,36,41};
	int i;
	int *aptr;
	
	aptr=array;
	
	for (i = 0; i < 4; i++)
	{
		printf("The value of element %d is %d. \n",i+1,*aptr);
		aptr++;
	}
	
	return (0);
}
