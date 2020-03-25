/**********************************************************************
* Manipulating single characters
**********************************************************************/


#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;
	
	printf("Enter the phrase from which to extract the digits: \t");
	
	do
	{
		ch=getchar();
		if (isdigit(ch))
		{
			putchar(ch);
		}
	} while (ch!='\n');
	
	return (0);
}
