//WAP for a function that is returning a pointer to the larger of the two passed values

#include<stdio.h>

int *larger(int*, int*);

int main(void)
{
	int a, b, *p, *q;
	
	p = &a;
	q = &b;
	
	printf("Enter the value of a and b ::\n");
	scanf("%d%d", p, q);
	
	printf("%d is larger", *larger(p, q));
	
	return 0;
}

int *larger(int *p, int *q)
{
	if(*p > *q)
	return p;
	else return q;
}
