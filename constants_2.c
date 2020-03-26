/*********************************************************************
* Exposing constant expressions
**********************************************************************/


#include <stdio.h>
#define INPUT_MAX 16

int main()
{
	char keyinput[INPUT_MAX];
	
	printf("Instructions: \n");
	fgets(keyinput,INPUT_MAX,stdin);
	
	puts("Thank you. Everything is fine.");
	puts(keyinput);
	
	return (0);
	
}
