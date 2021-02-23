#include <iostream>
#include <fstream>

int main() {
    int number {};

    std::fstream file {"sample.dat", std::ios::binary /* | std::ios::trunc | std::ios::out  */| std::ios::in};

    // for(number = 0; number < 100; number++)
    //     file.write((char*) &number, sizeof number); 

    while(file)
        if(file){
            file.read((char*) &number, sizeof number);
            std::cout << number << ' ';
        }

    file.close();
    return 0;    
}