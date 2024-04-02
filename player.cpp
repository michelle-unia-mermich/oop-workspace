#include <iostream>
#include "player.h"
#include <string>
using namespace std;

Player::Player()
{
    _name = '\0'; //setting to NULL is impossible because that only works for pointer. _name is a string
    _health=0;
    _damage=0;

}

Player::Player(string name, int health, int damage)
{
    _name = name;
    _health= health;
    _damage= damage;

}

string Player::getName()
{
    return _name;
}

int Player::getDamage()
{
    return _damage;
}

int Player::getHealth()
{
    return _health;
}

void Player::setDamage(int new_damage)
{
    _damage= new_damage;
}

void Player::setHealth(int new_health)
{
    _health= new_health;
}

void Player::attack(Player* opponent, int damage)
 {

    int new_health_of_opponent;
    new_health_of_opponent= (opponent->getHealth()) -damage;
    opponent->setHealth(new_health_of_opponent);
    //in here we are changing damage of another player object, not the object we are using this function on so we need to use object->setter
 }

 void Player::takeDamage(int damage)
 {
    int new_health= _health-damage;
    this->setHealth(new_health);

    //no matter if _name, _health, _damage are in private or protected class, we can call them out here without using getter or setter functions if we are defining functions belonging to the same object of the same class we are using the functions on eg. in this case takeDamage()
    //so line 63 is no need
    //cout << this->getName() << " takes " << damage << " damage. Remaining health: " << this->getHealth() << "\n";
    cout << _name << " takes " << damage << " damage. Remaining health: " << _health << "\n";
 }

