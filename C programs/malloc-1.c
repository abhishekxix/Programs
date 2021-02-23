#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char* x = malloc(30);
    int* b = malloc(30 * sizeof(int));
    
    for(int i = 0; i < 30; i++)
    {
        *(b + i) = i;
    }

    strcpy(x,"my name is abhishek singh");
    puts(x);
     for(int i = 0; i < 30; i++)
    {
        printf("%d\t",*(b + i));
    }
    free(x);
    free(b);
    return 0;
    
}