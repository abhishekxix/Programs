#include<iostream>
using namespace std;

int main()
{
    int n, rev=0;
    cout<<"Enter a number to find the reverse of it :: ";
    cin>>n;
    while(n>0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
cout<<rev;
return 0;
}