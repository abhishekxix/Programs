#include<stdio.h>
int main()
{
    int a[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            a[i][j] = (i * 5) + j + 1;  //to enter the values in an array varying from 1 to product of rows and columns.
        }
              
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",a[i][j]);
        }
     printf("\n");
    }
    return 0;    
}