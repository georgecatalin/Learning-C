/***********************************************************************
* Making a decision with if
***********************************************************************/



#include <stdio.h>

int main()
{
	int a;
	
	printf("Please enter an Integer: \n");
	
	scanf("%d",&a);
    if (a>10)
	{
		printf("You entered a number greater than 10.\n");
	}	
	else if (a<=10)
	{
		printf("Your number is less or equal to 10. \n");
	}
	
	
	return (2);
}
