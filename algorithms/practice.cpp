#include <bits/stdc++.h>

class Entity {
    private:
        int weight;
        int profit;
    
    public:
        Entity(int weight = 0, int profit = 0) 
            : weight {weight}, profit {profit}
        {}

        int get_weight() {
            return weight;
        }

        int get_profit() {
            return profit;
        }
};

int max_value(int max_weight, std::vector<Entity> &items) {
    std::vector<std::vector<int>> maximum(items.size() + 1, std::vector<int>(max_weight + 1));
    int max_value {};
    int weight {};

    for(int i {1}; i <= items.size(); i++) {
        for(int j {1}; j <= max_weight; j++) {
            max_value = maximum.at(i - 1).at(j);

            if(items.at(i -1).get_weight() < j) {
                max_value = maximum.at(i - 1).at(j - items.at(i - 1).get_weight()) + items.at(i - 1).get_profit();

                maximum.at(i).at(j) = std::max(maximum.at(i).at(j), max_value);
            }
        }        
    }
    return maximum.at(items.size()).at(max_weight);
}

int main() {
    int n {};
    int w {};

    std::cin >> n >> w;
    std::vector<Entity> items;
    
    while(n--) {
        int weight {};
        int profit {};

        std::cin >> weight >> profit;
        items.push_back(Entity (weight, profit));
    }

    std::cout << max_value(w, items) << '\n';
}