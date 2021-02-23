#include<stdio.h>
//or we can define a constant here by typing #define pi 3.14
int main()
{
    const float pi = 3.14; //const uses memory for the constant storage but #define doesn't
    printf("%f",pi);
    return 0;    
}