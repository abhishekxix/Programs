#include <iostream>
#include <iomanip>
#include <string>

void ruler() {
    std::cout << "\n12345678901234567890123456789012345678901234567890" << std::endl;
}

int main() {
    int num1{1234};
    double num2 {1234.5678};
    std::string hello {"hello"};

    //defaults
    std::cout << "\n----------Defaults----------" << std::endl;
    ruler();
    std::cout << num1 << num2 << hello << std::endl;

    //defaults - one per line
    std::cout << "\n----------Defaults - one per line----------" << std::endl;
    
    ruler();
    std::cout << num1 << std::endl
              << num2 << std::endl
              << hello << std::endl;

    //set field width to 10
    //default justification is right for num1 only!
    std::cout << "\n----------width 10 for num1----------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1
              << num2
              << hello << std::endl;
    
    
    std::cout << "\n----------width 10 for num1 and num2----------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1 
              << std::setw(10) << num2
              << hello
              << std::endl;
    
    //width 10 for all three outputs
    //default justification is right for all
    std::cout << "\n----------width 10 for all three outputs----------" << std::endl;
    ruler();
    std::cout << std::setw(10) << num1 
              << std::setw(10) << num2
              << std::setw(10) << hello
              << std::endl;
    
    //width 10 for all outputs and justify all left
    std::cout << "\n----------width 10 for all three outputs----------" << std::endl;
    ruler();
    std::cout << std::setw(10) << std::left << num1 
              << std::setw(10) << std::left << num2
              << std::setw(10) << std::left << hello
              << std::endl;

    //setfill to a dash
    //this is persistent
    std::cout << "\n----------width 10 for all three outputs----------" << std::endl;
    ruler();
    std::cout << std::setw(10) << std::setfill('-') << num1 
              << std::setw(10) << num2
              << std::setw(10) << hello
              << std::endl;
    
    //set width to 10 and left justify all and vary the setfil character 
    std::cout << "\n----------width 10 and left justify for all three outputs but vary the setfill character----------" << std::endl;
    ruler();
    std::cout << std::setw(10) << std::left << num1 
              << std::setw(10) << std::setfill('$') << std::left << num2
              << std::setw(10) << std::setfill('#') << std::left << hello
              << std::endl;
    
    return 0;
}