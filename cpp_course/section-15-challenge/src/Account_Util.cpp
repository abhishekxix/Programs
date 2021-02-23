#include "../include/Account_Util.h"
#include <iostream>

//displays objects in a vector of account class
void display(const std::vector<Account> &accounts)
{
    std::cout << "\n====Accounts====\n";

    for(const Account &account : accounts)
        std::cout << account << std::endl;
    
    std::cout << "\n================\n";
}

//Deposits supplied amaount to a vector of account objects
void deposit(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n====Depositing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc += amount)
            std::cout << "\nDeposit of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nDeposit of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n==================\n";
}

//withdraw supplied amount from the objects in the vector of Account class
void withdraw(std::vector<Account> &accounts, double amount)
{
    std::cout << "\n====Withdrawing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc -= amount)
            std::cout << "\nWithdrawl of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nWithdrawl of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n===================\n";
}

//displays objects in a vector of savings account class
void display(const std::vector<Savings_Account> &accounts)
{
    std::cout << "\n====Accounts====\n";

    for(const Savings_Account &account : accounts)
        std::cout << account << std::endl;
    
    std::cout << "\n================\n";
}

//Deposits supplied amaount to a vector of savings account objects
void deposit(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n====Depositing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc += amount)
            std::cout << "\nDeposit of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nDeposit of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n==================\n";
}

//withdraw supplied amount from the objects in the vector of savings Account class
void withdraw(std::vector<Savings_Account> &accounts, double amount)
{
    std::cout << "\n====Withdrawing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc -= amount)
            std::cout << "\nWithdrawl of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nWithdrawl of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n===================\n";
}


//displays objects in a vector of checking account class
void display(const std::vector<Checking_Account> &accounts)
{
    std::cout << "\n====Accounts====\n";

    for(const Checking_Account &account : accounts)
        std::cout << account << std::endl;
    
    std::cout << "\n================\n";
}

//Deposits supplied amaount to a vector of checking account objects
void deposit(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n====Depositing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc += amount)
            std::cout << "\nDeposit of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nDeposit of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n==================\n";
}

//withdraw supplied amount from the objects in the vector of checking Account class
void withdraw(std::vector<Checking_Account> &accounts, double amount)
{
    std::cout << "\n====Withdrawing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc -= amount)
            std::cout << "\nWithdrawl of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nWithdrawl of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n===================\n";
}

//displays objects in a vector of trust account class
void display(const std::vector<Trust_Account> &accounts)
{
    std::cout << "\n====Accounts====\n";

    for(const Trust_Account &account : accounts)
        std::cout << account << std::endl;
    
    std::cout << "\n================\n";
}

//Deposits supplied amaount to a vector of trust account objects
void deposit(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n====Depositing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc += amount)
            std::cout << "\nDeposit of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nDeposit of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n==================\n";
}

//withdraw supplied amount from the objects in the vector of trust Account class
void withdraw(std::vector<Trust_Account> &accounts, double amount)
{
    std::cout << "\n====Withdrawing====\n";
    
    for(auto &acc : accounts)
    {
        if(acc -= amount)
            std::cout << "\nWithdrawl of " << amount << " successful for " << acc << std::endl;

        else 
            std::cout << "\nWithdrawl of " << amount << " failed for " << acc << std::endl;
    }
    std::cout << "\n===================\n";
}