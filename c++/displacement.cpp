#include <iostream>
#include <cmath>

int main()
{
    double x {}, y {};
    std::cout << "Enter the distance travelled in east -> ";
    std::cin >> x;
    std::cout << "Enter the distance travelled after turning left -> ";
    std::cin >> y;
    
    double displacement {std::sqrt((x * x) + (y * y))};
    std::cout << "The total displacement travelled :: " << displacement << std::endl;
    
    return 0;
}