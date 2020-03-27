/****************************************************
* Challenge: Create a char pointer
*****************************************************/

#include <stdio.h>

int main()
{
	char a,b,c,*p;
	
	a='A';
	p=&a;
	
	b=*p;
	
	p=&c;
	*p='Z';
	
	printf("The values of a is %c, of b is %c, of c is %c", a,b,c);
	return (0);
}
