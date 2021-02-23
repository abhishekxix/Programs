#include <bits/stdc++.h>

std::pair<int, int> min_max(const std::vector<int> &a, int l, int h) {
    if(l == h) {
        return std::make_pair(a.at(l), a.at(l));
    }
    if(l == h - 1) {
        return std::make_pair(std::min(a.at(l), a.at(h)), std::max(a.at(l), a.at(h)));
    }
    int mid = l + (h - l) / 2;
    int min = std::min(min_max(a, l, mid).first, min_max(a, mid, h).first);
    int max = std::max(min_max(a, l, mid).second, min_max(a, mid, h).second);

    return std::make_pair(min, max);
}

int main() {
    std::vector<int> a {1, 2, 3, 4, 5};
    std::cout << "The min is : " << min_max(a, 0, a.size() - 1).first 
              << " and max is : " << min_max(a, 0, a.size() - 1).second << std::endl;
    
    return 0;
}