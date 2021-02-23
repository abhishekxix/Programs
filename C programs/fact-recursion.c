//wap to find the factorial of a given number using recursion
#include<stdio.h>

int fact(int);


int main()
{
	int n, f;
	
	printf("Enter a number to find its factorial ::\n");
	scanf("%d",&n);
	
	f = fact(n);
	printf("%d! = %d",n,f);
}

int fact(int n)
{
	static int fac = 1;
	if(n > 0)
	{
		
	fac *= n;
	n--;
		fact(n);
	}
	else return fac;

}
