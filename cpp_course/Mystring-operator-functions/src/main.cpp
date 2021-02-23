#include <iostream>
#include "Mystring.h"
#include <vector>
#include <iomanip>

int main() 
{
    Mystring larry {"Larry"}, moe {"Moe"};

    Mystring stooge {larry};
    larry.display();
    moe.display();

    std::cout << std::boolalpha << "larry == moe :: " << (larry == moe) << std::endl
              << "larry == stooge :: " << (larry == stooge) << std::endl;

    larry = -larry; 
    larry.display();
    
    Mystring stooges {larry + "Moe"};   //OK with member functions.
    stooges = "Moe" + larry;    //OK with global functions.
    Mystring two_stooges {moe + "Larry"};
    two_stooges.display();

    Mystring three_stooges {moe + " " + larry + " " + "Curly"};
    three_stooges.display();

    return 0;
}