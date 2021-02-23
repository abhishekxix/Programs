#include<stdio.h>
#include<math.h>
int main()
{
    int x, n, i, fact = 1;
    float sum = 1;
    scanf("%d%d",&x,&n);
    for(i=1;i<=n;i++)
    {
        fact *=i;
        sum += pow(x,i)/fact;

    }
    printf("e^x = %.2f",sum);
    return 0;
}