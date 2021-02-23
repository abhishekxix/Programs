#include<stdio.h>

int main() 
{
    int a[10], i, j, t, swapped;

    printf("Enter the elements of the array ::\n");

    for( i = 0; i <10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The entered array is ::\n");

    for(i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }

    t = a[0];

    for( i = 0; i < 10; i++)
    {
        swapped = 0;
        for( j = 0; j < 10 - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
                // swapped = 1;
            }
            // if(swapped == 0)
            // break;
        }
    }
    printf("\nThe array after sorting is ::\n");
    for(i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}