#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");

    int num {};
    const int target {10};

    cout << "Enter a number and I will compare it to " << target << " -> ";
    cin >> num;

    if(num >= target)
    {
        cout << "\n=======================================================================" << endl;
        cout << num << " is greter than or equal to " << target << endl;
        int diff {num - target};
        cout << num << " is " << diff << " greater than " << target;
    }

    else 
    {
        cout << "\n=======================================================================\n";
        cout << num << " is " << " less than " << target << endl;
        int diff {target - num};
        cout << num << " is " << diff << " less than " << target;
    }
    
    return 0;

}