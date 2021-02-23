#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

/* 
-> Savings Account is a type of account
-> Adds an interest rate 
-> Withdraw - same as regular account
-> deposit :: 
        Amount supplied to the deposit method will be incremented by (amount * interest_rate) / 100.
*/

class Savings_Account : public Account
{

    private :
        static constexpr char* def_name = "Unnamed Savings Account";
        static constexpr double def_balance = 0.0;
        static constexpr double def_interest_rate = 0.0;

    protected :
        double interest_rate;
    
    public :
        Savings_Account(std::string name = def_name, double balance = def_balance, double interest_rate = def_interest_rate);
        virtual bool deposit(double amount) override;
        virtual bool withdraw(double amount) override;
        virtual void print(std::ostream &out) const override;
        bool operator+=(double amount);
        virtual ~Savings_Account() = default;
};

#endif