#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>

struct Student
{
    std::string name;
    std::string responses;
    size_t score;
};

void process_file(std::ifstream &in_file, std::vector<Student> &students, std::string &key, size_t &size);
void calculate_score(std::vector<Student> &students, const std::string &key, size_t &size, int &sum, double &average_score);
void display_result(std::vector<Student> &students, const int &student_field_width, const int &score_field_width, const double &average_score);


int main()
{
    std::ifstream in_file {"responses.txt"};
    std::string key {};
    std::vector<Student> students;
    size_t size {key.length()};
    int sum {};
    double average_score {};   


    process_file(in_file, students, key, size);
    calculate_score(students, key, size, sum, average_score);

    int student_field_width {20}, score_field_width {20};        
    display_result(students, student_field_width, score_field_width, average_score);  
    in_file.close();  

    return 0;
}

void process_file(std::ifstream &in_file, std::vector<Student> &students, std::string &key, size_t &size)
{
    Student input {};

    for(int i {};!in_file.eof(); i++)
    {
        if(i == 0)
        {
            in_file >> key;
            size = key.length();
        }
        in_file >> input.name >> input.responses;
        students.push_back(input);
    }
}

void calculate_score(std::vector<Student> &students, const std::string &key, size_t &size, int &sum, double &average_score)
{
    for(auto &student : students)
    {
        student.score = 0;
        for(size_t i {}; i < size; i++)
        {
            if(student.responses.at(i) == key.at(i))
                student.score++;
        }
        sum += student.score;
    }
    average_score = (students.size() != 0)?static_cast<double> (sum) / students.size() : 0;
}

void display_result(std::vector<Student> &students, const int &student_field_width, const int &score_field_width, const double &average_score)
{
    std::cout << std::setw(student_field_width) << std::left << "Student" << std::setw(score_field_width) << std::right<< "Score" << std::endl;
    std::cout << std::setw(student_field_width + score_field_width) << std::setfill('-') << "" << std::endl;
    std::cout << std::setfill(' ');
    for(const auto &student : students)
    {
        std::cout << std::setw(student_field_width) << std::left << student.name << std::setw(score_field_width) << std::right << student.score << std::endl;
    }
    std::cout << std::setw(student_field_width + score_field_width) << std::setfill('-') << "" << std::endl;
    std::cout << "Average score = " << average_score << std::endl;
}