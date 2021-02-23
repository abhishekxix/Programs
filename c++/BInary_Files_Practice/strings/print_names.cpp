#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {
    if(argc < 2) {
        std::cout << "No file specified.";
        return 1;
    }
    
    std::fstream file {argv[1], std::ios::binary | std::ios::in};

    if(!file) {
        std::cout << "Error opening file!";
        return 1;
    }
    std::string name {};
    char *temp_string {};
    size_t length {};

    while(file) {

        file.read((char*) &length, sizeof length);
        temp_string = new char[length];

        file.read(temp_string, length);
        name.assign(temp_string, length);
        delete []temp_string;

        if(file)
            std::cout << name << ' ';
    }
    file.close();
    return 0;
} 