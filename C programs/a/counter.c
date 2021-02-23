#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    int digits = 0, vowels = 0, words = 0, spaces = 0, lines = 1, characters = 0, i;
    char* input = malloc(256);
    
    printf("Enter a sentence :: ");
    gets(input);

    int n = strlen(input);

    for(i = 0; i < n; i++)
    {
        if(*(input + i) >=0 && *(input + i) <= 9)
        {
            digits++;
        }
        if(*(input + i) == ' ' && i != n - 1)
        {
            spaces++;
        }
        if(*(input + i) == ' ' || i == n - 1)
        {
            words++;
        }
        if(*(input + i) == '\n')
        {
            lines++;
        }
        if(*(input + i) == 'A' || *(input + i) == 'E' || *(input + i) == 'I' || *(input + i) == 'O' || *(input + i) == 'U' || *(input + i) == 'a' || *(input + i) == 'e' || *(input + i) == 'i' || *(input + i) == 'o' || *(input + i) == 'u')
        {
            vowels++;
        }
        if( (*(input + i) >= '!' && *(input + i) <= '/') || (*(input + i) >= ':' && *(input + i) <= '@') || (*(input + i) >= '[' && *(input + i) <= '`') || (*(input + i) >= '{' && *(input + i) <= '~'))
        {
            characters++;
        }
    }
    printf("Number of ::\n\ndigits = %d\nvowels = %d\nwords = %d\nspaces = %d\nlines = %d\ncharacters = %d",digits, vowels, words, spaces, lines, characters);

    return 0;
}