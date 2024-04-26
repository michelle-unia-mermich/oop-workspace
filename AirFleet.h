#ifndef AIRFLEET_H
#define AIRFLEET_H
#include <string>
using namespace std;
#include "AirVehicle.h"

class AirFleet
{
    protected:
        AirVehicle **fleet; //max

    public:
        AirFleet(); //create an air fleet containing pointers to 5 AirVehicle objects as an array

        AirVehicle **get_fleet(); //return the array of pointers to the five AirVehicle objects


    ~AirFleet()
    {


        for (int i = 0; i < 5; i++)
        {
            delete fleet[i];
        }

        //delete [] fleet; //actually we can use this instead right because fleet[i] only points to onen object, not an array

    };
};

#endif
