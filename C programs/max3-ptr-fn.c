//WAP  to pass pointers to  a function
#include<stdio.h>

void max(int*, int*, int*);

int main(void)
{
	int a, b, c, *p, *q, *r;
	p = &a;
	q = &b;
	r = &c;
	
	printf("Enter a, b, c ::\n");
	scanf("%d%d%d", p, q, r);
	
	max(p, q, r);
	return 0;
}

void max(int *p, int *q, int *r)
{
	if(*p > *q && *p > *r)
	{
		printf("a = %d is max.",*p);
	}
	else if(*q > *r)
			{
				printf("b = %d is max.", *q);
			}	
			
			else printf("c = %d is max.", *r);
			
}
