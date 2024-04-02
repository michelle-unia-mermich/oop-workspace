#include <iostream>
#include "player.h"
#include <string>
using namespace std;

Player::Player()
{
    _name = '\0'; //setting to null
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
    //deal damage to the opponent by the input damage in this function. not the damage variable of the attacker?
    //minus the damage of the opponent by subtracting the inputted damage

    int new_health_of_opponent;
    new_health_of_opponent= (opponent->getHealth()) -damage;
    opponent->setHealth(new_health_of_opponent);
    //in here we are changing damage of another player object, not the object we are using this function on so we need to use setter
 }

 void Player::takeDamage(int damage)
 {
    //reduce the player's health by the inputted amount (damange)
    int new_health= this->getHealth()-damage;
    this->setHealth(new_health);
    //in here we are changing directly the data members of the object we use the function on so we don't have to use setter
    cout << this->getName() << " takes " << damage << " damage. Remaining health: " << this->getHealth() << "\n";
 }

