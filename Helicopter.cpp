#include "Helicopter.h"
#include "AirVehicle.h"
#include <iostream>
using namespace std;

Helicopter::Helicopter():AirVehicle()
{ 
    name=""; //do we need to set name to null or just leave everything empty here
    //and is this the right way for null string or "/0"
}

Helicopter::Helicopter(int w, string n):AirVehicle(w)
{
    name = n;
}

void Helicopter::set_name(string new_name)
{
    name = new_name;
}

string Helicopter::get_name()
{
    return name;
}

void Helicopter::fly(int headwind, int minutes)
{
    //When a helicopter flies, increase numberOfFlights by 1
    // headwind < 40 km/h: it uses 0.18 of its fuel (of THE ORIGINAL 100% FUEL, NOT THE CURRENT FUEL. WE ARE NOT USING COMPOUND PERCENTAGE HERE.) for every minute it flies
    // headwind >= 40 km/h: it sues 0.4% of its fuel for every minute it flies
    // weight <= 5670 kg: nothing happens
    // weight >5670 kg: it uses (0.01%*the difference between weight and 5670) extra fuel each minute

    //eg. if fuel is at 80%, and a 5690kg helicopter flies for 10 minutes with 45 km/h headwind, the fuel after 10 minutes is:
    // 80% - (0.4*10)-(0.01*20*10)=74% //where as 20 is 20 kg - the difference between 5690 and 5670 and 10 is 10 minutes
    //notice the unit of fuel is in %. that's why the test says 80 - (0.4*10)

    //If a flight results in the helicopter finishing with less than 20% it will not take off and fly won't use fuel, and won't increase numberOfFlights
    
    
    float percent_fuel_used_fromheadwind=0.0;
    float percent_fuel_used_fromweight=0.0;

    if (headwind<40)
    {
        percent_fuel_used_fromheadwind=0.18;
    }
    else
    {
        percent_fuel_used_fromheadwind=0.4;
    }

    if (weight>5670)
    {
        percent_fuel_used_fromweight=0.01;
    }
    else
    {
        percent_fuel_used_fromweight=0.0;
    }

    float fuel_left=0.0;
    fuel_left= fuel - (percent_fuel_used_fromheadwind*minutes) - (percent_fuel_used_fromweight*(weight-5670)*minutes);

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
/*
is there a way that we can call the function of base class and also call the function of child class to add more functionality
*/