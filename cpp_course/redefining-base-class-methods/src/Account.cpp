#include "Account.h"
//Simple Account class

Account::Account(double amount)
    : balance {amount}
{}

void Account::deposit(double amount)
{
    balance +=amount;
}

void Account::withdraw(double amount)
{
    if((balance - amount) >= 0)
        balance -= amount;
    else 
        std::cout << "Insufficient funds." << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Account &account)
{
    out << "Account balance :: " << account.balance;
    return out;
}