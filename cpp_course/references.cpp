#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num {100};
    int &ref {num};

    cout << "num is :: " << num << endl
         << "ref is :: " << ref << endl;

    num = 200;
    cout <<"\n-----------------------------------\n";
    cout << "num is :: " << num << endl
         << "ref is :: " << ref << endl;

    ref = 300;
    cout <<"\n-----------------------------------\n";
    cout << "num is :: " << num << endl
         << "ref is :: " << ref << endl;
    
    cout <<"\n-----------------------------------\n";
    vector <string> stooges {"Larry", "Moe", "Curly"};

    for(auto str : stooges)
        str = "funny";  //copies of the actual elements are changed.
    
    cout << "Stoogs are :: ";
    for (auto str : stooges)
       cout << str << " ";
    cout << endl;
    
    for (auto &str : stooges) 
        str = "funny";  //actual elements of the stooges will get changed.
    
    cout << "Now, stooges are :: ";
    for(const auto &str : stooges)
        cout << str << " ";
    
    cout << endl;
    

    return 0;
}