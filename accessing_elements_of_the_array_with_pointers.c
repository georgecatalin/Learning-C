/**********************************************
* Accessing elements of the array with pointers
**********************************************/

#include <stdio.h>

int main()
{
  int array[]={18,20,36,41};
  int *aptr;	
  
  aptr=array;
	
  /* The first element of the array */
  printf("The first element of the array is %d. \n", *aptr);
  
  /* The second element of the array */
  aptr=aptr+1;
  printf("The second element of the array is %d. \n", *aptr);
  
  /* The third element of the array */
  aptr=&array[2];
  printf("The third element of the array is %d. \n", *aptr);
  
  /* The fourth element of the array */
  aptr=array;
  printf("The fourth of the array is %d. \n", *(aptr+3));
  
  return (0);
}
