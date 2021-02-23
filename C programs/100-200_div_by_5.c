#include<stdio.h>
int main()
{   int count = 0;
    for(int i = 101; i < 200; i++)
    {
        if(i % 5 == 0)
        {
            printf("%d\n",i);
            count++;
        }
        else continue;
    }
    printf("count = %d",count);
    return 0;
}