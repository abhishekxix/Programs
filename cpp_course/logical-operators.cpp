#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int num {};
    const int lower {10}, upper {20};

    cout << boolalpha;

    cout << "Enter an integer.\nThe bounds are (" << lower << " and " << upper << ") -> ";
    cin >> num;

    // bool within_bounds {};

    // within_bounds = (num > lower and num < upper);

    // cout << num << " is between " << lower << " and " << upper << " : " << within_bounds;

    //to check if the integer is out of the bounds.
    //bool out_of_bounds {};

    // out_of_bounds = (num < lower or num > upper);
    // cout << num << " is out of bounds (" << lower << " and " << upper << ") : " << out_of_bounds;
    
    bool on_bounds {};

    on_bounds = ( num == lower || num == upper );
    cout << num << " is on bounds which are " << lower << " and " << upper << " : " << on_bounds;
    
    return 0;
}