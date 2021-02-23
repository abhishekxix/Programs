// cubes of 1, 11, 111, 1111, .......

#include<stdio.h>
#include<math.h>

int  main()
{
	long long int a = 1, b;
	int size, i;
	scanf("%d",&size);
	for(i = 0 ;i < size; i++)
	{
		b = pow(a, 2);
		a = (a * 10) + 1;
		
		printf("%9d\n",b);
		
	}
}
