#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
    char first_name[20] {}, last_name[20] {}, full_name[50] {}, temp[50] {};

    // cout << first_name; //will likely display garbage
    // cout << "Please enter your first name -> ";
    // cin >> first_name;

    // cout << "Please enter your last name -> ";
    // cin >> last_name;


    // cout << "\nHello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name " << last_name << " has " << strlen(last_name) << " characters." << endl;
    
    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);

    // cout << "Your full name is " << full_name << endl;

    // cout << "Enter your full name -> ";
    // cin >> full_name;
    // cout << "Your full name is " << full_name << endl;


    cout << "Enter your full name -> ";
    cin.getline(full_name, 50);//the max. length that can be entered in the following string is 50. after that the input will terminate.
    cout << "Your full name is " << full_name << endl;

    // cout << "--------------------------------------------------\n";
    strcpy(temp, full_name);

    // if(strcmp(temp, full_name) == 0)
    
    //     cout << temp << " and " << full_name << " are same." << endl;
    // else 
    //     cout << temp << " and " << full_name << " are different." << endl;
    // cout << "--------------------------------------------------\n";

    size_t length = strlen(full_name);
    for (size_t i {0}; i < length; i++)
        if(isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);   
    
    cout << "Your name is " << full_name << endl;

    cout << "--------------------------------------------------\n";
    if(strcmp(temp, full_name) == 0)
    
        cout << temp << " and " << full_name << " are same." << endl;
    else 
        cout << temp << " and " << full_name << " are different." << endl;
    cout << "--------------------------------------------------\n";

    return 0;
}