//WAP to perform string operations without using library functions.
#include<stdio.h>

int main()
{
	int l = 0, i, j, flag = 0;
	char s1[30], s2[30] ,t;

	printf("Enter the string ::\n");
	gets(s1);

	printf("Enter second string::\n");
	gets(s2);

	for(l = 0;s1[l] != '\0'; l++);
	
	printf("The length of the string is %d\n\n",l);
	
	for(i = 0;i < l/2; i++)
	{
	   t = s1[i];
	   s1[i] = s1[l-i-1];
	   s1[l-i-1] = t;
	}
	
	printf("The string after reversal is ::\n");
	puts(s1);
	
	for(i = 0;s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if(s1[i] - s2[i] != 0)
		{
			flag = 1;
			break;
		}
			
	}
	
	if(flag == 0)
	{
		printf("\nThe strings are same.");
	}
	
	else printf("\nThe strings are different.");
	
	for(i = 0;s1[i] != '\0' || s2[i] != '\0'; i++)
		{
			s1[i] = s2[i];
		}
	
	printf("\n\nAfter copying ::\ns1::\n");
	puts(s1);
		
	s1[l+1] = ' ';
	for(i = 0,j = l + 2;j < 30 || s2[i] != '\0'; i++, j++)
		{
			
			s1[j] = s2[i];
		}
		s1[j] = '\0';
	
	printf("\nThe strings after concatenation are ::\n");
	puts(s1);
	return 0;
}
