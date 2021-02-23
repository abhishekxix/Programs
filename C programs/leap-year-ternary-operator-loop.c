#include<stdio.h>
#include<stdlib.h>


int main()
{
	int year;
	char c;
  printf("Enter the value of year = 0 to quit the program.\n ");
do
{ 
	printf("\n\nEnter the year :: ");
	scanf("%d",&year);
    (year%4==0 && year%100!=0) || (year%400==0) ?printf("It is a leap year"): printf("It is not a leap year ");
	
}while(year!=0);
	return 0;
}
