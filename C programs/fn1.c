#include<stdio.h>

void show(void);

int main(void)
{
	while(!kbhit())
	show();
	return 0;
}

void show(void)
{
	printf("Name :: Abhishek Singh.\nUID :: 19BCS4508\nClass :: CSE-IOT-1(A)\n\n");
}
