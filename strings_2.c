/***************************************************************
* Working with strings
****************************************************************/

#include <stdio.h>

int main()
{
	char password[14];  //stores 13 characters plus the must have null character in the end
	printf("Enter your password : \n");
	
	scanf("%s",password);
	
	printf("You have typed this : \n %s", password);
	
	return (0);	
}
