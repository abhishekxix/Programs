#include<stdio.h>

int main()
{
    int x, y, hcf, i;

    printf("Enter two numbers to find their HCF ::\n");
    scanf("%d%d",&x,&y);
    for( i = 1; i <= x && i <= y; i++)
    {
        if((x%i == 0) && (y%i == 0))
        {
            hcf = i;
        }
    }
    printf("The HCF of %d and %d = %d ",x,y,hcf);
    return 0;
}