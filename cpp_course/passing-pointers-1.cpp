#include <iostream>

using namespace std;

void double_data(int *data);

int main()
{
    int value {10};

    cout << "value is :: " << value << endl;

    double_data(&value);
    cout << "value after calling double_data() :: " << value << endl;

    return 0; 
}

void double_data(int *data)
{
    *data *= 2;
}