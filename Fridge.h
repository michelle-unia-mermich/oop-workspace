#ifndef FRIDGE_H
#define FRIDGE_H
#include <string>
using namespace std;
#include "Appliance.h"

class Fridge: public Appliance
{
    private:
        double _volume; //volume in litres

    public:
        Fridge();
        Fridge(int powerRating, double volume);
        
        void setVolume(double volume);
        double getVolume();

        double getPowerConsumption(); //calculate and return the power consumption based on the power rating and the volume of the fridge

    ~Fridge()
    {

    };
};

#endif
