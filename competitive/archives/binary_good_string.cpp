#include <bits/stdc++.h>

int main() {
    std::string input;

    std::cin >> input;

    std::vector<int> one_indices;
    std::vector<int> zero_indices;

    for(int i = 0; i < input.length(); i++) {
        if(input.at(i) == '0')
            zero_indices.push_back(i);
        else 
            one_indices.push_back(i);
    }

    if(one_indices.size() > zero_indices.size()) {
        for(int i = 0; i < zero_indices.size(); i++) {
            input.at(zero_indices.at(i)) = '1';
        }
    } else {
        for(int i = 0; i < one_indices.size(); i++) {
            input.at(one_indices.at(i)) = '0';
        }
    }

    std::cout << input << '\n';

    return 0;
}