#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>


using namespace std;

int main()
{
    system("clear");
    string alphabet {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM ."}, key {"MLPNKOBJIVHUCGYXFTZDRSEAWQmlpnkobjivhucgyxftzdrseawq&~"}, message {};
    // string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}, key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"}, message {};
    char option {};
    do
    {
        cout << "Welcome to the substitution cipher" << endl
             << "----------------------------------" << endl
             <<"\nWhat do you wish to do? -> " << endl
             << "E -> encrypt a message." << endl
             << "D -> decrypt a message." << endl
             << "Q -> QUIT" << endl;
        
        cout << "Enter you choice -> ";
        option = getchar();
        option = toupper(option);
        system("clear");

        if (option == 'E')
        {
            cout << "Enter the message you want to encrypt -> ";
            getline(cin.ignore(),message);
            size_t length {message.length()}, position {};
            for (size_t i {0}; i < length; i++)
            {
                position = alphabet.find(message.at(i));
                if(position != string::npos)
                    message.at(i) = key.at(position);
            }
            cout << "Encrypting ................" << endl
                 << "\nThe encrypted message is ::" << endl
                 << "---------------------------" << endl
                 << message << endl;
        }
        else if (option == 'D')
        {
            cout << "Enter the message you want to decrypt -> ";
            getline(cin.ignore(),message);
            size_t length {message.length()}, position {};
            for (size_t i {0}; i < length; i++)
            {
                position = key.find(message.at(i));
                if(position != string::npos)
                    message.at(i) = alphabet.at(position);
            }
            cout << "\nDecrypting ................" << endl
                 << "\nThe decrypted message is ::" << endl
                 << "---------------------------" << endl
                 << message << endl;   
        }
        else if (option == 'Q')
        {
            cout << "Quitting.." << endl;
        }
        else 
        {
            cout << "Invalid choice!" << endl;
        }
    }while(option != 'Q');

    
    return 0;
}