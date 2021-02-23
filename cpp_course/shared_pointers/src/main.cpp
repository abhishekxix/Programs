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

void func(std::shared_ptr<Test> p)
{
    std::cout << "Use count :: " << p.use_count() << std::endl;     // 2 if we pass by value and 1 if we pass by reference
}

int main() 
{
    //use_count() - The number of shared_ptrs pointing to the same object on the heap
    std::shared_ptr<int> p1 {new int {100}};
    std::cout << "Use count :: " << p1.use_count() << std::endl;

    std::shared_ptr<int> p2 {p1};   //shared ownership
    std::cout << "Use count :: " << p1.use_count() << std::endl;

    p1.reset();     //decrements the use_count and p1 is nulled out
    std::cout << "Use count :: " << p1.use_count() << std::endl;
    std::cout << "Use count :: " << p2.use_count() << std::endl;

    std::cout << "\n====================================================" << std::endl;
    std::shared_ptr<Test> ptr = std::make_shared<Test> (100);
    func(ptr);
    std::cout << "Use count :: " << ptr.use_count() << std::endl;
    {
        std::shared_ptr<Test> ptr1 {ptr};
        std::cout << "Use count :: " << ptr.use_count() << std::endl;
        {
            std::shared_ptr<Test> ptr2 {ptr};
            std::cout << "Use count :: " << ptr.use_count() << std::endl;
            ptr.reset();
        }
        std::cout << "Use count :: " << ptr.use_count() << std::endl;
    }
    std::cout << "Use count :: " << ptr.use_count() << std::endl;

    std::cout << "\n====================================================" << std::endl;
    std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account> ("Larry", 10000, 3.1);
    std::shared_ptr<Account> acc2 = std::make_shared<Trust_Account> ("Moe", 5000);
    std::shared_ptr<Account> acc3 = std::make_shared<Trust_Account> ("Curly", 6000);

    std::vector<std::shared_ptr<Account>> accounts;
    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);   //accounts.push_back(std::move(acc3)); can also be used with shared pointers.   

    for(const auto &acc : accounts)
    {
        std::cout << *acc << std::endl
                  << "Use count :: " << acc.use_count() << std::endl;
    }
    std::cout << "\n====================================================" << std::endl;
    
    return 0;
}