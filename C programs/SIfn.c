//SI using functions

#include<stdio.h>

float inter(float, float, float);

int main()
{
	float p, r, t, si;
	
	printf("Enter  principal amount :: ");
	scanf("%.2f", &p);
	printf("\nEnter rate percentage :: ");
	scanf("%.2f", &r);
	printf("Enter the time :: ");
	scanf("%.2f", &t);
	
	si = inter(p, r, t);
	
	printf("SI = %.2f", si);
}

float inter(float p, float r, float t)
{
	float interest;
	
	interest = (p * r * t) / 100;
	
	return interest;
}
