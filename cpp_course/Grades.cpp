#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");
    
    int score {};

    cout << "Enter your score for the exam (0 - 100) -> ";
    cin >> score;
    char letter_grade {};

    if(score >= 0 && score <= 100)
    {
        if(score >= 90)
            letter_grade = 'A';
        else if(score >= 80)
            letter_grade = 'B';
        else if(score >= 70)
            letter_grade = 'C';
        else if(score >= 60)
            letter_grade = 'D';
        else 
            letter_grade = 'F';
        
        cout << "\nYour letter grade is :: " << letter_grade;
        
        if(letter_grade == 'F')
            cout << "\nSorry, you have to repeat the class.";
        else 
            cout << "\nCongratulations! You have passed the exam.";
    }

    else
    {
        cout << "Sorry, " << score << " is not in range." << endl;
    }
    
    return 0;
}