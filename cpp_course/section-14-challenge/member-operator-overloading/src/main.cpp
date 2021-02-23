#include <iostream>
#include "Mystring.h"

int main() 
{
    Mystring s1, s2;

    std::cout << "Enter the values for s1 :: ";
    std::cin >> s1;
    std::cout << "Enter the values for s2 :: ";
    std::cin >> s2;

    s1 += s2;

    std::cout << "s1+=s2 :: " << s1 << std::endl;

    s1 *= 3;

    std::cout << "s1 *= 3 :: " << s1 << std::endl;
    std::cout << "++s1 :: " << ++s1 << std::endl;
    std::cout << "s1++ :: " << s1++ << std::endl;


    return 0;
}