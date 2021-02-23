#include <bits/stdc++.h>

int gcd_rec(int a, int b) {
    if (a == 0) {
        return b;
    }
    else if (b == 0) {
        return a;
    }

    return gcd_rec(b, a % b);
    // return gcd_rec(b % a, a);e
}

int gcd_it(int a, int b) {
    while (true) {
        if (a == 0) {
            return b;
        }
        else if (b == 0) {
            return a;
        }
        else {
            int temp{};
            temp = a;
            a = b;
            b = temp % b;
        }
    }
}

int main() {
    int a{};
    int b{};

    std::cout << "Enter a and b -> ";
    std::cin >> a >> b;

    std::cout << gcd_rec(a, b) << '\n';

    return 0;
}
