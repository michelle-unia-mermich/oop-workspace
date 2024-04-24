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
    appliances= new Appliance*[numAppliances];
}


bool House::addAppliance(Appliance * appliance)
{

}



//getter and setter functions
int House::get_numpAppliances()
{
    return _numAppliances
}
void House::set_numpAppliances(int numAppliances)
{
    _numAppliances=numAppliances;
}
double House::get_totalPowerConsumption(); 
    