/***********************************************************************
* Arrays example 3
***********************************************************************/

#include <stdio.h>

int main()
{
	char mystring[]="Be safe of covid 19!";
	
	int n;
	n=0;
	
	while (mystring[n]!='\0')
	{
		printf("%c",mystring[n]);
		n++;
	}
	
	return (0);
}
