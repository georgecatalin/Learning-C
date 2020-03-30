/*************************************************************
* Working with pointer arrays
*************************************************************/

#include <stdio.h>

int main()
{
	char *presidents[3]=
	{
		"Ion Iliescu",
		"Emil Constantinescu",
		"Traian Basescu"
	};
	
	int i;
	char *ptr;
	
	
	for (i = 0; i < 3; i++)
	{
		ptr=presidents[i];
		
		while (*ptr!='\0')
		{
			putchar(*ptr);
			ptr++;
		}
		printf("\n");
	}
	
	return (0);
	
}
