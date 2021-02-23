//euros to us dollars

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    system("clear");

    const float factor {1.19};
    
    double dollars {0}, euros {0};

    int choice {0};

    cout << "This ptogram performs the interconversion of euros and dollars."
         << endl
         << "Provide the input ::"
         << endl
         << "1 -> Dollars."
         << endl 
         << "2 -> Euros."
         << endl
         << "input -> ";
    
    cin >> choice;

    switch(choice)
    {
        case 1 :
            cout << endl
                 << "Enter the amount in dollars :: ";
            
            cin >> dollars;

            euros = dollars / factor;
            cout << "\n$" << dollars 
                 << " = " 
                 << euros << " Euros.";
            
            break;
        
        case 2 :
             cout << endl
                 << "Enter the amount in euros :: ";
            
            cin >> euros;

            dollars = factor * euros;
            cout << endl 
                 << euros << " Euros" 
                 << " = " 
                 << "$" << dollars;
            break;
        
        default : cout << "\nInvalid input!";
    }
  
    return 0;

}