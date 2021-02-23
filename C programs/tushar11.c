#include<stdio.h>

void main()
{
    int i;
for( i=1901;i<2100;i++)
{
    if(i%4==0)
    {
        printf("%d\t",i);
    if(i%100==0)
    {
        printf("%d\t",i);
    }
    }
}
}