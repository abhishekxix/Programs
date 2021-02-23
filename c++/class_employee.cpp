#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>

class Employee
{
    private :
        std::string name;
        long int id;

    public :
        void get_data();
        void put_data();
};


int main()
{
    size_t n {};
    std::cout << "Enter the number of employees to enter the number -> ";
    std::cin >> n;
    Employee array[n];
    for(int i {}; i < n; i++)
    {
        std::cout << "\nEnter the details of employee " << i + 1 << " :: " << std::endl;
        array[i].get_data();
    }
    
    system("clear");

    for(int i {}; i < n; i++)
    {
        std::cout << "\nThe details of employee " << i + 1 << " :: " << std::endl;
        array[i].put_data();
    }
    return 0;
}


void Employee::get_data()
{
    std::cout << "Enter the name of the employee -> ";
    std::cin >> this->name;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Enter the id of the employee -> ";
    std::cin >> this->id;
}

void Employee::put_data()
{
    std::cout << "The name of the employee is " << this->name <<std::endl
              << "The id of the employee is " << this->id << std::endl;
}