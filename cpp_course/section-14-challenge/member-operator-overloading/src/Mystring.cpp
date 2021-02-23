#include "Mystring.h"
#include <cstring>
#include <cctype>
#include <iostream>

//constructor
Mystring::Mystring(const char *_initial_value_)
    :   str {nullptr}
{
    str  = new char [std::strlen(_initial_value_) + 1];
    std::strcpy(this->str, _initial_value_);
}

//copy constructor
Mystring::Mystring(const Mystring &source)
    : Mystring{source.str}
{}

//Move constructor
Mystring::Mystring(Mystring &&source)
    : str {source.str}
{
    source.str = nullptr;
}

//Destructor
Mystring::~Mystring()
{
    delete [] this->str;
}

//getters
void Mystring::display() const
{
    std::cout << this->str << std::endl;
}

unsigned int Mystring::get_length() const
{
    return std::strlen(this->str);
}

const char* Mystring::get_string() const
{
    return this->str;
}

//overloaded operators

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs)
{
    if(this == &rhs)
        return *this;

    delete [] this->str;
    this->str = new char [rhs.get_length() + 1];

    strcpy(this->str, rhs.str);
    return *this;
}

//move assignment
Mystring &Mystring::operator=(Mystring &&rhs) 
{
    if(this == &rhs)
        return *this;

    delete [] this->str;
    this->str = rhs.str;
    rhs.str = nullptr;

    return *this;
}

//insertion operator
std::ostream &operator<<(std::ostream &out, const Mystring &rhs)
{
    out << rhs.str;
    return out;
}

//extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs)
{
    in.getline(rhs.str, 256);
    return in; 
}

//lowercase conversion
Mystring Mystring::operator-() const
{
    char *buffer {new char[this->get_length() + 1]};
    strcpy(buffer, this->str);
    
    for(size_t i {}; buffer[i] != '\0'; i++)
        buffer[i] = std::tolower(buffer[i]);
    
    Mystring _return_value_ {buffer};
    delete [] buffer;
    
    return _return_value_;
}

//equality check
bool Mystring::operator==(const Mystring &rhs) const
{
    return (std::strcmp(this->str, rhs.str) == 0);
}

//inequality check
bool Mystring::operator!=(const Mystring &rhs) const
{
    return (std::strcmp(this->str, rhs.str) != 0);
}

//lexical less than
bool Mystring::operator<(const Mystring &rhs) const
{
    return (strcmp(this->str, rhs.str) < 0);
}

//lexical greater than
bool Mystring::operator>(const Mystring &rhs) const
{
    return (std::strcmp(this->str, rhs.str) > 0);
}

//concatenation
Mystring  Mystring::operator+(const Mystring &rhs) const
{
    char *buffer {new char [std::strlen(this->str) + std::strlen(rhs.str) + 1]};

    std::strcpy(buffer, this->str);
    if(std::strlen(buffer) != 0)
        std::strcat(buffer, " ");

    std::strcat(buffer, rhs.str);
    Mystring _return_value_ {buffer};
    delete [] buffer;
    return _return_value_;
}

//compound concatenation
void Mystring::operator+=(const Mystring &rhs)
{
   *this = *this + rhs;
}

//repeat string
Mystring Mystring::operator*(const unsigned int &n) const
{
    char *buffer {new char [(std::strlen(this->str) * n) + 1]};
    
    for(size_t i {}; i < n; i++)
    {
        std::strcat(buffer, this->str);
        std::strcat(buffer, " ");                
    }
    Mystring _return_value_ {buffer}; 
    delete [] buffer;

    return _return_value_;
}

//compund assignment repeat
void Mystring::operator*=(const unsigned int &n)
{
    *this = *this * n;
    
    // return *this;
}

Mystring Mystring::operator++() const
{
    char *buffer {new char [strlen(this->str) + 1]};

    std::strcpy(buffer, this->str);

    for(size_t i {}; buffer[i] != '\0'; i++)
        buffer[i] = toupper(buffer[i]);
    
    Mystring temp {buffer};
    delete [] buffer;

    return temp;
}

Mystring Mystring::operator++(int) const
{
    char *buffer {new char [strlen(this->str) + 1]};

    std::strcpy(buffer, this->str);

    for(size_t i {}; buffer[i] != '\0'; i++)
        buffer[i]++;
    
    Mystring temp {buffer};
    delete [] buffer;

    return temp;
}