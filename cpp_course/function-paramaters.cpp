#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector <string> v);
void print_vector(vector <string> v);



int main()
{
    int num {10}, another_num {20};

    cout << "num before calling pass_by_value1() is :: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1() is :: " << num << endl;

    cout << "\nanother_num before calling pass_by_value1() is :: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1() is :: " << another_num << endl;

    string name {"Abhishek"};
    cout << "\nname before calling pass_by_value2() is :: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2() is :: " << name << endl;

    vector <string> stooges {"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3() is :: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3() is :: ";
    print_vector(stooges);
    

    return 0;
}

void pass_by_value1(int num)
{
    num = 1000;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector <string> v)
{
    v.clear();
}

void print_vector(vector <string> v)
{
    for(auto str : v)
        cout << str << " ";
    cout << endl;
}