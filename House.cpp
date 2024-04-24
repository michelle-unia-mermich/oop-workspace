#include "Appliance.h"
#include "House.h"
#include <iostream>

House::House()
{
    _numAppliances=0;
    _currentnumAppliances=0;
}

House::House(int numAppliances)
{
    _numAppliances=numAppliances;
    appliances= new Appliance*[numAppliances];
    _currentnumAppliances=0;
    // House class uses aggregation to hold an array of Appliance pointers (not Appliance objects) representing the appliances in the House
    // The house class should own the appliances and should be responsible for deallocating them
}


bool House::addAppliance(Appliance * appliance)
{
    //takes an Appliance pointer and adds it to the array of appliances in the House object
    bool ans=false;
    if  (_currentnumAppliances<_numAppliances)
    {
        ans = true;
        appliances[_currentnumAppliances]=appliance;
        //when _currentnumAppliances==0; use *(appliance+0)
        //when _currentnumAppliances==1; use *(appliance+1)
        _currentnumAppliances++;
    }
    else{
        ans=false;
    }

    return ans;
}



//getter and setter functions
int House::get_numpAppliances()
{
    return _numAppliances;
}
void House::set_numpAppliances(int numAppliances)
{
    _numAppliances=numAppliances;
}
double House::get_totalPowerConsumption()
{
    double sum=0;
    for (int i=0; i<_numAppliances; i++)
    {
        sum+=(*(appliances[i])).getPowerConsumption();
    }
    return sum;
}
    