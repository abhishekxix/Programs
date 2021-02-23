#include<stdio.h>

int main(void)
{
	int a[10], b[10], *p, *q, i, j;
	
	p = a;
	q = b;
	printf("Enter the elements of array a ::\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("a[%d] = ", i);
		scanf("%d",p+i);
	}
	
	for(i = 0,j = 9; i < 10, j >= 0 ; i++, j--)
	{
		*(q + i) = *(p + j);
	}
	
	printf("\nThe second array with address ::\n");
	
	for(i = 0; i < 10; i++)
	{
		printf(
			"\nb[%d] = %d\taddress = %p\n",
			i,
			*(q + i),
            q + i
        );
	}
	return 0;
}
