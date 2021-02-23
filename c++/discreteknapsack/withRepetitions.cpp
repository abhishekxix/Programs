#include <bits/stdc++.h>

int optimalValue(const std::vector<std::pair<int, int>> &items, const int &totalWeightOfTheKnapsack) {
    std::vector<int> maxValues(totalWeightOfTheKnapsack + 1, 0);
    int value {};

    for(int w = 1; w <= totalWeightOfTheKnapsack; w++) {
        for(int i = 0; i < items.size(); i++) {
            if(items.at(i).second <= w) 
                value = maxValues.at(w - items.at(i).second) + items.at(i).first;
            
            if(value > maxValues.at(w)) 
                maxValues.at(w) = value;
        }
    }    

    return maxValues.at(totalWeightOfTheKnapsack);
}

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n {};
    std::cin >> n;
    std::vector<std::pair<int, int>> items(n, std::pair<int, int>(0, 0)); //(value, weight)

    for(auto &item : items) {
        std::cin >> item.first >> item.second;
    }
    int totalWeightOfTheKnapsack {};
    std::cin >> totalWeightOfTheKnapsack;
    std::cout << optimalValue(items, totalWeightOfTheKnapsack);
}