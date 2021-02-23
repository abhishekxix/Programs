#include<stdio.h>
int main()
{
    int i, j, size;
    printf("Enter the size of the pattern to be printed :: ");
    scanf("%d",&size);
    printf("\n");
    for(i = 0;i<=size;i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    return 0;
}