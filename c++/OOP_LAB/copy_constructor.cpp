#include <iostream>
#include <string>

class Person {
    private :
        std::string name;
        int age;

    public :
        Person(const Person &source);
        Person(std::string name = "UNNAMED", int age = 0);
        void display();
};

Person::Person(std::string name, int age)
    : name {name}, age {age}
{}

Person::Person(const Person &source)
    : Person {source.name, source.age} {
        std::cout << "Copy constructor called" << std::endl;
}

void Person::display() {
    std::cout << name << "\t" << age << std::endl;
}

int main() {
    Person p1 {"ABC", 12};
    Person p2 {p1};

    std::cout << "p1 ::\n";
    p1.display();

    std::cout << "Copied object p2 ::\n";
    p2.display();

    return 0;
}