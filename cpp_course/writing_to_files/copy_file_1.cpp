#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream in_file {"poem.txt"};
    std::ofstream out_file {"copy_poem.txt"};
    std::string line {};

    if(!in_file.is_open())
    {
        std::cerr << "Error opening poem.txt." << std::endl; 
        return 1;
    }
    
    if(!out_file.is_open())
    {
        std::cerr << "Error opening copy_poem.txt." << std::endl; 
        return 2;
    }

    for(;!in_file.eof();)
    {
        std::getline(in_file, line);
        out_file << line << std::endl;
    }
    std::cout << "File copied" << std::flush;
    in_file.close();
    out_file.close();

    return 0;
}