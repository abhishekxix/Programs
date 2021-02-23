#include <iostream>
#include <vector>
#include "../include/Trust_Account.h"
#include "../include/Checking_Account.h"
#include "../include/Account_Util.h"

int main() 
{
    std::cout.precision(2);
    std::cout << std::fixed;

   /*  //Accounts
    std::vector <Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000});
    accounts.push_back(Account {"Curly", 5000});

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000); */

    
    std::vector <Checking_Account> savings_accounts;
    savings_accounts.push_back(Checking_Account {});
    savings_accounts.push_back(Checking_Account {"Superman"});
    savings_accounts.push_back(Checking_Account {"Batman", 2000});
    savings_accounts.push_back(Checking_Account {"Wonder woman", 5000});

    display(savings_accounts);
    deposit(savings_accounts, 1000);
    withdraw(savings_accounts, 2000);

    return 0;
}