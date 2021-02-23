#include<iostream>
using namespace std;

int main()
{
    int n, sum=0;
    cout<<"Enter a number to print the sum of its digits :: ";
    cin>>n;
    while(n>0)
    {
        sum += n%10;
        n /= 10;
    }
cout<<"Sum of the digits of the entered number is :: "<<sum;
return 0;
}