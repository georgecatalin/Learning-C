/**********************************************************************
* Passing values to a function
***********************************************************************/


#include <stdio.h>

void myFunction(int counter);


int main()
{
	printf("The first song goes like this: \n");
	myFunction(1);
	puts("And then, the second song goes like this: \n");
	myFunction(10);
	
	return (0);
}

void myFunction(int counter)
{
	int i;
	
	
	for (i = 0; i < counter; i++)
	{
		printf(" Hey, bastard!\n");
	}
	
}
