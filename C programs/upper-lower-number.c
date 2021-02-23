#include<stdio.h>

int main()
{
	int  num = 0, upr = 0, lwr = 0;
	char n = '0';
	printf("Start entering characters ::\n");
	while(n != '*')
	{
		scanf(" %c",&n);
		if(n == '*')
		break;
		else if(n >= 'a' && n <= 'z' )
		{
			lwr++;
		}
		else if(n >= 'A' && n <= 'Z')
		{
			upr++;
		}
		else if( n >= '0' && n <= '9')
		{
			num++;
		}
		else printf("Invalid input! Try again ::\n");
	}
	printf("You entered %d numbers.\n%d upper case letters.\n%d lower case letters.",num,upr,lwr);
	return 0;
}
