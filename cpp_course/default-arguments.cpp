#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

float calc_cost(float base_cost = 100.0, float tax_rate = 0.06, float shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

int main()
{
    float cost {};
    
    cost  = calc_cost(100.0, 0.08, 4.25); //will use no defaults
    cout << fixed << setprecision(2) << "The cost is " << cost << endl;

    cost = calc_cost(100.0, 0.08); //will use default shipping
    cout << "The cost is " << cost << endl;

    cost = calc_cost(100.0); //will use default tax_rate and shipping
    cout << "The cost is " << cost << endl;

    cost = calc_cost(); 
    cout << "The cost is " << cost << endl;

    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Roger", "Professor", "Ph.D.");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");

    return 0;
}

float calc_cost(float base_cost, float tax_rate, float shipping)
{ 
    return base_cost += (base_cost * tax_rate) +shipping;
}

void greeting(string name, string prefix, string suffix)
{
    cout << "Hello " << prefix + " " << name + " " << suffix << endl; 
}