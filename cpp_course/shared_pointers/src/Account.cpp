#include "Account.h"

Account::Account(std::string name, double balance)
    : name {name}, balance {balance}
{}

bool Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    
    balance += amount;
    return true;
}

bool Account::withdraw(double amount)
{
    if((balance - amount >= 0) && (amount > 0))
    {
        balance -= amount;
        return true;
    }

    return false;
}


bool Account::operator+=(double amount)
{
    return deposit(amount);
}  

bool Account::operator-=(double amount)
{
    return withdraw(amount);
}   