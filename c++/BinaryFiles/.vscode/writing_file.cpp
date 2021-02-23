/* Q1: You are required to create a file loan.dat in which you will store customer records who
took loan from bank.The fields of records are customer name, customer ID ,amount of loan
,time and rate of interest. Calculate the total Simple interest earned by bank from all
customers ,also print the record of the customer who pay maximum interest ,if more than one
customer exist who pay maximum interest print all such records . */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include <cstdlib>

class Account {
    
    private :
        std::string name;
        unsigned long int customerId;
        double amountOfLoan;
        double time;
        double rateOfInterest;

        public :
            static constexpr const double maxInterest = 13.4;
            Account(std::string name = "No Name", unsigned long int customerId = 0UL,
                    double amountOfLoan = 1'00'000.0, double time = 5.0, 
                    double rateOfInterest = 8.9);
            
            double getSI() {return (amountOfLoan * rateOfInterest * time) / 100;}
            void set();
            void display();
};

Account::Account(std::string name, unsigned long int customerId,
                    double amountOfLoan, double time, 
                    double rateOfInterest) 
    : name {name}, customerId {customerId}, amountOfLoan {amountOfLoan}, time {time}, rateOfInterest {rateOfInterest} {}

void Account::set() {
    system("clear");
    std::cout << "\nEnter the details of the account ->\n"
              << "Name : ";
    
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::getline(std::cin, name);

    std::cout << "Customer ID : ";
    std::cin >> customerId;

    std::cout << "Amount : ";
    std::cin >> amountOfLoan;

    std::cout << "Time : ";
    std::cin >> time;

    std::cout << "Rate of interest : ";
    std::cin >> rateOfInterest;
}

void Account::display() {
    std::cout << "\nEnter the details of the account ->\n"
              << "Name : ";
    std::cout << name;

    std::cout << "\nCustomer ID : ";
    std::cout <<  customerId;

    std::cout << "\nAmount : ";
    std::cout <<  amountOfLoan;

    std::cout << "\nTime : ";
    std::cout << time;

    std::cout << "\nRate of interest : ";
    std::cout <<  rateOfInterest;
}

int main() {

    std::vector<Account> accounts;
    
    

    std::fstream loan_file {"loan", std::ios::binary | std::ios::out | std::ios::trunc};
    if(!loan_file)
        std::cout << 1;
    Account acc {};

    loan_file.write((char*) &acc, sizeof acc);
    
    loan_file.close();
    return 0;
}