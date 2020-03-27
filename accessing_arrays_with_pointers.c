/***************************************************
* Accessing arrays with pointers
***************************************************/

#include <stdio.h>

int main()
{
	int array[]={12,25,30,41};
	int i;
	
	for (i = 0; i < 4; i++)
	{
		printf("Element %d is %d.\n",i,array[i]);
	}
	
	return (0);
	
}
