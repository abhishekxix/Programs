#include <iostream>
#include <string>

using namespace std;


class Player //defining a class.
{
    private :
    //attributes
    string name {"player"};
    int health , xp;
    
    public :
    //methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead()
    {
        if(health == 0)
            return true;
        return false;
    }
};

int main()
{
    Player Abhishek;
  /*   Abhishek.name = "Abhishek Singh";

    cout << Abhishek.health << endl; */
    Abhishek.talk("hello there");

    return 0;
}
