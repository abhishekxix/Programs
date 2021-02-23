#include <iostream>

class Base {
    friend int sum(const Base &object);
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
            std::cout << public_data << "\t" << protected_data << "\t" << get_private_data() << std::endl;
        }
};

int sum(const Base &object) {
    return object.private_data + object.protected_data + object.public_data;
}

int main() {
    Derived object;
    object.set();
    // std::cout << object.public_data << std::endl; //produces error because public data also became private.
    object.display();
    std::cout << sum(object);

    return 0;
}