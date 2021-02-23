#include <iostream>
#include <vector>

int main() {
    const int n = 5;
    std::vector<int> array(n, 0);
    int i = 0;
    for(auto &num : array) {
       std::cin >> num;
    }

    for(i = 0; i < n; i++)
        if(i != 0) {
            array[i] = array[i] + array[i - 1];
        }
    for(auto &num : array) {
        std::cout << num << ' ';
    }

    return 0;
}