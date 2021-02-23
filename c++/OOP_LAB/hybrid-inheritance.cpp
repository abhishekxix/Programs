#include <iostream>

class Top {
public :
    void say_hello_top() {std::cout << "Hello from top." << std::endl;}
};

class Middle1 :  virtual public Top {
public :
    void say_hello_middle1() {std::cout << "Hello from middle1." << std::endl;}
};

class Middle2 : public Top {
public :
    void say_hello_middle2() {std::cout << "Hello from middle2." << std::endl;}
};

class Bottom : public Middle1, public Middle2 {
public :
    void say_hello_bottom() {std::cout << "Hello from bottom." << std::endl;}
};

int main() {
    Bottom object;
    object.say_hello_top();
    object.say_hello_middle1();
    object.say_hello_middle2();
    object.say_hello_bottom();

    return 0;
}
