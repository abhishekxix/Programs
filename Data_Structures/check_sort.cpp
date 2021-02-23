#include <iostream>

bool check_sort(int *arr, int n) {
    if(n == 1) 
        return true;
    return (arr[n - 1] < arr[n - 2]) ? false : check_sort(arr, n - 1);
}

int main() {
    int arr[] {1, 2, 3, 4, 5, 6};
    if(check_sort(arr, 6))
        printf("The array is sorted\n");
    else 
        std::cout << "The array is unsorted\n";

    return 0;
}