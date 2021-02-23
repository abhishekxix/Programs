#include<stdio.h>

int main(void)
{
	int i, j, k, n;
	
	printf("Enter the size of pattern :: ");
	scanf("%d",&n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = i,k = 0; j > 0, k < i; j--, k++)
		{
			printf("%d ",j);
		}printf("\n");
	}
}
