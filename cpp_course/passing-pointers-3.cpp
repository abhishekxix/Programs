#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector <string> *const v);
void display(int *array, int sentinel);

int main()
{
    cout << "---------------------------\n";
    vector <string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);    
    cout << "---------------------------\n";
    int scores [] {100, 98, 97, 79, 85, -1};
    display(scores, -1);

    return 0;
}

void display(const vector <string> *const v)
{
    for(auto str : *v)
        cout << str << " ";
    cout << endl;
   /*  v ->at(0) = "Funny";// or we can use (*v).at(0) = "Funny"; */
}

void display(const int *array, int sentinel)
{
    for(;*array != sentinel;)
         cout << *array++ << " ";    //Dereference array, print the element and then increment the array to the next elemene
    cout << endl;
}