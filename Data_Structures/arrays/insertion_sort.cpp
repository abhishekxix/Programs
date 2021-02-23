#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void print_array_elements(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}


int main() {
    int array[]  { 56, 72, 807, 34, 22 };
    const int n {5};
    std::cout << "Before sorting ::\n";
    print_array_elements(array, n);
    insertion_sort(array, n);
    std::cout << "\nArray after sorting ::\n";
    print_array_elements(array, n);

    return 0;
}

