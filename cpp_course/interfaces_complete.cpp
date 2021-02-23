#include <iostream>

class I_Printable
{
    friend std::ostream &operator<<(std::ostream &out, const I_Printable &object);

    public :    
        virtual void print(std::ostream &out) const = 0;
        virtual ~I_Printable() {}
};

std::ostream &operator<<(std::ostream &out, const I_Printable &object)
{
    object.print(out);
    return out;
}


class Account : public I_Printable
{
    public :
        virtual void withdraw(double amount) 
        {
            std::cout << "In Account::withdraw()" << std::endl;
        }
        virtual void print(std::ostream &out) const override
        {
            out << "Account display.";
        }
        virtual ~Account() {}
};



class Checking : public Account 
{

    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "In Checking::withdraw()" << std::endl;
        }
        virtual void print(std::ostream &out) const override
        {
            out << "Checking display.";
        }
        virtual ~Checking() {}
};


class Savings : public Account
{

    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "In Savings::withdraw()" << std::endl;
        }
        virtual void print(std::ostream &out) const override
        {
            out << "Savings display.";
        }
        virtual ~Savings() {}
};



class Trust : public Account
{

    public :
        virtual void withdraw(double amount) override
        {
            std::cout << "In Trust::withdraw()" << std::endl;
        }
        virtual void print(std::ostream &out) const override
        {
            out << "Trust display.";
        }
        virtual ~Trust() {}
};

class Dog : public I_Printable
{
    public :
        virtual void print(std::ostream &out) const override
        {
            out << "Woof Woof!";
        }
        virtual ~Dog() {}
};

void print(const I_Printable &object)
{
    std::cout << object << std::endl;
}

int main()
{
    Dog *d {new Dog()};
    std::cout << *d << std::endl;
    print(*d);
    // std::cout << d << std::endl;
    // d.print(std::cout);
    /* Account a;
    std::cout << a << std::endl;

    Checking c;
    std::cout << c << std::endl;
                                    //static binding.
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