#include <iostream>
#include <string>

class Person {

    friend std::ostream &operator<<(std::ostream &out, const Person &p);

    private :
        std::string name;
        int age;
        static size_t alive_objects;
        static size_t destroyed_objects;

    public :
        Person();
        Person(std::string name, int age);
        Person(const Person &source);       
        ~Person();
        static void status();
};

size_t Person::alive_objects {};
size_t Person::destroyed_objects {};


Person::Person()
    : name {"UNNAMED"}, age {0} {
        std::cout << "Default constructor called for "  << *this << std::endl;
        Person::alive_objects++;
}

Person::Person(std::string name, int age)
    : name {name}, age {age} {
        std::cout << "Parameterized constructor called for " << *this << std::endl;
        Person::alive_objects++;
}

Person::~Person() {
        std::cout << "Destructor called for " << *this << std::endl;
        Person::alive_objects--;
        Person::destroyed_objects++;
}

Person::Person(const Person &source) 
    : name {source.name}, age {source.age + 1} {
        std::cout << "Copy constructor called for " << *this << std::endl;
        Person::alive_objects++;        
}

std::ostream &operator<<(std::ostream &out, const Person &p) {
    out << p.name << " : " 
        << p.age << std::endl;
    return out;
}

void Person::status() {
    std::cout << "\nAlive objects = " << Person::alive_objects
              << "\nDestroyed objects  = " << Person::destroyed_objects << std::endl;
}

int main() {
    Person p1 {};
    {
        Person p2 {"Abhishek", 18};
        Person p3 {p2};
    }
    Person::status();
    std::cout << std::endl;
    return 0;
}