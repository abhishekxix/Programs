#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings-Account.h"
#include <iostream>

class Trust_Account : public Savings_Account
{
    friend std::ostream &operator<<(std::ostream &out, const Trust_Account &account);

    private :
        static constexpr const char* def_name = "Unnamed Trust Account";
        static constexpr double def_balance  = 0.0;
        static constexpr double interest_rate  = 0.0;
        static constexpr int max_number_of_withdrawls = 3;
        static constexpr double bonus_threshold = 5000.00;

    protected :
        int number_of_withdrawls;    

    public :
        Trust_Account(std::string name = def_name, double balance = def_balance,double interest_rate = 0.0, int number_of_withdrawls = 0);
        bool deposit(double amount);
        bool withdraw(double amount);
        bool operator+=(double amount);
        bool operator-=(double amount);
};

#endif