//WAP to perform various, matrix operations addition, substraction,multiplication transpose using switch case
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	int a[3][3], b[3][3], c[3][3], i, j, k;
	char ch;
	
	printf("The following program performs the various matrix operations.");

	a:
	printf("\nEnter the elements of first matrix [A] ::\n");

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEnter the elements of second matrix [B] ::\n");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	printf("\nThe matrix [A] is ::\n");

		for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
	
		printf("\nThe matrix [B] is ::\n");

				for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t",a[i][j]);
		}printf("\n");
	}
	
		do
	{
	printf("\nEnter ::\na for addition.\ns for subtraction.\nt for transpose.\nm for multiplication.\nq to quit.\nc to change the matrices\n");
	scanf(" %c",&ch);
	ch = toupper(ch);

	switch(ch)
	{
		case 'A' :
			system("clear");
			for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("\nThe sum of the two  entered matrices is ::\n");
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t",c[i][j]);
		}printf("\n");
	}

	break;
	
	case 'S' :
			system("clear");
				for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] - b[i][j];
		}
	}

			printf("\nThe subtraction of matrices [A] - [B] is ::\n");

				for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t",c[i][j]);
		}printf("\n");
	}

	break;
	
	case 'T' :
			system("clear");
		printf("\nThe transpose of [A] is ::\n");
						for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t",a[j][i]);
		}printf("\n");
	}

	printf("\nThe transpose of [B] is ::\n");

								for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t",b[j][i]);
		}printf("\n");
	}

	break;
	
	case 'M' :
			system("clear");
							for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{    c[i][j] = 0;
			for(k = 0;k < 3; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	printf("\nThe product of matrices AB is ::\n");

					for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d\t",c[i][j]);
		}printf("\n");
	}

	break;
	
	case 'C' :
	system("clear");
		goto a;

		case 'Q' :
				system("clear");
			printf("\nQuitting...");
			break;

		default :
		system("clear");
		 printf("\nInvalid input!");
	}
}while(ch != 'Q');
	
	return 0;
}