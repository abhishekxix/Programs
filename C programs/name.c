
#include<stdio.h>//standard input output
int main()//from where the execution begins
{                     //main begins
char ch;//to store the character
char name[20];//to store 20 characters
printf("enter any character :");
scanf("%c",&ch);
printf("ENTER YOUR NAME:");
scanf("%s",name);

//print the output
printf("you entered :: \n");
printf("THE CHARACTER IS: %c ",ch);
printf("\n Name is: %s",name);
return 0;
}//end of main

