#include<stdio.h>

struct student
{
	int roll;
	char name[30];
	float marks;
};
int main(void)
{
	struct student s;
	printf("Enter your name ::\n");
	gets(s.name);
	
	printf("Enter roll no. :: ");
	scanf("%d",&s.roll);
	
	printf("Enter your marks :: ");
	scanf("%f",&s.marks);
	
	printf("\n\nName :: ");
	puts(s.name);
	
	printf("Roll no. :: %d\nMarks :: %.2f",s.roll,s.marks);
	
	return 0;
}
