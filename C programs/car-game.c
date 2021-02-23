#include<stdio.h>
#include<string.h>

int main()
{
	int start = 0;
	char input[10];
	printf("Hi! This is a car game based on a C program.\nType 'help' to show the options that can be entered.");
	while(1)
	{   printf("\ninput>\t");
	    gets(input);
    	if(strcmp(input,"start")==0 || strcmp(input,"stop")==0 || strcmp(input,"help")==0 || strcmp(input,"quit")==0)
	   {  
		   if(strcmp(input,"help")==0)
			{
			printf("\nhelp - To show the options.\nstart - To start the car.");
			printf("\nstop - To stop the car.\nquit - To quit the game.");
	    	}
			if(strcmp(input,"start")==0)
		   	{
				if(start==0)
			    {
				printf("The car is started. Ready to go.......");
				start=1;
		     	}
				else printf("The car is already started");
	    	}	
			if( strcmp(input,"stop")==0 )
	    	{
				if(start==1)
	    		{
	    			printf("The car stopped successfully!");
	    			start = 0;
				}
				else printf("The car is already stopped");
			}
			if(strcmp(input,"quit")==0)
			{
				break;
			}
	  }
	else printf("Sorry! I don't understand that.");
    }
    return 0;
}