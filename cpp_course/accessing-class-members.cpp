#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player //defining a class.
{
    public:
    //attributes
    string name;
    int health , xp;
    
    //methods
    void talk(string text_to_say)
    {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead()
    {
        if(health == 0)
            return true;
        return false;
    }
};

class Account
{
    public:
    //attributes
    string name;
    double balance;

    //methods
    bool deposit(double amount)
    {
        balance += amount;
        return true;
    }
    bool withdraw(double amount)
    {
        balance -= amount;
        return true;
    }
};

int main()
{
    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;
    frank.talk("hi there");
    cout << boolalpha << "Frank is dead :: " << frank.is_dead() << endl; 

    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you");      
    /* we are able to modify the class attributes from the  main() function because they are marked 
    as public in the class declaration. */
    Account frank_account;
    cout << "deposit of 1000.98 done :: " << frank_account.deposit(1000.98) << endl;
    return 0;
}
