#include <bits/stdc++.h>

int main() {
    std::queue<char> girls;
    std::queue<char> boys;
    std::string input;
    int num_pairs {};
    std::cin >> num_pairs;
    std::cin >> input;

    for(auto a : input) {
        girls.push(a);
    }
    std::cin >> input;

    for(auto a : input) {
        boys.push(a);
    }
    int temp = num_pairs;

    while(num_pairs) {
        if(girls.front() == boys.front()) {
            num_pairs--;
            
            girls.pop();
            boys.pop();

        } else {
            int s = boys.size();

            while(s >= 0) {
                char a = boys.front();
                boys.pop();
                boys.push(a);
                s--;
                if(boys.front() == girls.front()) {
                    break;
                }   
            }
            if(s == -1) {
                break;
            }
        }
    }
    
    std::cout << num_pairs;

    return 0;
}