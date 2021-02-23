#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int counter {10}, result {0};

    //example 1 - simple increment.
    // cout << "counter = " << counter << endl;

    // counter = counter + 1;
    // cout << "counter = " << counter << endl;

    // counter++;
    // cout << "counter = " << counter << endl;

    // ++counter;
    // cout << "counter = " << counter << endl;


    //example 2 - Pre-increment
    // counter = 10;
    // result = 0;

    // cout <<"counter = " << counter << endl;

    // result = ++counter; //Note the Preincrement
    // cout << "counter = " << counter << endl;
    // cout << "result = " << result << endl;

    //example 3 - Post-increment
    // counter = 10;
    // result = 0;

    // cout << "counter = " << counter << endl;

    // result = counter++;
    // cout << "counter = " << counter << endl;
    // cout << "result = " << result << endl;

    //example 4 
    // counter  = 10;
    // result  = 0;

    // cout << "counter = " << counter << endl;
    
    // result = ++counter + 10;
    
    // cout << "counter = " << counter << endl;
    // cout << "result = " << result << endl;

    //example 5
    counter  = 10;
    result  = 0;

    cout << "counter = " << counter << endl;
    
    result = counter++ + 10;
    
    cout << "counter = " << counter << endl;
    cout << "result = " << result << endl;

    return 0;
}