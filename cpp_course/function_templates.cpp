#include <iostream>
#include <string>

template <typename Type>

inline Type min(Type a, Type b)
{
    return (a < b)? a : b;
}

template <typename Type1, typename Type2>
inline void func(Type1 a, Type2 b)
{
    std::cout << a << " " << b << std::endl;
}

struct Person
{
    std::string name;
    int age;
    bool operator<(Person rhs)
    {
        return (this->age < rhs.age);
    }
};

std::ostream &operator<<(std::ostream &out, const Person &p)
{
    out << p.name;
    return out;
}

template <typename Type>
void myswap(Type &a, Type &b)
{
    Type temp;
    temp = a;
    a = b;
    b = temp;
}


int main()
{
    Person Larry {"Larry", 50};
    Person Curly {"Curly", 30};
    
    std::cout << min<Person>(Larry, Curly).name << " is younger."<< std::endl;
    std::cout << min<int>(2, 3) << std::endl; 
    std::cout << min(2, 3) << std::endl; 
    std::cout << min('A', 'B') << std::endl;
    std::cout << min(12.52, 9.2) << std::endl; 
    std::cout << min(5 + 2 * 2, 7 + 40) << std::endl; 

    func<int, int>(10, 20);
    func<char, double>('A', 12.5);
    func('A', 12.5);
    func(1000, "Testing");
    func(2000, std::string {"Frank"});
    func(Larry, Curly);
    int x {100}, y {200};
    std::cout << x << " " << y << std::endl;
    myswap(x, y);
    std::cout << x << " " << y << std::endl;

    return 0;
}