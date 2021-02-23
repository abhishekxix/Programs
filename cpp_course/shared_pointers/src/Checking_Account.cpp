#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance}
{}

bool Checking_Account::withdraw(double amount)
{
    if(amount > 0 && (balance - amount >= withdrawl_fee))
    {
        amount += withdrawl_fee;
        
        return Account::withdraw(amount);
    }
    return false;
}

bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &out) const
{
    out << "\nAccount name :: " << name
        << "\nBalance :: " << balance;
}

bool Checking_Account::operator-=(double amount)
{
    return withdraw(amount);
}
