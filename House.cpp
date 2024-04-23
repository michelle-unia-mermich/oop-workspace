#include "Appliance.h"
#include "House.h"
#include <iostream>

House::House()
{
    _numAppliances=0
}

House::House(int numAppliances)
{
    _numAppliances=numAppliances;
    _isOn=false;
}

void Appliance::turnOn()
{
    //There are two ways to flip a bool value without being too inefficient
   //_isOn= !_isOn
   _isOn= not _isOn;
}

void Appliance::turnOff()
{
   _isOn= not _isOn;
}

double Appliance::get_powerRating()
{
   return _powerRating;
}

double Appliance::get_isOn()
{
   return _isOn;
}

void Appliance::set_powerRating(int new_powerRating)
{
    _powerRating=new_powerRating;
}

double Appliance::getPowerConsumption()
{
    return 0;
}