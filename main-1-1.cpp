#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"

using namespace std;

int main() {
    //Wizard(name, health, damage, mana)
    Wizard wizard("Gandalf", 100, 20, 50);
    //Warrior(name, health, damage, weapon)
    Warrior warrior("Aragorn", 120, 25, "Sword");
    
    cout << "Let the battle begin!" << endl;
    
    while (wizard.getHealth() > 0 && warrior.getHealth() > 0) {
        wizard.castSpell(&warrior); //recall pass by value. here we only pass by value the address of warrior. we don't need to pass a pointer. then the function will get this address value and inside the function it will work as a pointer.
        if (warrior.getHealth() > 0) {
            warrior.swingWeapon(&wizard);
        }
    }
    
    if (wizard.getHealth() > 0) {
        cout << wizard.getName() << " wins!" << endl;
    } else {
        cout << warrior.getName() << " wins!" << endl;
    }
    
    return 0;
}
