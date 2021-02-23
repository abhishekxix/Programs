#include <iostream>
#include <string>

class Account {
protected :
    double balance;

public  :
    Account(double balance = 0.0);
    inline double get_balance();
    inline void set_balance(double amount);
};

Account::Account(double balance)
    : balance {} {
    if(balance < 0.0)
        throw std::string {"Illegal Balance"};
    this->balance = balance;
}

inline double Account::get_balance() {
    return balance;
}

inline void Account::set_balance(double amount) {
    if(amount < 0.0)
        throw std::string {"Illegal amount"};
    this->balance = amount;
}


int main() {
    try {
        Account Abhishek {0.0};
        Abhishek.set_balance(-1);
    }

    catch(std::string &exception) {
        std::cout << exception << "\n";
    }
    try {
        Account acc {-2};
        acc.set_balance(0);
    }

    catch(std::string &exception) {
        std::cout << exception << "\n";
    }
    return 0;
}
