#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player //defining a class.
{
    //attributes
    string name {"Player"};
    int health {100}, xp {3};
    
    //methods
    void talk(string);
    bool is_dead();
};

class Account
{
    //attributes
    string name {"Account"};
    double balance {0.0};

    //methods
    bool deposit(double);
    bool withdraw(double);
};

int main()
{
    Player frank, hero;     //declaring objects

    Player *enemy {nullptr};    //creaing a pointer to the class
        
    Player players[] {frank, hero}; //creating an array of objects.
    enemy = new Player; 
    delete enemy;
    vector <Player> players1 {frank};
    players1.push_back(hero);

    Account frank_account, jim_account;
    return 0;
}