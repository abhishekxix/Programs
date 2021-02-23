#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i ,j , t, k = 0, o;
    scanf("%d",&t);
    int a[100]; 
   for(i = 0; i < t; i++)
   {
        scanf("%d",&a[i]);
   }
   
    for(o = 0; o < t; o++)
    { k = 0;
    for(i = 0; i < a[o]; i++)
    {
        for(j = 0; j < a[o] ; j++ )
        {
            printf("%d ",j);
        }
        printf("%d ",k);
        k++;
        printf("\n");
    }
    printf("\n");
    
    } return 0;
}