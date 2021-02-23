#include<stdio.h>
#include<math.h>

int main()
{
    int binary[10], decimal = 0,i = 0, k;
    printf("Enter a binaryb number to find its decimal equivalent ::\n");
  for(i = 0; i < 10; i++)
  {
      scanf("%d",&binary[i]);
  }

   for(i = 9,k = 0; i>=0 ; i--,k++)
  {
     decimal += pow(binary[i],k);
  }
  printf("Decimal number = %d",decimal);
  return 0;  
}