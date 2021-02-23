#include<stdio.h>

int main(void)
{
	int n;
	
	printf("Enter number of elements in the array  :: ");
	scanf("%d",&n);
	
	int a[n], min, max, temp, i, j, k;
	
	printf("\nEnter the elements of the array ::\n");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe original array is ::\n");
	
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	max = a[0];
	for(i = 0; i < n; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			j = i;
		}
	}
	
	min = a[0];
	
	for(i = 0; i < n; i++)
	{
		if(min >  a[i])
		{
			min = a[i];
			k = i;
		}
	}
	
	temp = a[j];
	a[j] = a[k];
	a[k] = temp;
	
	printf("\n\nMinimum element = %d\nMaximum element = %d\n",min,max);
	
	printf("\nThe array after swapping minimum and maximum number is ::\n");
	
	
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;	
}
