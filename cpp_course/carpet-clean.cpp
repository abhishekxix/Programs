#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");
    const float price_per_small_room {25}, price_per_large_room {35}, sales_tax_rate {0.06};
    const int expiry {30};

    int number_of_small_rooms {0};    
    cout << "Welcome to Abhishek's carpet cleaning service!\n\nHow many small rooms would you like to be cleaned ? :: ";
    cin >> number_of_small_rooms;
    
    int number_of_large_rooms {0};
    cout << "\nHow many large rooms would you like to be cleaned ? :: ";
    cin >> number_of_large_rooms;
    
    system("clear");

    float small_rooms_total_cost = price_per_small_room * number_of_small_rooms;
    float large_rooms_total_cost = price_per_large_room * number_of_large_rooms;
    float total_cost = small_rooms_total_cost + large_rooms_total_cost;
    float tax = sales_tax_rate * total_cost;

    cout << "\nEstimate for cleaning service :: \nNumber of small rooms :: " 
         << number_of_small_rooms
         << "\nNumber of large rooms :: " << number_of_large_rooms
         << "\nPrice per small room :: $" << price_per_small_room
         << "\nPrice per large room :: $" << price_per_large_room
         << "\nCost :: $" << total_cost
         << "\nTax :: $" << tax
         << "\n\n=========================================\n"
         << "\nTotal estimate :: " << total_cost + tax
         << "\nThis estimate is valid for " << expiry << " days";
    
    return 0;
}