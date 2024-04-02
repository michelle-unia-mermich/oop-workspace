#ifndef WIZARD_H
#define WIZARD_H
#include <string>
using namespace std;
#include "player.h"

class Wizard: public Player 
{
    private:
        int _mana;
    public:
        //missing empty constructor
        Wizard(string name, int health, int damage, int mana); 
        void castSpell(Player* opponent);
        
        //getter
        int getMana();

        //setter
        void setMana(int new_mana);

    
    ~Wizard()
    {
    };
};

#endif //WIZARD