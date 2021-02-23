#include <bits/stdc++.h>

int optimalValue(const std::vector<std::pair<int, int>> &items, const int &totalWeightOfTheKnapsack) {
    int maxValues[items.size() + 1][totalWeightOfTheKnapsack + 1];
    for(int i = 0; i < items.size() + 1; i++) {
        maxValues[i][0] = 0;
    }
    for(int i = 0; i < totalWeightOfTheKnapsack + 1; i++) {
        maxValues[0][i] = 0;
    }

    int value {};

    for(int i {1}; i <= items.size(); i++) {
        for(int w {1}; w <= totalWeightOfTheKnapsack; w++) {
            maxValues[i][w] = maxValues[i - 1][w];
            if(items[i - 1].second <= w) {
                // value = maxValues[i - 1][w - items[i - 1].second] + items[i - 1].first;
                
                // if(maxValues[i][w] < value)
                //     maxValues[i][w] = value;
            
                maxValues[i][w] = std::max({maxValues[i - 1][w - items[i - 1].second] + items[i - 1].first, maxValues[i - 1][w]});
            }
        }
    }
    return maxValues[items.size()][totalWeightOfTheKnapsack];
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