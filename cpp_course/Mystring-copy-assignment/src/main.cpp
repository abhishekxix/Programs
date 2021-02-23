#include <iostream>
#include "Mystring.h"
#include <vector>

int main() 
{
    Mystring a {"Hello"};
    Mystring b;
    b = a;  //b.operator=(a);
    b = "This is a test";   //b.operator=("this is a test")
    b.display();
   
    std::vector <Mystring> stooges {"Larry", "Moe", "Curly"};
    
    for(const Mystring &str : stooges)
        str.display();
    
    for(Mystring &str : stooges)
        str = "Funny";  //This is a copy assignment. therefore firstly, an object is created to hold "Funny" and Then it is assigned to str. This is inefficient.
    
    for(const Mystring &str : stooges)
        str.display();
    
    return 0;
}