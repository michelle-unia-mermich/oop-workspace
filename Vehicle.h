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
        virtual double getParkingDuration(){return 500;};//QUESTION: i thought that even if I don't write virtual, overridding this function in the daughter class means that if I call this functionf from the daughter objects the base function will not be invoked. But it is after trying, printing out 5000. why? is there another way besides using virtual here
   
    ~Vehicle()
    {
        
    };
};

#endif 
