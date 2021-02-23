#include <iostream>
#include "patterns.h"

int main()
{ 
    size_t size;
    std::cout<< "Enter the size of pattern :: ";
    std::cin >> size;
    triangle(size);
    triangle2(size);
    char_box();
    char_box2();
    num_box(size);
    num_box2(size);
    char_triangle();
    char_triangle2();
    num_triangle_inverted(size);
    char_triangle_inverted();
    triangle3(size);
    pattern(size);
    pyramid(size);
    hollowbox(size);
    left_triangle(size);
    hexagon(size);
    block_in_block(size);
    string_pyramid();

    return 0;
}