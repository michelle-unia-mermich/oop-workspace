#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle 
{
    protected:
        time_t timeOfEntry; //represents the time at which the vehicle entered the parking lot, initialised at the time when the object is created.
        int _ID;
    public:
        Vehicle();
        Vehicle (int ID);
        int getID();
        //time_t get_timeOfEntry();
        int getParkingDuration();
   
    ~Vehicle()
    {
        
    };
};

#endif 
