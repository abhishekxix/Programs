#include <iostream>
#include <limits>

class Student {
    private :
        std::string name;
        unsigned long int roll_number;
    
    public :
        Student(std::string name = "UNNAMED", unsigned int roll_number = 0);
        ~Student() = default;
        void get_data();
        void set_data();
};

Student::Student(std::string name, unsigned int roll_number)
    : name {name}, roll_number {roll_number}
{}

void Student::get_data() {
    std::cout << "Name :: " << this->name << std::endl
              << "Roll number :: " << roll_number << std::endl;
}

void Student::set_data() {
    std::cout << "Enter the Name -> ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, this->name);
    std::cout << "Enter the Roll number -> ";
    std::cin >> this->roll_number;
}

int main() {
    int number_of_students {};

    std::cout << "Enter the number of student to enter the record -> ";
    std::cin >> number_of_students;

    Student array_of_student_records[number_of_students] {};

    for(int i {}; i < number_of_students; i++) {
        std::cout << "\nStudent number " << i + 1 << std::endl;
        array_of_student_records[i].set_data();
    }

    std::cout << "The details of the students are :: \n";
    for(int i {}; i < number_of_students; i++) {
        std::cout << "\nStudent number " << i + 1 << std::endl;
        array_of_student_records[i].get_data();
    }

    return 0;
}