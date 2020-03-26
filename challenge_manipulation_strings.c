/***********************************************************************
* Challenge Manipulating strings
***********************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char first[51]; //string contains 50 characters and a null character \0 at the end
	char second[51]; //string contains 50 characters and a null character \0 at the end
	char buffer[122];
	
	printf("Enter the 1st character:");
	fgets(first,50,stdin);
	
	printf("Enter the 2nd character:");
	fgets(second,50,stdin);
	
    strcpy(buffer,first);
    strcat(buffer,second);
    
    printf("%s \n", buffer);

	return(0);
}
