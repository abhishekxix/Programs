#include <iostream>
#include <fstream>

int main() {
    std::fstream inFile {"student.txt", std::ios::in};
    int a {}, e {}, i {}, o {}, u {}, digit {}, special_symbols {};

    char c {};
    while(inFile.get(c)) {
        if(c == 'a')
            a++;
        if(c == 'e')
            e++;
        if(c == 'i')
            i++;
        if(c == 'o')
            o++;
        if(c == 'u')
            u++;
        if(c >= '0' && c <= '9')
            digit++;
        else
            special_symbols++;
    }

    std::cout << "Vowel a count : " << a
              << "\nVowel e count : " << e
              << "\nVowel i count : " << i
              << "\nVowel o count : " << o
              << "\nVowel u count : " << u 
              << "\nTotal digits : "<< digit
              << "\nSpecial symbols : " << special_symbols << std::endl;

    return 0;              
}