#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if(argc < 2) {
        std::cout << "File name not provided as a command line argument.\n";
        return 1;
    }
    std::fstream out_file {argv[1], std::ios::binary | std::ios::out | std::ios::trunc};

    for(int i {}; i < 127; i++) {/* write the ASCII characters to the file. */
        out_file.put(static_cast <char> (i));
    }
    out_file.close();
    return 0;
}