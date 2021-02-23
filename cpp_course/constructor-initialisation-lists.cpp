#include <iostream>
#include <string>

class Player
{
    private :
        std::string name;
        unsigned int health, xp;
    
    public :
        //Overloaded constructors
        Player();
        Player(std::string name_value);
        Player(std::string name_value, unsigned int health_value, unsigned int xp_value);
};

Player::Player()
    :name {"none"}, health {100}, xp {0}
{
   /*  name = "None";  //assignment, not initialisation.
    health = 0;
    xp = 0; */
}

Player::Player(std::string name_value)
    :name {name_value}, health {100}, xp {0} // initialiser list -This order does not matter, The initialisation will be in the order of declaration
    
{
    /* name = name_value;
    health = 100;
    xp = 0; */
}

Player::Player(std::string name_value, unsigned int health_value, unsigned int xp_value)
    :name {name_value}, health {health_value}, xp {xp_value}
{
    /* name = name_value;
    health = health_value;
    xp = xp_value; */
}

int main()
{
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    return 0;
}