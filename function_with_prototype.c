/**********************************************************************
* Adding a function with prototype
**********************************************************************/

#include <stdio.h>

void myFunction();

int main()
{
	printf("Hello, this program uses functions which needs to be prototyped. \n");
	myFunction();
	myFunction();
	printf("Fine, I am done.\n");
}


void myFunction()
{
	puts("This is a function.\n");
	
}
