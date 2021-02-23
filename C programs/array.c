#include<stdio.h>
int main(void)
{
    int a[100];
    int t;
    for(t = 0; t < 100; ++t)
    {
        a[t] = t;
    }
    for ( t = 0; t < 100; ++t)
    {
       printf("%d\n",a[t]);
    }
    
}