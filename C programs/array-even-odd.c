//WAP to put even and odd elements of an array into two separate arrays by passing array into a function
#include<stdio.h>

void separate(int []);

int main(void)
{
	int a[10], i;
	printf("Enter the elements of array ::\n");
		for(i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
	}
	separate(a);
	return 0;
}

void separate(int a[])
{
	int b[10], c[10], i, j = 0, k = 0;
	
		for(i = 0; i < 10; i++)
	{
		if(a[i] % 2 == 0)
		{
			b[j] = a[i];
			j++;
		}
		else 
		{
			c[k] = a[i];
			k++;
		}	
	}
	printf("\nThe array of even numbers from the entered array ::\n");
		for(i = 0; i < j; i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nThe array of odd numbers from the entered array ::\n");
			for(i = 0; i < k; i++)
	{
		printf("%d\t",c[i]);
	}
}
