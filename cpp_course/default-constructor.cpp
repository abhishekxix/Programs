#include <iostream>
#include <string>

class Player //defining a class.
{
    private :
        //attributes
        std::string name;
        int health, xp;
    
    public :
        void set_name(std::string name_value) {name = name_value;}
        std::string get_name() {return name;}
    Player()
    {
        name = "None";
        health = 100;
        xp = 3;
    }
    Player(std::string name_value, int health_value, int xp_value)
    {
        name = name_value;
        health = health_value;
        xp = xp_value;

    }
};

int main()
{
    Player frank;
    frank.set_name("Frank");
    std::cout << frank.get_name() << std::endl;
    Player new_player;
    std::cout << new_player.get_name() << std::endl;

    Player frank2 {"Frank", 100, 13};
    std::cout << frank.get_name() << std::endl;
    
    return 0;
}
