#include "Fridge.h"
#include "Appliance.h"
#include <iostream>
using namespace std;

Fridge::Fridge():Appliance()
{ //Is this the right way to declare constructor of the child class, wanting to use constructor of the parent class while also declaring new attributes that only the child class has?
    _volume=0;
}

Fridge::Fridge(int powerRating, double volume):Appliance(powerRating)
{
    _volume= volume;
}


//Ofc I can do like this but it is inefficient
Fridge::Fridge(int powerRating, double volume)
{
    _powerRating=powerRating;
    _volume= volume;
}



void Fridge::setVolume(double volume)
{
    _volume=volume;
}

double Fridge::getVolume()
{
    return _volume;
}

double Fridge::getPowerConsumption()
{
    //calculate and return the power consumption based on the power rating and the volume of the fridge
    // Formula: power consumption= power rating * 24 * (volume/100)
    double ans=_powerRating*24*(_volume/100);
    return ans;
} 