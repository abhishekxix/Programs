#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;

int Group_Children(vector <double> ages) {
    sort(ages.begin(), ages.end());
    size_t size {ages.size()};
    unsigned int number_of_groups {}, i {}, r {};

    while(i < size) {
        r = ages.at(i) + 1;
        number_of_groups++;
        i++;
        while(i < size && ages.at(i) <= r) 
            i++;
    }
    return number_of_groups;
}

int main() {
    vector <double> ages;
    double age_entry {};
    int number_of_children {};
    cout << "Enter the number of children -> ";
    cin >> number_of_children;    
    cout << "Enter the ages of children separated by a space -> ";
    for(size_t i {}; i < number_of_children; i++) {
        cin >> age_entry;
        ages.push_back(age_entry);
    }
    cout << "Minimum number of required groups are :: " << Group_Children(ages);

    return 0;
}