//WAP to read the numbers until -1 is encountered also count the positive, negative and zeroes entered by the user.
#include<stdio.h>

int main()
{
	int n, positive = 0, negative = 0, zero = 0;
	printf("Start entering numbers ::\n");
	while(1)
	{
		scanf("%d",&n);
		if(n == -1)
		break;
		else if(n > 0)
		{
			positive++;
		}
		else if(n < 0)
		{
			negative++;
		}
		else 
		{
			zero++;
		}
	}
	printf("You entered %d positive numbers.\n%d negative numbers.\n%d Zeroes.",positive,negative,zero
	);
	return 0;
}
