#include <iostream>

void insertion_sort(int arr[], int n) {
    int key {}, j {};

    for(int i = 1; i < n; i++) {
        j = i - 1;
        key = arr[i];

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int arr[5] {10, 9, 8, 7, 6};
    insertion_sort(arr, 5);
    for(int i {}; i < 5; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}