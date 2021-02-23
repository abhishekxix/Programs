#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int x;
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        x = 1 +(rand() % 100);//stores values [1,100]. of[0,99] if we don't add the 1 in the result

        if(x > 70) //prints numbers between from 71 to 99.
        cout<<x<<endl;
    }
    return 0;
}