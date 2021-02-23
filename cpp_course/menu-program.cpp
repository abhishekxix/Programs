#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char selection {};

    do
    {
        cout << "\n---------------------------------------" << endl
             << "1. Do this.\n"
             << "2. Do that.\n"
             << "3. Do something else.\n"
             << "C. Clear screen.\n"
             << "X. Exit.\n"
             << "Enter your selection -> ";
        cin >> selection;

        switch (selection)
        {
        case '1':
            cout << "\nYou chose 1.\nDoing this.....";
            break;
        case '2' :
            cout << "\nYou chose 2.\nDoing that.....";
            break;
        case '3' :
            cout << "\nYou chose 3.\nDoing something else.....";
            break;
         case 'X' :
         case 'x' :
            cout << "\nYou chose X.\nExiting...............";
            break;
        case 'C' :
        case 'c' :
            system("clear");
            break;
        default:
            cout << "\nInvalid option! Try again.";
        }
    }while (selection != 'x' && selection != 'X');

    return 0;
}