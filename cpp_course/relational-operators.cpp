#include <iostream>
#include <cstdlib>

using  namespace std;

int main()
{
    system("clear");
    int n1 {}, n2 {};

    cout << boolalpha;
    // cout << " Enter two integers separated by a space -> ";
    // cin >> n1 >> n2;

    // cout << n1 << " > " << n2 << " : " << ( n1 > n2 ) 
    //      << endl
    //      << n1 << " < " << n2 << " : " << ( n1 < n2 ) 
    //      << endl
    //      << n1 << " >= " << n2 << " : " << ( n1 >= n2 ) 
    //      << endl
    //      << n1 << " <= " << n2 << " : " << ( n1 <= n2 ) 
    //      << endl
    //      //  << n1 << " <=> " << n2 << " : " << ( n1 <=> n2 ) 
    //     //  << endl
    //     ;
    
    const int lower {10}, upper {20};

    cout << "Enter an integer greater than " << lower << " -> ";
    cin >> n1;
    
    cout << n1 << " > " << lower << " is " << ( n1 > lower ) << endl;
    
    cout << "Enter an integer that is less than or equal to " << upper << " : ";
    cin >> n1;
    cout << n1 << " <= " << upper << " is " << ( n1 <= upper ) << endl;

    return 0;
}