#include <iostream>
#include <unistd.h>

int main() {
    for(int i {}; i < 10; i++) {
        std::cout << "HELLO" << std::endl;
        // sleep(2);   //seconds
        usleep(500000);    //microseconds
    }
    return 0;
}