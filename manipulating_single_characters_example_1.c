/*********************************************************************
* Manipulating single characters
*********************************************************************/


#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch='a';
	
	printf("The original is %c: \n", ch);
	printf("The uppercase is %c: \n", toupper(ch));
	printf("The lowercase is %c: \n", tolower(ch));
	printf("The original is %c: \n",ch);
	
	return(0);
}
