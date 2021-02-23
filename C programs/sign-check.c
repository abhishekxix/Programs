//WAP to check if an entered number is +ve, -ve or 0 by passing pointer to a function

#include<stdio.h>

void check(int*);

int main(void)
{
	int n, *p;
	
	p = &n;
	printf("Enter a number :: ");
	scanf("%d",p);
	
	check(p);
	return 0;
}
void check(int *p)
{
	if(*p > 0)
	printf("positive.");
	
	
    else if(*p < 0)
	printf("negative.");
	
	else printf("0");
}
