#include<stdio.h>

int factorial(int);

int main()
{
	int n, fact;
	printf("Enter  a number to find its factorial :: ");
	scanf("%d",&n);
	fact = factorial(n);
	
	printf("Factorial = %d", fact);
}

int factorial(int n)
{
	int fact = 1;
	
	for(;n>1;n--)
	{
		fact *= n;
	}
	
	return fact;
}
