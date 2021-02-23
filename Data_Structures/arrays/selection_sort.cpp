#include <iostream>

void print_array_elements(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

void selection_sort(int array[], int n) {
    int min_index {}, temp {};
    int i , j;
    for(i = 0; i < n - 1; i++) {
            min_index = i;
        for(j = i + 1; j < n; j++) {
            if(array[j] < array[min_index]) {
                min_index = j;
            }
        }
        temp = array[min_index];
        array[min_index] = array[i];
        array[i] = temp;
    }
}

int main() {
    int array[] { 44, 11, 22, 19, 2};
    const int n  {5};

    std::cout << "Array before sorting ::\n";
    print_array_elements(array, n);
    selection_sort(array, n);
    std::cout << "Array after sorting is ::\n";
    print_array_elements(array, n);

    return 0;
}
