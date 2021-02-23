#include <cstring>
#include <iostream>
#include <cctype>
#include "Mystring.h"

//No args constructor
Mystring::Mystring()
    : str {nullptr}
{
    str = new char[1];
    *str = '\0';
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
}

//copy constructor
Mystring::Mystring(const Mystring &source)
    :str {nullptr}
{
    str = new char[std::strlen(source.str) + 1];
    std::strcpy(str, source.str);
}

//move constructor
Mystring::Mystring(Mystring &&source)
    : str {source.str}  //stealing the pointer to the temporary value.
{
    source.str = nullptr;
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

//operators 
std::ostream &operator<<(std::ostream &out, const Mystring &rhs)
{
    out << rhs.str;
    
    return out;
}

std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    in >> rhs.str;
    
    return in;
}