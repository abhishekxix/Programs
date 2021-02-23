#include <iostream>

using namespace std;

int *create_array(size_t size, int intit_value = 0);
void display(const int *const array, size_t size);

int main()
{
    size_t size {};
    int init_value {};
    

    cout << "How many elements do you want in the array? -> ";
    cin >> size;
    cout << "What should be the initial value of the array elements?(0 by default) -> ";
    cin >> init_value;
    
    int *my_array {create_array(size, init_value)};

    cout << "\nThe array created as per your choice is :: " << endl;
    display(my_array, size);

    delete [] my_array; 

    return 0;
}

int *create_array(size_t size, int init_value)
{
    int *storage {nullptr};
    storage  = new int[size];

    for(size_t i {}; i < size; i++)
        storage[i] = init_value;
    return storage;
}

void display(const int *const array, size_t size)
{
    for(size_t i {}; i < size; i++)
        cout << *(array + i) << " ";
    cout << endl;
}
