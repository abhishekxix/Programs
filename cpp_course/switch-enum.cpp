#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("clear");

    enum Direction
    {
        left, right, up, down
    };

    Direction heading {left};
    
    switch(heading)
    {
        case left :
            cout << "Going left.";
            break;
        case right :
            cout << "Going right";
            break;
        default : 
            cout << "OK";
    }

    return 0;
}