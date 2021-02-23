#include <iostream>

class Test {
    private :
        int variable;

    public :
        Test(int value = 0);
        void operator++(int);
        int get() {return variable;}
};

Test::Test(int value) 
    : variable {value} {}

void Test::operator++(int) {
    variable--;
}

int main() {
    Test object {20};
    std::cout << "Object before '++' = " << object.get() << std::endl;
    object++;
    std::cout << "Object after '++' = " << object.get() << std::endl;

    return 0;
}