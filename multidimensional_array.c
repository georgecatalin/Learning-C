/**********************************************************************
* Creating multidimensional array
***********************************************************************/


#include <stdio.h>

int main()
{
	int grid[3][3];
	int row,col;
	
	/* Initialize grid */
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			grid[row][col]=0;
		}
	}
	
	grid[1][1]=1;
	
	/* Print the grid */
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			printf("%d \t",grid[row][col]);
			
		}
		puts("\n");
	}
	
	return (0);
}









