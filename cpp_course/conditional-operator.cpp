#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");

    int num {};

    cout << "Enter a number -> ";
    cin >> num;

    if(num % 2 == 0)
        cout << "Even";
    else 
        cout << "Odd";

    cout << endl << num << " is " << ((num % 2 == 0) ? "Even" : "Odd") << endl;

    int num1 {}, num2 {};

    cout << "Enter two integers separated by a space -> ";
    cin >> num1 >> num2;
    
    if(num1 != num2)
    {
        cout << ((num1 > num2) ? num1 : num2) << " is larger.";
    }

    else 
        cout << "The numbers are the same.";

    return 0;
}