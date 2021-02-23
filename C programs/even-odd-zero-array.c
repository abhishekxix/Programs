//WAP to read an array of 10 elements and count the number of even numbers, odd numbers and zeroes

#include<stdio.h>

int main()
{
	int a[10], i, e = 0, o = 0, z = 0;
	
	printf("Enter the elements of the array ::\n");
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i] % 2 == 0 && a[i] != 0)
		{
			e++;
		}
		if(a[i] % 2 != 0)
		{
			o++;
		}
		if(a[i] == 0)
		{
			z++;
		}
	}
	printf("You entered %d even numbers.\n%d odd numbers.\n%d zeroes.", e, o, z);
	return 0;	
}
