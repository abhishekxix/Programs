#include <iostream>
#include <memory>
#include "Trust_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"
#include "illegal_balance_exception.h"

int main() 
{
    try
    {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account> ("Moe", -10.0);
        std::cout << "Moes account " << std::endl;
    }
    catch(const Illegal_Balance_Exception& e)
    {
        std::cerr << "Couldn't create account. - Negative balance." << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;    

    return 0;
}