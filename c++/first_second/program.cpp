#include <iostream>
#include <fstream>
#include <vector>

bool is_lower_vowel(char c) {
    static const std::vector<char> lower_case_vowels {'a', 'e', 'i', 'o', 'u'};
    bool isvowel {false};

    for(const char &vowel : lower_case_vowels) {
        if(c == vowel)
            isvowel = true;
    }
    return isvowel;
}

void copy_file(std::fstream &file1, std::fstream &file2) {
    std::string word {};
    while(!file1.eof()) {
        file1 >> word;
        if(is_lower_vowel(word.at(0)))
            file2 << word << ' ';
    }
}

int main() {
    std::fstream file1 {"first.txt", std::ios::in};
    std::fstream file2 {"second.txt", std::ios::out | std::ios::trunc};

    copy_file(file1, file2);
    file1.close();
    file2.close();
    
    return 0;
}