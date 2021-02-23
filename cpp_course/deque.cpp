#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>



//template function to display any deque
template <class T>  //typename T instead of class T
void display(const std::deque<T> &deque) {
    std::cout << "[ ";
    for(const auto &i : deque) {
        std::cout << i << ' ' << std::flush;
    }
    std::cout << "]";
    std::cout << std::endl;
}

void test1() {
    std::cout << "=====================================" << std::endl;

    std::deque<int> d {1, 2, 3, 4, 5};
    display(d);
    
    d = {1, 2, 3, 4};
    display(d);

    std::deque<int> d1 (10, 100);   //10n100s in a deque.
    display(d1);
    d1.at(0) = 100;
    d1[1] = 200;
    display(d1);

    std::cout << "=====================================" << std::endl;
}

void test2() {
    //push and pop
    std::cout << "=====================================" << std::endl;
    std::deque<int> d {0, 0, 0};
    display(d);

    d.push_back(10);
    d.push_front(20);

    display(d);
    std::cout << "Front :: " << d.front() << std::endl
              << "Back :: " << d.back() << std::endl
              << "Size :: " << d.size() << std::endl;

    d.pop_back();
    d.pop_front();
    
    display(d);
    std::cout << "=====================================" << std::endl;
}

void test3() {
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> d;

    std::copy(vec.begin(), vec.end(), std::front_inserter(d));
    display(d);
    d.clear();

    std::copy(vec.begin(), vec.end(), std::back_inserter(d));
    display(d);
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}