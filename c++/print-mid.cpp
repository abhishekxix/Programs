#include<iostream>

using namespace std;

int main()
{
 for(int i = 0; i < 4; i++)
 {
     for(int j = 0; j < 8; j++)
     {
         if(j >= 2 && j <= 5)
         {
             cout<<"*";
         }
         else cout<<" ";
     }cout<<endl;
 }
 for(int i = 0; i < 4; i++)
 {
    for(int j = 0; j < 8; j++)
    {
        cout<<"*";
    }cout<<endl;
 }
return 0;
}