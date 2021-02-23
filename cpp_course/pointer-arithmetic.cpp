#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("clear");
    int scores [] {100, 95, 89, 68, -1};
    int *scores_ptr {scores};


    for(; *scores_ptr != -1; scores_ptr++)
        cout << *scores_ptr << " ";
    cout << endl;

    cout << "------------------------\n";
    
    scores_ptr = scores;
    for(; *scores_ptr != -1;)
        cout << *scores_ptr++ << " ";
    cout << endl;

    cout << "------------------------\n";
    
    string s1 {"Frank"}, s2 {"Frank"}, s3 {"James"};
    string *p1 {&s1}, *p2 {&s2}, *p3 {&s1};

    cout << boolalpha;
    cout << p1 << " == " << p2 << " :: " << (p1 == p2) << endl
         << p1 << " == " << p3 << " :: " << (p1 == p3) << endl
         << *p1 << " == " << *p2 << " :: " << (*p1 == *p2) << endl
         << *p1 << " == " << *p3 << " :: " << (*p1 == *p3) << endl;

    p3 = &s3;
    cout << *p1 << " == " << *p3 << " :: " << (*p1 == *p3) << endl;

    cout << "------------------------\n";
    char name [] {"Frank"};

    char *char_ptr1 {nullptr}, *char_ptr2 {nullptr};

    char_ptr1 = &name[0];
    char_ptr2 = &name[3];

    cout << "In the string :: " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1)
         << " characters away from " << *char_ptr1 << "." << endl;
    

    return 0;
}