// C program to show the working of switch case using a  menu driven program
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int choice,n;
	float root;
	system("clear");
	do
	{
	  printf("\n\nThe following program is a menu driven program which performs the following::\n1 for even/odd check.\n2 for positive/negative check.\n3 for square of number.\n4 for square root of a number.\n5 to clear the screen.\n6 to quit the program.\n\nEnter your choice ::");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	  	case 1 : 
		  	printf("\nEnter the number :: ");
		  	scanf("%d",&n);
		  	if(n%2==0)
		  	{
		  		printf("The entered number is even.");
			  }
			else printf("The entered number is odd");
			break;
		
		case 2 :
			printf("Enter the number :: ");
		  	scanf("%d",&n);
			if(n>0)
			{
				printf("The entered number is positive.");
			}
			else if(n<0)
			{
				printf("The enterd number is negative.");
			}
			else printf("The number is 0");
			break;
			
		case 3 :
		    printf("Enter the number :: ");
		  	scanf("%d",&n);
		  	n = pow(n,2);
		  	printf("The square of the entered number is %d .",n);
		  	break;
		
		case 4 :
			printf("Enter the number :: ");
		  	scanf("%d",&n);
		  	root = sqrt(n);
		  	printf("The square root of the entered number is %.2f .",root);
		  	break;
		
		case 5 : system("clear");
		           break;
		
		case 6 : printf("Quitting....");
				 system("clear");
		         break;
		           
		default : printf("Invalid input");
	  }
	  	
	}while(choice!=6);
	return 0;
}