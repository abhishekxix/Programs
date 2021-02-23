#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_
#include <iostream>

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &out, const I_Printable &object);

    public :
        virtual void print(std::ostream &out) const = 0;
        virtual ~I_Printable() = default;   //same as virtual ~I_Printable() {}
};

#endif