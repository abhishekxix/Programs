// 5. Illustrate the concept of constructor overloading with help of a program.

    #include <iostream>
    class A {
        private :
            int x;
            std::string y;
        
        public :
            A();
            A(int x);
            A(int x, std::string y);
    };

    A::A() 
        : x {}, y {"None"} {
        std::cout << "No arg constructor" << std::endl;
    }
    
    A::A(int x) 
        : x {x}, y {"None"} {
        std::cout << "One arg constructor" << std::endl;
    }
    
    A::A(int x, std::string y) 
        : x {x}, y {y} {
        std::cout << "Two args constructor" << std::endl;
    }

    int main() {
        A object1 {};
        A object2 {10};
        A object3 {10, "Hello"};

        return 0;
    }