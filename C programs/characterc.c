#include <stdio.h>

int main(void)
{
    char c;

    for(int i = 0 ;i < 255;i++,c++)
    {
        printf("%c", c);
    }
    return 0;
}