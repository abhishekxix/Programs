#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");

    int num1 {}, num2 {}, num3 {};
    float average {0.0};

    cout << "Welcome to average of three integers."
         << endl
         << "Enter three integers separated by a space -> ";
    
    cin >> num1 >> num2 >> num3;

    int total =  (num1 + num2 + num3);
    const int count = 3;

    average = total / count;
    cout << endl << "Average = " << average;

    average = static_cast<float> ( total ) / count ;
    // average = (float) total / count;  //it is the old C style type casting. It is not preferable because it is not restrictive.
    cout << endl << "Average = " << average;
    
    return 0;    
}