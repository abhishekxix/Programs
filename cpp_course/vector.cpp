#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");
    
    vector <int> vec (5,10);
   
    int n {5};
    cout << "Initial values ::\n";

    for(int i = 0; i < 5; i++)
    {
        cout << vec.at(i) << endl;
    }

    int element {0};
    cout << "The current size of the vector is :: " 
         << vec.size() 
         << endl
         << "Enter a new element in the vector :: ";
    cin >> element;

    vec.push_back(element);
    n++;

    cout << "Values after pushback ::\n";

    for(int i = 0; i < n; i++)
    {
        cout << vec.at(i) << endl;
    }
    cout << "The new size of the vector is :: " << vec.size();
    
    return 0;
}