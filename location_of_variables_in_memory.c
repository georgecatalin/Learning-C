/********************************************************************
* Getting the location of variables in the memory
*********************************************************************/


#include <stdio.h>

int main()
{
  int a;
  char b;
  float c;
  
  printf("The location of the variable A in memory is %p :\n",&a);
  printf("The location of the variable A in memory is %p :\n",&b);
  printf("The location of the variable A in memory is %p :\n",&c);
  
  return (0);
	
}
