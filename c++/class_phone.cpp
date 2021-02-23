#include <iostream>

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
    std::cout << "Enter the STD code(3 digits) -> ";
    std::cin >> std_code;
    std::cout << "Enter the exchange code -> ";
    std::cin >> exchange_code;
    std::cout << "Enter the phone number(3 digit) -> ";
    std::cin >> phone_number;
}

void Phone::display() {
    std::cout << std_code << '-' << exchange_code << '-' << phone_number << std::endl;
}

void Phone::change(const Phone &source) {
    int new_std {source.std_code / 100};
    new_std++;
    new_std = (new_std * 100) + source.std_code % 100;
    this->std_code = new_std;
    this->exchange_code = source.exchange_code;
    
    int new_phone {source.phone_number / 10};
    int temp {new_phone}, reversed {};

    for(; temp > 0; temp /= 10) {
        reversed = (reversed * 10) + temp % 10;
    }
    new_phone = reversed;
    new_phone = (new_phone * 10) + source.phone_number % 10;
    this->phone_number = new_phone;
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