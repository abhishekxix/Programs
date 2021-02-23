#include <iostream>

using namespace std;

int main()
{  
   char letter_grade {};

   cout << "Enter the letter grade that you expect on the exam -> ";
   cin >> letter_grade;

   switch(letter_grade)
   {
    case 'a' :
    case 'A' :
        cout << "You need a 90 or above, Study hard!\n";
        break;  
    case 'b' :
    case 'B' :
        cout << "You need 80-89 for a B. Go study!\n";
        break;
    case 'c' :
    case 'C' :
        cout << "You need 70-79 for an average grade.\n";
        break;
    case 'd' :
    case 'D' :
        cout << "You need 60-69 for a D.\n";
        break;
    case 'f' :
    case 'F' :
        {
            char confirm {};
            cout << "Are you sure?(Y or N) -> ";
            cin >> confirm;
            if(confirm == 'Y' or confirm == 'y')
                cout << "Okay, I guess you didn't study.\n";
            else if(confirm == 'n' || confirm == 'N')
                cout << "Good. Go study.\n";
            else 
                cout << "Illegal choice.\n";
            break;
        }
    default : 
        cout << "Invalid input! Not a valid grade.";
   }    

   return 0;
}