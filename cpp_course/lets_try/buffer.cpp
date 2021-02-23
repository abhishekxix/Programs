#include <iostream>


int main()
{
    int j {};
    for(int i {}; i < 5; i++)
        std::cin >> j;
    for(int i {}; i < 5; i++)
        std::cout << i << " " << std::flush;
    
    return 0;
}