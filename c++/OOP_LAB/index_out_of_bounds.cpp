#include <iostream>

int main(){
    int array[10] {};
    for(int i {}; i < 10; i++) {
        array[i] = i;
    }

    int n {};
    std::cout << "Enter the location of the array to access -> ";
    std::cin >> n;

    try {
        if(n >= 10 || n < 0)
            throw std::string {"index out of bounds"};
        std::cout << array[n] << std::endl;
    }
    catch(std::string &exception) {
        std::cout << exception << std::endl;
    }

    return 0;
}
