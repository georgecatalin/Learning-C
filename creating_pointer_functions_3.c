/*********************************************************
* Creating pointer functions 3
**********************************************************/

#include <stdio.h>
#include <string.h>

void shout(char *input);

int main()
{
	char mystring[64];
	
	printf("Enter your string:");
	fgets(mystring,64,stdin);
	printf("The initial statement is : %s", mystring);
	
	shout(mystring);
	printf("The modified statement is : %s", mystring);
	
	return (0);
}


void shout(char *input)
{
	while (*input)
	{
		*input=toupper(*input);
		input++;
	}
	
}
