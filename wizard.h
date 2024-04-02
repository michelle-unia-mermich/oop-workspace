#ifndef WIZARD_H
#define WIZARD_H
#include <string>
using namespace std;
#include "player.h"

class Wizard: public Player 
{
    //will the data members in private of mother class be in private or public domain of daughter class if we declare public like this
    private:
        int _mana;
    public:

        Wizard(string name, int health, int damage, int mana); 
        void castSpell(Player* opponent);
        
        //getter
        int getMana();

        //setter
        void setMana(int new_mana);

    
    ~Wizard()
    {
        //if we don't declare anything then no need destructor?
    };
};

#endif //WIZARD