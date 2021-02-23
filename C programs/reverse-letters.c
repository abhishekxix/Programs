#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char string[100], result[100] = "", temp[30], t;
    int word_start, word_length, j, i, l;
    while(1)
    {
        printf("\nEnter 'exit' to quit the program.\nEnter a string to reverse its words :: \n");
    
    gets(string);
    
    if(strcmp(string,"exit") == 0)
    exit(0);
    
    int size = strlen(string);

    for(word_start = 0;word_start < size - 1; word_start += word_length)
    {
        for(word_length = word_start; string[word_length] != ' '; word_length++);

        for(j = word_start, i =0; j < word_length && i <29; j++,i++)
        {
            temp[i] = string[j];
        }
       
       
       temp[i] = '\0';
       
        l = strlen(temp);

        for(i = 0;i <= (l-1)/2; i++)
        {
        t = temp[i];
        temp[i] = temp[l-i-1];
        temp[l-i-1] = t;
        }

        temp[l] = '\0';
        strcat(result,temp);

        result[word_length] = ' ';
        result[word_length + 1] = '\0';

        word_length -= word_start;
        word_length++;
    }
    
    printf("\nThe resultant string is ::\n\n");

    puts(result);
    strcpy(result,"");
    }
    return 0;
}