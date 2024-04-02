#include <iostream>
#include "warrior.h"
#include <string>
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon)
{
    _name=name;
    _health=health;
    _damage=damage;
    _weapon=weapon;
}
string Warrior::getWeapon()
{
    return _weapon;
}

void Warrior::setWeapon(string new_weapon)
{
    _weapon= new_weapon;
}

void Warrior::swingWeapon(Player* opponent)
{
    int damage_player=this->getDamage();
    //warrier deals the same damage (the data member in the player class) regardless of the type of weapon.
    cout<< this->getName() << " swings their " << this->getWeapon() << " at " << opponent->getName() <<"for amount damage: "<<damage_player<< "!\n";
    attack(opponent, damage_player);
}