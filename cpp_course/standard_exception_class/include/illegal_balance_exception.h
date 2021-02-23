#ifndef _ILLEGAL_BALANCE_EXCEPTION_H_
#define _ILLEGAL_BALANCE_EXCEPTION_H_
#include <exception>

class Illegal_Balance_Exception : public std::exception
{
    public :
    Illegal_Balance_Exception() = default;
    ~Illegal_Balance_Exception() = default;
    virtual const char *what() const noexcept;
};

#endif