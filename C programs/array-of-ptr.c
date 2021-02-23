//Wap to sum of all array elements using array of pointers

#include<stdio.h>

int main(void)
{
	int n, sum = 0, i;
	printf("Enter the size of array :: ");
	scanf("%d",&n);
	
	int a[n], *p[n];
	
	for(i = 0; i < n; i++)
	{
		p[i] = &a[i];
	}
	
	printf("\nEnter the elements of the array ::\n");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",p[i]);
	 } 
	for(i = 0; i < n; i++)
	{
		sum += *p[i];
	}
	printf("The sum of the elements of the array = %d", sum);
	
	return 0;
 } 
