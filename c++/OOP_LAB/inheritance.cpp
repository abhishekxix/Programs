#include <iostream>

class Base {
    private :
        int private_data;
    
    protected :
        int protected_data;
    
    public :
        int public_data;
        void set_private_data() {
            private_data = 40;
        }
        int get_private_data() {
            return private_data;
        }
};

class Derived : public Base {
    public :
        void set() {
            protected_data = 20;
            public_data = 23;
            set_private_data();
        }
        void display() {
            std::cout << public_data << "\t" << protected_data << "\t" << get_private_data();
        }

};

int main() {
    Derived object;
    object.set();
    // std::cout << object.public_data;
    object.display();

    return 0;
}