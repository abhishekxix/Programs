#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char *argv[]) {
    char c {};
    
    if(argc != 2) {
        std::cout << "Usage: PR <filename>\n";
        return 1;
    }
    std::ifstream in {argv[1], std::ios::binary | std::ios::in};

    if(!in) {
        std::cout << "Cannot open file\n";
        return 1;
    } 
    while(in) { /* same as in.eof() */
        in.get(c);
        if(in)
            std::cout << c;
    }
    /*  above lines of code can also be written as :
        while(in.get(c))
            std::cout << c;
     */
    
    in.close();

    return 0;
}