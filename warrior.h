#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
using namespace std;
#include "player.h"

class Warrior: public Player 
{
    //will the data members in private of mother class be in private or public domain of daughter class if we declare public like this
    private:
        string _weapon;
    public:
        Warrior(string name, int health, int damage, string _weapon); 
        void swingWeapon(Player* opponent);

        //getter
        string getWeapon();

        //setter
        void setWeapon(string new_weapon);
    
    ~Warrior()
    {
        //if we don't declare anything then no need destructor?
    };
};

#endif //WARRIOR
