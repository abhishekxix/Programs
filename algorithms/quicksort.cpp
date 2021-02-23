#include <bits/stdc++.h>

int partition(std::vector<int> &a, int l, int r) {
    int x = a[l];
    int j = l;

    for(int i = l + 1; i <= r; i++) {
        if (a[i] <= x) {
            j++;
            std::swap(a[i], a[j]);
        }
    }
    std::swap(a[l], a[j]);
    return j;
}

void quicksort(std::vector<int> &a, int l, int r) {
    if (l >= r) {
        return;
    }

    int k = l + rand() % (r - l + 1); //select a pivot at random.
    /* 
    *If we remove the above line, the pivot will be taken as the first element.
    *This approach allows for minimal change in code to random.
    *  
    */

    std::swap(a[l], a[k]); //swap the first element of the partition with the random pivot.

    int m = partition(a, l, r);
    quicksort(a, l, m - 1);
    quicksort(a, m + 1, r);
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);

    for (size_t i = 0; i < a.size(); ++i) {
        std::cin >> a[i];
    }

    quicksort(a, 0, a.size() - 1);
    std::cout << "\nThe array after quicksort :\n";
    for (size_t i = 0; i < a.size(); ++i) {
        std::cout << a[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}