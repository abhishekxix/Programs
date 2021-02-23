#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    
    //example-1
    int scores [] {10, 20, 30};

    for(auto score : scores)
        cout << score << endl;
        
    //example-2
    vector <float> temperatures {87.9, 77.9, 80.0, 72.5};
    float average_temp {}, total {};
    
    for(auto temp : temperatures)
    {
        total += temp;
    }
    average_temp = (temperatures.size() != 0) ? (total / temperatures.size()) : 0;

    cout << fixed << setprecision(1);
    cout << "\nAverage temperature is " << average_temp << endl;

    //example-3 

    for(auto val : {1, 2, 3, 4, 5, 6, 7})
    {
        cout << val << endl;
    }
    cout << endl;
    
    //example-4
    for(auto c : "This is a bunch of characters")
    {
        // if(c != ' ')
        // {
        //     cout << c;
        // }

        if(c == ' ')
        {
            cout << "\t";
        }
        else 
            cout << c;
    }
    cout << endl;

    return 0;
}