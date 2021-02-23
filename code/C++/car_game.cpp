#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int start = 0;
	char input[10];
	cout<<"Hi! This is a car game based on a C program.\nType 'help' to show the options that can be entered.";
	while(1)
	{  cout<<"\ninput>\t";
	    cin>>input;
    	if(strcmp(input,"start")==0 || strcmp(input,"stop")==0 || strcmp(input,"help")==0 || strcmp(input,"quit")==0)
	   {  
		   if(strcmp(input,"help")==0)
			{
			cout<<"\nhelp - To show the options.\nstart - To start the car.\nstop - To stop the car.\nquit - To quit the game.";
		
	    	}
			if(strcmp(input,"start")==0)
		   	{
				if(start==0)
			    {
			      cout<<"The car is started. Ready to go.......";
				start=1;
		     	}
				else cout<<"The car is already started!";
	    	}	
			if( strcmp(input,"stop")==0 )
	    	{
				if(start==1)
	    		{
	    			cout<<"The car stopped successfully!";
	    			start = 0;
				}
				else cout<<"The car is already stopped!";
			}
			if(strcmp(input,"quit")==0)
			{
				break;
			}
	  }
	else cout<<"Sorry! I don't understand that.";
    }
    return 0;
}