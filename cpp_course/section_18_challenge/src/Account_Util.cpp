#include "Account_Util.h"
#include <iostream>

//displays objects in a vector of account class
void display(const std::vector<Account*> &accounts)
{
    std::cout << "\n====Accounts====\n";

    for(const auto account : accounts)
        std::cout << *account << std::endl;
    
    std::cout << "\n================\n";
}

//Deposits supplied amaount to a vector of account objects
void deposit(std::vector<Account*> &accounts, double amount)
{
    std::cout << "\n====Depositing====\n";
    
    for(auto acc : accounts)
    {
        if(acc->deposit(amount))
            std::cout << "\nDeposit of " << amount << " successful for " << *acc << std::endl;

        else 
            std::cout << "\nDeposit of " << amount << " failed for " << *acc << std::endl;
    }
    std::cout << "\n==================\n";
}

//withdraw supplied amount from the objects in the vector of Account class
void withdraw(std::vector<Account*> &accounts, double amount)
{
    std::cout << "\n====Withdrawing====\n";
    
    for(auto acc : accounts)
    {
        acc->withdraw(amount);
    }
    std::cout << "\n===================\n";
}
