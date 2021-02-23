#include <iostream>
#include <iomanip>

class Complex_Number {
    friend Complex_Number operator+(Complex_Number &arg1, Complex_Number &arg2);
    
    private :
        int real;
        int imaginary;
    
    public :
        Complex_Number(int real = 0, int imaginary = 0);
        void display() const;
        void set_values();
};

Complex_Number operator+(Complex_Number &arg1, Complex_Number &arg2) {
    return Complex_Number{(arg1.real + arg2.real), (arg1.imaginary + arg2.imaginary)};
}

Complex_Number::Complex_Number(int real, int imaginary)
    : real {real}, imaginary {imaginary}
{}

void Complex_Number::display() const {
    std::cout << real;
    std::cout << std::showpos << ' ' << imaginary <<"i" << std::endl;
}

void Complex_Number::set_values() {
    std::cout << "Enter the real part of Complex number -> ";
    std::cin >> this->real;
    std::cout << "Enter the imaginary part of Complex number -> ";
    std::cin >> this->imaginary;
}

int main() {
    Complex_Number num1 {}, num2 {}, result {};
    std::cout << "This program is used to add two complex numbers using classes and objects.\n" << std::endl;
    std::cout << "num1 :: " << std::endl;
    num1.set_values();
    std::cout << std::endl << "num2 :: " << std::endl;
    num2.set_values();
    result = num1 + num2;
    std::cout << "\nThe result of the addition of the two complex numbers = ";
    result.display();

    return 0;
}