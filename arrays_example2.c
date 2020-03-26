/**********************************************************************
* Understanding arrays 
**********************************************************************/

#include <stdio.h>
#define MEALS_A_DAY	3

int main()
{
	int calories[MEALS_A_DAY];
	int i,total;
	
	total=0;
	
	
	for (i = 0; i < MEALS_A_DAY; i++)
	{
		printf("Enter the number of calories for the meal number %d \t",i+1);
		scanf("%d",&calories[i]);
		total+=calories[i];
	}
	
	printf("The total number of calories today was %d: \t" ,total);
	return (0);
	
}
