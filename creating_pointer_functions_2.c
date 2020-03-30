/***********************************************************
* Creating pointer functions
***********************************************************/

#include <stdio.h>
#include <string.h>

char * get_longest(char *s1, char *s2);

int main()
{
	char string1[]="Bucharest";
	char string2[]="Braila";
	char *result;
	
	result=get_longest(string1, string2);
	
	printf("The longest of the two strings is %s. \n",result);
	
	return (0);
}


char * get_longest(char *s1,char *s2)
{
	int len1,len2;
	
	len1=strlen(s1);
	len2=strlen(s2);
	
	if (len1>len2)
	{
		return (s1);
	}
	else
	{
		return (s2);
	}
	
	
}
