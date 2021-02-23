#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;

int main()
{
    string alphabet {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"}, key {"MLPNKOBJIVHUCGYXFTZDRSEAWQmlpnkobjivhucgyxftzdrseawq"};
    //string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"}, key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string secret_message;

    cout << "Enter your secret message -> ";
    getline(cin,secret_message);

    string encrypted_message {};

    cout << "Encrypting message..." << endl;

    size_t position {};
    char new_char {};

    for (char c : secret_message)
    {
        position  = alphabet.find(c);

        if(position != string::npos)
        {
            new_char = key.at(position);
            encrypted_message += new_char;
        }   
        else 
        {
            encrypted_message += c;
        } 
    }

    cout << "The encrypted message is :: " << encrypted_message << endl;

    cout << "\nDecrypting message..." << endl;

    string decrypted_message;

    for (char c : encrypted_message)
    {
        position  = key.find(c);

        if(position != string::npos)
        {
            new_char = alphabet.at(position);
            decrypted_message += new_char;
        }   
        else 
        {
            decrypted_message += c;
        } 
    }
    cout << "The decrypted message is :: " << decrypted_message << endl;

    return 0;
}