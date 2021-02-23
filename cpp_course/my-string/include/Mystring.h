#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    private :
        char *str;  //pointer to a char[] that holds a C-style string.

    public :    
        Mystring(); //No arg constructor
        Mystring(const char *s);    //Overloaded constructor
        Mystring(const Mystring &source);    //copy constructor
        ~Mystring();    //Destructor
        void display() const;
        int get_length() const;     //getters
        const char *get_str() const;      
};

#endif