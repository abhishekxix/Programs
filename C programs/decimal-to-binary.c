#include<stdio.h>

int main()
{
    int n, a[10], i = 0, binary, count = 0;
    printf("Enter a number to find its binary conversion ::\n");
    scanf("%d",&n);

    while(n > 0)
    {
        binary = n % 2;
        n /= 2;
        a[i++] = binary;
        count++;
    }

    for(i = count - 1; i >= 0; i--)
    {
        printf("%2d",a[i]);
    }
    return 0;
}