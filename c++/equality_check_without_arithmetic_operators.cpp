#include <iostream>

int main() {
    int a {}, b {};

    std::cout << "Enter the two numbers -> ";
    std::cin >> a >> b;

    if(a ^ b) 
        std::cout << "The numbers are different.\n";
    else    
        std::cout << "The numbers are same.\n";
    
    return 0;
}