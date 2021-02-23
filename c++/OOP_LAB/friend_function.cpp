#include <iostream>

class B;

class A {
friend void add(A a, B b);
private :
    int data;
public :
    void set_data(int x = 0);
};

class B {
    friend void add(A a, B b);
private :
    int data;
public :
    void set_data(int x = 0);
};

void A::set_data(int x) {
    this->data = x;
}

void B::set_data(int x) {
    this->data = x;
}

void add(A a, B b) {
    std::cout << a.data + b.data << std::endl;
}

int main() {
    A a;
    B b;
    a.set_data(5);
    b.set_data(10);
    add(a, b);
    return 0;
}
