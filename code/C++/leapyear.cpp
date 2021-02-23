#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year to check if it is a leap year or not :: ";
    cin>>year;
    if(year % 400 == 0)
    {
        cout<<"It is a leap year";
    }
    else if(year % 4 == 0)
    {
        cout<<"It is a leap year";
    }
    else if(year % 100 == 0)
    {
        cout<<"Not a leap year";
    }
    else
    {
       cout<<"Not a leap year";
    }
    
    return 0;
}