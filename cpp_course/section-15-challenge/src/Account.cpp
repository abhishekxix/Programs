#include "../include/Account.h"

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

double Account::get_balance() const
{
    return this->balance;
}

std::ostream &operator<<(std::ostream &out, const Account &account)
{
    out << "\nAccount name :: " << account.name << "\nAccount balance :: " << account.balance;
    return out;
}

bool Account::operator+=(double amount)
{
    return deposit(amount);
}  

bool Account::operator-=(double amount)
{
    return withdraw(amount);
}   