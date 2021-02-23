#include <bits/stdc++.h>

using std::vector;
using namespace std;

class Single_Entity {
    int profit;
    int weight;
    double ratio;

    public:
        Single_Entity(int profit, int weight) 
            : profit {profit}, weight {weight}, ratio {static_cast<double> (profit) / weight}
        {}

        double get_ratio() const {
            return ratio;
        }

        double get_weight() const {
            return weight;
        }
};


double get_optimal_value(std::vector<Single_Entity> &items, int capacity) {
    std::sort(items.begin(), items.end(), [](const Single_Entity &a, const Single_Entity &b) {
        return a.get_ratio() > b.get_ratio();
    });

    double optimal_value {};
    double amount {};

    for(auto &i : items) {
        if(capacity == 0) {
            return optimal_value;
        } 

        amount = i.get_ratio() > capacity ? capacity : i.get_weight();
        optimal_value += amount * i.get_ratio();
        capacity -= amount;
    }

    return optimal_value;
}

int main() {
    int n;
    int capacity;
    std::cin >> n >> capacity;
    std::vector<Single_Entity> items;

    while(n--) {
        int profit {};
        int weight {};

        std::cin >> profit >> weight;
        items.push_back(Single_Entity(profit, weight));
    }

    std::cout.precision(10);
    std::cout << get_optimal_value(items, capacity) << std::endl;
    return 0;
}
