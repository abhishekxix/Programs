#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, i;
    //do
    //{
        cout<<"\n\nEnter a number to check if it is prime or not :: ";
        cin>>n;

        for( i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0 )
            {
                cout<<"\nNot prime!";
                exit(0);
            }
            
        }
       
            cout<<"\nPrime!";
          

}
