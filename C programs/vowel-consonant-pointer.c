//Wap to check if the entered character is vowel or consonant

#include<stdio.h>
#include<ctype.h>

int main()
{
	char c, *p;
	p = &c;
	printf("Enter any number to exit.\n");
	while(1)
	{
		printf("Enter a character :: ");
		scanf(" %c",p);
		*p = toupper(*p);
		if(*p >= '0'  && *p <= '9')
		return 0;
		
		if(*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U')
		{
			printf("vowel!\n");
		}
		else printf("consonant!\n");
		
		printf("%c is stored at %p .\n\n",*p, p);
	}
	return 0;
}
