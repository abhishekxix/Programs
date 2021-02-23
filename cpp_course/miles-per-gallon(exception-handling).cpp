#include <iostream>

int main()
{
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    std::cout << "Enter the miles -> ";
    std::cin >> miles;
    std::cout <<"Enter the gallons -> ";
    std::cin >> gallons;

	try
	{
		if(gallons == 0)
			throw 0;
		
		miles_per_gallon = static_cast<double> (miles) / gallons;
		std::cout << "Result :: " << miles_per_gallon << std::endl;
	}	
	catch(int &ex)	//best practice to catch by reference. An r-value reference is not allowed as a catch type 
	{
		std::cerr << "Sorry, can't divide by zero." << std::endl;	//std::cerr is a stream reserved for error messages
	}
    std::cout << "Bye" << std::endl;
    
    return 0;
}