#include "Account.h"


std::string Account::get_name()
{
    return name;
}
void Account::set_name(std::string name_input)
{
    name = name_input;
}

bool Account::deposit(double amount)
{
    if (balance < 1000000 && amount <= 5000)
    {
        balance += amount;
        return true;
    }
    return false;   
}

bool Account::withdraw(double amount)
{
    if((balance - amount) >= 100 )
    {
        balance -= amount;
        return true;
    }
    return false;
}

