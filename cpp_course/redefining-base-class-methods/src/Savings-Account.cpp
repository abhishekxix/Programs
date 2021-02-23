#include "Savings-Account.h"

//costructor
Savings_Account::Savings_Account(double balance, double interest_rate)
    : Account{balance}, interest_rate {interest_rate}
{}

//deposit method
void Savings_Account::deposit(double amount)
{
    amount += amount * (interest_rate / 100);
    Account::deposit(amount);
}

//overloaded extraction operator
std::ostream &operator<<(std::ostream &out, const Savings_Account &account)
{
    out << "Savings account balance :: " << account.balance << "\nInterest rate :: " << account.interest_rate;
    return out;
}