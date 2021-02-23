#include <iostream>

class Base {
    private :
        int private_data;
    
    protected :
        int protected_data;
    
    public :
        int public_data;       
};

class Derived : private Base {
    public :
        void set() {
            protected_data = 20;
            public_data = 23;
            
        }
        void display() {
            std::cout << public_data << "\t" << protected_data << "\t";
        }

};

int main() {
    Derived object;
    object.set();
    // std::cout << object.public_data << std::endl; //produces error because public data also became private.
    object.display();

    return 0;
}