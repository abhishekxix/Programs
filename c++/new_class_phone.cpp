#include <iostream>
#include <cmath>

class Phone {
    private :
        int std_code;
        int exchange_code;
        int phone_number;

    public :
        Phone(int std_code = 0, int exchange_code = 0, int phone_number = 0);
        void read();
        void display();
        void change(const Phone &source);
};

Phone::Phone(int std_code, int exchange_code, int phone_number)
    : std_code {std_code}, exchange_code {exchange_code}, phone_number {phone_number}
{}

void Phone::read() {
    std::cout << "Enter the STD code -> ";
    std::cin >> std_code;
    std::cout << "Enter the exchange code -> ";
    std::cin >> exchange_code;
    std::cout << "Enter the phone number -> ";
    std::cin >> phone_number;
}

void Phone::display() {
    std::cout << std_code << '-' << exchange_code << '-' << phone_number << std::endl;
}



int main() {
    Phone original, changed;
    original.read();
    std::cout << "Original number :: ";
    original.display();
    changed.change(original);
    std::cout << "\nChanged number :: ";
    changed.display();

    return 0;
}

void Phone::change(const Phone &source) {
    int temp {source.std_code};
    int number_of_digits {};
    
    for(; temp > 0; temp /= 10) {
        number_of_digits++;
    }
    number_of_digits--;
    int power_of_10 {std::pow(10, number_of_digits)};
    int new_std {source.std_code / power_of_10};
    new_std++;
    new_std = (new_std * power_of_10) + source.std_code % power_of_10;

    this->std_code = new_std;
    this->exchange_code = source.exchange_code;
    

    temp = source.phone_number;
    number_of_digits = 0;

    ;
    for(; temp > 0; temp /= 10) {
        number_of_digits++;
    }
    number_of_digits -= 2;
    power_of_10 = std::pow(10, number_of_digits);
    int new_phone {source.phone_number / power_of_10};

    temp = new_phone;
    int reversed {};

    for(; temp > 0; temp /= 10) {
        reversed = (reversed * 10) + temp % 10;
    }
    new_phone = reversed;
    new_phone = (new_phone * power_of_10) + source.phone_number % power_of_10;
    this->phone_number = new_phone;
}