#ifndef FRIDGE_H
#define FRIDGE_H
#include <string>
using namespace std;
#include "Appliance.h"

class TV: public Appliance
{
    private:
        double _screenSize; //volume in litres

    public:
        TV();
        TV(int powerRating, double screenSize);
        
        void setScreenSize(double screenSize);
        double getScreenSize();

        double getPowerConsumption(); //calculate and return the power consumption based on the power rating and the volume of the fridge

    ~TV()
    {

    };
};

#endif
