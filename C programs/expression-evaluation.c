//WAP to evaluate e^x = 1 + (x^1)/1 +(x^2)/2 + .... + (x^n)/n
#include <stdio.h>
#include <math.h>

int main(void)
{
	float expression = 1;
	int x, n, i;
	printf("Enter the value of x and n :: \n");
	scanf("%d%d",&x,&n);
	for(i = 1; i <= n; i++)
	{
		expression += pow(x,i)/i; 
	}
	printf("The result of the expression for (x = %d) and (n= %d) = %.3f ",x,n,expression);
	return 0;
}
