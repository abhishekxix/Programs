#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::ofstream out_file {"output.txt", std::ios::ate};
    if(!out_file)
    {
        std::cerr << "Error creating file" << std::flush;
        return 1;
    }
    std::string line {};
    std::cout << "Enter something to write it to the file -> ";
    std::getline(std::cin, line);
    out_file << line << std::endl/* std::flush */;
    out_file.close();

    return 0;
}