#include <iostream>

class Base
{
    public :
        virtual void say_hello() const 
        {
            std::cout << "Hello I am a  Base class object." << std::endl;
        }  
        virtual ~Base() {}
};

class Derived : public Base
{
    public :
        virtual void say_hello() const override     //makes sure that the function is overridden rather than redifined
        {
            std::cout << "Hello I am a Derived class object." << std::endl;
        }
        virtual ~Derived() {}
};

int main()
{
    Base *p1 {new Base {}};
    p1->say_hello();    //Base::say_hello()
    
    Derived *p2 {new Derived {}};
    p2->say_hello();    //Derived::say_hello()

    Base *p3 {new Derived {}};
    p3->say_hello();    //Base::say_hello() ????? But we wanted Derived::say_hello()

    return 0;
}