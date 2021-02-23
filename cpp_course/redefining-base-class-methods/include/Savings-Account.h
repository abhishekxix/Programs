#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"
#include <iostream>

/* Savings account class
Deposit method increments amount to be deposited by amount * int_rate  percentage
So a 1000 deposit at 5% interest rate will deposit 1000 + 50 = 1050 
Withdraw method does not specialise. */

class Savings_Account : public Account
{
    friend std::ostream &operator<<(std::ostream &out, const Savings_Account &account);

    protected :
        double interest_rate;
    
    public :
        Savings_Account(double balance = 0.0, double interest_rate = 0.0);
        void deposit(double amount);
        //withdraw is inherited.
};

#endif