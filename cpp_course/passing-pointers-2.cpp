#include <iostream>

using namespace std;

void swap(int *a, int *b);

int main()
{
    int a {10}, b {20}; //list initialiser warns about overflow of the value in a variable

    cout << "a is " << a << " and b is " << b << endl;

    swap(&a, &b);
    cout << "a is " << a << " and b is " << b << endl;
    
    return 0;    
}

void swap(int *a, int *b)
{
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}
