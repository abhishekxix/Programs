//Program to print the factorial of a number
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int  i, n;
	
	while(1)
	{  int fact = 1;
	printf("\n\nEnter a negative value to quit.\nEnter a number to find its factorial :: ");
	scanf("%d",&n);
	if(n>=0)
	{

	for(i = n; i >= 2;i-- )
	{
		fact *= i;
	}
	printf("The factorial of %d is %d",n,fact);
	}
	else
	{
		printf("quitting....");
		exit(0);
	}
	}
	return 0;
}
