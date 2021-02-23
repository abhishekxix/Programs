#include <bits/stdc++.h>

using ll = long long;

ll gcd(ll a, ll b, ll result = 1) {

    assert(a >= 0 && b >= 0 && (a + b) >= 0);
    if(a == 0 || b == 0) {
        return 0;
    }

    while(a > 0 && b > 0) {
        if(a == b) {
            return result * a;
        } else if(a % 2 == 0 && b % 2 == 0) {
            a /= 2;
            b /= 2;
            result *= 2;
        } else if(a % 2 == 0) {
            a /= 2;
        } else if(b % 2 == 0) { 
            b /= 2;
        } else if(a > b) {
            a -= b;
        } else if(b > a) {
            b -= a;
        }
    }

    return result;
}

int main() {
    ll a;
    ll b;

    std::cout << "\nKeep entering pairs of integers to display the result of gcd:\n"
              << "Enter anything other than numbers to quit.\n>> ";

    while(std::cin >> a >> b) {
        std::cout << gcd(a, b) << "\n>> ";
    }

    return 0;
}
