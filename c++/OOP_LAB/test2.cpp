#include <iostream>

void cube(int a) {
    int cube {1};
    for(int i {}; i < 3; i++) {
        cube *= a;
    }
    std::cout << a << "^3 = " << cube << std::endl;
}

void cube(double a) {
    double cube {1.0};
    for(int i {}; i < 3; i++) {
        cube *= a;
    }
    std::cout << a << "^3 = " << cube << std::endl;
}

int main() {
    int number {};

    std::cout << "Enter an integer -> ";
    std::cin >> number;
    cube(number);

    double number2 {};
    std::cout << "Enter a decimal number -> ";
    std::cin >> number2;
    cube(number2);

    return 0;
}