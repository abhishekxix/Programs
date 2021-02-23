//WAP  to read an array of 10 elements and print the sum of all even numbers
#include<stdio.h>

int main()
{
	int a[10], i, *p, sum = 0, *s;
	
	p = a;
	s = &sum;
	printf("\nEnter the elements of the array ::\n");
	for(i = 0; i < 10; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",p+i);
	}
	for(i = 0; i < 10; i++)
	{
		if(*(p + i) % 2 == 0)
		{
			*s += *(p + i);
		}
	}
	printf("\nSum of even elements of the array = %d",*s);
	return 0;
}
