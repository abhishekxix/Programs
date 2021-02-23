#include<stdio.h>

int main(void)
{
    int x, y, hcf, lcm, i;
    printf("Enter two numbers to find their lcm and hcf ::\n");
    scanf("%d%d",&x,&y);

    for(i = 1; i <= x && i <= y; i++)
    {
        if(x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (x * y) / hcf;
    printf("The LCM of %d and %d = %d\nTheir HCF = %d",x,y,lcm,hcf);
    return 0;
}