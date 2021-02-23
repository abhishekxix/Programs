#include "../include/Checking_Account.h"

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

std::ostream &operator<<(std::ostream &out, const Checking_Account &account)
{
    out << "\nAccount name :: " << account.name
        << "\nBalance :: " << account.balance;

    return out;
}

bool Checking_Account::operator-=(double amount)
{
    return withdraw(amount);
}
