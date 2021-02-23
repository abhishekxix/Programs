#include "insufficient_funds_exception.h"

const char *Insufficient_Funds_Exception::what() const noexcept 
{
    return "Insufficient Funds Exception";
}