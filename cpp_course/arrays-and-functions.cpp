#include <iostream>

using namespace std;

void print_array(const int arr[], size_t size);//to avoid the accidental modification, the array is made const.
void set_array(int arr[], size_t size, int value); //sets the entire array to the value

int main()
{
    int numbers[] {100, 98, 90, 86, 84};
    
    print_array(numbers, 5);
    set_array(numbers, 5, 100);
    print_array(numbers, 5);

    return 0;
}

void print_array(const int arr[], size_t size)
{
    cout << "The elements of the array are ::" << endl << "[ ";
    for(size_t i {}; i < size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

void set_array(int arr[], size_t size, int value)
{
    for(size_t i {}; i < size; i++)
        arr[i] = value;
}