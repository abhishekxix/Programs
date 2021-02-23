//WAP to implement a structure named employee

#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
	int age, id;
	double salary;
	char doj[30], name[30];
} employee;

int main(void)
{
	employee e[5];
	int i;
	
	for(i = 0; i < 5; i++)
	{
	printf("\nEmployee %d ::\nEnter name :: ",i + 1);
	scanf("%s",e[i].name);
	printf("Age :: ");
	scanf("%d", &e[i].age);
	printf("ID :: ");
	scanf("%d", &e[i].id);
	printf("Date of joining :: ");
	scanf("%s",e[i].doj);
	printf("Salary :: ",&e[i].salary);
	scanf("%lf",&e[i].salary);
	
	}
	system("clear");
	
	printf("Employees having salary >= 40000 are");
	for(i = 0; i < 5; i++)
	{
		if(e[i].salary >= 40000)
		{
			printf("\nName :: ");
			puts(e[i].name);
			printf("Age :: %d\nID :: %d\nSalary :: %.3lf\n",e[i].age, e[i].id, e[i].salary);
		}
	}
	return 0;
}
