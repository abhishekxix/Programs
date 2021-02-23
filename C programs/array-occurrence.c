#include<stdio.h>

int main()
{
    int a[10], i, j, count;

    printf("Enter the elements of the array ::\n");

    for(i = 0; i < 10; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

     for(i = 0; i < 10; i++)
     {
         count = 0;

          for(j = 0; j < 10; j++)
          {
              if(a[i] == a[j])
              {
                  count++;
              }
          }
          printf("\na[%d] occurs %d times.\n", i, count);
     }
     return 0;
}