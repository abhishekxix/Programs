#include <bits/stdc++.h>


void pre_compute_lps(std::string *pattern, std::vector<int> &prefix_suffix);
void kmp(std::string *text, std::string *pattern, std::vector<int> *result);


int main() {
    std::string text {};
    std::string pattern {};
    // std::cin >> text >> pattern;
    getline(std::cin, text);
    getline(std::cin, pattern);
    std::vector<int> *result = new std::vector<int>();
    // std::vector<int> lps(pattern.length(), -100);
    // pre_compute_lps(&pattern, lps);
    // for(auto &i : lps) {
    //     std::cout << i << ' ';
    // }
    kmp(&text,&pattern, result);
    for(auto &i : *result) {
        std::cout << i << ' ';
    }

    return 0;
}


void pre_compute_lps(std::string *pattern, std::vector<int> &prefix_suffix) {
    int i = 1;
    int j = 0;
    prefix_suffix.at(0) = 0;

    while(i < pattern->length()) {
        if(pattern->at(i) == pattern->at(j)) {
            j++;
            prefix_suffix.at(i) = j;
            i++;
        } else {
            if(j != 0)
                j  = prefix_suffix.at(j - 1);
            else {
                prefix_suffix.at(i) = 0;
                i++;
            }
        }
    }
}

void kmp(std::string *text, std::string *pattern, std::vector<int> *result) {
    std::vector<int> prefix_suffix(pattern->size());
    pre_compute_lps(pattern, prefix_suffix);
         
    int i = 0;
    int j = 0;

    while(i < text->length()) {
        if(text->at(i) == pattern->at(j)) {
            i++;
            j++;
        }
        if(j ==  pattern->length()) {
            result->push_back(i - j);
            j = 0;
        } else if(i < text->length() && pattern->at(j) != text->at(i)) {
            if(j != 0)
                j = prefix_suffix.at(j - 1);
            else 
                i++;
        }
    }
}