#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

class Player
{
    private :
        std::string name;
        unsigned short int health, xp;
        static size_t num_players;

    public :
        inline std::string getname() const {return this->name;}
        inline void set_name(std::string name_value) {this->name = name_value;}
        inline unsigned short int get_health() {return this->health;}
        inline unsigned short int get_xp() {return this->xp;}
        //static class function
        static size_t get_num_players();
        //constructors
        Player(std::string name_value = "none", unsigned short int health_value = 100, unsigned short int xp_value = 100);
        //copy constructor
        Player(const Player &source);
        //destructor
        ~Player();
};

#endif  //_PLAYER_H_
