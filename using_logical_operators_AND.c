/***********************************************************************
* Using logical operators
***********************************************************************/

#include <stdio.h>

int isChar(int ch);


int main()
{
	int character;
	
	do
	{
		character=getchar();
		if (isChar(character))
		{
			putchar(character);
		}
	} while (character!='\n');
	
	return (0);
}


int isChar(int ch)
{
	if (ch>='A' && ch<='Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}
