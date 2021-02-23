#include <iostream>
#include <string>

class Player
{
    public :
        std::string name;
        unsigned int health, xp;
    
    
       /*  //Overloaded constructors
        Player() {}
        Player(std::string name_value); */
        Player(std::string name_value = "none", unsigned int health_value = 100, unsigned int xp_value = 100);
};

/* Player::Player()
    : Player {"none", 100, 0}
{
    std::cout << "No-args constructor." << std::endl;
}

Player::Player(std::string name_value)
    : Player{name_value, 100, 0}  // we can also type Player(name_value, 100, 0)  
{
    std::cout << "One arg constructor." << std::endl;

} */

Player::Player(std::string name_value, unsigned int health_value, unsigned int xp_value)
    :name {name_value}, health {health_value}, xp {xp_value}
{
    std::cout << "Three args constructor." << std::endl;
}

int main()
{
    Player empty;
    Player frank {"Frank"};
    Player villain {"Villain", 100, 55};
    
    std::cout << empty.name << " " << empty.health  << " " << empty.xp << std::endl;
    std::cout << frank.name << " " << frank.health << " " << frank.xp << std::endl;
    std::cout << villain.name << " " << villain.health << " " << villain.xp << std::endl << std::endl;

    return 0;
}