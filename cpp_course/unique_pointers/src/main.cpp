#include <iostream>
#include <memory>
#include <vector>

#include "Trust_Account.h"
#include "Checking_Account.h"
#include "Account_Util.h"

class Test
{
    private :
        int data;

    public :
        Test(int data = 0) : data {data} {std::cout << "Test constructor(" << data << ")" << std::endl;}
        int get_data() {return data;}
        ~Test() {std::cout << "Test destructor(" << data << ")" << std::endl;}
};


int main() 
{
   /* Test t1 {1000};
    Test *t1 {new Test {1000}};
    delete t1;
    std::unique_ptr<Test> t1 {new Test {100}}; 
    std::unique_ptr t2 = std::make_unique<Test> (100);
    // auto t3 = std::make_unique<Test> (300);
    std::unique_ptr<Test> t3;
    // t3 = t1;     //compiler error
    t3 = std::move(t1);     //perfectly legeal since we cannot copy or assign unique pointers but we can indeed move them

    if(!t1)
        std::cout << "t1 is a nullptr." << std::endl;
 */
    std::unique_ptr<Account> a1 = std::make_unique<Checking_Account> ("Moe", 5000);
    std::cout << *a1 << std::endl;

    std::vector <std::unique_ptr<Account>> accounts;

    accounts.push_back(std::make_unique<Checking_Account> ("James", 1000));
    accounts.push_back(std::make_unique<Savings_Account> ("Billy", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust_Account> ("Bobby", 5000, 4.5));

    for(const auto &acc : accounts)
        std::cout << *acc << std::endl;
    return 0;
}