#include <iostream>
#include "Mystring.h"


int main() 
{
    Mystring larry {"Larry"}, moe {"Moe"}, curly;

    std::cout << "Enter the third stooge's first name :: ";
    std::cin >> curly;

    std::cout << "The three stooges are :: " << larry << ", " << moe << " and " << curly << std::endl;

    std::cout << "Enter the three stooges' name separated by a space :: "; 
    std::cin >> larry >> moe >> curly;

    std::cout << "The three stooges are :: " << larry << ' ' << moe << " and " << curly << std::endl;

    return 0;
}