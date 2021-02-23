#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char* string = malloc(100);
    char result[50][30];
    int k = 0, j;

    printf("Enter a string :: ");
    gets(string);

    int n = strlen(string), count = 0;
    for(int i = 0; i < n; i++)
    {
        for( j = k; string[j] != ' '; j++)
        {
           result[i][j] = string[j]; 
        }
        k = k + j + 1;
         
        count++;
    }
    for(int i = 0; i < count; i++)
    {
        printf("%s ",result[i]);
    }
    return 0;
}