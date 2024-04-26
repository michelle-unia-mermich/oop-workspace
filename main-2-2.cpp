#include <iostream>
#include "AirVehicle.h"
#include "Airplane.h"
using namespace std;
#include <string>
int main() {

    Airplane airplane1= Airplane(5000,100);
    airplane1.set_fuel(95);
    airplane1.fly(65,120);
    cout << airplane1.get_fuel()<<endl; //check if it is correctly 23%
    return 0;
}