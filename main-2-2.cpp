#include <iostream>
#include "TV.h"
#include "Appliance.h"
using namespace std;
#include <string>

int main() {

    TV empty_TV= TV();
    //Check if _volume of empty_TV =0, powerRating is 0, and _isOn=false
    cout << "Check if the empty TV funcioned well: "<< endl;
    cout << "The screensize of the TV: "<< empty_TV.getScreenSize() << endl;
    cout << "The power rating of the TV is: "<< empty_TV.get_powerRating() << endl;
    cout << "The state on or off of the TV is: "<< empty_TV.get_isOn() << endl;

    TV TV1= TV(10000,200);
    cout << "Print out the original information of TV(10000,200): "<< endl;
    cout<< "The screen size of the TV is (in liters): "<< TV1.getScreenSize()<< endl;
    cout<< "The power rating of the TV is: "<< TV1.get_powerRating()<< endl;
    cout<< "The state on or off of the TV is: "<< TV1.get_isOn()<< endl;
    cout<< "Get power consumption of the TV: "<< TV1.getPowerConsumption()<< endl;
    TV1.setScreenSize(300);
    cout<< "Set a new screensize 400 for the TV, print out new screensize: "<< TV1.getScreenSize()<< endl;
    TV1.set_powerRating(5000);
    cout<< "Set a new power rating 5000 for the TV, print out new power rating: "<< TV1.get_powerRating()<< endl;
    cout<< "Get the new power consumption of the TV: "<< TV1.getPowerConsumption()<< endl;

    cout<< "Turn on and turn off the appliance: "<< endl;
    TV1.turnOn();
    cout<< "TV1 has been turned on, print out the state isOn: "<< TV1.get_isOn()<< endl;
    TV1.turnOff();
    cout<< "TV1 has been turned off, print out the state isOn: "<< TV1.get_isOn()<< endl;
    return 0;
}