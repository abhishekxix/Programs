#include <iostream>
#include <string>

class Person {

    friend std::ostream &operator<<(std::ostream &out, const Person &p);

    private :
        std::string name;
        int age;

    public :
        Person();
        Person(std::string name, int age);
        Person(const Person &source);       
        ~Person();
};

Person::Person()
    : name {"UNNAMED"}, age {0} {
        std::cout << "Default constructor called for "  << *this << std::endl;
}

Person::Person(std::string name, int age)
    : name {name}, age {age} {
        std::cout << "Parameterized constructor called for " << *this << std::endl;
}

Person::~Person() {
        std::cout << "Destructor called for " << *this << std::endl;
}

Person::Person(const Person &source) 
    : name {source.name}, age {source.age + 1} {
        std::cout << "Copy constructor called for " << *this << std::endl;
}

std::ostream &operator<<(std::ostream &out, const Person &p) {
    out << p.name << " : " 
        << p.age << std::endl;
    return out;
}

int main() {
    Person p1 {};
    Person p2 {"Abhishek", 18};
    Person p3 {p2};
    std::cout << std::endl;
    return 0;
}