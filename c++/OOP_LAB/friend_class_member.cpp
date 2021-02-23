#include <iostream>

class B;

class A {
    private :
        int a;
    public :
        void display(B b);
        A(int data  = 0)
            : a {data}
        {}
};

class B {

    friend void A::display(B b);
    private :
        int b;

    public :
        B(int data  = 0)
            : b {data}
        {}
};

void A::display(B b) {
    std::cout << b.b << std::endl;
}

int main() {
    B b {89};
    A a {32};
    a.display(b);

    return 0;
}
