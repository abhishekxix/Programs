#include <iostream>
#include <cmath>

using namespace std;

const float pi {3.1459};

void area_of_circle();
void volume_cylinder();
float calc_area_circle(float radius);
float calc_volume_cylinder(float radius, float height);

int main()
{
    area_of_circle();
    volume_cylinder();
    return 0;
}


float calc_area_circle(float radius)
{
    return pi * pow(radius, 2);
}
void area_of_circle()
{
    float radius {};
    cout << "\nEnter the radius of the circle -> ";
    cin >> radius;
    cout << "The area of a circle with radius " << radius << " = " << calc_area_circle(radius) << endl;
}
float calc_volume_cylinder(float radius, float height)
{
    //return pi * pow(radius, 2) * height;
    return calc_area_circle(radius) * height;
}
void volume_cylinder()
{
    float radius {}, height {};

    cout << "\nEnter the radius of the cylinder -> ";
    cin >> radius;
    cout << "Enter the height of the cylinder -> ";
    cin >> height;
    cout << "The area of a cylinder with radius " << radius << " and height " << height << " = " << calc_volume_cylinder(radius, height); 

}