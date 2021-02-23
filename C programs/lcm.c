#include<stdio.h>

int lcm(int, int);
int l = 1;

int main(void)
{
	int x, y, lc;
	printf("Enter two numbers to find their LCM ::\n");
	scanf("%d%d",&x,&y);
	lc = lcm(x, y);
	printf("The LCM of %d and %d = %d",x,y,lc);
	
}

int lcm(int x, int y)
{	int lcm;
if(x > y)
{
	lcm = x;
}
else lcm = y;

for(;;lcm++)
{
	if(lcm % x == 0 && lcm % y == 0)
	{
		return lcm;
		break;
	}
}
}
