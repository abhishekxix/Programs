#include<stdio.h>

int main()
{
    char string[100], sub_string[30];
    int  i, j, found = 0;

    printf("Enter a string ::\n");
    gets(string);

    printf("\nEnter a sub-string to search it in the entered string ::\n");
    gets(sub_string);

    for(i = 0; string[i] != '\0'; i++)
    {
        if(sub_string[0] == string[i])
        {
            for(j = 0; sub_string[j] != '\0'; j++)
            {
                if(sub_string[j] == string[i+j])
                {
                    found = 1;
                }
                else 
                {
                    found = 0;
                    break;
                }
            }
            if(found == 1)
            {
                puts(sub_string);
                printf(" found in the entered string!");
                break;
            }
        }
    }
    if(found == 0)
    {
        puts(sub_string);
        printf(" not found in the entered string!");
    }
    return 0;
}