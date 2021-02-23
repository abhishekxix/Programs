/// call by value
#include<stdio.h>

void swap(int, int);

int main()
{
	int a, b;	
	scanf("%d%d", &a, &b);
	printf("a = %d\nb = %d", a, b);

	swap(a, b);

}

void swap(int a, int b)
{
	a = a*b;
	b = a/b;
	a = a/b;
    printf("\nAfter swap ::\na = %d\nb = %d", a, b);
	
}
