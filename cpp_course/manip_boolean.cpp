#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "noboolalpha - default (10 == 10) :: " << (10 == 10) << std::endl
              << "noboolalpha - default (10 == 20) :: " << (10 == 20) << std::endl; 
    
    //Set to true/false formatting
    std::cout << std::boolalpha    /* change to true/false */ 
              << "boolalpha (10 == 10) :: " << (10 == 10) << std::endl
              << "boolalpha (10 == 20) :: " << (10 == 20) << std::endl;
    //Setting stays for future boolean insertions

    //toggle to 0/1
    std::cout << std::noboolalpha
              << "noboolalpha -  (10 == 10) :: " << (10 == 10) << std::endl
              << "noboolalpha -  (10 == 20) :: " << (10 == 20) << std::endl; 
    
    // set back to true/false using setf method.
    std::cout.setf(std::ios::boolalpha);
    std::cout<< "boolalpha (10 == 10) :: " << (10 == 10) << std::endl
              << "boolalpha (10 == 20) :: " << (10 == 20) << std::endl;

    //set back to default using resetiosflags manipulator
    std::cout << std::resetiosflags(std::ios::boolalpha);  
    std::cout<< "default (10 == 10) :: " << (10 == 10) << std::endl
             << "default (10 == 20) :: " << (10 == 20) << std::endl;

    return 0;
}