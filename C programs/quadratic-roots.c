//C program to find the rs of a quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, r1, r2, real_part, img_part;
    printf("Enter coefficients a, b and c::\n");
    scanf(" %lf %lf %lf",&a, &b, &c);
    d = b*b-4*a*c;
    
    if (d > 0)
    {
    
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("r1 = %.2lf and r2 = %.2lf",r1 , r2);
    }
  
    else if (d == 0)
    {
        r1 = r2 = -b/(2*a);
        printf("r1 = r2 = %.2lf;", r1);
    }
    
    else
    {
        real_part = -b/(2*a);
        img_part = sqrt(-d)/(2*a);
        printf("r1 = %.2lf+%.2lfi and r2 = %.2f-%.2fi", real_part, img_part, real_part, img_part);
    }
    return 0;
}   
