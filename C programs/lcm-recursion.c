#include <stdio.h>
 
int lcm(int, int);
 
int main()
{
    int a, b, result;
 
    printf("Enter two numbers::\n ");
    scanf("%d%d", &a, &b);
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);
    return 0;
}
 
int lcm(int a, int b)
{ 
    static int lc = 1;
 
    if (lc % a == 0 && lc % b == 0)
    {
        return lc;
    }
    lc++;
    lcm(a, b);
}