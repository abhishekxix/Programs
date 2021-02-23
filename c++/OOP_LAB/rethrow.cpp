#include <iostream>

int main() {
    int a {}, b {};

    std::cout << "Enter the values of a and b separated by a space -> ";
    std::cin >> a >> b;
    try {

        try {
            if(b == 0)
                throw b;
            std::cout << a / b << std::endl;
        }
        catch(int &exception) {
           throw b;
        }
    }
    catch(int &exception) {
         std::cout << "Cannot divide by zero.\n";
    }

    std::cout << "The program did not terminate unexpectedly .\n";

    return 0;
}
