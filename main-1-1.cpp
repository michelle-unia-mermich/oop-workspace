#include <iostream>
#include "Appliance.h"
using namespace std;
#include <string>

int main() {
    Appliance empty_appliance = Appliance();
    Appliance appliance1= Appliance(5000);
    
    appliance1.turnOn();
    appliance1.get_isOn(); 
    appliance1.turnOff();

    appliance1.set_powerRating(10000);
    appliance1.get_powerRating(); 

    appliance1.getPowerConsumption();
    return 0;
}