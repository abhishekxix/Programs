//WAP to print the sum of integers greater than 100 and less than 200 and are divisible by 5
#include<stdio.h>
int main(void)
{
	int i, sum = 0;
	for(i = 101; i < 200; i++)
	{
		if(i % 5 == 0)
		{ 
			sum += i;
		}
		else continue;
	}
	printf("The sum of integers greater than 100 and less than 200 = %d",sum);
}
