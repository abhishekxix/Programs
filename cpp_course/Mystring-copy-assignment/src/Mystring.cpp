#include <cstring>
#include <iostream>
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

//copy assignmnet
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


