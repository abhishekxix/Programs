#include <iostream>
#include <iomanip>

class Test {
    
    private :
        static int created;
        static int destroyed;
        static int alive;

    public :
        Test();
        static void status();
        ~Test();
};

int Test::created {};
int Test::destroyed {};
int Test::alive {};

Test::Test() {
    created++;
    alive++;
}
Test::~Test() {
    alive--;
    destroyed++;
}

void Test::status() {
    std::cout << "\nCretaed = " << created
              << "\nDestroyed = " << destroyed
              << "\nAlive = " << alive << std::endl;
}

int main() {
    Test array[5] {};
    Test::status();
    {
        std::cout << std::setw(20) << std::setfill('#') << "";
        std::cout << "\nIn the internal scope." << std::endl;
        Test array[10] {};
        Test::status();
        std::cout << std::setw(20) << "" << std::endl;

    }
    Test::status();

    return 0;
}