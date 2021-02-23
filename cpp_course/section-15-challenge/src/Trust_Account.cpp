#include "../include/Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double interest_rate, int number_of_withdrawls)
    : Savings_Account{name, balance, interest_rate}, number_of_withdrawls {number_of_withdrawls}
{}

bool Trust_Account::deposit(double amount)
{
    if(amount < 0)
        return false;
    
    if(amount >= bonus_threshold)
        amount += 50.0;
    
    amount += (amount * interest_rate) / 100;
    Account::deposit(amount);

    return true;
}

bool Trust_Account::withdraw(double amount)
{
    if(Account::withdraw(amount) && (number_of_withdrawls <= max_number_of_withdrawls))
    {
        number_of_withdrawls++;
        return true;
    }
    std::cout << "Error - Maximum number of withdrawls per year (i.e: 3) exceeded." << std::endl;
    return false;
}

std::ostream &operator<<(std::ostream &out, const Trust_Account &account)
{
    out << "\nAccount name :: " << account.name
        << "\nBalance :: " << account.balance
        << "\nInterest rate :: " << account.interest_rate
        << "\nNumber of withdrawls till date :: " << account.number_of_withdrawls;

    return out;
}

bool Trust_Account::operator+=(double amount)
{
    return deposit(amount);
}

bool Trust_Account::operator-=(double amount)
{
    return withdraw(amount);
}