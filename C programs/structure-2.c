//define a structure type personal that could contain a person's name, date of joining and salary. WAP to read this information for two persons from the keyboard and display the same

#include<stdio.h>
#include<stdlib.h>

typedef struct personal
{
	char name[30];
	char doj[11];
	double salary;
} personal;

int main(void)
{
	personal p1, p2;
	char c;
	
	printf("Enter the name of the person p1 ::\n");
	gets(p1.name);
	
	printf("Enter the date of joining of person p1 ::\n");
	gets(p1.doj);
	
	printf("Enter the salary of the person p1 ::\n");
	scanf("%lf",&p1.salary);
	scanf("%c",&c);
	
	printf("Enter the name of the person p2 ::\n");
	gets(p2.name);
	
	printf("Enter the date of joining of person p2 ::\n");
	gets(p2.doj);
	
	printf("Enter the salary of the person p2 ::\n");
	scanf("%lf",&p2.salary);
	
	system("clear");
	
	printf("\n*************************************************************************************************\nS.\tName\t\tD.O.J\t\t\tSalary\n");
	printf("No.\n1\t%s\t\t%s\t\t%.2lf\n2\t%s\t\t%s\t\t%.2lf",p1.name,p1.doj,p1.salary,p2.name,p2.doj,p2.salary);
	printf("\n*************************************************************************************************\n");	
	return 0;
}
