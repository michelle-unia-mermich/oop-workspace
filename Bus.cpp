#include "Bus.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;

Bus::Bus():Vehicle(){}

Bus::Bus(int ID):Vehicle(ID){}

double Bus::getParkingDuration()
{
    time_t current_time; //when calling out the function
    current_time=time(0);
    return (0.75*((double)(difftime(current_time,timeOfEntry))));//in seconds, discount 25% for bus
}