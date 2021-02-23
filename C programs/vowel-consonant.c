#include<stdio.h>

#include<ctype.h>
int main()
{
	char ch;
	printf("Enter a character :: ");
	scanf("%c",&ch);
	ch = toupper(ch);
	switch(ch)
	{
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' : printf("Vowel");
		          break;
		default : printf("Consonant");
	}
	
	return 0;
}
