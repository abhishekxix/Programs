#include <iostream>

void print_array_elements(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << "\n";
}

void bubble_sort(int array[], int n) {
    int temp {};
    for(int i {}; i < n - 1; i++) {
        for(int j {i}; j < n - i - 1 ; j++) {
            if(array[j + 1] > array[j]) {
                    temp = array[j + 1];
                    array[j + 1] = array[j];
                    array[j] = temp;
            }
        }
    }
}

int main() {
    int array[] { 44, 11, 22, 19, 2};
    const int n  {5};

    std::cout << "Array before sorting ::\n";
    print_array_elements(array, n);
    bubble_sort(array, n);
    std::cout << "Array after sorting is ::\n";
    print_array_elements(array, n);

    return 0;
}
