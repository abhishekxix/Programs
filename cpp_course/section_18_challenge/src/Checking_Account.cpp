#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance}
{}

void Checking_Account::withdraw(double amount)
{
    amount += withdrawl_fee;
    Account::withdraw(amount);
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

void Checking_Account::operator-=(double amount)
{
    withdraw(amount);
}
