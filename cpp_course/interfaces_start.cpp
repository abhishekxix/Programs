#include <iostream>


class Account 
{
    friend std::ostream &operator<<(std::ostream &out, const Account &account);

    public :
        virtual void withdraw(double amount) 
        {
            std::cout << "In Account::withdraw()" << std::endl;
        }
        virtual ~Account() {}
};

std::ostream &operator<<(std::ostream &out, const Account &account)
{
    out << "Account display";
    return out;
}

class Checking : public Account 
{
    friend std::ostream &operator<<(std::ostream &out, const Checking &account);

    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "In Checking::withdraw()" << std::endl;
        }
        virtual ~Checking() {}
};

std::ostream &operator<<(std::ostream &out, const Checking &account)
{
    out << "Checking display";
    return out;
}

class Savings : public Account
{
    friend std::ostream &operator<<(std::ostream &out, const Savings &account);

    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "In Savings::withdraw()" << std::endl;
        }
        virtual ~Savings() {}
};

std::ostream &operator<<(std::ostream &out, const Savings &account)
{
    out << "Savings display";
    return out;
}

class Trust : public Account
{
    friend std::ostream &operator<<(std::ostream &out, const Trust &account);

    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "In Trust::withdraw()" << std::endl;
        }
        virtual ~Trust() {}
};

std::ostream &operator<<(std::ostream &out, const Trust &account)
{
    out << "Trust display";
    return out;
}

int main()
{
   /*  Account a;
    std::cout << a << std::endl;

    Checking c;
    std::cout << c << std::endl;

    Savings s;
    std::cout << s << std::endl;

    Trust t;
    std::cout << t << std::endl; */

    Account *p1 {new Account()};
    std::cout << *p1 << std::endl;
    
    Account *p2 {new Checking()};
    std::cout << *p2 << std::endl;


    return 0;
}