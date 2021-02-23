//C program to show the working of the bitwise operators
#include<stdio.h>
int main()
{
    printf("This program illustrates the use of bitwise operators using two variables a and b\n");
    int a, b;
    printf("Enter the value for a :: ");
    scanf("%d",&a);
    printf("\nEnter the value of b :: ");
    scanf("%d",&b);
    printf("\n a & b = %d \n a | b = %d \n ~a = %d \n a ^ b = %d \n a>>2 = %d \n a<<2 = %d",a&b,a|b,~a,a^b,a>>2,a<<2);
    return 0;

}
