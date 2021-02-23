#include <iostream>

class Base1 {
public :
    void say_hello_Base1() {std::cout  << "Hello from Base" << std::endl;}
};

class Base2 {
public :
    void say_hello_Base2() {std::cout << "Hello from Base2" << std::endl;}
};

class Derived : public Base1, public Base2 {
public :
    void say_hello_Derived() {std::cout << "Hello from Derived.";}
};

int main() {
    Derived object;
    object.say_hello_Base1();
    object.say_hello_Base2();
    object.say_hello_Derived();

    return 0;
}

