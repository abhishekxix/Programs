#include <iostream>
#include <vector>

using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    int lb = a.at(a.size() - 1);
    int ub = b.at(0);
    int count {};
    bool pass {};
    for(int i = lb; i <= ub; i++) {
        pass = true;
        for(auto num : a) 
            if(i % num != 0) {
                pass = false;
                break;
            }
        
        if(!pass)
            continue;
        
        for(auto num : b) 
            if(num % i != 0) {
                pass = false;
                break;
            }
        if(pass)
            count++;
    }
    return count;
}

int main() {
    vector <int> a;
    vector <int> b;
    int m {}, n {};
    cin >> n >> m;
    int value {};
    for(int i {}; i < n; i++) {
        cin >> value;
        a.push_back(value);
    } 
    for(int i {}; i < m; i++) {
        cin >> value;
        b.push_back(value);
    } 
    cout << getTotalX(a, b);

    return 0;
}