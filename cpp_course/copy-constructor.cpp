#include <iostream>
#include <string>

class Player
{
    private :
        std::string name;
        unsigned int health, xp;
    
    public :
        std::string get_name() {return name;}
        int get_health() {return health;}
        int get_xp() {return xp;}
        Player(std::string name_value = "None", unsigned int health_value = 100, unsigned int xp_val = 0);
        Player(const Player &source);
        ~Player() {std::cout << "Destructor called for " << name << std::endl;}
};



void display(Player p);
Player create_super_enemy();
 
int main()
{
    Player empty {"XXXX", 100, 50}/* , frank {"Frank"}, hero{"Hero", 100}, villain {"Villain", 100, 55} */;
    Player my_new_object{empty};
    display(empty);
    Player super_enemy = create_super_enemy();
    std::cout << std::endl;
    display(super_enemy);

    return 0;
}

Player::Player(std::string name_value, unsigned int health_value, unsigned int xp_value)
    :name {name_value}, health {health_value}, xp {xp_value}
    {
        std::cout << "Three args constructor called for " << name << std::endl;
    }

Player::Player(const Player &source)
    : Player {source.name, source.health, source.xp} //delegation can also be used here     /* name {source.name}, health {source.health}, xp {source.xp} */
    {
        std::cout << "Copy constructor - made a copy of :: " << source.name << std::endl;
    }


void display(Player p)
{
    std::cout << "Name :: " << p.get_name() << std::endl
              << "Health :: " << p.get_health() << std::endl
              << "XP :: " << p.get_xp() << std::endl; 
}

Player create_super_enemy()
{
    Player super_enemy {"Super Enemy", 1000, 1000};
    return super_enemy;
}