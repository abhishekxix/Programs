#include "Savings-Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double interest_rate)
    : Account{name, balance}, interest_rate {interest_rate}
{}

bool Savings_Account::deposit(double amount)
{
    amount += (amount * interest_rate) / 100;
    return Account::deposit(amount);        
}

void Savings_Account::withdraw(double amount)
{
    Account::withdraw(amount);
}

void Savings_Account::print(std::ostream &out) const
{
    out << "\nAccount name :: " << name 
        << "\nAccount balance :: " << balance 
        << "\nInterest rate :: " << interest_rate << "%";
}

bool Savings_Account::operator+=(double amount)
{
    return deposit(amount);
}