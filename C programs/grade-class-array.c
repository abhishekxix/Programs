#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define CLASSES 3
#define GRADES 30

int grade[CLASSES][GRADES];

void enter_grades(void);
int get_grades(int num);
void disp_grades(int g[][GRADES]);

int main(void)
{
    char ch, str[80];
    for(;;)
    {
        do
        {
            printf("(E)nter grades.\n(R)eport grades.\n(Q)uit.\n");
            gets(str);
            ch = toupper(*str);
        } while (ch != 'E' && ch != 'R' && ch != 'Q');
        switch (ch)
        {
        case 'E':
            enter_grades();
            break;
        case 'R':
            disp_grades(grade);
            break;
        case 'Q': exit(0);
        
        }
        
    }
    return 0;
}
//Enter the student's grades
void enter_grades(void)
{
    int i, j;
    for(i = 0; i < CLASSES; i++)
    {
        printf("Class # %d:\n",i+1);
        for(j = 0; j < GRADES;j++)
        {
            grade[i][j] = get_grades(i);
        }
    }
}
//Read a grade
int get_grades(int num)
{
    char s[80];
    printf("Enter the grade for the student # %d ::\n",num+1);
    gets(s);
    return (atoi(s));
}
//Display grades
void disp_grades(int g[][GRADES])
{
    int i,j;
    for(i = 0; i < CLASSES; i++)
    {
        printf("Class # %d::\n",i+1);
        for(j = 0; j < GRADES; j++)
        {
            printf("Student #%d is %d\n",j + 1,g[i][j]);
        }
    }
}