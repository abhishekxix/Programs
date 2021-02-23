#include<stdio.h>

int main(void)
{  
	int num, i = 1;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	for(;i <= 10; i++)
	{
		printf("%d x %d = %d\n", num, i, num * i);
	}
	
	return 0;
}
