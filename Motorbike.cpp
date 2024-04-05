#include "Motorbike.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

Motorbike::Motorbike():Vehicle(){}

Motorbike::Motorbike(int ID):Vehicle(ID){}

double Motorbike::getParkingDuration()
{
    time_t current_time; //when calling out the function
    current_time=time(0);
    return (0.85*((double)(difftime(current_time,timeOfEntry))));//in seconds, discount 15%
}