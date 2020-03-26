/**********************************************************************
* Multimensional array of characters
**********************************************************************/

#include <stdio.h>

int main()
{
	char myarray[4][10]={"Cornel","Alex","Carmen","Catalin"};
	
	int x;
	
	myarray[1][0]='B';
	
	for (x = 0; x < 4; x++)
	{
		puts(myarray[x]);
	}
	
	return (0);
	
}
