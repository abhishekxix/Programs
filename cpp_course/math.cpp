#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float num {};
    
    cout << "Enter a number (floating point number) -> ";
    cin >> num;

    cout << "The square root of " << num << " = " << sqrt(num) << endl
         << "The cube root of " << num << " = " << cbrt(num) << endl
         << "The sine of " << num << " = " << sin(num) << endl
         << "The cosine of " << num << " = " << cos(num) << endl
         << "The ceiling of " << num << " = " << ceil(num) << endl
         << "The floor of " << num << " = " << floor(num) << endl
         << "The round of " << num << " = " << round(num) << endl;
    
    float power {};
    cout << "Enter the power you want " << num << " to raise to -> ";
    cin >> power;

    cout << num << " raised to the power " << power << " = " << pow(num, power) << endl;
    
    return 0;
}