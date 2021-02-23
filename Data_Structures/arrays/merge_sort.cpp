#include <iostream>

void merge(int arr[], int lb, int mid, int ub) {
    int i {}, j {}, k {};
    int n1 {mid - lb + 1};
    int n2 {ub - mid};
    int l[n1], r[n2];
    for(i = 0; i < n1; i++) {
       l[i] = arr[i + lb];
    }

    for(j = 0; j < n2; j++) {
        r[j] = arr[mid + j + 1];
    }
    i = 0;
    j = 0;
    k = lb;
    while(i < n1 && j < n2) {
        if(l[i] < r[j]) {
            arr[k] = l[i];
            i++;
            k++;
        }
        else {
            arr[k] = r[j];
            j++;
            k++;
        }
    }

    for(; i < n1; i++, k++) {
        arr[k] = l[i];
    }
    for(; j < n2; j++, k++) {
        arr[k] = r[j];
    }

}

void merge_sort(int arr[], int lb, int ub) {
    if(lb < ub) {
    
        int mid {(lb + ub) / 2};
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main() {
    int arr[5] {10, 9, 8, 7, 6};
    merge_sort(arr, 0, 5);
    for(int i {}; i < 5; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}