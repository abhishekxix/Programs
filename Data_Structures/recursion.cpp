#include <iostream>

void print(int n) {
    if(n == 0) 
        return;
    else {
        std::cout << n << ' ' << std::flush;
        print(n - 1);
    }
}

int main() {
    print(5);
    return 0;
}