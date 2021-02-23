#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30], s2[30];
    int option, a, b;
    
    printf("Enter the first string ::\n");
    gets(s1);

    printf("Enter the second string ::\n");
    gets(s2);

    printf("\nThe following program showcases the use of various string library functions.\n\nEnter ::\n");
    printf("1 to check the length of the strings.\n2 to reverse the strings.\n3 to copy string 2 into string 1.\n4 to compare the two strings.\n5 to concatenate the two strings.\n");
    
    scanf("%d",&option);

    switch (option)
    {
    case 1:
    
    a = strlen(s1);
    b = strlen(s2);

        printf("\nThe first string is %d characters long and the second string is %d characters long",a,b);
        break;
    
   /* case 2:
        strrev(s1);
        strrev(s2);
        
        printf("The entered strings in the reverse order are ::\n");
        
        puts("s1 :: ");
        puts(s1);
        puts("s2 ::");
        puts(s2);
        
        break;
    */
    case 3:
        strcpy(s1,s2);
        
        printf("\nThe copied string \ns1 :: \n");
        
        puts(s1);
        break;

    case 4:
        if(strcmp(s1,s2) == 0)
        {
            printf("\nBoth the strings are same.\n");
        }

        else printf("\nThe strings are not same.");
        break;
    
    case 5:
    strcat(s1,s2);
        printf("\nThe two strings after concatenation are ::\n s1::\n");
        puts(s1);
        
        printf("\ns2 ::\n");
        puts(s2);
        break;

    default:
        printf("\nInvalid input!");
    }
    return 0;
}
