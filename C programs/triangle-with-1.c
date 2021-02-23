//C program to print a right angled triangle with a number repeated in multiple rows
#include<stdio.h>// printf("1\n11\n111\n1111\n11111\n111111\n1111111");
int main()
{  int i=1,j=1;
   a:
    if(i<=6)
    {if (j<=6)
    {
        j*printf("1");
        j=j+1;
    }
    printf("\n");
    }
    i+=1;
    goto a;
    return 0;
}