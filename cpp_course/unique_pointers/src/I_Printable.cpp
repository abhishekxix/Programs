#include "I_Printable.h"

std::ostream &operator<<(std::ostream &out, const I_Printable &object)
{
    object.print(out);
    return out;
}