/*C prorgam to take input from the user and print it on the screen*/
#include<stdio.h>

#include<string.h>
int main()
{
	char name[10], section[10], group, uid[9];
	printf("Enter yout name :: ");
	gets(name);
	printf("Enter your UID :: ");
	gets(uid);
	printf("Enter your Section :: ");
	gets(section);
	printf("Enter your group :: ");
	group = getchar();
	printf("\nHi! %s , your UID is %s and you study in section %s-%c",name,uid,section,group);
	return 0;
	
}
