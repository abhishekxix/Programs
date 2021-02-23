#include <iostream>

struct fraction {
    int numerator;
    int denominator;

    fraction(int numerator = 0, int denominator = 0) 
        : numerator {numerator}, denominator {denominator} {}
};

fraction add_fractions(const fraction &first, const fraction &second) {
    return {((first.numerator * second.denominator) + (second.numerator * first.denominator)), (first.denominator * second.denominator)};
}

void display_fraction(fraction &frac) {
    std::cout << frac.numerator << " / " << frac.denominator << '\n';
}

int main() {
    
    fraction first {}, second {};

    std::cout << "Enter the numerator and denominator of the first fraction separated by a space -> ";
    std::cin >> first.numerator >> first.denominator;

    std::cout << "Enter the numerator and denominator of the second fraction separated by a space -> ";
    std::cin >> second.numerator >> second.denominator;

    fraction result {add_fractions(first, second)};

    std::cout << "The resultant fraction : ";
    display_fraction(result);
}