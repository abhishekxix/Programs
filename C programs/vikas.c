//Program to add two numbers entered by user
#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("Enter two numbers to show their sum :: ");
    scanf("%d%d",&a,&b);
    c = a + b;
    printf("\n The sum of the entered numbers is %d",c);
}