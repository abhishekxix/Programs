#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "I_Printable.h"

class Account : public I_Printable
{

    private :
        static constexpr const char *def_name = "Unnamed Account";
        static constexpr double def_balance = 0.0;

    protected :
        std::string name;
        double balance;
    
    public :
        Account(std::string name = def_name, double balance = def_balance);
        //Account(std::string name = "Unnamed Account", double balance = 0.0);
        virtual bool deposit(double amount) = 0;
        virtual void withdraw(double amount) = 0;
        // double get_balance() const;
        bool operator+=(double amount);
        void operator-=(double amount);
        virtual ~Account() = default;
};

#endif