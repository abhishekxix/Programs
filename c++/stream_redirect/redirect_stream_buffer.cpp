#include <iostream>
#include <fstream>

int main() {
    std::ofstream output_file {"logs.txt"};

    if(!output_file) {
        std::cerr << "ERROR";
        return 1;
    }
    auto old_buffer {std::clog.rdbuf()};
    std::clog.rdbuf(output_file.rdbuf());
    for(int i {}; i < 100000000; i++)
    std::clog << "ABCDEFGHI" << std::endl;

    std::clog.rdbuf(old_buffer);
    return 0;
}