#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream in_file;
    std::string line {};

    in_file.open("poem.txt");

    if(!in_file) //or !in_file.is_opern()
    {
        std::cerr << "Problem opening file!" << std::endl;
        //    std::exit(1);
        return 1;
    }

    while(std::getline(in_file, line))
    {
        std::cout << line << std::endl;
    }
    in_file.close();
    
    return 0;
}