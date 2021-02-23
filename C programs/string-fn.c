#include<stdio.h>
#include<string.h>
int main()
{
    char s1[11] = "Abhishek",ch = 'i',s2[4] = "his",*ptr;
    ptr = strchr(s1,ch);
    printf("%p",ptr);
     printf("\t%c",*ptr);
    ptr = strstr(s1,s2);
    printf("\n%p",ptr);
    printf("\t%c",*ptr);

    return 0;
}