#include <iostream>
#include <fstream>

int count_number_of_characters(std::fstream &source_file) {
    int counter {};
    char c {};
    while(source_file.get(c)) {
        counter++;
    }
    return counter;
}

int main() {
    
    std::fstream source_file {"num_chars.cpp", std::ios::in};

    std::cout << "The number of characters in the source file are : " << count_number_of_characters(source_file) << '\n';

    return 0;
}