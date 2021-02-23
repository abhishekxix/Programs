/* #include <iostream>

void swap_values(int a, int b);
void swap(int &a, int &b);
void swap(int *p, int *q);

int main() {
    int a {10}, b {20};
    int *p {&a}, *q {&b};

    std::cout << "In main\na = " << a << "\tb = " << b << std::endl;
    swap_values(a, b);
    std::cout << "In main\n" << "a = " << a << "\tb = " << b << std::endl;
    swap(a, b);
    std::cout << "In main\na = " << a << "\tb = " << b << std::endl;
    swap(p, q);
    std::cout << "In main\na = " << a << "\tb = " << b << std::endl;

    return 0;
}

void swap_values(int a, int b) {
    a = a * b;
    b = a / b;
    a = a / b;
    std::cout << "Call by value\na = " << a << "\tb = " << b << std::endl;
}

void swap(int &a, int &b) {
    a = a * b;
    b = a / b;
    a = a / b;
    std::cout << "Call by reference\na = " << a << "\tb = " << b << std::endl;
}

void swap(int *p, int *q) {
    *p = *p * *q;
    *q = *p / *q;
    *p = *p / *q;
    std::cout << "Call by address\na = " << *p << "\tb = " << *q << std::endl;
} */

#include <iostream>
#include <string>

class Person {
    friend void display_by_value(Person p);
    friend void display_by_reference(Person &p);
    friend void display_by_pointer(Person *p);

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

void display_by_value(Person p) {
    p.name = "DEF";
    p.age = 13;
    std::cout << "Pass by value" << std::endl;
    std::cout << p.name << "\t" << p.age << std::endl;
}
void display_by_reference(Person &p) {
    std::cout << "Pass by reference" << std::endl;
    std::cout << p.name << "\t" << p.age << std::endl;
    p.name = "GHIJK";
    p.age = 23;
}

void display_by_pointer(Person *p) {
    std::cout << "Pass by pointer" << std::endl;
    std::cout << p->name << "\t" << p->age << std::endl;
}

int main() {
    Person p1 {"ABC", 12};
    display_by_value(p1);
    display_by_reference(p1);
    display_by_pointer(&p1);

    return 0;
}