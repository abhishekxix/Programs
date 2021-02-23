#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Account
{
    private :
        //attributes
        string name;
        double balance;

    public :
        //methods
        //declared inline
        void set_balance(double bal) {balance = bal;}
        double get_balance() {return balance;}

        //these methods will be defined outside the class declaration 
        void set_name(string name_input);
        string get_name();

        bool withdraw(double amount);
        bool deposit(double amount);
};

void Account::set_name(string name_input)
{
    name = name_input;
}

string Account::get_name()
{
    return name;
}

bool Account::deposit(double amount)
{
    if (balance < 1000000 && amount <= 5000)
    {
        balance += amount;
        return true;
    }
    return false;   
}

bool Account::withdraw(double amount)
{
    if((balance - amount) >= 100 )
    {
        balance -= amount;
        return true;
    }
    return false;
}

int main()
{
    cout << boolalpha;
    
    Account account1;
    account1.set_name("Abhishek Singh");
    account1.set_balance(1'00'000.0);

    cout << "Your name is " << account1.get_name() << endl;

    if(account1.deposit(200))
        cout << "Deposit successful." << endl;
    else
        cout << "Deposit failed - Account is full!" << endl;   
    
    if(account1.withdraw(500.0))
        cout << "Withdrawl successful." << endl;
    else 
        cout << "Withdrawl failed - Insufficient balance!" << endl;
    
    if(account1.withdraw(1500.0))
        cout << "Withdrawl successful." << endl;
    else 
        cout << "Withdrawl failed - Insufficient balance!" << endl;
    
    cout << "Your current account balance is :: " << account1.get_balance() << endl; 

    return 0;
}
