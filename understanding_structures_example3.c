/**********************************************************************
* Understanding structures 3
**********************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	struct date 
	{
		int day;
		int month;
		int year;	
	};
	
	struct person
	{
		char name[30];
		struct date birthday;	
	};
	
	struct person george;
	
	strcpy(george.name,"George Calin");
	george.birthday.day=21;
	george.birthday.month=10;
	george.birthday.year=1978;
	
	printf("My friend is %s and is born on %d/%d/%d .\n", george.name, george.birthday.day, george.birthday.month, george.birthday.year);
	
	return (0);
}
