/*******************************************************
* Exploring the scanf function
********************************************************/


#include <stdio.h>

int main()
{
	char x;
	
	printf("Please type a character: \n");
	scanf("%c",&x);

    printf("You typed %c character. Thank you.",x);
    
    return (0);	
}
