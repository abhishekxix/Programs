#include "Savings_Account.h"
#include <iostream>

//no arg constructor
Savings_Account::Savings_Account()
    : int_rate{3.0}
{}

//destructor
Savings_Account::~Savings_Account()
{}

void Savings_Account::deposit(double amount)
{
    std::cout << "Savings_Account deposit called with " << amount << std::endl;
}

void Savings_Account::withdraw(double amount)
{
    std::cout << "Savings_Account deposit called with " << amount << std::endl;
}