#include <iostream>

class Base
{
    //note -> Friends of base class have access to all

    public :
        int a {};

        void display() {std::cout << a << ", " << b << ", " << c << std::endl;} //member method has access to all
    protected :
        int b {};
    
    private :
        int c {};
};

class Derived : public Base
{
    //Friends of derived class only have access to what the derived class has access to.
    
    //a will be public.
    //b will be protected.
    //c will be inaccessible but it is indeed inherited.

    public :
    void access_base_members() 
    {
        a = 100;
        b = 200;
        // c = 300; //Compiler error
    }
};

int main()
{
    std::cout << "===Base member access from base objects===" << std::endl;
    Base base;
    base.a = 100;   //OK
    /* base.b = 200;   //Compiler error
    base.c = 300;   //Compiler error */

    std::cout << "===Base member access from derived objects===" << std::endl;
    Derived d;
    d.a = 100;  //OK
    /* d.b = 200;  //Compiler error
    d.c = 300;  //Compiler error */
    
}