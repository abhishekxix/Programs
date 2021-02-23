//WAP to print 1 to 100 using recursion

#include<stdio.h>

void print(int);

int main()
{
	int i = 1;
	print(i);
	return 0;
}

void print(int i)
{
	printf("%d\t",i);
	i++;
	if(i <= 100)
	{
		print(i);
	}
}
