//section 20
//algorithms

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>
#include <iomanip>

class Person {
    private :
        int age;
        std::string name;
    
    public :
        Person() = default;
        Person(std::string name, int age)
            : name {name}, age {age}
        {}
        ~Person() = default;

        bool operator<(const Person &rhs) const {
            return (this->age < rhs.age);
        }

        bool operator==(const Person &rhs) const {
            return (this->age == rhs.age);
        }
};

// Find an element in a container
void find_test() {
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
    std::vector<int> vec {1, 2, 3, 4, 5};

    std::vector<int>::iterator loc {std::find(std::begin(vec), std::end(vec), 1)};
    
    if(loc != std::end(vec)) 
        std::cout << "Found the number " << *loc << std::endl;
    else 
        std::cout << "Couldn't find the number." << std::endl;
    
    std::list<Person> players {
        {"Larry", 18},
        {"Moe", 20},
        {"Curly", 21}
    };

    std::list<Person>::iterator loc1 {std::find(players.begin(), players.end(), Person {"Moe", 20})};

    if(loc1 != players.end())
        std::cout << "Moe found." << std::endl;
    else 
        std::cout << "Moe not found." << std::endl;
    
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

//count the number of elements in a container
void count_test() {
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');

    std::vector<int> vec {1, 2, 3, 4, 5, 1, 2, 1};
    int num = std::count(vec.begin(), vec.end(), 1);
    std::cout << num << " occurrences found." << std::endl;

    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

//count the number of occurrences of an element in a container based on a predicate using a lambda expression.
void count_if_test() {
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
    
    //count only if the element is even
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7};
    int num = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 == 0;});    //The last lambda expression is called predicate.
    std::cout << num << " even numbers found." << std::endl;
    
    num = std::count_if(vec.begin(), vec.end(), [](int x) {return x % 2 != 0;});
    std::cout << num << " odd numbers found." << std::endl;
    
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

// Replace occurrences of elements in a container
void replace_test() {
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
    
    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8};

    for(auto i : vec)
        std::cout << i << ' ';
    
    std::cout << std::endl;
    std::replace(vec.begin(), vec.end(), 1, 100);
    
    for(auto i : vec)
        std::cout << i << ' ';
    std::cout << std::endl;

    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

//there is also any_of algorithm
void all_of_test() {
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');

    std::vector<int> vec;

    for(int i {}; i < 20; i++)
        vec.push_back(i);

    if(std::all_of(vec.begin(), vec.end(), [](int x) {return x > 10;})) //checks if all the elements in the container match the predicate.
        std::cout << "All the elements are > 10" << std::endl;
    else 
        std::cout << "Not all the elements are > 10" << std::endl;
    
    if(std::all_of(vec.begin(), vec.end(), [](int x) {return x <= 20;}))
        std::cout << "All the elements are <= 20" << std::endl;
    else 
        std::cout << "All the elements are <= 20" << std::endl;

    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

void string_transform_test() {
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');

    std::string str {"This is a test."};
    std::cout << "Before transform :: " << str << std::endl;
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);     //Where to start, where to end and where to start placing the transformed elements.
    std::cout << "After transform :: " << str << std::endl;
    std::cout << std::setw(20) << std::setfill('-') << "" << std::endl;
    std::cout.fill(' ');
}

int main() {
    find_test();
    count_test();
    count_if_test();
    replace_test();
    all_of_test();
    string_transform_test();
    return 0;
}