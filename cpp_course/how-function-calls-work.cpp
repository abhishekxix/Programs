#include <iostream>

using namespace std;

int function_1(int a, int b);
void function_2(int &x, int y, int z);

int main()
{
    int x {10}, y {20}, z {};
    z = function_1(x, y);
    cout << z << endl;
    return 0;
}


int function_1(int a, int b)
{
    int result {};
    result = a + b;
    function_2(result, a, b);
    
    return result;
}

void function_2(int &x, int y, int z)
{
    x += y + z;
}