/********************************************************************
* Using character IO
*********************************************************************/

#include <stdio.h>

int main()
{
  int a;
  
  printf("Type a character: ");
  a=getchar();
  
  printf("\nYou entered this '%c ",a);
  
  printf("You entered \n");
  putchar(a);
  putchar('\n');
  
  
  
  return 10;	
}
