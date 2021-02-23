#include<stdio.h>

int main()
{
	int a , *p;
	p = &a;
	printf("Enter the value of a :: ");
	
	scanf("%d",p);
	
	printf("%d\t%d\t%u",a,*p,p);
	return 0;
}
