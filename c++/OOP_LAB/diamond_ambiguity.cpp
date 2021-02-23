#include <iostream>

class A {
public :
    void say_hello_A() {std::cout << "Hello from A" << std::endl;}
};

class B : virtual public A {
public :
    void say_hello_B() {std::cout << "Hello from B" << std::endl;}
};
class C : virtual public B {
public :
    void say_hello_C() {std::cout << "Hello from C" << std::endl;}
};

class D : virtual public B, virtual public A {
public :
    void say_hello_D() {std::cout << "Hello from D" << std::endl;}
};

class E : virtual public A {
public :
    void say_hello_E() {std::cout << "Hello from E" << std::endl;}
};

class F : virtual public C, virtual public D, virtual public E {
public :
    void say_hello_F() {std::cout << "Hello from F" << std::endl;}
};

class G : virtual public E {
public :
    void say_hello_G() {std::cout << "Hello from G" << std::endl;}
};

class H : virtual public F {
public :
    void say_hello_H() {std::cout << "Hello from H" << std::endl;}
};

class I : virtual public F {
public :
    void say_hello_I() {std::cout << "Hello from I" << std::endl;}
};

class J : virtual public G {
public :
    void say_hello_J() {std::cout << "Hello from J" << std::endl;}
} ;

class K : virtual public G {
public :
    void say_hello_K() {std::cout << "Hello from K" << std::endl;}
};

class L : virtual public H, virtual public I, virtual public J, virtual public K {
public :
    void say_hello_L() {std::cout << "Hello from L" << std::endl;}
};

int main() {
    L object;
    object.say_hello_A();
    object.say_hello_B();
    object.say_hello_C();
    object.say_hello_D();
    object.say_hello_E();
    object.say_hello_F();
    object.say_hello_G();
    object.say_hello_H();
    object.say_hello_I();
    object.say_hello_J();
    object.say_hello_K();
    object.say_hello_L();

    return 0;
}
