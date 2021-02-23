#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
    string alphabet {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"}, key {"MLPNKOBJIVHUCGYXFTZDRSEAWQmlpnkobjivhucgyxftzdrseawq"}, message {};
    string encrypted_message {}, decrypted_message {};

    cout << "Welcome to the substitution cipher" << endl
         << "----------------------------------" << endl;
    
    cout << "Enter the message you want to encrypt -> ";
    getline(cin,message);
    
    size_t length {message.length()}, position {};
    
    for(char c : message)// for (size_t i {0}; i < length; i++)
    {
        position = alphabet.find(c);
        if(position != string::npos)
            encrypted_message += key.at(position);
        else 
        {
            encrypted_message += c;
        }
    }
    
    cout << "Encrypting ................" << endl
         << "\nThe encrypted message is ::" << endl
         << "---------------------------" << endl
         << encrypted_message << endl;

    for(char c : message)// for (size_t i {0}; i < length; i++)
        {
            position = key.find(c);
            if(position != string::npos)
                decrypted_message += alphabet.at(position);
            else 
            {
                decrypted_message += c;
            }
        }
    cout << "\nDecrypting ................" << endl
         << "\nThe decrypted message is ::" << endl
         << "---------------------------" << endl
         << decrypted_message;   


    return 0;
}