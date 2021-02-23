#include <iostream>

int main()
{
    static int a {10};

    std::cout << a << std::endl;
    a++;
    return 0;
}