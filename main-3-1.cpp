#include "AirFleet.h"
#include "AirVehicle.h"
#include "Helicopter.h"
#include "Airplane.h"
#include <iostream>
using namespace std;
#include <string>


int main() {

    AirFleet airfleet= AirFleet();
    AirVehicle** pointer= airfleet.get_fleet();
    for (int i=0; i<5; i++)
    {
        cout<< pointer[i]->get_weight()<< endl;
    }
    
    delete pointer; //there is no segmentation fault. why?

    return 0;
}