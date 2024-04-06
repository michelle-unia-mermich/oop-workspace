#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <string>
#include "Vehicle.h"

//class definition
class ParkingLot 
{
    private:
        int _max_size;
        int current_size;
        Vehicle **vehicles;
        //Vehicle * vehicles = new array of objects not array of pointers

    public:
        ParkingLot();
        ParkingLot(int max_size);
        int getCount(); //get current count
        void parkVehicle(Vehicle* new_vehicle);
        void unparkVehicle(int ID);
        int countOverstayingVehicles(int maxParkingDuration);

    ~ParkingLot()
    {
         delete [] vehicles;
    };
};

#endif