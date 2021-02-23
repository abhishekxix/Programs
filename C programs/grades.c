#include<stdio.h>


int main()
{
	int p,c,m,e,cs,total,grade;
	printf("Enter the marks in all the subjects :: \n");
	scanf("%d%d%d%d%d",&p,&c,&m,&e,&cs);
	total = p+c+m+e+cs;
	grade = total/50;
	switch(grade)
	{
		case 10 :
		case 9 : printf("Grade A");
		      	break;
		case 8 : printf("Grade B");
				break;
		case 7 : printf("Grade C");
		        break;
	    case 6:
		case 5: printf("Grade D");
		        break;
		case 4: printf("Grade E");
		        break;
		case 3:
		case 2:
		case 1:printf("Grade F");
		       break;
		default : printf("Invalid input");
				
	}
	
	return 0;
}
