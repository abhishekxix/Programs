#include <iostream>
#include <iomanip>
#include "Account.h"


int main() 
{
    std::cout << std::boolalpha;
    
    Account account1;
    account1.set_name("Abhishek Singh");
    account1.set_balance(1'00'000.0);

    std::cout << "Your name is " << account1.get_name() << std::endl;

    if(account1.deposit(200))
        std::cout << "Deposit successful." << std::endl;
    else
        std::cout << "Deposit failed - Account is full!" << std::endl;
    
    if(account1.withdraw(500.0))
        std::cout << "Withdrawl successful." << std::endl;
    else 
        std::cout << "Withdrawl failed - Insufficient balance!" << std::endl;
    
    if(account1.withdraw(1500.0))
        std::cout << "Withdrawl successful." << std::endl;
    else 
        std::cout << "Withdrawl failed - Insufficient balance!" << std::endl;
    
    std::cout << "Your current account balance is :: " << account1.get_balance() << std::endl; 

    return 0;
}