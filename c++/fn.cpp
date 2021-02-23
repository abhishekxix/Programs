#include<iostream>

using namespace std;

int power(int n, int p = 2)
{
    int s = 1;
    for(int i = 0; i < p; i++)
    {
        s *= n;
    }
    return s;
}

int main()
{
    int n;
    cout<<"Enter a number to find its square :: ";
    cin>>n;
   cout<<"The square of "<<n<<" = "<< power(n);
}