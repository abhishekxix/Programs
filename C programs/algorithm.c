#include<stdio.h>
#include<math.h>

int main(void)
{
    float x, y, sum;

    printf("Enter the value of x :: ");
    scanf("%d",&x);

    y = (x-1) / x;
    sum = y;

    for(int i = 2; i < 7; i++)
    {
        sum = sum + (0.5 * pow(y, i));
    }
    printf("The sum of the series upto seven terms is :: %.2f",sum);
    return 0;
    
}