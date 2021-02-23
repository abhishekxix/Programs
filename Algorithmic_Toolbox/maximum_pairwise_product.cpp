#include <iostream>
#include <vector>

long long int max_product(const std::vector<int> &sequence) {
    int largest {-1}, second_largest {-1};
    size_t size {sequence.size()};

    for(size_t i {}; i < size; i++) {
        if((largest == -1) || (sequence.at(i) > sequence.at(largest)))
            largest = i;
    }
    
    for(size_t i {}; i < size; i++) {
        if(((second_largest == -1) || (sequence.at(i) > sequence.at(second_largest))) && (i != largest))
            second_largest = i;
    }

    return  static_cast <long long int> (sequence.at(largest)) * sequence.at(second_largest);
}

int main() {
    size_t size {};
    std::cin >> size;

    std::vector<int> sequence (size);

    for(size_t i {}; i < size; i++) {
        std::cin >> sequence.at(i);
    }
    long long int result =  max_product(sequence);
    std::cout << result;
    
    return 0;
}