#include<stdio.h>

int main(void)
{
	int n,i,j;
	
	printf("Enter the size :: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
	{
		for(j = 0;j <= n;j++)
		{
			if(j == 0 || j == n)
			{
				printf("%d ",i);
			}
		
			
			else printf("%d ",j);
		}printf("\n");
	}
	return 0;
}
