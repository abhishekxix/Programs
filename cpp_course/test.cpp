#include <iostream>

using namespace std;

int main()
{   
    int score {};
    
    cout << "Enter your score -> ";
    cin >> score;

    if(score > 90)
        if(score > 95)
            cout << "A+";
        else 
            cout << 'A';
    else 
        cout << "Sorry, no A";

    return 0;
}