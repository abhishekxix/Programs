#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;

    in_file.open("poem.txt");

    if(!in_file) //or !in_file.is_opern()
    {
        std::cerr << "Problem opening file!" << std::endl;
        //    std::exit(1);
        return 1;
    }
    char c {};
    while(in_file.get(c))
    {
        std::cout << c;
    }
    in_file.close();
    
    return 0;
}