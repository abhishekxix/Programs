#include <iostream>
#include <vector>
#include "Trust_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"

int main() 
{
    std::cout.precision(2);
    std::cout << std::fixed;
    Account *ptr {new Savings_Account()};
    std::cout << *ptr << std::endl;
    Account  *p1 {new Savings_Account("Abhishek", 980, 9)}, *p2 {new Checking_Account("Batman", 700)}, *p3 {new Trust_Account("Wonder Woman", 600, 7)};

    std::vector <Account*> accounts {p1, p2, p3};
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 300);
    display(accounts);
    
    delete p1;
    delete p2;
    delete p3;

    return 0;
}