//Pallindrome
#include<stdio.h>


int main()
{
	char s[30], rev[30];
	int i, j, l = 0, flag =0;
	

	printf("Enter a string ::\n");
	gets(s);
	
	for(i = 0; s[i] != 0; i++ )
	l++;

	for(i = l - 1 , j = 0 ; i >=0; i--, j++)
	{
		rev[j] = s[i];
	}
	for(i = 0;s[i] != '\0' || rev[i] != '\0'; i++)
	{
		if(s[i] - rev[i] != 0)
		{
			flag = 1;
			break;
		}
			
	}
	
	if(flag == 0)
	{
		printf("\npallindrome.");
	}
	
	else printf("\n not pallindrome.");
	
	
	return 0;
}
