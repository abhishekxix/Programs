#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num {10};

    cout << "Value of num is :: " << num << endl
         << "sizeof num is :: " << sizeof num << endl
         << "Address of num is :: " << &num << endl;
    
    int *p;
    cout << "\nValue of p is  :: " << p << endl
         << "Address of p is :: " << &p << endl
         << "sizeof p is :: " << sizeof p << endl;

    p = nullptr;
    cout << "\nValue of p is :: " << p << endl;

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector <string> *p4 {nullptr};
    string *p5 {nullptr};

    cout << "\nsizeof p1 is :: " << sizeof p1 << endl
         << "sizeof p2 is :: " << sizeof p2 << endl
         << "sizeof p3 is :: " << sizeof p3 << endl
         << "sizeof p4 is :: " << sizeof p4 << endl
         << "sizeof p5 is :: " << sizeof p5 << endl;
    
    int score {10};
    double high_temp {100.7};

    int * score_ptr {nullptr};

    score_ptr = &score;
    
    cout << "\nValue of score is :: " << score << endl
         << "Adress of socre is :: " << &score << endl
         << "Value of score_ptr is :: " << score_ptr << endl;

  // score_ptr = &high_temp; 
    return 0;
}