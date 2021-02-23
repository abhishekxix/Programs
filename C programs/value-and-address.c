#include<stdio.h>
void main()
{
    int x;
printf("Enter a number :: ");
scanf("%d",&x);
printf("the value of x is %d and its address is %p",x,x);
//printf("\nthe value of x is %d and its address is %04x",x,&x);
}