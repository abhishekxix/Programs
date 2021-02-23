/* 
This program demonstrates the use of iterators in C++
 */

#include <iostream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <list>

//display any vector of integers using range based for loop
void display(const std::vector<int> &vec) {
    std::cout << "[ " << std::flush;
    
    for(const auto &i : vec)
        std::cout << i << " " << std::flush;
    std::cout << "]" << std::endl;
}

void test1() {
    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
    
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    std::vector<int>::iterator it {nums1.begin()};    //points to 1
    
    std::cout << *it << std::endl;
    
    it++;
    std::cout << *it << std::endl;  //points to 2

    it += 2;    //points to 4
    std::cout << *it << std::endl;
    
    it -= 2;    //points to 
    std::cout << *it << std::endl;

    it = nums1.end() - 1;   //points to 5
    std::cout << *it << std::endl;

    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

void test2() {
    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
    
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    std::vector<int>::iterator it {nums1.begin()};  

    display(nums1);

    while(it != nums1.end()) {
        *it = 0;
        it++;
    }
    display(nums1);

    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

void test3() {
    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
    
    std::vector<int> nums1 {1, 2, 3, 4, 5};
    std::vector<int>::const_iterator it {nums1.begin()};
    // auto it1 {nums1.cbegin()};

    display(nums1);

    // while(it != nums1.end()) {
    //     *it = 0;
    //     it++;
    // }
    display(nums1);

    std::cout << std::setw(30) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

void test4() {
    //more_iterators
    //using a reverse iterator
    std::vector<int> vec {1, 2, 3, 4, 5};
    std::vector<int>::reverse_iterator it1 {vec.rbegin()};    //reverse iterator over a vector of ints starts at 4

    while(it1 != vec.rend()) {
        std::cout << *it1 << std::endl;
        it1++;
    }

    // constant reverse iterator over a list
    std::list<std::string> names {"Larry", "Moe", "Curly"};
    std::list<std::string>::const_reverse_iterator it2 {names.crbegin()};   //constant reverse iterator over list of std::string(s) names.
    while(it2 != names.crend()) {
        std::cout << *it2 << std::endl;
        it2++;
    }  

    //iterator over a map
    std::map<std::string, std::string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };

    std::map<std::string, std::string>::iterator it3 {favorites.begin()};   //iterate over a map of std::string pairs.
    while(it3 != favorites.end()) {
        std::cout << it3->first << ' ' << it3->second << std::endl;
        it3++;
    }

}

void test5() {
    //iterate over a subset of a container
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int>::iterator start {vec.begin() + 2};     //start at 3
    std::vector<int>::iterator end {vec.end() - 3};     //ends at 7

    while(start != end) {
        std::cout << *start << std::endl;
        start++;
    }
}


int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}