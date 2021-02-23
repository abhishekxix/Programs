#include <iostream>

using namespace std;

int main()
{
    int num1 {10}, num2 {20};
    
    num1 = num2;

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    num1 = num2 = 1000;//There could be a mathematical expression instead of 1000 but that is not a good practice.Therefore, the assignment operator can be chained.

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    return 0;
}