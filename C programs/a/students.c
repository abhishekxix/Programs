#include<stdio.h>

typedef struct student
{
    long int roll;
    int year;
    char name[30],branch[10];
} student;

int main(void)
{
    int n, i;
    printf("Enter the number of students :: ");
    scanf("%d",&n);

    student s[n];

    for(i = 0; i < n; i++)
    {
        printf("\nStudent no. %d\n\nEnter::\nname::",i + 1);
        scanf("%s",s[i].name);
        printf("roll no. :: ");
        scanf("%ld",&s[i].roll);
        printf("year :: ");
        scanf("%d",&s[i].year);
        printf("branch :: ");
        scanf("%s",s[i].branch);

    }
     for(i = 0; i < n; i++)
    {
        printf("\nStudent no. %d\n\nEnter::\nname:: %s ",i + 1,s[i].name);
        
        printf("\nroll no. :: %d",s[i].roll);
        printf("\nyear :: %d",s[i].year);
        printf("\nbranch :: %s",s[i].branch);

    }
    return 0;
}