#include <iostream>
#include <cmath>

int main()
{
    double a {}, b {}, c {};
    
    std::cout << "Enter the sides of triangle -> ";
    std::cin >> a >> b >> c;
    double s {(a + b + c) / 2};
    double value {};
    value = s * (s -a) * (s - b) * (s - c);
    double area {std::sqrt(value)};
    std::cout << "The area of the triangle is :: " << area << std::endl;
    
    return 0;
}