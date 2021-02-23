#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");

    int length {}, width {}, height {}, max_dimension_length {10}; //in inches
   
    cout << "Welcome to the package cost calculator.\n"
         << "Enter the length, width and height of the package separated by a space (in inches) -> ";
    cin >> length >> width >> height;

    
    if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length)
    {
        cout << "\nPackage rejected ! -- dimensions exceeded";
    }

    else
    {
        const float base_charge {2.50}, tier_1_surcharge {0.10}, tier_2_surcharge {0.25};
        const int tier_1_threshold {100}, tier_2_threshold {500}; //volume

        int package_volume {};
        float package_cost {base_charge};

        package_volume = length * width * height;

        if(package_volume > tier_2_threshold)
        {
            package_cost += package_cost * tier_2_surcharge;
            cout << "\nAdding tier 2 surcharge.";
        }
        else if(package_volume > tier_1_threshold)
        {

            package_cost += package_cost * tier_1_surcharge;
            cout << "\nAdding tier 1 surcharge.";
        }
        
        cout << fixed << setprecision(2);//prints dollars nicely

        cout << "\nThe volume of your package is :: " << package_volume << " cubic inches."
             << "\nYour package will cost $" << package_cost << " to ship.";
    }

    return 0;
}