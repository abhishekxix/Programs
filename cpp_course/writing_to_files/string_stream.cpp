#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <limits>

int main()
{
    int num {};
    double total {};
    std::string name {};

    std::string info {"Moe 100 1234.5"};
    std::istringstream iss {info};

    iss >> name >> num >> total;
    std::cout << std::setw(10) << std::left << name
              << std::setw(5) << num
              << std::setw(10) << std::right << total << std::endl;
    std::cout << std::setw(25) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');

    std::ostringstream oss {};
    oss  << std::setw(10) << std::left << name
         << std::setw(5) << num
         << std::setw(10) << std::right << total << std::endl;
    
    std::cout << oss.str() << std::flush;

    std::cout << std::setw(25) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');

    std::cout << "Data validation." << std::endl;
    int value {};
    std::string input {};
    bool done {false};
    
    do
    {
        std::cout << "Enter an integer -> ";
        std::cin >> input;
        std::istringstream validator {input};
        if(validator >> value)
            done = true;
        else 
            std::cout << "Sorry that is not an integer!" << std::endl;
        
        //discards the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while(not done);

    std::cout << "You entered the integer " << value << std::endl;

    return 0;
}