#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << boolalpha;
    string s1;
    string s2 {"Frank"};
    // string s3 {s2};
    // string s4 {"Frank", 3};
    // string s5 {s3, 0, 2};
    // string s6 (3 , 'X');
    // cout << s4 << endl << s5 << endl << s6;
    // cout << endl << s2.substr(2, 3) << endl;

    s1 = s2;

    cout << "The strings have been copied and the result is :: " << s1 << endl;
    
    cout << "Enter another string -> ";
    getline(cin, s2);// getline(cin, s2);

    cout << "s2 is :: " << s2 << endl;

    cout << (s1 == s2) << endl;

    s1.erase(0, 2);

    cout << "S1 is :: " << s1 << endl; 

    s1.clear();
    cout << "S1 is :: " << s1 << endl; 

    if (s2.find("Abhishek") != string::npos) //rfind can also be used. and we can also search from a particular index by writing it after the search item separated by a comma.
        cout << "Hey Abhishek" << endl;
    else 
        cout << "I really don't know you" << endl;

    cout << s2.substr(2, 4) << endl;// s2.substr(start_index, length_of_the_substring);

    cout << "S2 is " << s2.length() << " characters long." << endl;

    for (auto s : s2)
        cout << s << endl;
    for (int s : s2)
        cout << s << endl;
    

    return 0;
}