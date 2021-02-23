//WAP to print the sum of five values by allocating memory through malloc.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, n, i, sum = 0;
    printf("Enter the number of elements to be entered :: ");
    scanf("%d",&n);

    p = (int*) malloc(n * sizeof(int));
    if(p == NULL)
    {
    printf("Memory error!");
    exit(0);
    }
    for(i = 0; i < n; i++)
    {
        printf("\nValue no. %d :: ",(i + 1));
        scanf("%d",(p + i));
        sum += *(p + i);
    }

    printf("\nThe sum of the entered values :: %d",sum);

    free(p);
    return 0;
}