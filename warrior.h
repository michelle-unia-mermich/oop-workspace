#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
using namespace std;
#include "player.h"

class Warrior: public Player //if I put public here, nothing will be downgraded. If I put protected, everything above protected will be downgraded to protected: public of parent to protected in daughter, protected stays protected, and private stays private because private is below protected. If I put private here, everything above private will be downgraded to private
{
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
        //if we don't declare any dynamically allocated variables then no need destructor
    };
};

#endif //WARRIOR
