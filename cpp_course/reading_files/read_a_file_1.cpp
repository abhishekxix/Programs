#include <iostream>
#include <fstream>
#include <string>

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
    in_file >> line >> num >> total;
    std::cout << line << std::endl
              << num << std::endl
              << total << std::endl;
    in_file.close();
    
    return 0;
}