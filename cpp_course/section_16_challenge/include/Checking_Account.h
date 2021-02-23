#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"
#include <iostream>

class Checking_Account : public Account
{

    private :
        static constexpr const char* def_name  = "Unknown Checking Account";
        static constexpr double def_balance = 0.0;
        static constexpr double withdrawl_fee = 1.50;

    public  :
        Checking_Account(std::string name = def_name, double balance = def_balance);
        virtual bool withdraw(double amount) override;
        virtual bool deposit(double amount) override;   
        virtual void print(std::ostream &out) const override;  
        bool operator-=(double amount);
        virtual ~Checking_Account() = default;
};

#endif