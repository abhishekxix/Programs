#include <iostream>

using namespace std;

void print(const int *const array, size_t size);
int *apply_all(const int *const array1, const size_t size1, const int *const array2, const size_t size2);

int main()
{
    const size_t array1_size {5}, array2_size {3};
    int array_1[] {1, 2, 3, 4, 5}, array_2[] {10, 20, 30};

    cout << "Array 1 :: ";
    print(array_1, array1_size);

    cout <<"Array 2 :: ";
    print(array_2, array2_size);
    int *result {apply_all(array_1, array1_size, array_2, array2_size)};
    constexpr size_t result_size {array1_size * array2_size};
    
    cout << "Result :: ";
    print(result, result_size);
    delete [] result;

    return 0;
}

void print(const int *const array, size_t size)
{
    for(size_t i{}; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int *apply_all(const int *const array1, const size_t size1, const int *const array2, const size_t size2)
{
    size_t size3 {size1 * size2}, k {};
    int *result  = new int[size3];

    for(size_t i {}; i < size2; i++)
        for(size_t j {}; j < size1; j++, k++)
            result[k] = array2[i] * array1[j];
    
    return result;
}