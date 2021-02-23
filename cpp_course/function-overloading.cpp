#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int num);
void print(float num);
void print(string s);
void print(string s, string t);
void print(vector <string> v);


int main()
{
    print(100);
    print('A'); //A character is always promoted to an int and should display 65 ASCII (A).
    print(123.5F);//floating point literals are by default doubles.
    print("C-style string"); //C-style string is converted to C++ string object.
    
    string s{"C++ string"};
    print(s);
    print("C-style string", s);
    
    vector <string> three_stooges {"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    return 0;
}

void print(int num)
{
    cout << "Printing int :: " << num << endl; 
}

void print(float num)
{
    cout << "Printing float :: " << num << endl;
}

void print(string s)
{
    cout << "Printing string :: " << s << endl;
}

void print(string s, string t)
{
    cout << "Printing string s :: " << s << endl
         << "Printing string t :: " << t << endl; 
}

void print(vector <string> v)
{
    cout << "Printing vector of strings :: " << endl;
    for (auto s : v)
        cout << s + " ";
    cout << endl;
}