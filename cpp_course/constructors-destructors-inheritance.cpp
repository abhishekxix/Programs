#include <iostream>

class Base 
{
    private :
        int value;
        
    public :
        Base()  : value {0} {std::cout << "Base no args constructor." << std::endl;}
        Base(int x) : value {x} {std::cout << "Base overloaded constructor." << std::endl;}
        ~Base() {std::cout << "Base destructor" << std::endl;}
};

class Derived : public Base
{
    // using Base::Base;    //will only initialise the Base part of the Derived object.
    private :
        int doubled_value;

    public :
        Derived()   : doubled_value {0} {std::cout << "Derived no args constructor." << std::endl;}
        Derived(int x)  : doubled_value {2 * x} {std::cout << "Derived overloaded constructor." << std::endl;}  
        ~Derived() {std::cout << "Derived destructor." << std:: endl;}
};

int main()
{
    // Base b {};
    // Base b {100};
    // Derived d;
    Derived d {1000};
    
    return 0;
}