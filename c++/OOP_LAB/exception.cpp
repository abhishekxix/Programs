// 3. Write a program with following
// a. A function to read two double type numbers from keyboard
// b. A function to calculate the division of two numbers
// c. A try block to throw an exception when a wrong type of data is keyed in
// d. A try block to detect and throw an exception if the condition “divided –by-zero” occurs
// e. Appropriate catch block to handle the exceptions thrown.
// Ans.
    #include <iostream>
    #include <string>
    #include <sstream>

    double add_double(double a = 0, double b = 0) {
        return a + b;
    }
    double division(double a, double b) {
        if(b == 0) 
            throw std::string {"Divide by zero exception"};
        return (a / b);
    }

    int main() {
        std::string input {};
        double a {}, b {};

        std::cout << "Enter two decimal numbers separated by a space -> ";
        std::getline(std::cin, input);
        std::istringstream input_validator {input};
        try {
            if(!(input_validator >> a >> b)) {
                throw std::string {"Wrong input exception"};
            }
            std::cout << add_double(a, b) << std::endl;
        }
        catch(std::string &e) {
            std::cout << e << std::endl;
        }
        try {
            std::cout << division(a, b) << std::endl;
        }
        catch(std::string &e) {
            std::cout << e << std::endl;
        }
        return 0;
    }
    
