#include "Player.h"

size_t Player::num_players {0};

Player::Player(std::string name_value, unsigned short int health_value, unsigned short int xp_value)
    : name {name_value}, health {health_value}, xp {xp_value} 
{
    num_players++;
}

Player::Player(const Player &source)
    : Player{source.name, source.health, source.xp}
{}

Player::~Player()
{
    --num_players;
}

size_t Player::get_num_players()
{
    return num_players;
}