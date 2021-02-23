//This program prints all the non fibonacci numbers that come before given number of fibonacci numbers.
#include <iostream>

int main()
{
    int x {}, y {1}, sum {}, n {};

    std::cout << "Enter the number of values to print non fibonacci series -> ";
    std::cin >> n;
    int j {};
    
    for(int i {}; i < n - 2; i++)
    {
        sum = x + y;
        x = y;
        y = sum;
        for(j = x + 1; j < y; j++)
        {
            std::cout << j << " ";
        }
    }
    return 0;
}