#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {
    if(argc < 2) {
        std::cout << "No file specified.";
        return 1;
    }
    
    std::fstream file {argv[1], std::ios::binary | std::ios::trunc};

    if(!file) {
        std::cout << "Error opening file!";
        return 1;
    }
    std::string name {};

    while(name != "exit") {
        std::getline(std::cin, name);
        file.write((char*) &name, sizeof (name));
    }
    file.close();
    return 0;
} 