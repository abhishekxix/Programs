#include <cstring>
#include <iostream>
#include "Mystring.h"

//No args constructor
Mystring::Mystring()
    : str {nullptr}
{
    str = new char[1];
    *str = '\0';
    std::cout << "NO arg constructor" << std::endl;
}

//Overloaded constructor
Mystring::Mystring(const char *s)
    : str {nullptr}
{
    if(s == nullptr)
    {
        str = new char[1];
        *str = '\0';
    }

    else 
    {
        str = new char[std::strlen(s) + 1];
        std::strcpy(str,s);
    }
    std::cout << "Overloaded constructor" << std::endl;
}

//copy constructor
Mystring::Mystring(const Mystring &source)
    :str {nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
    std::cout << "Copy constructor" << std::endl;
}

//move constructor
Mystring::Mystring(Mystring &&source)
    : str {source.str}  //stealing the pointer to the temporary value.
{
    source.str = nullptr;
    std::cout << "Move constructor" << std::endl;
}


//Destructor
Mystring::~Mystring()
{
    delete [] str;
}

//getters

void Mystring::display() const
{
    puts(str);
    // std::cout << std::endl;
}

int Mystring::get_length() const
{
    return std::strlen(str);
}

const char* Mystring::get_str() const
{
    return str;
}

Mystring &Mystring::operator=(const Mystring &rhs)
{
    if(this == &rhs)
        return *this;

    delete [] this->str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
    std::cout << "Copy assignment" << std::endl;
    return *this;
}  

Mystring &Mystring::operator=(Mystring &&rhs)
{
    if(this->str == rhs.str)
        return *this;
    
    delete [] this->str;
    this->str = rhs.str;
    std::strcpy(this->str, rhs.str);
    rhs.str  = nullptr;
    std::cout << "Move assignment" << std::endl;
    return *this;
}    

// Mystring Mystring::operator+(const Mystring &rhs) const
// {
//     if(std::strlen(rhs.str) != 0)
//     {
//         size_t size_of_first {std::strlen(this->str)};
//         char *new_string = new char[std::strlen(rhs.str) + size_of_first + 1];
//         std::strcpy(new_string, this->str);
        
        
//         if(size_of_first != 0)
//             std::strcat(new_string, " ");
        
//         std::strcat(new_string, rhs.str);
//         Mystring result {new_string};
//         delete new_string;
        
//         return result;
//     }
//     else 
//         return *this;
// }