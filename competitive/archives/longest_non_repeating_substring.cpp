#include<bits/stdc++.h>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if(s.length() == 0) 
            return 0;
        
        std::vector<int> count(300);
        count[s[0]]++;
        
        int i{}, j {};
        int ans = 1;
        while(j < s.length() - 1) {
            if(count[s[j + 1]] == 0) {
                count[s[j + 1]]++;
                j++;
                ans = std::max(ans, j - i + 1);
            } else {
                count[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    std::cout << s.lengthOfLongestSubstring("Abhishek Singh") << '\n';
    return 0;    
}