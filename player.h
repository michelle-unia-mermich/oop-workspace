#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player 
{
    protected: //if we change this to private then wizard and warrior cannot use those data members
        string _name;
        int _health;
        int _damage;
    public:
        Player(); //do we need this empty constructor
        Player(string name, int health, int damage); 
        void attack(Player* opponent, int damage);
        void takeDamage(int damage);

        //getter
        string getName();
        int getHealth();
        int getDamage();

        //setter
        void setName(string new_name);
        void setHealth(int new_health);
        void setDamage(int new_damage);
    
    ~Player()
    {
        //if we don't declare anything then no need destructor?
    };
};

#endif //PLAYER