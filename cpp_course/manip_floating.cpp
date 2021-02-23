#include <iostream>
#include <iomanip>

int main() {
    double num1 {123456789.987654321}, num2 {1234.5678}, num3 {1234.0};

    //using default settings
    std::cout << "\n----------------------default----------------------" << std::endl   
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;
    
    //we can't display in precision(2). Therefore, scientific notation is used.
    std::cout << "\n----------------precision 3------------------------" << std::endl   
              << std::setprecision(2)
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;
    
    //using precision 5
    std::cout << "\n------------------precision 5----------------------" << std::endl   
              << std::setprecision(5)
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;
    
    //using precision 3 and fixed
    std::cout << "\n---------------precision 3 fixed-------------------" << std::endl   
              << std::fixed <<std::setprecision(3)
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;
    //precision 3 scientific
    std::cout << "\n-------------precision 3 scientific----------------" << std::endl   
              << std::setprecision(3) << std::scientific
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;

    //uppercase E in scientific
    std::cout << "\n-------------precision 3 scientific----------------" << std::endl   
              << std::setprecision(3) << std::scientific << std::uppercase
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;
    
    //show positive
    std::cout << "\n------precision 3 scientific show positive---------" << std::endl   
              << std::setprecision(3) << std::scientific << std::showpos << std::nouppercase
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;
    //back to defaults
    std::cout.unsetf(std::ios::scientific | std::ios::fixed | std::ios::showpos | std::ios::showpoint);
    std::cout.precision(6);
    // std::cout << std::resetiosflags(std::ios::showpos);
    std::cout << "\n----------------------default----------------------" << std::endl   
              << num1 << std::endl
              << num2 << std::endl
              << num3 << std::endl;
    return 0;
}