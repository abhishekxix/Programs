#include <iostream>

class Base {
public :
    void say_hello_Base() {std::cout  << "Hello from Base1." << std::endl;}
};

class Derived1 : public Base {
public :
    void say_hello_Derived1() {std::cout << "Hello from Derived1." << std::endl;}
};

class Derived2 : public Base {
public :
    void say_hello_Derived2() {std::cout << "Hello from Derived2.";}
};

int main() {
    Derived1 object1;
    Derived2 object2;
    object1.say_hello_Base();
    object1.say_hello_Derived1();
    object2.say_hello_Base();
    object2.say_hello_Derived2();

    return 0;
}

