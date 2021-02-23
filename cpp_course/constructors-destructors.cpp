#include <iostream>
#include <string>

class Player
{
    private :
        std::string name;
        int health, xp;
    
    public :
        void set_name(std::string input_name_) {name = input_name_;}
    //overloaded constructors
    Player()
    {
        std::cout << "No args constructor." << std::endl;
    }
    Player(std::string input_name)
    {
        std::cout << "String arg constructor called." << std::endl;
    }
    Player(std::string input_name, int health, int xp)
    {
        std::cout << "Three args constructor called." << std::endl;
    }
    ~Player()   //destructor
    {
        std::cout << "Destructor called for " << name << std::endl;
    }
};

int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    {
        Player frank;
        frank.set_name("Frank");
        Player hero {"hero"};
        hero.set_name("Hero");
        Player villain("Villain", 100, 12);
        villain.set_name("Villain");
    }
    Player *enemy {new Player};
    enemy->set_name("Enemy");

    Player *level_boss {new Player {"Level Boss", 100, 300}};
    level_boss->set_name("level boss");

    delete enemy;
    delete level_boss;
    
    return 0;
}