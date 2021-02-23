//This program prints all the non fibonacci numbers less than a number entered by the user.
#include <iostream>

int main()
{
    size_t x {}, y {1}, sum {}, limit {};

    std::cout << "Enter the limit of values to print non fibonacci series -> ";
    std::cin >> limit;
    size_t j {};
    
    for(;;)
    {
        sum = x + y;
        x = y;
        y = sum;
        if(sum < limit)
            for(j = x + 1; j < sum; j++)
            {
                std::cout << j << " ";
            }
        else if(limit < sum && limit > x)
        {
            for(j = j + 1; j < limit; j++)
            {
                std::cout << j << " ";
            }
        }
        else 
            break;
    }
    
    return 0;
}