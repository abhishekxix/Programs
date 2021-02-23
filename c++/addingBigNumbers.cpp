#include <iostream>
#include <string>

std::string addBigNumbers(const std::string &num1, const std::string &num2) {
    char carry {};
    size_t resultSize = num1.length() > num2.length() ? num1.length() : num2.length();
    resultSize += 2;

    std::string result(resultSize, ' ');

    for(int i = num1.length(), j = num2.length(), k = resultSize; j >= 0 && i >= 0, i--, j--) {
        carry =    
    }
}

int main() {
    std::string num1 {};
    std::string num2 {};

    std::cin >> num1 >> num2;

    std::cout << addBigNumbers(num1, num2);
}