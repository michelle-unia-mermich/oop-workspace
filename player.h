#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

class Player 
{
    //those things, protected, private, public are called ENCAPSULATION. in oop exam encapsulation is not tested.
    protected: //if we change this to private then wizard and warrior cannot use those data members
        string _name;
        int _health;
        int _damage;
    //however, the correct way is to declare those in private because we can use getter functions for daughter classes
    public:
        Player(); //WE ALWAYS NEED TO DEFINE EMPTY CONSTRUCTOR IN .H AND .CPP FOR A CLASS
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
        //no dynamically allocated array so no need destructor
    };
};

#endif //PLAYER