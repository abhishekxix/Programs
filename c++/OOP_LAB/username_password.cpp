#include <iostream>
#include <string>
#include <cctype>
#include <exception>

int main() {
    std::string username;
    std::string password;

    std::cout << "Enter username -> ";
    std::getline(std::cin, username);
    std::cout << "\nEnter password -> ";
    std::getline(std::cin, password);

    try {

        bool is_num {};
        for(const char &c : password) {
            if(isdigit(c)) {
                is_num = true;
                break;
            }
        }
        if(password.length() < 6 || !is_num) {
            throw std::string{"Password should be atleast 6 characters long and must contain atleast one digit."};
        }
    }
    catch(std::string &e) {
        std::cout << e << std::endl;
    }
    return 0;
}
