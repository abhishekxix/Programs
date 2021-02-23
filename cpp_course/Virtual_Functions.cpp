#include <iostream>

class Account
{
    public :
        virtual void withdraw(double amount)
        {
            std::cout << "In Account::withdraw()" << std::endl;
        }
};

class Checking : public Account
{
    public :
        virtual void withdraw(double amount)
        {
            std::cout << "In Checking::withdraw()" << std::endl;
        }
};

class Savings : public Account
{
    public :
        virtual void withdraw(double amount)
        {
            std::cout << "In Savings::withdraw()" << std::endl;
        }
};

class Trust : public Account
{
    public :
        virtual void withdraw(double amount)
        {
            std::cout << "In Trust::withdraw()" << std::endl;
        }
};

int main()
{
    std::cout << "\n===Pointer===\n";
    Account *p1 {new Account ()}, *p2 {new Savings ()}, *p3 {new Checking ()}, *p4 {new Trust ()};

    p1->withdraw(100);
    p2->withdraw(100);
    p3->withdraw(100);
    p4->withdraw(100);

    std::cout << "\n===Cleaning up===\n";
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}