#include<stdio.h>
#include<string.h>

int main(void)
{
	char string[100];
	int i, v = 0, c = 0, sp = 0, ss = 0;
	
	printf("Enter a string ::\n");
	gets(string);
	strupr(string);
	
	for(i = 0; string[i] != '\0'; i++)
	{
		if(string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||  string[i] == 'O' || string[i] == 'U')
		{
			v++;
		}
		
		else if((string[i] > 'A' && string[i] < 'Z') &&(string[i] != 'A' && string[i] != 'E' && string[i] != 'I' &&  string[i] != 'O' && string[i] != 'U') )
		{
			c++;
		}
		
		else if(string[i] == ' ')
		{
			sp++;
		}
		
		else ss++;
	}
	printf("\nVowels = %d\nConsonants = %d\nSpaces = %d\nSpecial symbols = %d", v, c, sp, ss);
	return 0;
}
