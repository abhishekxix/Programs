#ifndef _MYSTRING_H_
#define _MYSTRING_H_
#include <iostream>

class Mystring
{
    friend std::ostream &operator<<(std::ostream &out, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    private :
        char *str;

    public :
        Mystring(const char *_initial_value_ = "none");    //constructor
        ~Mystring();    //destructor
        Mystring(const Mystring &source);   //copy constructor
        Mystring(Mystring &&source);        //Move constructor

        //overloaded operators
        Mystring &operator=(const Mystring &rhs);   //copy assignment
        Mystring &operator=(Mystring &&rhs);    //move assignment
        Mystring operator-() const;     //lower case conversion
        bool operator==(const Mystring &rhs) const;     //equality check.
        bool operator!=(const Mystring &rhs) const;     //inequality check.
        bool operator<(const Mystring &rhs) const;      //lexical less than.
        bool operator>(const Mystring &rhs) const;      //lexical greater than.
        Mystring operator+(const Mystring &rhs) const;  //concatenation.
        void operator+=(const Mystring &rhs);       //conmpound concatenation operator.
        Mystring operator*(const unsigned int &n) const;  //repeat the string n times
        void operator*=(const unsigned int &n);     //compund assignment repeat.
        Mystring operator++() const;    //capitalise the sentence.
        Mystring operator++(int) const;     //increment each letter in the string.   

        //getters
        void display() const;
        unsigned int get_length() const;
        const char* get_string() const;
};

#endif