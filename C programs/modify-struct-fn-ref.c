//WAP to modify the initialized values of a structure by passing pointer to a function


#include<stdio.h>


typedef struct person
{
	char name[30];
	int age;
	double salary;
} person;

void display(person*);
void modify(person*);

int main(void)
{
	person p = {"Kumar", 25, 50000};
	display(&p);
	modify(&p);
	display(&p);
	
	return 0;
}

void display(person* p)
{
	printf("%s\n%d\n%.3lf\n",(*p).name, p->age, p->salary);//we can also use (*p).name
}
void modify(person* p)
{
	p->age = 28;
	p->salary = 55000;
	printf("\nModified values are ::\n");	
}
