//WAP to find maximum and minimum number in array and swap them

#include<stdio.h>

int main()
{
	int a[10], i, min, max, t, s, l;
	
	printf("Enter the elements of the array ::\n");
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	min = max = a[0];
	
	printf("\n\nThe entered array is ::\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("%d  ",a[i]);
	}
	
	for(i = 1; i < 10; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
			s = i;
		}
		if(a[i] < min)
		{
			min = a[i];
			l = i;
		}
	}
	
	printf("\n\nThe smallest element of array is %d .\nThe largest element of array is %d .\n", min, max);
	/*for(i = 0; i < 10; i++)
	{
		if(a[i] == max)
		{
			t = max;
			a[i] = min;
			continue;
		}
		if(a[i] == min)
		{
			a[i] = max;
		}
	}*/
	t = a[l];
	a[l] = a[s];
	a[s] = t;
	printf("\nThe array after sorting is ::\n");
		for(i = 0; i < 10; i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n\n");
	return 0;
}
