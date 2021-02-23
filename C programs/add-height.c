//WAP to add two heights using structures(must be in feet and inches)

#include<stdio.h>

typedef struct height
{
	int f, i;
}  height;

int main(void)
{
	int k;
	height h[3];
	
	for(k = 0; k < 2; k++)
	{
		printf("Enter height %d\nFeet ::  ",k + 1);
		scanf("%d",&h[k].f);
		printf("inches :: ");
		scanf("%d",&h[k].i);
		printf("\n");
	}
	
	h[2].f = h[0].f + h[1].f;
	h[2].i = h[0].i + h[1].i;
	
	if(h[2].i > 12)
	{
		h[2].f++;
		h[2].i -= 12;
	}
	
	
	printf("The sum  of the two heights is :: %d'%d\"",h[2].f,h[2].i);
	
	h[2].f = h[0].f - h[1].f;
	h[2].i = h[0].i - h[1].i;
	
	if(h[2].i < 0 && h[2].f >= 0)
	{
		h[2].f--;
		h[2].i = -h[2].i;
		h[2].i = 12 - h[2].i;
	}
	if(h[2].f < 0)
	{
		h[2].f = -h[2].f;
		h[2].f--;
		h[2].i = 12 - h[2].i;
	}
	
	
	printf("\nThe difference  of the two heights is :: %d'%d\"",h[2].f,h[2].i);
	
	return 0;
	
}
