#ifndef _INSUFFICIENT_FUNDS_EXCEPTION_
#define _INSUFFICIENT_FUNDS_EXCEPTION_

#include <exception>

class Insufficient_Funds_Exception : public std::exception
{
    public :
    Insufficient_Funds_Exception() noexcept = default;
    ~Insufficient_Funds_Exception() = default;
    virtual const char *what() const noexcept override;
};

#endif