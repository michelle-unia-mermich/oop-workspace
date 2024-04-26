#include "Airplane.h"
#include "AirVehicle.h"
#include <iostream>
using namespace std;

Airplane::Airplane():AirVehicle()
{ 
    numPassengers=0; //do we need to set name to null or just leave everything empty here
    
}

Airplane::Airplane(int w,int p):AirVehicle(w)
{
    numPassengers = p;
}


int Airplane::get_numPassengers()
{
    return numPassengers;
}

void Airplane::reducePassengers(int x)
{
    numPassengers=numPassengers-x;
    //no negaetive passengers
    if (numPassengers<0)
    {
        numPassengers=0;
    }
}

void Airplane::fly(int headwind, int minutes)
{
    // when a plane flies
    // headwind < 60 km/h:uses 0.25% fuel for every minute it flies
    // headwind >= 60 km/h: uses 0.5% fuel for each minute it flies
    // for every passenger, uses 0.001% extra fuel each minute.
    
    // eg. fuel is at 95%, a plane with 100 passengers, flies 120 minutes, 65km/h headwind
    // fuel = 95 - (0.5*120) - (0.001*100*120) =23 %
    //increase numberofflights by 1

    //if the flight results in less than 20% it will not take off
    
    float percent_fuel_used_fromheadwind=0.0;
    float percent_fuel_used_frompassenger=0.001;

    if (headwind<60)
    {
        percent_fuel_used_fromheadwind=0.25;
    }
    else
    {
        percent_fuel_used_fromheadwind=0.5;
    }


    float fuel_left=0.0;
    fuel_left= fuel - (percent_fuel_used_fromheadwind*minutes) - (percent_fuel_used_frompassenger*numPassengers*minutes);

    if (fuel_left>=20)
    {
        fuel=fuel_left;
        numberOfFlights++; 
    }
    else
    {
        //the vehicle does not take off
    }

}