#include "Account.h"
#include "illegal_balance_exception.h"
#include "insufficient_funds_exception.h"

Account::Account(std::string name, double balance)
    : name {name}, balance {balance}
{
    if(balance < 0.0)
        throw Illegal_Balance_Exception {};
}

bool Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    
    balance += amount;
    return true;
}

void Account::withdraw(double amount)
{
    if((balance - amount >= 0) && (amount > 0))
    {
        balance -= amount;
    }

    else throw Insufficient_Funds_Exception {};
}


bool Account::operator+=(double amount)
{
    return deposit(amount);
}  

void Account::operator-=(double amount)
{
    withdraw(amount);
}   