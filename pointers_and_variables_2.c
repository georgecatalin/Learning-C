/***********************************
* Pointers and variables
***********************************/

#include <stdio.h>

int main()
{
  int a,b;
  int *ptr;
  
  ptr=&a;
  *ptr=1234;
  
  ptr=&b;
  *ptr=4567;
  
  printf("The value of a is %d and the value of b is %d.\n",a,b);
  
  return (0);
}
