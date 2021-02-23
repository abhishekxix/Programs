#include <iostream>
#include "patterns.h"
#include <string>


void triangle(size_t size)
{
    for(size_t i = 1; i <= size; i++)
    {
        for(size_t j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
     
    }
}

void triangle2(size_t size)
{
    std::cout <<std::endl;
    int count=1;
    for(size_t i = 1;i <= size; i++)
        {
            for(size_t j = 1; j <= i; j++)
            {   
                std::cout << count;
                count++;
            }
            std::cout << std::endl;
            
        } 
}

void char_box()
{   
    std::cout << std::endl;
    for(size_t i = 0; i < 6; i++)
    {
        for(char j = 'A'; j <= 'F'; j++)
        {
            std::cout << j;
        }std::cout << std::endl;
    }
}

void char_box2()
{   
    std::cout << std::endl;
    for(char i = 'A'; i <= 'F'; i++)
    {
        for(size_t j  = 0; j < 6; j++)
        {
            std::cout << i;
        }std::cout << std::endl;
    }
}

void num_box(size_t size)
{   
    std::cout << std::endl;
    for(size_t i = size; i > 0; i--)
    {
        for(size_t j  = 1; j <= size; j++)
        {
            std::cout << i;
        }std::cout << std::endl;
    }
}

void num_box2(size_t size)
{   
    std::cout << std::endl;
    for(size_t i = size; i > 0; i--)
    {
        for(size_t j  = size; j > 0; j--)
        {
            std::cout << j;
        }std::cout << std::endl;
    }
}

void char_triangle()
{   
    std::cout << std::endl;
    for(char i = 'A' ; i <= 'E'; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            std::cout << i;
        }std::cout << std::endl;
    }
}

void char_triangle2()
{   
    std::cout << std::endl;
    for(char i = 'A' ; i <= 'E'; i++)
    {
        for(char j = 'A'; j <= i; j++)
        {
            std::cout << j;
        }std::cout << std::endl;
    }
}

void num_triangle_inverted(size_t size)
{
    std::cout << std::endl;
    for(size_t i = size; i > 0; i--)
        {
            for(size_t j = 1; j <= i; j++)
            {   
                std::cout << j;
            }
            std::cout << std::endl;
            
        } 
}

void char_triangle_inverted()
{
    std::cout << std::endl;
    for(char i = 'E' ; i >= 'A'; i--)
    {
        for(char j = 'E'; j >= i; j--)
        {
            std::cout << j;
        }std::cout << std::endl;
    }
}

void triangle3(size_t size)
{
    std::cout << std::endl;
    for(size_t i = 1; i <= size; i++)
    {
        for(size_t j  = 1; j <= size; j++)
        {
            if(j < i)
            {
                std::cout << " ";
            }
            else std::cout << "*";
        }std::cout << std::endl;
    }
}

void pattern(size_t size)
{
    std::cout << std::endl;
    for(size_t i = 1, k = 0; i <= size; i++, k+=2)
    {
        for(size_t j  = 0; j < (size + i) - 1 ; j++)
        {
           if(j < k)
           {
               std::cout << "  ";
           }
           else std::cout << "* ";
            
        }
        std::cout << std::endl;
    }

}

void pyramid(size_t size)
{
    for(size_t i = 1; i <= size; i++)
    {
        for(size_t j  = 1; j <=size; j++)
        {
            if(j <= size - i)
            {
                std::cout << "  ";
            }
            else std::cout << " *  ";
        }std::cout << std::endl;
    }
}

void hollowbox(size_t size)
{
    std::cout << std::endl;
    for(size_t i = 1; i <=size; i++)
    {
        if(i == 1 || i == size)
        {
            for(size_t j  = 1; j <= size; j++)
            {
                std::cout << "* ";
            }
        }
        else for(size_t j  = 1;j <= size; j++)
        {
            if (j == 1 || j == size)
            {
                std::cout << "* ";
            }
            else std::cout << "  ";
        }
        std::cout << std::endl;
    }
}

void left_triangle(size_t size)
{
    std::cout << std::endl;
    for(size_t i = 1; i <= (size + 1) / 2; i++)
    {
        for(size_t j  = 1; j <= (size + 1) / 2; j++)
        {
            if(j <= ((size + 1) / 2) - i)
            {
                std::cout << " ";
            }
            else std::cout << "*";
        }std::cout << std::endl;
    }

    for(size_t i = 1; i <= size -((size + 1) / 2); i++ )
    {
        for(size_t j  = 1; j <= (size + 1) / 2; j++)
        {
            if(j <= i)
            {
                std::cout << " ";
            }
            else 
                std::cout << "*";
        }std::cout << std::endl;
    }
}

void hexagon(size_t size)
{
    std::cout << std::endl;
    for(size_t i = 1; i <= (size + 1) / 2; i++)
    {
        for(size_t j  = 1; j <= (size + 1) / 2; j++)
        {
            if(j <= ((size + 1) / 2) - i)
            {
                std::cout << " ";
            }
            else std::cout << "* ";
        }std::cout << std::endl;
    }
    for(size_t i = 1; i <= size -((size + 1) / 2); i++ )
    {
        for(size_t j  = 1; j <= (size + 1) / 2; j++)
        {
            if(j <= i)
            {
                std::cout << " ";
            }
            else std::cout << "* ";
        }std::cout << std::endl;
    }
}

void block_in_block(size_t size)
{
    for(size_t i = 0; i < ((2* size) - 1); i++)
    {
        for(size_t j = 0; j < ((2* size) - 1); j++)
        {
            if(i < size)
            {
                if(j >= i && j < (2 * size) - 1 - i)
                {
                    std::cout << (size - i) << " ";
                }
                else if(j < i)
                {
                    std::cout << (size - j) << " ";
                }
                else if(j >= (2 * size) - 1 - i)
                {
                    std::cout << (j + 2 - size) << " ";
                }
            }
            else if(i >= size && i < (2 * size) - 1)
            {
                if(j >= (2 * (size - 1)) - i && j < i + 1)
                {
                    std::cout << (i - size + 2) << " ";
                }
                else if(j < (2 * (size - 1)) - i )
                {
                    std::cout << (size - j) << " ";
                }
                else if(j >= i + 1)
                {
                    std::cout << (j + 2 - size) << " ";
                }
            }
        }std::cout << std::endl;
    }
}

void string_pyramid()
{
    std::string input {};
    std::cout << "\nEnter the string to make a pyramid -> ";
    std::cin.ignore();
    getline(std::cin, input);    

    size_t size {input.length()};
    size_t k {};

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
}
