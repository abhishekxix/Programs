#include <iostream>

using namespace std;

int main()
{
    int *int_ptr {nullptr};

    int_ptr = new int;
    
    cout << "int_ptr = " << int_ptr << endl
         << "*int_ptr = " << *int_ptr << endl;
    delete int_ptr;

    double *double_ptr {nullptr};
    size_t size;
    cout << "\nHow many doubles do you want? -> ";
    cin >> size;
    
    double_ptr = new double[size];
    cout << "The base address of the allocated array is :: " << double_ptr << endl;
    for (size_t i = 0; i < size; i++)       
    {
        cout << *(double_ptr + i);
    }
    cout << endl;
    cout << sizeof double_ptr << endl;

    delete [] double_ptr;
    

    return 0;
}