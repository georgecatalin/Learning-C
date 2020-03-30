/************************************************************
* Working with pointer arrays
************************************************************/

#include <stdio.h>

int main()
{
	char *zile[7]=
	{
		"Luni",
		"Marti",
		"Miercuri",
		"Joi",
		"Vineri",
		"Sambata",
	    "Duminica"
	};
	
	int i;
	
	for (i = 0; i < 7; i++)
	{
		printf("%s \t %p \n",zile[i],zile[i]);
	}
	
	return (0);
}
