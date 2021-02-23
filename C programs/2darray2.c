//WAP to read and print a 2 dimensional array

#include<stdio.h>

int main()
{
	int a[3][3], i, j;
	
	printf("Enter the elements of the matrix ::\n");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\nThe entered matrix is :: \n\n");
	
		
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ",a[i][j]);
		}printf("\n");
	}
	
	printf("\nThe transpose of the entered matrix is :: \n\n");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ",a[j][i]);
		}printf("\n");
	}
	return 0;
}
