#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int num {101};
  
    while (!(num < 100))
    {
        system("clear");
        cout << "Enter a number less than 100 -> ";
        cin >> num;
    }
    cout << "\nThanks for the input.";
    
    

    //other logic using boolean flag
    bool done {false};
    int num1 {};
    
    while(!done)
    {
        system("clear");
        cout << "Enter a number less than 100 -> ";
        cin >> num1;

        if(num1 >= 100)
        {
            cout << "Out of range. try again !" << endl;
        } 
        else 
        {
            cout << "\nThanks";
            done = true;
        }
    }
    return 0;
}