//WAP to delete all vowels from a string
#include<stdio.h>

int main()
{
	int i, k = 0;
	char s[30], r[30];
	printf("Enter a string ::\n");
	gets(s);
	
	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] =='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == ' ' && (s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u' && s[i+1] != ' '))
		{
			s[i] = s[i+1];
			s[i+1] = ' ';
			
		}
		
	}
	puts(s);
	return 0;
}
