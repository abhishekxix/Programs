#include <iostream>

int main() {
    
    for(int i {}; i < 7; i++) {
        if(i == 0 || i == 6) {
            for(int j {}; j < 7; j++)
                std::cout << "* ";
        }
        
        std::cout << std::endl;
    }
}