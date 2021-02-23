#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   char num[1000];
   int count = 0, i;
   gets(num);

   for(char j = '0'; j <= '9'; j++)
   {
       count = 0;
       for(i = 0; num[i] != '\0'; i++)
       {
        if(j == num[i]){
        count++;
       }
       }
       printf("%d ",count);
   }
   
    return 0;
}
