//WAP to print sum of all even numbers and odd numbers between 1 to 500
#include <stdio.h>
int main(void)
{
	int i, sumodd = 0, sumeven = 0;
	for(i = 1; i < 500; i++)
	{
		if (i % 2 == 0)
		{
			sumeven += i;
		}
		else sumodd += i;
	}
	printf("Sum of all the even numbers from 1 to 500 = %d \nSum of all the odd numbers from 1 to 500 = %d",sumeven,sumodd);
	return 0;
}
