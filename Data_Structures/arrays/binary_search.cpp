#include <iostream>

int main() {
    int lower_bound {}, upper_bound {20};
    int array[21] {};

    for(int i {1}; i <= upper_bound; i++) {
        array[i] = i;
    }

    int element {};
    std::cout << "Enter the element you want to search -> ";
    std::cin >> element;

    bool found {};
    int mid {(lower_bound + upper_bound) / 2};

    for(;lower_bound <= upper_bound; mid = (lower_bound + upper_bound) / 2) {
        if(array[mid] == element) {
            found = true; 
            break;
        }
        else if(array[mid] > element)
            upper_bound = mid - 1;
        
        else 
            lower_bound = mid + 1;
    }
    
    if(found) 
        std::cout << element << " found at position " << mid  << std::endl;
    else 
        std::cout << element << " not found in the array." << std::endl;

    return 0;
}