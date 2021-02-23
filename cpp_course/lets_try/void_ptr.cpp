#include <iostream>

int main()
{
    void *ptr {nullptr};
    int a {100};
    double d {30.93};

    
    ptr = static_cast<void*> (&a);

    std::cout << "Value of a :: " << a << std::endl;
    std::cout << "Value of *ptr :: " << static_cast<int> (*ptr) << std::endl;

    return 0;
}