#include "Motorbike.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

Motorbike::Motorbike():Vehicle(){}

Motorbike::Motorbike(int ID):Vehicle(ID){}

int Motorbike::getParkingDuration()
{
    time_t current_time; //when calling out the function
    current_time=time(0);
    return ((85/100)*difftime(current_time,timeOfEntry));//in seconds, discount 15%
}