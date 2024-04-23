#include "TV.h"
#include "Appliance.h"
#include <iostream>
using namespace std;

TV::TV():Appliance()
{ //Is this the right way to declare constructor of the child class, wanting to use constructor of the parent class while also declaring new attributes that only the child class has?
    _screenSize=0;
}

TV::TV(int powerRating, double screenSize):Appliance(powerRating)
{
    _screenSize= screenSize;
}

void TV::setScreenSize(double screenSize)
{
   _screenSize= screenSize;
}

double TV::getScreenSize()
{
    return  _screenSize;
}

double TV::getPowerConsumption()
{
    //calculate and return the power consumption based on the power rating and the volume of the fridge
    // Formula: power consumption= power rating * 24 * (volume/100)
    double ans=_powerRating*(_screenSize/10);
    return ans;
} 