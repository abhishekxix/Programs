#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>

//Simple account class
class Account
{
    friend std::ostream &operator<<(std::ostream &out, const Account &Account);

    protected :
        double balance;
    
    public :
        Account(double balance = 0);
        void deposit(double amount);
        void withdraw(double amount);
};

#endif