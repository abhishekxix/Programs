#include <iostream>
#include "Savings-Account.h"    //we can also create Account objects because Savings account is also an account

int main() 
{
    std::cout << "\n===Account class===" << std::endl;
    Account a1 {1000};
    std::cout << a1 << std::endl;
    
    a1.deposit(500);
    std::cout << a1 << std::endl;
    
    a1.withdraw(500);
    std::cout << a1 << std::endl;
    
    a1.withdraw(5000);
    std::cout << a1 << std::endl;

    std::cout << "\n===Savings Account class===" << std::endl;
    Savings_Account s1 {1000, 5};
    std::cout << s1 << std::endl;
    
    s1.deposit(1000);
    std::cout << s1 << std::endl;
    
    s1.withdraw(2000);
    std::cout << s1 << std::endl;

    s1.withdraw(1000);
    std::cout << s1 << std::endl;

    return 0;
}