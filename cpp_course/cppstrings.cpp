#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string s0;
    string s1 {"Apple"}, s2 {"Banana"}, s3 {"Kiwi"}, s4 {"apple"};
    string s5 {s1}, s6 {s1, 0, 3}, s7(10, 'X');

    // cout << s0 << endl; // No garbage  
    // cout << s0.length() << endl; // empty string

    //Initialisation
    cout << "\nInitialisation" << endl
         << "---------------------------------" << endl
         << "s1 is initialised to :: " << s1 << endl
         << "s2 is initialised to :: " << s2 << endl
         << "s3 is initialised to :: " << s3 << endl
         << "s4 is initialised to :: " << s4 << endl
         << "s5 is initialised to :: " << s5 << endl
         << "s6 is initialised to :: " << s6 << endl
         << "s7 is initialised to :: " << s7 << endl;
         
    //Comparison
    cout << boolalpha
         << "\nComparison" << endl
         << "---------------------------------" << endl
         << s1 << " == " << s5 << " :: " << (s1 == s5) << endl   
         << s1 << " == " << s2 << " :: " << (s1 == s2) << endl   
         << s1 << " != " << s2 << " :: " << (s1 != s2) << endl
         << s1 << " < " << s2 << " :: " << (s1 < s2) << endl
         << s2 << " > " << s1 << " :: " << (s1 == s5) << endl
         << s4 << " < " << s5 << " :: " << (s4 < s5) << endl
         << s1 << " == " << "Apple" << " :: " << (s1 == "Apple") << endl;

    //Assignment
    cout << "\nAssinment" << endl
        << "---------------------------------" << endl;

    s1 = "Watermelon";
    cout << "s1 is now :: " << s1 << endl;
    
    s2 = s1;
    cout << "s2 is now :: " << s2 << endl;

    s3 = "Abhishek";
    cout << "s3 is now :: " << s3 << endl;
    s3[0] = 'C';
    cout << "s3 after changing the first letter to C :: " << s3 << endl;
    s3.at(0) = 'P';
    cout << "s3 after changing the first letter to P :: " << s3 << endl;

    //Concatenation
    s3  = "Watermelon";
    cout << "\nConcatenation" << endl
         << "---------------------------------" << endl;

    s3 = s5 + " and " + s2 + " juice.";
    cout << "s3 is now " << s3 << endl;
    //s3 = "Nice" + " cold " +s5  + " juice."; 
    /*It gives a compiler error because we are trying to perform the + operation on two
    c-style string literals which do not work with the + operator. however we can use it on a string object and a c-style string 
    literal because the string literal will get converted into the string object type and the operation is then allowed. */
    
    //for loop
    cout << "\nlooping" << endl
         << "---------------------------------" << endl;
    
    size_t length {s1.length()};
    for(size_t i {0}; i < length; i++)
        cout << s1.at(i);
    cout << endl;

    //range based for loop

    for (auto c : s1)
        cout << c;
    cout << endl;

    //substring
    cout << "\nsubstring" << endl
         << "---------------------------------" << endl;
    s1 = "This is a test";

    cout << s1.substr(0, 4) << endl
         << s1.substr(5, 2) << endl
         << s1.substr(10, 4) << endl;

    //clear
    cout << "\nerase()" << endl
         << "---------------------------------" << endl;
    s1.erase(0, 5);
    cout << "s1 is now :: " << s1 << endl;

    //getline
    cout << "\ngetline()" << endl
         << "---------------------------------" << endl;
    string full_name;

    cout << "Enter your full name -> ";
    getline(cin,full_name);

    cout << "Your full name is :: " << full_name << endl;

    //find
    cout << "\nfind()" << endl
         << "---------------------------------" << endl;
    
    s1 = "The secret word is Boo!";
    string word {};
    
    cout << "Enter the word to find -> ";
    cin >> word;

    size_t position {s1.find(word)};
    
    if(position >= 0 and position < s1.length())
        cout << word << " found at position " << position << " in :: " << s1;
    else 
        cout << word << " not found in :: " << s1;
    cout << endl;
    

    return 0;
}