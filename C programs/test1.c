#include<stdio.h>

int main(void)
{
    char a[100], b[100];
    int i, j, l, x, n = 0;
    printf("\nEnter first string :: ");
    gets(a);
    for(i = 0; a[i] != '\0'; i++);
    printf("\nEnter second string :: ");
    gets(b);
    for (j= 0; a[j] != '\0'; j++);
    l = i + j + 2;
    char c[l];
    for(x = 0; x < l - 2; x++)
    {
        if(x < i)
        {
            c[x] = a[x];
            continue;
        }
        if(x == i)
        {
            c[x] = ' ';
            continue;
        }
        if(x > i)
        {
            c[x] = b[n];
            n++;
        }

    }
    c[x] = '\0';
    printf("\nThe resultant string is :: ");
    puts(c);

    return 0;
}