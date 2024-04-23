#include <iostream>
#include "Fridge.h"
#include "Appliance.h"
using namespace std;
#include <string>

int main() {

    Fridge empty_fridge = Fridge();
    //Check if _volume of empty_fridge =0, powerRating is 0, and _isOn=false
    cout << "Check if the empty fridge funcioned well: "<< endl;
    cout << empty_fridge.getVolume() << endl;
    cout << empty_fridge.get_powerRating() << endl;
    cout << empty_fridge.get_isOn() << endl;

    Fridge fridge1= Fridge(10000,200);
    cout << "Print out the original information of Fridge(10000,200): "<< endl;
    cout<< "The volume of the fridge is (in liters): "<< fridge1.getVolume()<< endl;
    cout<< "The power rating of the fridge is: "<< fridge1.get_powerRating()<< endl;
    cout<< "The state on or off of the fridge is: "<< fridge1.get_isOn()<< endl;
    cout<< "Get power consumption of the fridge: "<< fridge1.getPowerConsumption()<< endl;
    fridge1.setVolume(300);
    cout<< "Set a new volume 400 for the fridge, print out new volume: "<< fridge1.getVolume()<< endl;
    fridge1.set_powerRating(5000);
    cout<< "Set a new power rating 5000 for the fridge, print out new power rating: "<< fridge1.get_powerRating()<< endl;
    cout<< "Get the new power consumption of the fridge: "<< fridge1.getPowerConsumption()<< endl;

    cout<< "Turn on and turn off the appliance: "<< endl;
    fridge1.turnOn();
    cout<< "Fridge1 has been turned on, print out the state isOn: "<< fridge1.get_isOn()<< endl;
    fridge1.turnOff();
    cout<< "Fridge1 has been turned off, print out the state isOn: "<< fridge1.get_isOn()<< endl;
    return 0;
}