/**********************************************************************
* Understanding structures
**********************************************************************/


#include <stdio.h>

int main()
{
	struct bank 
	{
		int account;
		float balance;	
	};
	
	struct bank check, savings;
	
	check.account=121;
	check.balance=25.5;
	
	savings.account=567;
	savings.balance=-12.34;
	
	printf("The balance of the account %d is %f .\n",check.account, check.balance);
	printf("The balance of the account %d is %f. \n", savings.account, savings.balance);
	
	return (0);
	
}
