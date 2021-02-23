#include<stdio.h>

int main(void)
{
	int a = 5, *p = &a, **q = &p;
	
	printf("a = %d\n*p = %d\n**q = %d",a,*p,**q);
	
	return 0;
	
}
