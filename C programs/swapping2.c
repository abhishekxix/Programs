// Example of a function call by reference.
#include<stdio.h>

void swap(int*, int*);

int main(void)
{
    int a, b;
    printf("Enter a ::\n");
    scanf("%d",&a);

    printf("Enter b ::\n");
    scanf("%d",&b);
    printf("Before swapping ::\na = %d and b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping ::\na = %d and b = %d",a,b);
    return 0;
}

void swap(int* a, int* b)
{
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
   
}