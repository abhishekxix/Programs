#include <iostream>

void func_c();
void func_b();
void func_a();

int main()
{
    std::cout << "Starting main()" << std::endl;
    try
    {
    func_a();
    }
    catch(const int &ex)
    {
        std::cerr << "Caught error in main()" << std::endl;
    }
    std::cout << "Ending main()" << std::endl;
    return 0;
}

void func_a()
{
    std::cout << "Starting func_a()" << std::endl;
    func_b();
    std::cout << "Ending func_a()" << std::endl;
}

void func_b()
{
    std::cout << "Starting func_b()" << std::endl;
    try 
    {
        func_c();
    }
    catch(const int &ex)
    {
        std::cerr << "Caught error in func_b()" << std::endl;
    }
    std::cout << "Ending func_b()" << std::endl;
}

void func_c()
{
    std::cout << "Starting func_c()" << std::endl;   
    throw 100;
    std::cout << "Ending func_c()" << std::endl;
}