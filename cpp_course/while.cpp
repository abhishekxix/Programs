#include <iostream>

using namespace std;

int main()
{
    int num {};

    cout << "Enter a positive integer - start the countdown -> ";
    cin >> num;

    while (num > 0)
    {
        cout << num << endl;
        num--;
    }
    cout << "Blastoff!" << endl;

    return 0;
}