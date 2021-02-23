//A very simple text editor
#include<stdio.h>

#define max 100 //No. of strings in the array.
#define len 80 //Length of an individual string.

char text[max][len];
int main(void)
{
    register int t, i, j;

    printf("Enter an empty line to quit.\n");
    for (t = 0; t < max; t++)
    {
        printf("%d: ",t+1);
        gets(text[t]);
        
        if(!*text[t])
        {
            break; //quit on blank line
        }
    }

    for(i = 0;i < t; i++)
    {
        puts(text[i]); 
        //putchar('\n');
    }
    return 0;
}