#include <iostream>
#include <cmath>
#include <vector>

std::vector<unsigned long long int> values(28);

int binarySearch(unsigned long long int key) {
    int mid = 0;
    int l = 0;
    int h = values.size() - 1;

    while(l < h) {
        mid = l + (h - l) / 2;

        if(values[mid] == key) {
            return mid;
        }
        if(values[mid] > key) {
            h = mid - 1;
        }
        else 
            l = mid + 1;
    }

    return -1;
}

unsigned long long int xValue(long int n) {
    unsigned long long quotient {};
    long long int x = 0;
    for(x =  n / 2; x >= 1 ; x -= 3) {
        if(n % x == 0) {
            quotient = n / x;
            if(binarySearch(quotient) != -1) {
                return x;
            }
        }
    }
}

int main() {
    values[0] = 1;
    for(int i = 1; i < 28; i++) {
        values[i] = values[i - 1] + pow(2, i);
    }
   
    int t {};
    std::cin >> t;
    long long int n {};
    
    for(int i = 0; i < t; i++) {
        std::cin >> n;
        std::cout << xValue(n) << '\n';
    }

    return 0;
}