#include <iostream>
#include <vector>

int main() {
    int t {};
    std::cin >> t;
    int n {};

    for(int i = 0; i < t; i++) {
        std::cin >> n;
        if((n / 2) % 2 != 0) {
            std::cout << "NO" << '\n';
            continue;
        }
        std::vector<int> array (n, 2);
        long sum = 2;
        long sum2 = 1;
        for(int i = 1; i < n / 2; i++) {
            array[i] = array[i - 1] + 2;
            sum += array[i];
        }

        array[n / 2] = 1;

        for(int i = (n / 2) + 1; i < n - 1; i++) {
            array[i] = array[i - 1] + 2;
            sum2 += array[i];
        }
        array[n - 1] = sum - sum2;
        std::cout << "YES\n";
        for(auto i : array) {
            std::cout << i << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}