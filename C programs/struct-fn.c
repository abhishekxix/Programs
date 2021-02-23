//passing structure to a function

#include<stdio.h>
#include<stdlib.h>

typedef struct person
{
	char name[30];
	int age;
	double salary;
} person;

void display(person);

int main(void)
{
	person p = {"Kumar", 25, 50000};
	display(p);
	
	return 0;
}

void display(person p)
{
	printf("%s\n%d\n%.3lf",p.name, p.age, p.salary);
}
