#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, b;
    scanf("%d",&t);
    int n[t];
    for(int i = 0; i < t; i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i = 0; i < t; i++)
    {   b = n[i];
        int a[b], count = 1, temp;
        for(int j = 0; j < b; j++)
        {
            scanf("%d",&a[j]);
        }
         
     for(int p = 0; p < b - 1; p++)
     {
        for(int j = 0; j < b - 1 - p  ; j++)
        {
            if(a[p] > a[j] && a[p] % 2 != 0)
            {
                temp = a[p];
                a[p] = a[j];
                a[j] = temp;
            }
        }
     }
     
        
     for(int p = 0; p < b - 1; p++)
     {
        for(int j = 0; j < b - p - 1 ; j++)
        {
            if(a[p] > a[j])
            {
                temp = a[p];
                a[p] = a[j];
                a[j] = temp;
                count++;
            }
        }
     }printf("%d\n",count);
    }
    
    return 0;
}
  