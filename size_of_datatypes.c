/*********************************************************************
* Getting the size of datatypes in C
*********************************************************************/

#include <stdio.h>

int main()
{
	int a=12;
	short b=1;
	long c=12121;
	
	float d=1.3;
	double e=2.44;
	
	char f='a';
	
	struct person
	{
		char name[51];
		int age;
		float account_balance;
	};
	
	struct person georgel= {"George Calin", 12, 1500.3};
	
	
	
	
	printf("The size of int datatype in bytes of storage for this computer is %lu . \n", sizeof(a));
	printf("The size of short datatype in bytes of storage for this computer is %lu .\n", sizeof(b));
	printf("The size of long datatype in bytes of storage for this computer is %lu .\n", sizeof(c));
	printf("The size of float datatype in bytes of storage for this computer is %lu .\n", sizeof(d));
	printf("The size of double datatype in bytes of storage for this computer is %lu .\n", sizeof(e));
	printf("The size of char datatype in bytes of storage for this computer is %lu .\n", sizeof(f));
	printf("The size of struct datatype in bytes of storage for this computer is %lu .\n", sizeof(georgel));
	
	return (0);
}
