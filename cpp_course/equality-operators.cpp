#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    bool equal_result {false}, not_equal_result {false};

    int num1 {}, num2 {};

    cout << boolalpha; //will display true/false instead of 1/0 for booleans.

    // cout << "Enter two integers separated by a space -> ";
    // cin >> num1 >>num2;

    // equal_result = ( num1 == num2 );
    // not_equal_result = ( num1 != num2 );

    // cout << "Comparison result (equals) :: " 
    //      << equal_result
    //      << endl
    //      << "Comparison result (does not equal) :: "
    //      << not_equal_result
    //      << endl;
    
    //character equality :: 
    // char char1 {}, char2 {};
    
    // cout << "Enter two characters separated by a space -> ";

    // cin >> char1 >> char2;

    // equal_result = ( char1 == char2 );
    // not_equal_result = ( char1 != char2 );

    // cout << "Comparison result (equals) :: " 
    //      << equal_result
    //      << endl
    //      << "Comparison result (does not equal) :: "
    //      << not_equal_result
    //      << endl; 
    
    //double equality ::
    double d1 {}, d2 {};

    // cout << "Enter two doubles -> ";
    
    // cin >> d1 >> d2;

    //  equal_result = ( d1 == d2 );
    // not_equal_result = ( d1 != d2 );

    // cout << "Comparison result (equals) :: " 
    //      << equal_result
    //      << endl
    //      << "Comparison result (does not equal) :: "
    //      << not_equal_result
    //      << endl; 

    cout << "Enter an integer and a double separated by a space -> ";

    cin >> num1 >> d2;
    

    equal_result = ( num1 == d2 );
    not_equal_result = ( num1 != d2 );

    cout << "Comparison result (equals) :: " 
         << equal_result
         << endl
         << "Comparison result (does not equal) :: "
         << not_equal_result
         << endl; 


    return 0;
}