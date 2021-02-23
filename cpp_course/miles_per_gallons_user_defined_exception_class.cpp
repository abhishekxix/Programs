#include <iostream>

class Divide_By_Zero_Error
{};

class Negative_Value_Error
{};

double calculate_miles_per_gallon(const int &miles, const int &gallons)
{
    if(gallons == 0)
        throw Divide_By_Zero_Error {};
    if(gallons < 0 || miles < 0)
        throw Negative_Value_Error {};
    return static_cast<double> (miles) / gallons;
}

int main()
{
    int miles {}, gallons {};
    double miles_per_gallon {};

    std::cout << "Enter the miles driven -> ";
    std::cin >> miles;
    std::cout << "Enter the gallons used -> ";
    std::cin >> gallons;

    try 
    {
        miles_per_gallon = calculate_miles_per_gallon(miles, gallons);
        std::cout << "Result :: " << miles_per_gallon << std::endl;
    }
    catch(const Divide_By_Zero_Error &ex)
    {
        std::cerr << "Error! Can't divide by zero" << std::endl;
    }

    catch(const Divide_By_Zero_Error &ex)
    {
        std::cerr << "Error! One of the entries is negative." << std::endl;
    }

    std::cout << "Bye" << std::endl;
    return 0;
}