#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main()
{
    std::ifstream in_file;
    std::string line {};
    int num {};
    double total {};

    in_file.open("test.txt");

    if(!in_file) //or !in_file.is_opern()
    {
        std::cerr << "Problem opening file!" << std::endl;
        //    std::exit(1);
        return 1;
    }

    while(in_file >> line >> num >> total) /* !in_file.eof() */
    {
        std::cout << std::setw(10) << std::left << line
                  << std::setw(10) << num
                  << std::setw(10) << total
                  << std::endl;
    }
    in_file.close();
    
    return 0;
}