//VOID POINTER

#include<stdio.h>

int main(void)
{
	int a = 5;
	float b = 1.2;
	char c = 'A';
	
	void *p;
	
	p = &a;
	printf("a = %d\n",*(int*)p);
	
	p = &b;
	printf("b = %f\n",*(float*)p);
	
	p = &c;
	printf("c = %c",*(char*)p);
	
	return 0;
}
