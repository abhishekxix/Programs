// write a program to calculate the average of all non zero numbers entered by the user.(using break and continue)
#include<stdio.h>

int main()
{
	int a, count = 0, sum = 0;
	float avg = 0;
	printf("Enter -1 to exit.\nEnter numbers to calculate average ::\n");
	while(1)
	{
		scanf("%d",&a);
		if(a == 0)
		{
			continue;
		}
		else if(a > 0)
		{
			sum += a;
			count++;
		}
		else if(a == -1)
		{
			break;
		}
	}
	avg = (float)sum/count;
	printf("The average of the entered numbers is :: %.2f",avg);
	return 0;
}
