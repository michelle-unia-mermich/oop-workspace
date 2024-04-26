#include <iostream>
#include "AirVehicle.h"
using namespace std;
#include <string>

int main() {
    AirVehicle vechile1 = AirVehicle();
    AirVehicle vechile2 = AirVehicle(500);

    cout<< "Vehicle1 "<< endl;

    cout<< vechile1.get_weight() << endl;
    vechile1.set_weight(600);
    cout<< vechile1.get_weight() << endl;

    cout<< vechile1.get_fuel() << endl;
    vechile1.set_fuel(70); // no need to cast (float) 70
    cout<< vechile1.get_fuel() << endl;
    vechile1.refuel();
    cout<< vechile1.get_fuel() << endl;

    cout<< vechile1.get_numberOfFlights() << endl;
    vechile1.set_numberOfFlights(100);
    cout<< vechile1.get_numberOfFlights() << endl;
    vechile1.fly(200, 40);
    cout<< vechile1.get_numberOfFlights() << endl;

    cout<< "Vehicle2 "<< endl;

    cout<< vechile2.get_weight() << endl;
    vechile2.set_weight(600);
    cout<< vechile2.get_weight() << endl;

    cout<< vechile2.get_fuel() << endl;
    vechile2.set_fuel(70);
    cout<< vechile2.get_fuel() << endl;
    vechile2.refuel();
    cout<< vechile2.get_fuel() << endl;

    cout<< vechile2.get_numberOfFlights() << endl;
    vechile2.set_numberOfFlights(100);
    cout<< vechile2.get_numberOfFlights() << endl;
    vechile2.fly(200, 40);
    cout<< vechile2.get_numberOfFlights() << endl;

    return 0;
}