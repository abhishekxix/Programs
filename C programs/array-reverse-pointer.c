//Wap to read and print array elements  in reverse order with their addresses

#include<stdio.h>

int main(void)
{
	int n;
	
	printf("Enter the size of array :: ");
	scanf("%d",&n);
	int a[n], i, *p;
	
	p = a;
	
	printf("\nEnter the elements of the array ::\n");
	for(i = 0; i < n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",p+i);
	}
	printf("\nThe array in reverse order with address ::\n");
	
	for(i = n - 1; i >= 0; i--)
	{
		printf("a[%d] = %d\taddress = %p\n",i,*(p + i), p + i);
	}
	return 0;
}
