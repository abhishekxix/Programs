//ADD two numbers using pointer
#include<stdio.h>

int main()
{
	int a, b, *p, *q, sum, *s;
	p = &a;
	q = &b;
	s = &sum;
	printf("Enter the value of a & b ::\n");
	scanf("%d%d",p,q);
	
	sum = *p + *q;
	printf("The sum of the entered numbers = %d\nAddress of sum = %u",*s,s);
	return 0;
}
