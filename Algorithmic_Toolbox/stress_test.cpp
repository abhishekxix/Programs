#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

// long long int max_product(const std::vector<long long int> &sequence) {
//     long long int largest {}, second_largest {};
//     largest = sequence.at(0);
//     size_t size {sequence.size()};

//     for(size_t i {}; i < size; i++) {
//         if(sequence.at(i) > largest)
//             largest = sequence.at(i);
//     }
//     second_largest = sequence.at(0);

//     for(size_t i {}; i < size; i++) {
//         if((sequence.at(i) > second_largest) && (sequence.at(i) < largest))
//             second_largest = sequence.at(i);
//     }

//     long long int result =  (largest * second_largest);
//     return result;
// }

// long long int max_product(const std::vector<int> &sequence) {
//     int largest {}, second_largest {};
//     size_t size {sequence.size()};

//     for(size_t i {}; i < size; i++) {
//         if(sequence.at(i) > sequence.at(largest))
//             largest = i;
//     }
    
//     for(size_t i {}; i < size; i++) {
//         if((sequence.at(i) > sequence.at(second_largest)) && (i != largest))
//             second_largest = i;
//     }

//     return  static_cast <long long int> (sequence.at(largest)) * sequence.at(second_largest);
// }
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

long long int MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long int max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product, static_cast<long long int>
                (numbers[first]) * numbers[second]);
        }
    }

    return max_product;
}
int main() {
    srand(time(nullptr));

    while(true) {
        int n {rand() % 1000 + 2};
        std::cout << n << '\n';
        std::vector<int> a;
        for(size_t i {}; i < n; i++) {
            a.push_back(rand() % 100000);
        }
        for(size_t i {}; i < n; i++) {
            std::cout << a.at(i) << ' ';
        }
        std::cout << '\n';

        long long r1 = MaxPairwiseProduct(a);
        long long r2 = max_product(a);
        if(r1 == r2) {
            std::cout << "OK\n";
        }
        else {
            std::cout << "Wrong answer " << r1 << ' ' << r2 << '\n';
            break;
        }
    }


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