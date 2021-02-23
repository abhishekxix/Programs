//WAP to calculate the sum of array integersby passing array to  a function
#include<stdio.h>

int sum(int*);//or we can write int sum(int []);

int main()
{
	int a[5], i, s;
	printf("Enter the elements of the array ::\n");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	s = sum(a);
	printf("The sum of the elements of the array = %d",s);
	getch();
	return 0;
}

int sum(int a[])
{
	int s = 0, i;
		for(i = 0; i < 5; i++)
	{
		s += a[i];
	}
	return s;
}
