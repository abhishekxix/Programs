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
    : Player {"none", 100, 0}
{
    std::cout << "No-args constructor." << std::endl;
}

Player::Player(std::string name_value)
    : Player{name_value, 100, 0}  // we can also type Player(name_value, 100, 0)  
{
    std::cout << "One arg constructor." << std::endl;

}

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
    
    return 0;
}