#include <iostream>
#include <string>

int main()
{
    std::string input {};
    std::cout << "Enter the string to make a pyramid -> ";
    getline(std::cin, input);    

    size_t size {input.length()};
    int k {};

    for(size_t i {}; i < size; i++)
    {
        k = 0;

        for(size_t j {}; j < size + i; j++)
        {
            if(j < size - i - 1)
                std::cout << " ";
            if(j >= size - i - 1)
            {
                if(j < size)
                {
                    std::cout << input.at(k);
                    k++;
                }
                if(j >= size)
                {
                    if(k > i)
                        k--;
                    k--;
                    std::cout << input.at(k);
                }
            }
        }
        std::cout << std::endl;
    }
    return 0;
}