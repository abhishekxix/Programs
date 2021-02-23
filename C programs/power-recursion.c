//Power of an entered number using recursive function

#include<stdio.h>

int power(int, int);

int main()
{
	int base, pwr, a;
	printf("Enter the base followed by its power ::\n");
	scanf("%d%d",&base,&pwr);
	a = power(base,pwr);
	printf("The solution = %d",a);
}

int power(int base, int pwr)
{
	if(pwr > 0)
	{
		return base * power(base,pwr-1);
	}
	
	else return 1;
}
