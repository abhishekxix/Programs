#include <iostream>

class Account
{
    public :
        virtual void withdraw(double amount)
        {
            std::cout << "Account::withdraw()" << std::endl;
        }
        virtual ~Account() {}
};

class Savings : public Account
{
    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "Savings::withdraw()" << std::endl;
        }
        virtual ~Savings() {}
};

class Checking : public Account
{
    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "Checking::withdraw()" << std::endl;
        }
        virtual ~Checking() {}
};

class Trust : public Account
{
    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "Trust::withdraw()" << std::endl;
        }
        virtual ~Trust() {}
};

void do_withdraw(Account &account, double amount = 200)     //expects an account class reference and dynamically binds the withdraw() method with the object.
{
    account.withdraw(amount);
}


int main()
{
    Account a;
    Account &ref {a};
    ref.withdraw(100);

    Trust t;
    Account &ref1 {t};
    ref1.withdraw(200);

    Account a1;
    Savings a2;
    Checking a3;
    Trust a4;

    do_withdraw(a1);
    do_withdraw(a2);
    do_withdraw(a3);
    do_withdraw(a4);
    
    return 0;
}