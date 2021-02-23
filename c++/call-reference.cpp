#include<iostream>

using namespace std;

void change(int &n)
{
    n = n * n;
    cout<<"\nValue in change() function = "<<n<<endl;
}

int main()
{
    int n;
    cout<<"\nEnter a number to change it :: ";
    cin>>n;
    change(n);//call by reference
    cout<<"Value in main() = "<<n<<endl<<endl;
    return 0;
} 
