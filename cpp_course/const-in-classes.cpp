#include <iostream>
#include <string>

class Player 
{
    private :
        std::string name;
        unsigned short int health, xp;

    public :
        std::string get_name() const {return this->name;}   //const here means that this method can never modify anything.
        void set_name(std::string name_value) {this->name = name_value;}

        //constructor
        Player(std::string name_value = "none", unsigned short int health_value = 100, unsigned short int xp_value = 0);    
        Player(const Player &source);
};

void display_player(const Player &p);

int main()
{
    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};
    
    std::cout << villain.get_name() << std::endl;
    std::cout << hero.get_name() << std::endl; 
    display_player(villain); 
    display_player(hero);  

    return 0;
}


Player::Player(std::string name_value, unsigned short int health_value, unsigned short int xp_value)
    : name {name_value}, health {health_value}, xp {xp_value}
{
    std::cout << "Constructor called for " << this->name << std::endl;
}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp}
{

}

void display_player(const Player &p)
{
    std::cout << "The name of the player is " << p.get_name() << std::endl;
}

