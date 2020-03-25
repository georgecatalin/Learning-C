/******************************************************************
* Manipulating single characters
*******************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;
	
	printf("Enter the phrase you wish to extract letters from: \t");
	
	do
	{
		ch=getchar();
		if (isalpha(ch))
		{
			putchar(ch);
		}
		
	} while (ch!='\n');
	
	return (0);
	
}
