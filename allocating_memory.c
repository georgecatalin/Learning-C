/********************************
* Allocating memory
*********************************/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

int main()
{
	char *ptr;
	
	ptr=malloc(sizeof(char)*SIZE);
	
	if (ptr== NULL)
	{
		puts("Memory error");
		return 1;
	}
	else
	{
		printf("I have allocated %d bytes at address %p.", SIZE, ptr);
	}
	
	return 0;
}
