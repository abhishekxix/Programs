#include <iostream>
#include "Mystring.h"
#include <vector>

int main() 
{
    Mystring a {"Holla"};       //Overloaded constructor
    a = Mystring {"Holla"};     //Overloaded constructor instantiates an rvalue then Move assignment takes place.
    a = "bonjour";      //Overloaded constructor instantiates an rvalue then Move assignment takes place.

    Mystring empty;      //No arg constructor
    Mystring larry {"Larry"};    //Overloaded constructor
    Mystring stooge {larry};     //copy constructor
    Mystring stooges;    //no arg constructor
    
    empty =  stooge;     //copy assignment operator because stooges is an lvalue.
    empty = "Funny";     //Move assignment operator because "Funny" is an rvalue.

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    stooges = "Larry, Moe, Curly";
    stooges.display();

    return 0;
}