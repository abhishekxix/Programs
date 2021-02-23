#include <iostream>
#include <memory>
#include "Account_Util.h"
#include "Trust_Account.h"
#include "Checking_Account.h"
#include "illegal_balance_exception.h"
#include "insufficient_funds_exception.h"

int main() 
{
    try
    {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account> ("Moe", 10.0);
        std::cout << "Moes account " << std::endl;
        moes_account->withdraw(200);
    }
    catch(const std::exception& e)
   {
        std::cerr << e.what() << std::endl;
    }
    

    return 0;
}