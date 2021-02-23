#include "../include/Savings-Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double interest_rate)
    : Account{name, balance}, interest_rate {interest_rate}
{}

bool Savings_Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    
    amount += (amount * interest_rate) / 100;
    return Account::deposit(amount);        
}

std::ostream &operator<<(std::ostream &out, const Savings_Account &account)
{
    out << "\nAccount name :: " << account.name 
        << "\nAccount balance :: " << account.get_balance() 
        << "\nInterest rate :: " << account.interest_rate << "%";

    return out;
}

bool Savings_Account::operator+=(double amount)
{
    return deposit(amount);
}