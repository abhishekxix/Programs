#include<stdio.h>
int main()
{
    int i, j, size;
    printf("Enter the size of the pattern :: ");
    scanf("%d",&size);
    printf("\n");
    for ( i = size; i >= 0; i--)
    {
        for (j = i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
    
}