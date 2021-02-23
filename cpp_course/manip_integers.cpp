#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    int num {255};

    //displaying using different bases
    std::cout << "\n-------------------------------------------------" << std::endl
              << std::dec << std::sqrt(num) << std::endl
              << std::hex << num << std::endl
              << std::oct << num << std::endl;

    //displaying showing the base prefix for hex and oct
    std::cout << "\n-------------------------------------------------" << std::endl
              << std::showbase
              << std::dec << num << std::endl
              << std::hex << num << std::endl
              << std::oct << num << std::endl;

    //displaying the hex value in uppercase
    std::cout << "\n-------------------------------------------------" << std::endl
              << std::showbase << std::uppercase
              << std::hex << num << std::endl;
    
    //displaying the positive sign before positive numbers.
    std::cout << "\n-------------------------------------------------" << std::endl
              << std::showpos /* only works on decimal numbers */<< std::showbase
              << std::dec << num << std::endl
              << std::hex << num << std::endl
              << std::oct << num << std::endl;
    
    //setting using the setf methods of cout 
    /* std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::showpos);
    std::cout.setf(std::ios::uppercase); */

    //resetting using the resetiosflags manipulator
    std::cout << std::resetiosflags(std::ios::basefield);   //resets back to decimal base
    std::cout << std::resetiosflags(std::ios::showbase);
    std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << std::resetiosflags(std::ios::uppercase);

    std::cout << "\n-------------------------------------------------" << std::endl
              << "Enter an integer -> ";
    std::cin >> num;
    std::cout << "Decimal default :: " << num << std::endl;

    std::cout << "Hexadecimal :: " << std::hex << num << std::endl;
    std::cout << "Hexadecimal :: " << std::uppercase << num << std::endl;
    std::cout << "Hexadecimal :: " << num << std::endl;
    std::cout << "Hexadecimal :: " << std::nouppercase << num << std::endl;

    std::cout << "Octal :: " << std::oct << num << std::endl;
    std::cout << "Hexadecimal :: " << std::hex << std::nouppercase << num << std::endl;
    std::cout << "Octal :: " << std::oct << std::nouppercase << num << std::endl;

    std::cout << std::endl << std::endl;    
    return 0;
}