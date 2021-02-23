#include <iostream>
#include <vector>
#include <climits>

std::vector<int> dynamic_programming_change(int money, std::vector<int> &coins) {
    std::vector<int> min_num_coins;
    int num_coins {};
    for(int m {1}; m <= money; m++) {
        min_num_coins.at(m) = INT_MAX;

        for(const auto &coin : coins) {
            if(m >= coin) 
                num_coins = min_num_coins.at(m - coin) + 1;
            
            if(num_coins < min_num_coins.at(m))
                min_num_coins.at(m) = num_coins;
        }
    }
    return min_num_coins;
}

int main() {
    std::vector<int> coins {1, 2, 5, 10};
    int money {};
    std::cout << "Enter the amount of money to change : ";
    std::cin >> money;

    std::vector<int> min_num_coins = dynamic_programming_change(money, coins);

    for(int &number : min_num_coins) {
        std::cout << number << ' ';
    }
    std::cout << '\n';

    return 0;
}