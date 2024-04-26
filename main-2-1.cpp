#include <iostream>
#include "AirVehicle.h"
#include "Helicopter.h"
using namespace std;
#include <string>
int main() {

    Helicopter helicopter1= Helicopter(5690,"Helicopter1");
    helicopter1.set_fuel(80);
    helicopter1.fly(45,10);
    cout << helicopter1.get_fuel()<<endl; //check if it is 74%
    return 0;
}