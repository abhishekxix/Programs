//C program to evaluate the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
double a, b, c, d,r1, r2, real_part, img_part;
printf("This program is used to evaluate the roots of a quadratic equation.\nMade by Abhishek Singh.\n\n");
printf("Enter the coefficients a, b and c ::\n ");
scanf("%lf%lf%lf",&a,&b,&c);
d = pow(b,2) - (4*a*c);	
if(d>0)
{
r1 = (-b + sqrt(d))/(2*a);
r2 = (-b - sqrt(d))/(2*a);
printf("r1 = %.2lf \n r2 = %.2lf",r1,r2);	
}
else if(d==0)
{
	r1 = r2 = -b/(2*a);
	printf("r1 = r2 = %.2lf",r1);
}
else
{
	real_part = -b/(2*a);
	img_part = sqrt(-d)/(2*a);
	printf("r1 = %.2lf + %.2lfi \nr2 = %.2lf - %.2lfi",real_part,img_part,real_part,img_part);
}
return 0;
}
