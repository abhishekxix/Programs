#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int score {100};
    int* score_ptr {&score};

    cout << "*score_ptr is :: " << *score_ptr << endl;

    *score_ptr = 200;
    
    cout << "*score_ptr is :: " << *score_ptr << endl
         << "score is :: " << score << endl;

    cout << "\n-------------------------------------" << endl;
    
    double high_temp {100.7}, low_temp {37.4};
    double *temp_ptr{&high_temp};
    
    cout << "*temp_ptr is :: " << *temp_ptr << endl;
    temp_ptr = &low_temp;
    cout << "*temp_ptr is :: " << *temp_ptr << endl;

    cout << "\n-------------------------------------" << endl;
    string name {"Abhishek"};
    string *string_ptr = &name;
    cout << "*string_ptr is :: " << *string_ptr << endl; //Abhisheks
    name  = "James";
    cout << "*string_ptr is :: " << *string_ptr << endl; //James

    cout << "\n-------------------------------------" << endl;
    vector <string> stooges {"Larry", "Moe", "Curly"};
    vector <string> *vector_ptr {&stooges};

    cout << "First stooge :: " << (*vector_ptr).at(0) << endl;
    // cout << stooges << endl;

    for(string/*string or auto */ stooge : *vector_ptr)
        cout << stooge << " ";
    cout << endl;

    return 0;
}