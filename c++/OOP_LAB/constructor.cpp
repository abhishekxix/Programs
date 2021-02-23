#include <iostream>

class A {
    private :
        int a;
    
    public :
        A(int a = 0);
        void display();
};

A::A(int a) 
    : a {a}
{
    std::cout << "Constructor called." << std::endl;
}

void A::display() {
    std::cout << a << std::endl;
}

int main() {
    A object {}, object2 {3}; 
    object.display();
    object2.display();

    return 0;
}