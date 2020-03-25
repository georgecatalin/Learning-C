/***********************************************************************
* Manipulating single characters
***********************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;
	
	printf("Enter your string to switch to upppercase: \t");
	
	do
	{
		ch=getchar();
		putchar(toupper(ch));
	} while (ch!='\n');
	
	return (0);
	
}

