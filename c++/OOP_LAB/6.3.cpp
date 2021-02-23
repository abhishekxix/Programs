#include <iostream>

class Int {
    friend std::ostream &operator<<(std::ostream &out, const Int &object);
    friend Int operator+(const Int &object1, const Int &object2);

    private :
        int var;
    
    public :
        Int();
        Int(int value);
        Int &operator=(Int rhs);
};

Int::Int()
    : var {} {}

Int::Int(int value) 
    : var {value} {}

std::ostream &operator<<(std::ostream &out, const Int &object) {
    out << object.var;
    return out;
}

Int operator+(const Int &object1, const Int &object2) {
    Int result {object1.var + object2.var} ;
    return result;
}

Int &Int::operator=(Int rhs) {
    var = rhs.var;
    return *this;
}

int main() {
    Int object1 {10}, object2 {20};
    Int result;
    result = object1 + object2;
    std::cout << result << std::endl;
    return 0;
}