#include <iostream>

unsigned long int factorial_of_a_number(unsigned long int number) {
    unsigned long int factorial {1};
    for(; number > 1; number--) {
        factorial *= number;
    }
    return factorial;
}

int main() {
    unsigned long int number {};
    std::cout << "Enter a number to find it's factorial -> ";
    std::cin >> number;
    std::cout << "Thhe factorial of " << number << " = " << factorial_of_a_number(number);

    return 0;
}