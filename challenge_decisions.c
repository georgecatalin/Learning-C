/***********************************************************************
* Challenge: Make a decision
***********************************************************************/


#include <stdio.h>

int main()
{
	int a;
	
	printf("Enter an integer number, please. \n");
	scanf("%d",&a);
    
    switch(a)
    {
		case 1:
		printf("Red. \n");
		break;
		case 2:
		printf("Blue. \n");
		break;
		case 3:
		printf("Green. \n");
		break;
		default:
		printf("Invalid choice. \n");
		
	}	
	
	return (5);
}
