#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    //friend functions
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);  
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);

    private :
        char *str;  //pointer to a char[] that holds a C-style string.

    public :    
        Mystring(); //No arg constructor
        Mystring(const char *s);    //Overloaded constructor
        Mystring(const Mystring &source);    //copy constructor
        Mystring(Mystring &&source);   //move constructor
        ~Mystring();    //Destructor
     
        void display() const;
        int get_length() const;     //getters
        const char *get_str() const;  

        //overloaded assignment operators
        Mystring &operator=(const Mystring &rhs);    
        Mystring &operator=(Mystring &&rhs);  
     
};

#endif