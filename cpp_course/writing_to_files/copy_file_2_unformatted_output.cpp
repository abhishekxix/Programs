#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file {"poem.txt"};
    std::ofstream out_file {"copy_poem_unformatted_output.txt"};
    char c;

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
        in_file.get(c);
        out_file.put(c);
        out_file.flush();
    }
    std::cout << "File copied" << std::flush;
    in_file.close();
    out_file.close();

    return 0;
}