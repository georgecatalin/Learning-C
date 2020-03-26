/***********************************************************************
* Concatenation of strings
***********************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char first[]="I wish to move.";
	char second[]="From there to here, sometime. \n";
	char concatenation[64] ;  // stands for 63 characters and the null character \0 in the end
	
	strcpy(concatenation,first);
	strcat(concatenation,second);
	
	puts(concatenation);
	
	return (0);	
}
