#include <iostream>

int main() {
    int a {};
    std::cout << "Enter the value of a -> ";
    std::cin >> a;

    try {
        if(a == 0)
            throw a;
        else if(a == 1)
            throw 1.5;
        else throw 'a';
    }
    catch(int &exception) {
        std::cout << "Integer exception\n";
    }
    catch(double &exception) {
        std::cout << "double exception\n";
    }
    catch(char &exception) {
        std::cout << "Character exception\n";
    }

    std::cout << "Program finished\n";
    return 0;
}
