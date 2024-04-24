#ifndef HOUSE_H
#define HOUSE_H
#include <string>
using namespace std;
#include "Appliance.h"

class House
{
    protected:
        int _numAppliances;
        Appliance ** appliances;

    public:
        House();
        House(int numAppliances); 
        
        bool addAppliance(Appliance * appliance);
        //add an Appliance object to the house
        // return true if there is space in the house otherwise return false
        
        //getter and setter functions
        int get_numpAppliances();
        void set_numpAppliances(int numAppliances);
        

        double get_totalPowerConsumption(); 
        //return the total power consumption of all appliances in the house


    ~House()
    {
        delete [] appliances ;

        for (int i = 0; i < _numAppliances; i++)
        {
            delete appliances[i];
        }

    };
};

#endif
