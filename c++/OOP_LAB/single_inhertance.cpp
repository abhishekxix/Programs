#include <iostream>

class Base {
public :
    void say_hello_Base() {std::cout  << "Hello from Base" << std::endl;}
};

class Derived : public Base {
public :
    say_hello_Derived() {std::cout << "Hello from Derived" << std::endl;}
};

int main() {
    Derived object;
    object.say_hello_Base();
    object.say_hello_Derived();

    return 0;
}

