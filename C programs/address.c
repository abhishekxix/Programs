#include <stdio.h>

int main(void)
{
    int *p, *q, a[] = {1,2,3,4,5};
    p = a;
    q = a+4;

    printf("A = %d\n", *(p + 1));
    printf("B = %d", (q - p));
    return 0;
}