/***********************************************************************
* Manipulating strings
***********************************************************************/


#include <stdio.h>
#include <string.h>

int main()
{
	char mystring[]="This is my string.";
	
	int len=strlen(mystring);
	
	printf("The string %s has the following number of characters: \n ", mystring);
	printf("%d",len);
	
	return (0);
	
}
