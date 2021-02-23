#include "illegal_balance_exception.h"

const char *Illegal_Balance_Exception::what() const noexcept
{
    return "Illegal Balance Exception";
}