#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   system("clear");
    int number_of_dollars {}, number_of_quarters {}, number_of_dimes {}, number_of_nickels {}, number_of_pennies {},  number_of_cents {};
    const int dollar_cents {100}, quarter_cents {25}, dime_cents {10}, nickel_cents {5};

    cout << "Enter an amount in cents -> ";
    cin >> number_of_cents;

    number_of_dollars = number_of_cents / dollar_cents;
    number_of_cents -= (number_of_dollars * dollar_cents);

    number_of_quarters = number_of_cents / quarter_cents;
    number_of_cents -= (number_of_quarters * quarter_cents);

    number_of_dimes = number_of_cents / dime_cents;
    number_of_cents -= (number_of_dimes * dime_cents);

    number_of_nickels = number_of_cents / nickel_cents;
    number_of_cents -= (number_of_nickels * nickel_cents);

    number_of_pennies = number_of_cents;
    
    system("clear");

    cout << "You can provide the following change as follows ::\n";

    if(number_of_dollars > 0)
        cout << endl << "Dollars = " << number_of_dollars;

    if(number_of_quarters > 0)
        cout << endl << "Quarters = " << number_of_quarters;
    
    if(number_of_dimes > 0)
        cout << endl << "Dimes = " << number_of_dimes;
    
    if(number_of_nickels > 0)
        cout << endl << "Nickels = " << number_of_nickels;
    
    if(number_of_pennies > 0)
        cout << endl << "Pennies = " << number_of_pennies;
    
    return 0;
}