/***********************************************************************
* Understanding arrays
***********************************************************************/


#include <stdio.h>

int main()
{
	float temperatures[]={12.4,33.2,-13.3,45.5};
	
	int i;
	
	for (i = 0; i < 4; i++)
	{
		printf(" The temperature was %f \t" , temperatures[i]);
		puts("\n");
	}
	
	return (0);
}
