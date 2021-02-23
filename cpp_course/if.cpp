#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");

    int num {};

    const int min {10}, max {100};

    cout << "Enter a number between " << min << " and " << max << " -> ";
    cin >> num;

    if(num > min)
    {
        cout << endl <<"===================if statement number 1===================";
        cout << endl << num << " is greater than " << min;

        int diff {num - min};
        cout << endl << num << " is " << diff << " greter than " << min;
    }

    if(num < max)
    {
        cout << endl <<"===================if statement number 2===================";
        cout << endl << num << " is less than " << max;

        int diff {max - num};
        cout << endl << num << " is " << diff << " less than " << max;
    }

    if(num >= min && num <= max)
    {
        cout << endl <<"===================if statement number 3===================";
        cout << endl << num << " is in range "
             << endl
             << "This means that statements 1 and 2 must also display.";
    }

    if(num ==  min || num == max)
    {
        cout << endl <<"===================if statement number 4==================="; 
        cout << num << " is right on the boundary";
    }

    return 0;
}