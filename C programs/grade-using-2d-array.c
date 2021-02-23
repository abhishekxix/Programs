//This program uses the row number of a matrix as a class and the elements as the grades of individual students.
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define CLASSES 3   //assuming 3 classes per teacher.
#define STUDENTS 30 //assuming 30 students in a class.

int grade[CLASSES][STUDENTS];

void enter_grades(void);
int get_grades(int num);
void disp_grades(int g[][STUDENTS]);

int main(void)
{   system("clear");
    char ch;

    while (1)
    {   
        printf("\n\n(E)nter grades.\n(R)eport grades.\n(Q)uit.\n(C)lear.\n");
        scanf(" %c",&ch);
        ch = toupper(ch);
    
        switch (ch)
        {
            case 'E':
                system("clear");
                enter_grades();
                system("clear");
                break;
            case 'R': 
                system("clear");
                disp_grades(grade);
                break;
            

            case 'C': system("clear");
                    break;  
            
            case 'Q': exit(0);

            default : 
                        system("clear");
                        printf("Invalid input!");
    
        }
    } 
    
    
    return 0;
}

//Enter the students' grades
void enter_grades(void)
{
    int i, j;
    for(i = 0; i < CLASSES; i++)
    {
        printf("\nClass #%d::\n",i+1);
        for(j = 0; j < STUDENTS;j++)
        {
            grade[i][j] = get_grades(j);
        }
    }
}

//Read a grade.
int get_grades(int num)
{
    int n;
    
    a:
    printf("Enter the grade for the student #%d ::\n",num+1);
    scanf("%d",&n);
    if(n < 10 && n >= 0)
        {
           
            return n;
        }
    else 
    {   printf("Grade must be in range 0 to 10 with both bounds included!\n");
        goto a;
    }    
}

//Display grades.
void disp_grades(int g[][STUDENTS])
{
    int i,j;
    for(i = 0; i < CLASSES; i++)
    {
        printf("\n\nClass #%d::\n",i+1);
        for(j = 0; j < STUDENTS; j++)
        {
            printf("Student #%d is %d\n",j + 1,g[i][j]);
        }
    }
}