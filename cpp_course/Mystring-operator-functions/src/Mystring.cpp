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

Mystring &Mystring::operator=(const Mystring &rhs)
{
    if(this == &rhs)
        return *this;

    delete [] this->str;
    this->str = new char[std::strlen(rhs.str) + 1];
    std::strcpy(this->str, rhs.str);
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
    return *this;
}    

Mystring operator+(const Mystring &lhs, const Mystring &rhs)
{
    if(std::strlen(rhs.str) != 0)
    {
        size_t size_of_first {std::strlen(lhs.str)};
        char *new_string = new char[std::strlen(rhs.str) + size_of_first + 1];
        std::strcpy(new_string, lhs.str);
        
        
        if(size_of_first != 0)
            std::strcat(new_string, " ");
        
        std::strcat(new_string, rhs.str);
        Mystring result {new_string};
        delete [] new_string;
        
        return result;
    }
    else 
        return lhs;
}

bool operator==(const Mystring &lhs, const Mystring &rhs) 
{
    if(std::strcmp(lhs.str, rhs.str) == 0)
        return true;
    
    else 
        return false;
}

Mystring operator-(const Mystring &obj)
{
    char *lower_case = new char[std::strlen(obj.str) + 1];

    for(size_t i {}; obj.str[i] != '\0'; i++)
        lower_case[i] = tolower(obj.str[i]);
    
    Mystring temp {lower_case};

    delete [] lower_case;

    return temp;
}