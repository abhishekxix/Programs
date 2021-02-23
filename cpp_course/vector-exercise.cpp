#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    system("clear");
    vector <int> vector1, vector2;

    vector1.push_back(10);
    vector1.push_back(20);
    cout << "\nElements of vector1 :: "
         << vector1.at(0)
         << " "
         << vector1.at(1)
         << "\nvector1 contains " << vector1.size() << " elements.";
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout << "\nElements of vector2 :: "
         << vector2.at(0)
         << " "
         << vector2.at(1)
         << "\nvector2 contains " << vector2.size() << " elements.";
    
    vector < vector <int> > vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
   
    cout << "\n\nElements of vector_2d :: ";
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << vector_2d.at(i).at(j) << " ";
        }
    }cout << endl;

    vector1.at(0) = 1000;

 cout << "\nElements of vector_2d :: ";
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << vector_2d.at(i).at(j) << " ";
        }
    }cout << endl;

    cout << "\nElements of vector1 :: "
         << vector1.at(0)
         << " "
         << vector1.at(1);

    return 0;
}