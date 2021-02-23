#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings-Account.h"
#include <iostream>

class Trust_Account : public Savings_Account
{

    private :
        static constexpr const char* def_name = "Unnamed Trust Account";
        static constexpr double def_balance  = 0.0;
        static constexpr double def_interest_rate  = 0.0;
        static constexpr int max_number_of_withdrawls = 3;
        static constexpr double bonus_threshold = 5000.00;

    protected :
        int number_of_withdrawls;    

    public :
        Trust_Account(std::string name = def_name, double balance = def_balance,double interest_rate = def_interest_rate, int number_of_withdrawls = 0);
        virtual bool deposit(double amount) override;
        virtual void withdraw(double amount) override;
        virtual void print(std::ostream &out) const override;
        bool operator+=(double amount);
        void operator-=(double amount);
        virtual ~Trust_Account() = default;
};

#endif