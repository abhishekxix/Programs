#include <iostream>
#include <unistd.h>

int main() {
    while(true){ 
        std::cout << "PAAJI Chutiya hai" << std::flush;
        sleep(1);
        system("clear");
        std::cout << "PAAJI Gandu hai" << std::flush;
        sleep(1);
        system("clear");
    }

    return 0;
}