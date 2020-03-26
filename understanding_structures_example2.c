/**********************************************************************
* Understanding structures 2
**********************************************************************/

#include <stdio.h>

int main()
{
	struct president
	{
		char name[20];
		int age;		
	};
	
	struct president george = { "George Calin",41};
	
	printf("The president is %s and has %d .", george.name,george.age);
	
	return (0);
}
