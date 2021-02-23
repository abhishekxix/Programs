#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");

    bool wear_coat {};
    float wind_speed {}, temperature {};
    const float wind_speed_for_coat {25.0}, temperature_for_coat {45.0};

    cout << boolalpha;
    
    cout << "===This program tells you whether you need to wear a coat or not based on the wind speed and temperature===" << endl;
    cout << "\nEnter the current temperature (in F) -> ";
    cin >> temperature;

    cout << "\nEnter the wind speed (in mph) -> ";
    cin >> wind_speed;

    wear_coat = ( ( wind_speed > wind_speed_for_coat ) || ( temperature < temperature_for_coat ) );
    cout << "\nDo you need to wear a coat using OR :: " << wear_coat;

    wear_coat = ( ( wind_speed > wind_speed_for_coat ) && ( temperature < temperature_for_coat ) );
    cout << "\nDo you need to wear a coat using AND :: " << wear_coat;

    return 0;
}