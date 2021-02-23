#include <iostream>

int add(int &a, int &b);
int subtract(int &a, int &b);
int multiply(int &a, int &b);
int divide(int &a, int &b);

enum Choice {
    ADD = 1, SUBTRACT, MULTIPLY, DIVIDE, QUIT
};

int main() {
    int a {}, b {};
    int input {}, sum {}, difference {}, product {}, quotient {};

    do {
        std::cout << "Enter the values of a and b -> ";
        std::cin >> a >> b;

        std::cout << "\nEnter \n"
                  << "1. ADDITION\n"
                  << "2. SUBTRACTION\n"
                  << "3. MULTIPLY\n"
                  << "4. DIVIDE\n"
                  << "5. QUIT\n" << std::endl
                  <<"Enter your choice -> ";
        std::cin >> input;
        
        switch(input) {
            case ADD :
                    sum = add(a, b);
                    std::cout << a << " + " << b << " = " << sum << std::endl;
                    break;
            case SUBTRACT :
                    difference = subtract(a, b);
                    std::cout << a << " - " << b << " = " << difference << std::endl;
                    break;
            case MULTIPLY :
                    product = multiply(a, b);
                    std::cout << a << " * " << b << " = " << product << std::endl;
                    break;
            case DIVIDE :
                    quotient  = divide(a, b);
                    std::cout << a << " / " << b << " = " << quotient << std::endl;
                    break;
            case QUIT :
                    std::cout << "Quitting...." << std::endl;
                    break;
            default : 
                    std::cout << "Invalid choice!" << std::endl;
        }
    } while(input != QUIT);
    return 0;
}

int add(int &a, int &b) {
    return a + b;
}

int subtract(int &a, int &b) {
    return a - b;
}

int multiply(int &a,  int &b) {
    return a * b;
}

int divide(int &a, int &b) {
    return a / b;
}