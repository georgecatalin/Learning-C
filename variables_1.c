/***********************************************************************
* Exploring variables
***********************************************************************/

#include <stdio.h>

int main()
{
	int a; /* in C when declaring a variable there is reserved a place in memory for the variable, but it is not 
			initialized to its default like in other languages, it simply takes what is already existing there */
	
	a=12;
	
	printf(" The value of a is %d \n ",a);
	printf("The weight of an integer in bytes is %lu .", sizeof(a));
	
	return (0);
}
