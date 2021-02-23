#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
    std::ifstream in_file {"romeo_and_juliet.txt"};
    std::ofstream out_file {"romeo_and_juliet_numbered.txt"};
    std::string line {};

    if(!in_file.is_open())
    {
        std::cerr << "Error opening romeo_and_juliet.txt." << std::endl; 
        return 1;
    }
    
    if(!out_file.is_open())
    {
        std::cerr << "Error opening romeo_and_juliet_numbered.txt" << std::endl; 
        return 2;
    }
    bool found {false}, length {};
    for(size_t line_number {1};!in_file.eof(); )
    {
        std::getline(in_file, line);
        if(line != "")
        {
            out_file << std::setw(7) << std::left << line_number++;        
            out_file << line << std::endl;
        }   
        else 
            out_file << std::endl;
    }
    std::cout << "File copied" << std::flush;
    in_file.close();
    out_file.close();

    return 0;
}