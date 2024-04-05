#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
{
    _ID=0;
    timeOfEntry=time(0);
}

Vehicle::Vehicle(int ID)
{
    _ID=ID;
    timeOfEntry=time(0);
}

int Vehicle::getID()
{
    return _ID;
}

/*
time_t Vehicle::get_timeOfEntry()
{
    return timeOfEntry;
}
*/

/*
double Vehicle::getParkingDuration()
{
    return 5000;
}
*/