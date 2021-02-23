#include <iostream>
#include "Account.h"

//no arg constructor
Account::Account()
    : balance {0.0}, name {"an account"}
{}

//Destructor
Account::~Account()
{}

void Account::deposit(double amount)
{
    std::cout << "Account deposit called with " << amount <<std::endl;
}

void Account::withdraw(double amount)
{
    std::cout << "Account withdraw called with " << amount << std::endl;
}