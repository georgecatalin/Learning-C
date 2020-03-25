/**********************************************************************
* Using logical operators
**********************************************************************/


#include <stdio.h>


int isChar(int ch);

int main()
{
	printf("Please enter the text you wish to transform: \n");
	
	int ch;
	
	do
	{
		ch=getchar();
		
		if (isChar(ch))
		{
			putchar(ch);
		}
		
	} while (ch!='\n');
	
	return (0);
		
}

int isChar(int ch)
{

		if (ch<'A' || ch>'Z')
		{
			return (0);
		}
		else
		{
			return (1);
		}
			
}


