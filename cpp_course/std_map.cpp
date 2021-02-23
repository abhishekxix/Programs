#include <iostream>
#include <map>
#include <set>
#include <string>

void display(const std::map<std::string, std::set<int>> &m) {
    std::cout << "[ ";

    for(const auto &elem : m) {
        std::cout << elem.first << ":[ ";
        for(const auto &set_elem : elem.second) {
            std::cout << set_elem << " ";
        }
        std::cout << "]";
    }
    std::cout << "]" << std::endl;
}

template <typename T1, typename T2>
void display(const std::map<T1, T2> &m) {
    std::cout << "[ ";
    for(const auto &elem : m) {
        std::cout << elem.first << " : " << elem.second << " ";
    }
    std::cout << "]" << std::endl; 
}

void test1() {
    std::cout << "Test 1" << std::endl;
    std::map<std::string, int> map {
        {"Larry", 3}, 
        {"Moe", 2},
        {"Curly", 1}
    };
    display(map);

    map.insert(std::pair<std::string, int> {"Anna", 10});
    display(map);

    map.insert(std::make_pair("Joe", 5));
    display(map);

    map["Abhishek"]  = 18;
    display(map);

    map["Abhishek"] += 10;
    display(map);

    map.erase("Abhishek");
    display(map);

    std::cout << "Count for Joe :: " << map.count("Joe") << std::endl
              << "Count for Abhishek :: " << map.count("Abhishek") << std::endl;
    
    std::map<std::string, int>::iterator it {map.find("Larry")};

    if(it != map.end()) {
        std::cout << "Found :: " << it->first << ":" << it->second << " " << std::endl;
    }

    map.clear();

    display(map);
}

void test2() {
    std::cout << "\nTest2 =========================" << std::endl;
    
    std::map<std::string, std::set<int>> grades  {
        {"Larry", {100, 90} },
        {"Moe",  {94} },
        {"Curly", {80, 90, 100} }
    };
    
    display(grades);
    
    grades["Larry"].insert(95);                 // insert 95 into the set of grades for "Larry"
    
    display(grades);
    
    auto it = grades.find("Moe");
    if (it != grades.end())                         // found "Moe"
    {
            it->second.insert(1000);            // insert 1000 into Moe's set of grades
    }                                                         // it->first is the key, it->second is the value (set)
    display(grades);
}

main() {
    test1();
    test2();

    return 0;
}