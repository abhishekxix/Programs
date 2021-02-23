#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("This program is used to print the series of even numbers upto the entered rnage and its sum \nEnter the limit :: ");
    scanf("%d",&n);
    printf("The series of even numbers upto %d is :: \n",n);
    for(int i=2;i<=n;i+=2)
    {
        printf("%d\t",i);
       sum += i;

    }
    printf("\nThe sum of the series of even numbers is :: %d",sum);
}