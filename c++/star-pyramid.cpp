#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the pattern :: ";
    cin>>n;
    for(int i = 1;i <= n; i++)
    {
        for(int j = 1; j < n+i; j++)
        {
            if(j <= n-i)
            cout<<" ";
            else cout<<"*";
        }cout<<endl;
    }

    for(int i = 1;i <= n; i++)
    {
        for(int j = 1; j < n+i; j++)
        {
            if(j <= n-i)
            cout<<" ";
            else cout<<i;
        }cout<<endl;
    }
     for(int i = 1;i <= n; i++)
    {
        for(int j = 1; j < n+i; j++)
        {
            if(j <= n-i)
            cout<<" ";
            else cout<<(2*i)-1;
        }cout<<endl;
    }
   
    char c ='A';
     for(int i = 1;i <= n; i++)
    {
        for(int j = 1; j < n+i; j++)
        {
            if(j <= n-i)
            cout<<" ";
            else cout<<c;
        }cout<<endl;
        c++;
    }

    c = 'A';
     for(int i = 1;i <= n; i++)
    {
        for(int j = 1; j < n+i; j++)
        {
            if(j <= n-i)
            cout<<" ";
            else cout<<c;
        }cout<<endl;
        c = c + 2;
    }
    return 0;
} 