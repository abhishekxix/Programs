#include <iostream>

class Base 
{
    private :
        int value;
        
    public :
        Base() 
            : value {0} 
        {
            std::cout << "Base no args constructor." << std::endl;
        }

        Base(int x) 
            : value {x} 
        {
            std::cout << "Base overloaded constructor." << std::endl;
        }

        Base(const Base &other)
            : value {other.value}
        {
            std::cout << "Base class copy constructor" << std::endl;
        }

        ~Base()
        {
            std::cout << "Base destructor" << std::endl;
        }

        Base &operator=(const Base &other)
        {
            std::cout << "Base operator=" << std::endl;
            
            if(this != &other)
                this->value = other.value;
            
            return *this;
        }

        int get_value() 
        {
            return this->value;
        }
};

class Derived : public Base
{
    private :
        int doubled_value;

    public :
        Derived()   
            : doubled_value {0} 
        {
            std::cout << "Derived no args constructor." << std::endl;
        }

        Derived(int x)  
            : Base{x} /* slicing will take place to yield the Base part of the Derived object. */, doubled_value {2 * x}
        {
            std::cout << "Derived overloaded constructor." << std::endl;
        }

        Derived(const Derived &other)
            : Base{other}, doubled_value {other.doubled_value}  //The order of this does not matter, the base class copy constructor will always be called first as we know that the attributes are initialised in the order of their declaration in the class.
        {
            std::cout << "Derived class copy constructor" << std::endl;
        }

        ~Derived() 
        {
            std::cout << "Derived destructor." << std:: endl;
        }

        Derived &operator=(const Derived &other)
        {
            std::cout << "Derived operator= " << std::endl;

            if(this != &other)
            {
                Base::operator=(other);     //slicing will take place.
                this->doubled_value = other.doubled_value;  //here, the order matters.
            }
        }

        int get_doubled_value()
        {
            return this->doubled_value;
        }
};

void function(Derived a)
{
    //just to demonstrate the calling of the copy constructors.
}

int main()
{
    Derived d, e {100};

    d = e;
    function(d);    //copy constructor will be called.
    
    std::cout << d.get_doubled_value() << std::endl;
    return 0;
}