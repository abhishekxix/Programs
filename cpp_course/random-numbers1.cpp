#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int random_number {};

    size_t count {10}; //number of random numbers to generate
    int min {1}, max {6}; //upper bound and lower bound (both inclusive)
    
    //seed the random number generator.
    //if the random number generator is not seeded, we get the same number sequence every run

    cout << "RAND_MAX on my system is :: " << RAND_MAX << endl;
    srand(time(nullptr));

    for(size_t i {0}; i < count; i++)
    {
        random_number = (rand() % max) + min; //generate a random number [min, max]
        cout << random_number << endl;
    }
    
    return 0;
}