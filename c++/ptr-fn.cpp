#include<iostream>

using namespace std;

int *modify(int* p, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(p + i) = i;
    }
    return p;
}

int main()
{
    int n;
    
    cout << "Enter the size of the array :: ";
    cin >> n;
    
    int a[n], *p;
   p =  modify(a, n);

   for(int i = 0; i < n; i++)
   cout << *(p + i) << " ";

    return 0;
}