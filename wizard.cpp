#include <iostream>
#include "wizard.h"
#include <string>
using namespace std;

Wizard::Wizard(string name, int health, int damage, int mana)
{
    _name=name;
    _health=health;
    _damage=damage;
    _mana=mana;
}

int Wizard::getMana()
{
    return _mana;
}

void Wizard::setMana(int new_mana)
{
    _mana= new_mana;
}

void Wizard::castSpell(Player* opponent)
{
    //the wizard attacks accordingn to damage that is mana, not the damage of the parent class? so the damage data member of the wizard is useless?
    int damage_player= this->getMana();
    cout << this->getName() << " casts a spell on " << opponent->getName() << " for " <<  damage_player << " damage.\n";
    attack(opponent, damage_player);
}