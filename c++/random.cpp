#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	
	int n ;
	
	n = 1 + (rand() % 10);
	
	for(int i = 0; i < n; i++)
	cout<<i<<"\t";
	
	return 0;
}
